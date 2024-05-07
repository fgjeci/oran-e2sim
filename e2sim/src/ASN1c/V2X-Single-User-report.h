/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_V2X_Single_User_Report_H_
#define	_V2X_Single_User_Report_H_


#include <asn_application.h>
#include <constr_SEQUENCE.h>
#include <NativeReal.h>

#include "V2XAllBufferPacketDelays.h"
// #include "V2XSciMessageItem-List.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
// struct V2XAllBufferPacketDelays;
struct V2XSciMessageItemList;

/* L3-RRC-Measurements */
typedef struct V2X_Single_User_Report {
	
	double xPosition;
	double yPosition;
	// struct V2XAllBufferPacketDelays	*userBufferDelayList;	/* OPTIONAL */
	V2XAllBufferPacketDelays_t	userBufferDelayList;	/* OPTIONAL */
	// V2XSciMessageItemList_t	userReceivedSciMessages;	/* OPTIONAL */
	struct V2XSciMessageItemList	*userReceivedSciMessages;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} V2X_Single_User_Report_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_V2X_Single_User_Report;
extern asn_SEQUENCE_specifics_t asn_SPC_V2X_Single_User_Report_specs_1;
// extern asn_TYPE_member_t asn_MBR_V2X_Single_User_Report_1[3];
extern asn_TYPE_member_t asn_MBR_V2X_Single_User_Report_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _V2X_Single_User_Report_H_ */
#include <asn_internal.h>
