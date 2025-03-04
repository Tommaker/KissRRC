/******  SON-BCCH-TCH-MessageType Implement Start *****/
static asn_per_constraints_t asn_PER_type_c1_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_type_SON_BCCH_TCH_MessageType_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_c1_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SON_BCCH_TCH_MessageType__c1, choice.sonsystemInformationBlockType1),
		&asn_DEF_SonSystemInformationBlockType1,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"sonsystemInformationBlockType1"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_BCCH_TCH_MessageType__c1, choice.sonsystemInformationBlockType2),
		&asn_DEF_SonSystemInformationBlockType2,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"sonsystemInformationBlockType2"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_BCCH_TCH_MessageType__c1, choice.spare5),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare5"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_BCCH_TCH_MessageType__c1, choice.spare4),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare4"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_BCCH_TCH_MessageType__c1, choice.spare3),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare3"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_BCCH_TCH_MessageType__c1, choice.spare2),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare2"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_BCCH_TCH_MessageType__c1, choice.spare1),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare1"
#endif
	},
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_7 = {
	sizeof(struct SON_BCCH_TCH_MessageType__c1),
	offsetof(struct SON_BCCH_TCH_MessageType__c1, present),
	sizeof(((struct SON_BCCH_TCH_MessageType__c1 *)0)->present),
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_7 = {
#ifdef _ASN1_DEBUG_MODE_
	"c1",
#endif
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	&asn_PER_type_c1_constr_7,
	asn_MBR_c1_7,
	7,	/* Elements count */
	&asn_SPC_c1_specs_7	/* Additional specs */
};

static asn_SEQUENCE_specifics_t asn_SPC_messageClassExtension_specs_15 = {
	sizeof(struct SON_BCCH_TCH_MessageType__messageClassExtension),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtension_15 = {
#ifdef _ASN1_DEBUG_MODE_
	"messageClassExtension",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_messageClassExtension_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SON_BCCH_TCH_MessageType_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SON_BCCH_TCH_MessageType, choice.c1),
		&asn_DEF_c1_7,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"c1"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_BCCH_TCH_MessageType, choice.messageClassExtension),
		&asn_DEF_messageClassExtension_15,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"messageClassExtension"
#endif
	},
};
static asn_CHOICE_specifics_t asn_SPC_SON_BCCH_TCH_MessageType_specs_6 = {
	sizeof(struct SON_BCCH_TCH_MessageType),
	offsetof(struct SON_BCCH_TCH_MessageType, present),
	sizeof(((struct SON_BCCH_TCH_MessageType *)0)->present),
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SON_BCCH_TCH_MessageType = {
#ifdef _ASN1_DEBUG_MODE_
	"SON-BCCH-TCH-MessageType",
#endif
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	&asn_PER_type_SON_BCCH_TCH_MessageType_constr_6,
	asn_MBR_SON_BCCH_TCH_MessageType_6,
	2,	/* Elements count */
	&asn_SPC_SON_BCCH_TCH_MessageType_specs_6	/* Additional specs */
};

/******  SON-BCCH-TCH-MessageType Implement End *****/

