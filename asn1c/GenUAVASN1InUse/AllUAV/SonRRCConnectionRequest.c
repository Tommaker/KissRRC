/******  SonRRCConnectionRequest Implement Start *****/
static asn_per_constraints_t asn_PER_type_criticalExtensions_constr_85 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensionsFuture_specs_87 = {
	sizeof(struct SonRRCConnectionRequest__criticalExtensions__criticalExtensionsFuture),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensionsFuture_87 = {
#ifdef _ASN1_DEBUG_MODE_
	"criticalExtensionsFuture",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_criticalExtensionsFuture_specs_87	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_criticalExtensions_85[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionRequest__criticalExtensions, choice.sonrrcConnectionRequest),
		&asn_DEF_SonRRCConnectionRequest_IEs,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"sonrrcConnectionRequest"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionRequest__criticalExtensions, choice.criticalExtensionsFuture),
		&asn_DEF_criticalExtensionsFuture_87,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"criticalExtensionsFuture"
#endif
	},
};
static asn_CHOICE_specifics_t asn_SPC_criticalExtensions_specs_85 = {
	sizeof(struct SonRRCConnectionRequest__criticalExtensions),
	offsetof(struct SonRRCConnectionRequest__criticalExtensions, present),
	sizeof(((struct SonRRCConnectionRequest__criticalExtensions *)0)->present),
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_85 = {
#ifdef _ASN1_DEBUG_MODE_
	"criticalExtensions",
#endif
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	&asn_PER_type_criticalExtensions_constr_85,
	asn_MBR_criticalExtensions_85,
	2,	/* Elements count */
	&asn_SPC_criticalExtensions_specs_85	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SonRRCConnectionRequest_84[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionRequest, criticalExtensions),
		&asn_DEF_criticalExtensions_85,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"criticalExtensions"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_SonRRCConnectionRequest_specs_84 = {
	sizeof(struct SonRRCConnectionRequest),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionRequest = {
#ifdef _ASN1_DEBUG_MODE_
	"SonRRCConnectionRequest",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SonRRCConnectionRequest_84,
	1,	/* Elements count */
	&asn_SPC_SonRRCConnectionRequest_specs_84	/* Additional specs */
};

/******  SonRRCConnectionRequest Implement End *****/

