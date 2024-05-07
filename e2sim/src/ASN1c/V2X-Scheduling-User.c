/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-RC"
 * 	found in "e2sm-kpm-rc.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -pdu=auto -gen-PER -gen-OER -no-gen-example -D .`
 */

#include "V2X-Scheduling-User.h"

#include "V2X-Scheduling-Item.h"
static int
memb_V2X_Scheduling_ItemList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 0 && size <= 1023)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

// static asn_oer_constraints_t asn_OER_type_V2X_Scheduling_ItemList_constr_3 CC_NOTUSED = {
// 	{ 2, 0 },
// 	-1	/* (SIZE(1..1023)) */};
static asn_per_constraints_t asn_PER_type_V2X_Scheduling_ItemList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (SIZE(0..1023)) */,
	0, 0	/* No PER value map */
};
// static asn_oer_constraints_t asn_OER_memb_V2X_Scheduling_ItemList_constr_3 CC_NOTUSED = {
// 	{ 2, 0 },
// 	-1	/* (SIZE(1..1023)) */};
static asn_per_constraints_t asn_PER_memb_V2X_Scheduling_ItemList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (SIZE(1..1023)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_V2X_Scheduling_ItemList_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_V2X_Scheduling_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2X-Scheduling-Item"
		},
};
static const ber_tlv_tag_t asn_DEF_V2X_Scheduling_ItemList_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_V2X_Scheduling_ItemList_specs_3 = {
	sizeof(struct V2X_Scheduling_User__V2X_Scheduling_ItemList),
	offsetof(struct V2X_Scheduling_User__V2X_Scheduling_ItemList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_V2X_Scheduling_ItemList_3 = {
	"V2X-Scheduling-Item-List",
	"V2X-Scheduling-Item-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_V2X_Scheduling_ItemList_tags_3,
	sizeof(asn_DEF_V2X_Scheduling_ItemList_tags_3)
		/sizeof(asn_DEF_V2X_Scheduling_ItemList_tags_3[0]) - 1, /* 1 */
	asn_DEF_V2X_Scheduling_ItemList_tags_3,	/* Same as above */
	sizeof(asn_DEF_V2X_Scheduling_ItemList_tags_3)
		/sizeof(asn_DEF_V2X_Scheduling_ItemList_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_OF_constraint },
	asn_MBR_V2X_Scheduling_ItemList_3,
	1,	/* Single element */
	&asn_SPC_V2X_Scheduling_ItemList_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_V2X_Scheduling_User_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_Scheduling_User, v2xNodeId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_V2XId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"v2xNodeId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_Scheduling_User, V2X_Scheduling_ItemList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_V2X_Scheduling_ItemList_3,
		0,
		{ 0, 0,  0 },
		0, 0, /* No default value */
		"v2X-Scheduling-Item-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_Scheduling_User, cReselectionCounter),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cReselectionCounter"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_Scheduling_User, slResourceReselectionCounter),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"slResourceReselectionCounter"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_Scheduling_User, prevSlResoReselCounter),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prevSlResoReselCounter"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_Scheduling_User, nrSlHarqId),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrSlHarqId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_Scheduling_User, nSelected),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nSelected"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct V2X_Scheduling_User, tbTxCounter),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tbTxCounter"
		},
};
static const ber_tlv_tag_t asn_DEF_V2X_Scheduling_User_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_V2X_Scheduling_User_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* v2xNodeId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* V2X_Scheduling_ItemList */
	{ (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* V2X_Scheduling_ItemList */
	{ (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* V2X_Scheduling_ItemList */
	{ (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* V2X_Scheduling_ItemList */
	{ (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* V2X_Scheduling_ItemList */
	{ (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* V2X_Scheduling_ItemList */
	{ (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* V2X_Scheduling_ItemList */
};
asn_SEQUENCE_specifics_t asn_SPC_V2X_Scheduling_User_specs_1 = {
	sizeof(struct V2X_Scheduling_User),
	offsetof(struct V2X_Scheduling_User, _asn_ctx),
	asn_MAP_V2X_Scheduling_User_tag2el_1,
	8,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_V2X_Scheduling_User = {
	"V2X-Scheduling-User",
	"V2X-Scheduling-User",
	&asn_OP_SEQUENCE,
	asn_DEF_V2X_Scheduling_User_tags_1,
	sizeof(asn_DEF_V2X_Scheduling_User_tags_1)
		/sizeof(asn_DEF_V2X_Scheduling_User_tags_1[0]), /* 1 */
	asn_DEF_V2X_Scheduling_User_tags_1,	/* Same as above */
	sizeof(asn_DEF_V2X_Scheduling_User_tags_1)
		/sizeof(asn_DEF_V2X_Scheduling_User_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_V2X_Scheduling_User_1,
	8,	/* Elements count */
	&asn_SPC_V2X_Scheduling_User_specs_1	/* Additional specs */
};

