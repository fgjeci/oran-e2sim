/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "E2AP-PDU-Contents-v01.00.asn"
 * 	`asn1c -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "V2X-Scheduling-All-Users.h"
// #include "V2X-Scheduling-User.h"
#include "V2X-Scheduling-Source.h"

// asn_per_constraints_t asn_PER_type_V2X_Scheduling_All_Users_constr_1 CC_NOTUSED = {
// 	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
// 	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (SIZE(0..16)) */,
// 	0, 0	/* No PER value map */
// };
// asn_TYPE_member_t asn_MBR_V2X_Scheduling_All_Users_1[] = {
// 	{ ATF_POINTER, 0, 0,
// 		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
// 		0,
// 		&asn_DEF_V2X_Scheduling_User,
// 		0,
// 		{ 0, 0, 0 },
// 		0, 0, /* No default value */
// 		"v2X-Scheduling-User"
// 		},
// };
asn_TYPE_member_t asn_MBR_V2X_Scheduling_All_Users_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_V2X_Scheduling_Source,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2X-Scheduling-Source"
		},
};
static const ber_tlv_tag_t asn_DEF_V2X_Scheduling_All_Users_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_V2X_Scheduling_All_Users_specs_1 = {
	sizeof(struct V2X_Scheduling_All_Users),
	offsetof(struct V2X_Scheduling_All_Users, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_V2X_Scheduling_All_Users = {
	"V2X-Scheduling-All-Users",
	"V2X-Scheduling-All-Users",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_V2X_Scheduling_All_Users_tags_1,
	sizeof(asn_DEF_V2X_Scheduling_All_Users_tags_1)
		/sizeof(asn_DEF_V2X_Scheduling_All_Users_tags_1[0]), /* 1 */
	asn_DEF_V2X_Scheduling_All_Users_tags_1,	/* Same as above */
	sizeof(asn_DEF_V2X_Scheduling_All_Users_tags_1)
		/sizeof(asn_DEF_V2X_Scheduling_All_Users_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_V2X_Scheduling_All_Users_1,
	1,	/* Single element */
	&asn_SPC_V2X_Scheduling_All_Users_specs_1	/* Additional specs */
};

