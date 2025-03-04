/******  SON-DCCH-TCH-MessageType Implement Start *****/
static asn_per_constraints_t asn_PER_type_c1_constr_19 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_type_SON_DCCH_TCH_MessageType_constr_18 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_c1_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_MessageType__c1, choice.sonRrcConnectionRequest),
		&asn_DEF_SonRRCConnectionRequest,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"sonRrcConnectionRequest"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_MessageType__c1, choice.sonRrcConnectionReject),
		&asn_DEF_SonRRCConnectionReject,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"sonRrcConnectionReject"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_MessageType__c1, choice.sonRrcConnectionConfirm),
		&asn_DEF_SonRRCConnectionConfirm,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"sonRrcConnectionConfirm"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_MessageType__c1, choice.spare5),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare5"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_MessageType__c1, choice.spare4),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare4"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_MessageType__c1, choice.spare3),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare3"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_MessageType__c1, choice.spare2),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare2"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_MessageType__c1, choice.spare1),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare1"
#endif
	},
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_19 = {
	sizeof(struct SON_DCCH_TCH_MessageType__c1),
	offsetof(struct SON_DCCH_TCH_MessageType__c1, present),
	sizeof(((struct SON_DCCH_TCH_MessageType__c1 *)0)->present),
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_19 = {
#ifdef _ASN1_DEBUG_MODE_
	"c1",
#endif
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	&asn_PER_type_c1_constr_19,
	asn_MBR_c1_19,
	8,	/* Elements count */
	&asn_SPC_c1_specs_19	/* Additional specs */
};

static asn_SEQUENCE_specifics_t asn_SPC_messageClassExtension_specs_28 = {
	sizeof(struct SON_DCCH_TCH_MessageType__messageClassExtension),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageClassExtension_28 = {
#ifdef _ASN1_DEBUG_MODE_
	"messageClassExtension",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_messageClassExtension_specs_28	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SON_DCCH_TCH_MessageType_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_MessageType, choice.c1),
		&asn_DEF_c1_19,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"c1"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_MessageType, choice.messageClassExtension),
		&asn_DEF_messageClassExtension_28,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"messageClassExtension"
#endif
	},
};
static asn_CHOICE_specifics_t asn_SPC_SON_DCCH_TCH_MessageType_specs_18 = {
	sizeof(struct SON_DCCH_TCH_MessageType),
	offsetof(struct SON_DCCH_TCH_MessageType, present),
	sizeof(((struct SON_DCCH_TCH_MessageType *)0)->present),
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SON_DCCH_TCH_MessageType = {
#ifdef _ASN1_DEBUG_MODE_
	"SON-DCCH-TCH-MessageType",
#endif
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	&asn_PER_type_SON_DCCH_TCH_MessageType_constr_18,
	asn_MBR_SON_DCCH_TCH_MessageType_18,
	2,	/* Elements count */
	&asn_SPC_SON_DCCH_TCH_MessageType_specs_18	/* Additional specs */
};

/******  SON-DCCH-TCH-MessageType Implement End *****/

