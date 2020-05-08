/*****************************************************************************
#                                                                            *
# Copyright 2019 AT&T Intellectual Property                                  *
# Copyright 2019 Nokia                                                       *
#                                                                            *
# Licensed under the Apache License, Version 2.0 (the "License");            *
# you may not use this file except in compliance with the License.           *
# You may obtain a copy of the License at                                    *
#                                                                            *
#      http://www.apache.org/licenses/LICENSE-2.0                            *
#                                                                            *
# Unless required by applicable law or agreed to in writing, software        *
# distributed under the License is distributed on an "AS IS" BASIS,          *
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
# See the License for the specific language governing permissions and        *
# limitations under the License.                                             *
#                                                                            *
******************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <string>
#include <iostream>


#include "e2sim_defs.h"
#include "e2sim_sctp.hpp"
#include "e2ap_message_handler.hpp"
#include "encode_e2apv1.hpp"

using namespace std;

void encode_and_send_sctp_data(E2AP_PDU_t* pdu, int client_fd)
{
  uint8_t       *buf;
  sctp_buffer_t data;

  data.len = e2ap_asn1c_encode_pdu(pdu, &buf);
  memcpy(data.buffer, buf, min(data.len, MAX_SCTP_BUFFER));

  sctp_send_data(client_fd, data);
}

void wait_for_sctp_data(int client_fd)
{
  sctp_buffer_t recv_buf;
  if(sctp_receive_data(client_fd, recv_buf) > 0)
  {
    LOG_I("[SCTP] Received new data of size %d", recv_buf.len);
    e2ap_handle_sctp_data(client_fd, recv_buf, false);
  }
}


int main(int argc, char* argv[]){
  LOG_I("Start E2 Agent (E2 Simulator)");

  bool xmlenc = true;

  options_t ops = read_input_options(argc, argv);

  //E2 Agent will automatically restart upon sctp disconnection
  //  int server_fd = sctp_start_server(ops.server_ip, ops.server_port);
  int client_fd = sctp_start_client(ops.server_ip, ops.server_port);
  E2AP_PDU_t* pdu_setup = (E2AP_PDU_t*)calloc(1,sizeof(E2AP_PDU));

  //  generate_e2apv1_subscription_request(pdu_setup);
  generate_e2apv1_setup_request(pdu_setup);

  xer_fprint(stderr, &asn_DEF_E2AP_PDU, pdu_setup);

  auto buffer_size = MAX_SCTP_BUFFER;
  unsigned char buffer[MAX_SCTP_BUFFER];
  
  sctp_buffer_t data;

  //  auto er = asn_encode_to_buffer(nullptr, ATS_ALIGNED_BASIC_PER, &asn_DEF_E2AP_PDU, pdu_setup, buffer, buffer_size);
  auto er = asn_encode_to_buffer(nullptr, ATS_BASIC_XER, &asn_DEF_E2AP_PDU, pdu_setup, buffer, buffer_size);
  data.len = er.encoded;

  fprintf(stderr, "er encded is %d\n", er.encoded);

  memcpy(data.buffer, buffer, er.encoded);

  if(sctp_send_data(client_fd, data) > 0) {
    LOG_I("[SCTP] Sent E2-SETUP-REQUEST");
  } else {
    LOG_E("[SCTP] Unable to send E2-SETUP-REQUEST to peer");
  }

  sctp_buffer_t recv_buf;

  LOG_I("[SCTP] Waiting for SCTP data");

  while(1) //constantly looking for data on SCTP interface
  {
    if(sctp_receive_data(client_fd, recv_buf) <= 0)
      break;

    LOG_I("[SCTP] Received new data of size %d", recv_buf.len);

    e2ap_handle_sctp_data(client_fd, recv_buf, xmlenc);
    if (xmlenc) xmlenc = false;
  }

  return 0;
}