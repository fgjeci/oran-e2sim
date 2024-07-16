/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#ifndef	_V2X_Scheduling_User_H_
#define	_V2X_Scheduling_User_H_


#include <asn_application.h>

/* Including external dependencies */
#include "V2XId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct V2X_Scheduling_Item;

/* V2X_Scheduling_User */
typedef struct V2X_Scheduling_User {
	V2XId_t	 v2xNodeId;
	long cReselectionCounter;
	long slResourceReselectionCounter;
	long prevSlResoReselCounter;
	long nrSlHarqId;
	long nSelected;
	long tbTxCounter;
	struct V2X_Scheduling_User__V2X_Scheduling_ItemList {
		A_SEQUENCE_OF(struct V2X_Scheduling_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} V2X_Scheduling_ItemList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} V2X_Scheduling_User_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_V2X_Scheduling_User;
extern asn_SEQUENCE_specifics_t asn_SPC_V2X_Scheduling_User_specs_1;
extern asn_TYPE_member_t asn_MBR_V2X_Scheduling_User_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _V2X_Scheduling_User_H_ */
#include <asn_internal.h>