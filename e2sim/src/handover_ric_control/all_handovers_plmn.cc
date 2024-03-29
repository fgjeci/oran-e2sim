/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "all_handovers.h"
#include "all_handovers_plmn.h"

asn_TYPE_member_t asn_MBR_AllHandoversListPlmn_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AllHandoversListPlmn, plmn_id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-id"
		},
	{ ATF_POINTER, 1, offsetof(struct AllHandoversListPlmn, allHandoversList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,
		&asn_DEF_AllHandoversList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allHandoversList"
		},
};
static const ber_tlv_tag_t asn_DEF_AllHandoversListPlmn_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AllHandoversListPlmn_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* allHandoversList */
};
// original
// asn_SET_OF_specifics_t asn_SPC_AllHandoversList_specs_1 = {
// 	sizeof(struct AllHandoversList),
// 	offsetof(struct AllHandoversList, _asn_ctx),
// 	0,	/* XER encoding is XMLDelimitedItemList */
// };
// end original
// modified
asn_SEQUENCE_specifics_t asn_SPC_AllHandoversListPlmn_specs_1 = {
	sizeof(struct AllHandoversListPlmn),
	offsetof(struct AllHandoversListPlmn, _asn_ctx),
	asn_MAP_AllHandoversListPlmn_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
// end modification
asn_TYPE_descriptor_t asn_DEF_AllHandoversListPlmn = {
	"AllHandoversListPlmn",
	"AllHandoversListPlmn",
	// &asn_OP_SEQUENCE_OF,
	&asn_OP_SEQUENCE,
	asn_DEF_AllHandoversListPlmn_tags_1,
	sizeof(asn_DEF_AllHandoversListPlmn_tags_1)
		/sizeof(asn_DEF_AllHandoversListPlmn_tags_1[0]), /* 1 */
	asn_DEF_AllHandoversListPlmn_tags_1,	/* Same as above */
	sizeof(asn_DEF_AllHandoversListPlmn_tags_1)
		/sizeof(asn_DEF_AllHandoversListPlmn_tags_1[0]), /* 1 */
	// { 0, 0, SEQUENCE_OF_constraint },
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AllHandoversListPlmn_1,
	2,	/* 2 elements */
	&asn_SPC_AllHandoversListPlmn_specs_1	/* Additional specs */
};

