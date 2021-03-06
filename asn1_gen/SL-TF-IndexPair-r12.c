/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../asn1_defs/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SL-TF-IndexPair-r12.h"

static int
memb_discSF_Index_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 1LL && value <= 200LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_discPRB_Index_r12_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long long *)sptr;
	
	if((value >= 1LL && value <= 50LL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_discSF_Index_r12_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  1,  200 }	/* (1..200) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_discPRB_Index_r12_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  50 }	/* (1..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SL_TF_IndexPair_r12_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SL_TF_IndexPair_r12, discSF_Index_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_discSF_Index_r12_constraint_1,
		&asn_PER_memb_discSF_Index_r12_constr_2,
		0,
		"discSF-Index-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_TF_IndexPair_r12, discPRB_Index_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_discPRB_Index_r12_constraint_1,
		&asn_PER_memb_discPRB_Index_r12_constr_3,
		0,
		"discPRB-Index-r12"
		},
};
static const int asn_MAP_SL_TF_IndexPair_r12_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_SL_TF_IndexPair_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SL_TF_IndexPair_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* discSF-Index-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* discPRB-Index-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SL_TF_IndexPair_r12_specs_1 = {
	sizeof(struct SL_TF_IndexPair_r12),
	offsetof(struct SL_TF_IndexPair_r12, _asn_ctx),
	asn_MAP_SL_TF_IndexPair_r12_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SL_TF_IndexPair_r12_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SL_TF_IndexPair_r12 = {
	"SL-TF-IndexPair-r12",
	"SL-TF-IndexPair-r12",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SL_TF_IndexPair_r12_tags_1,
	sizeof(asn_DEF_SL_TF_IndexPair_r12_tags_1)
		/sizeof(asn_DEF_SL_TF_IndexPair_r12_tags_1[0]), /* 1 */
	asn_DEF_SL_TF_IndexPair_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_TF_IndexPair_r12_tags_1)
		/sizeof(asn_DEF_SL_TF_IndexPair_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SL_TF_IndexPair_r12_1,
	2,	/* Elements count */
	&asn_SPC_SL_TF_IndexPair_r12_specs_1	/* Additional specs */
};

