/******  SonRRCConnectionConfirm Implement Start *****/
static asn_per_constraints_t asn_PER_type_c1_constr_56 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_type_criticalExtensions_constr_55 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_c1_56[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionConfirm__criticalExtensions__c1, choice.rrcConnectionConfirm),
		&asn_DEF_SonRRCConnectionConfirm_IEs,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"rrcConnectionConfirm"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionConfirm__criticalExtensions__c1, choice.spare),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare"
#endif
	},
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_56 = {
	sizeof(struct SonRRCConnectionConfirm__criticalExtensions__c1),
	offsetof(struct SonRRCConnectionConfirm__criticalExtensions__c1, present),
	sizeof(((struct SonRRCConnectionConfirm__criticalExtensions__c1 *)0)->present),
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_56 = {
#ifdef _ASN1_DEBUG_MODE_
	"c1",
#endif
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	&asn_PER_type_c1_constr_56,
	asn_MBR_c1_56,
	2,	/* Elements count */
	&asn_SPC_c1_specs_56	/* Additional specs */
};

static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensionsFuture_specs_59 = {
	sizeof(struct SonRRCConnectionConfirm__criticalExtensions__criticalExtensionsFuture),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensionsFuture_59 = {
#ifdef _ASN1_DEBUG_MODE_
	"criticalExtensionsFuture",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_criticalExtensionsFuture_specs_59	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_criticalExtensions_55[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionConfirm__criticalExtensions, choice.c1),
		&asn_DEF_c1_56,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"c1"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionConfirm__criticalExtensions, choice.criticalExtensionsFuture),
		&asn_DEF_criticalExtensionsFuture_59,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"criticalExtensionsFuture"
#endif
	},
};
static asn_CHOICE_specifics_t asn_SPC_criticalExtensions_specs_55 = {
	sizeof(struct SonRRCConnectionConfirm__criticalExtensions),
	offsetof(struct SonRRCConnectionConfirm__criticalExtensions, present),
	sizeof(((struct SonRRCConnectionConfirm__criticalExtensions *)0)->present),
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_55 = {
#ifdef _ASN1_DEBUG_MODE_
	"criticalExtensions",
#endif
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	&asn_PER_type_criticalExtensions_constr_55,
	asn_MBR_criticalExtensions_55,
	2,	/* Elements count */
	&asn_SPC_criticalExtensions_specs_55	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SonRRCConnectionConfirm_54[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionConfirm, criticalExtensions),
		&asn_DEF_criticalExtensions_55,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"criticalExtensions"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_SonRRCConnectionConfirm_specs_54 = {
	sizeof(struct SonRRCConnectionConfirm),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionConfirm = {
#ifdef _ASN1_DEBUG_MODE_
	"SonRRCConnectionConfirm",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SonRRCConnectionConfirm_54,
	1,	/* Elements count */
	&asn_SPC_SonRRCConnectionConfirm_specs_54	/* Additional specs */
};

/******  SonRRCConnectionConfirm Implement End *****/

