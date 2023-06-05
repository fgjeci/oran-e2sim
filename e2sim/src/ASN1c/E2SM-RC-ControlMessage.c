/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "E2SM-RC-ControlMessage.h"

#include "E2SM-RC-ControlMessage-Format1.h"
// modified
#include "all_handovers_plmn.h"
// end modification

static asn_oer_constraints_t asn_OER_type_E2SM_RC_ControlMessage_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_E2SM_RC_ControlMessage_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_E2SM_RC_ControlMessage_1[] = {
	{ ATF_POINTER, 0, offsetof(struct E2SM_RC_ControlMessage, choice.controlMessage_Format1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_RC_ControlMessage_Format1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"controlMessage-Format1"
		},
	// modified
	{ ATF_POINTER, 0, offsetof(struct E2SM_RC_ControlMessage, choice.handoverMessage_Format),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AllHandoversListPlmn,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverMessage-Format"
		},
	// end modification
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_RC_ControlMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* controlMessage-Format1 */
	// modified
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellObjID */
	// end modification
};
static asn_CHOICE_specifics_t asn_SPC_E2SM_RC_ControlMessage_specs_1 = {
	sizeof(struct E2SM_RC_ControlMessage),
	offsetof(struct E2SM_RC_ControlMessage, _asn_ctx),
	offsetof(struct E2SM_RC_ControlMessage, present),
	sizeof(((struct E2SM_RC_ControlMessage *)0)->present),
	asn_MAP_E2SM_RC_ControlMessage_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_RC_ControlMessage = {
	"E2SM-RC-ControlMessage",
	"E2SM-RC-ControlMessage",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_E2SM_RC_ControlMessage_constr_1, &asn_PER_type_E2SM_RC_ControlMessage_constr_1, CHOICE_constraint },
	asn_MBR_E2SM_RC_ControlMessage_1,
	2,	/* Elements count */
	&asn_SPC_E2SM_RC_ControlMessage_specs_1	/* Additional specs */
};

