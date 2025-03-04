/******  SonRRCConnectionReject Implement Start *****/
static asn_per_constraints_t asn_PER_type_c1_constr_67 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_type_criticalExtensions_constr_66 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_c1_67[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReject__criticalExtensions__c1, choice.rrcConnectionReject),
		&asn_DEF_SonRRCConnectionReject_IEs,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"rrcConnectionReject"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReject__criticalExtensions__c1, choice.spare),
		&asn_DEF_NULL,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"spare"
#endif
	},
};
static asn_CHOICE_specifics_t asn_SPC_c1_specs_67 = {
	sizeof(struct SonRRCConnectionReject__criticalExtensions__c1),
	offsetof(struct SonRRCConnectionReject__criticalExtensions__c1, present),
	sizeof(((struct SonRRCConnectionReject__criticalExtensions__c1 *)0)->present),
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_c1_67 = {
#ifdef _ASN1_DEBUG_MODE_
	"c1",
#endif
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	&asn_PER_type_c1_constr_67,
	asn_MBR_c1_67,
	2,	/* Elements count */
	&asn_SPC_c1_specs_67	/* Additional specs */
};

static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensionsFuture_specs_70 = {
	sizeof(struct SonRRCConnectionReject__criticalExtensions__criticalExtensionsFuture),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensionsFuture_70 = {
#ifdef _ASN1_DEBUG_MODE_
	"criticalExtensionsFuture",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_criticalExtensionsFuture_specs_70	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_criticalExtensions_66[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReject__criticalExtensions, choice.c1),
		&asn_DEF_c1_67,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"c1"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReject__criticalExtensions, choice.criticalExtensionsFuture),
		&asn_DEF_criticalExtensionsFuture_70,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"criticalExtensionsFuture"
#endif
	},
};
static asn_CHOICE_specifics_t asn_SPC_criticalExtensions_specs_66 = {
	sizeof(struct SonRRCConnectionReject__criticalExtensions),
	offsetof(struct SonRRCConnectionReject__criticalExtensions, present),
	sizeof(((struct SonRRCConnectionReject__criticalExtensions *)0)->present),
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_66 = {
#ifdef _ASN1_DEBUG_MODE_
	"criticalExtensions",
#endif
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	&asn_PER_type_criticalExtensions_constr_66,
	asn_MBR_criticalExtensions_66,
	2,	/* Elements count */
	&asn_SPC_criticalExtensions_specs_66	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SonRRCConnectionReject_65[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReject, criticalExtensions),
		&asn_DEF_criticalExtensions_66,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"criticalExtensions"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_SonRRCConnectionReject_specs_65 = {
	sizeof(struct SonRRCConnectionReject),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionReject = {
#ifdef _ASN1_DEBUG_MODE_
	"SonRRCConnectionReject",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SonRRCConnectionReject_65,
	1,	/* Elements count */
	&asn_SPC_SonRRCConnectionReject_specs_65	/* Additional specs */
};

/******  SonRRCConnectionReject Implement End *****/

