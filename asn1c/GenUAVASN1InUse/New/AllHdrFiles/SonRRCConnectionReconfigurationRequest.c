/******  SonRRCConnectionReconfigurationRequest Implement Start *****/
static asn_per_constraints_t asn_PER_type_criticalExtensions_constr_94 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_SEQUENCE_specifics_t asn_SPC_criticalExtensionsFuture_specs_96 = {
	sizeof(struct SonRRCConnectionReconfigurationRequest__criticalExtensions__criticalExtensionsFuture),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensionsFuture_96 = {
#ifdef _ASN1_DEBUG_MODE_
	"criticalExtensionsFuture",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_criticalExtensionsFuture_specs_96	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_criticalExtensions_94[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReconfigurationRequest__criticalExtensions, choice.sonrrcConnectionReconfigurationRequest),
		&asn_DEF_SonRRCConnectionReconfigurationRequest_IEs,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"sonrrcConnectionReconfigurationRequest"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReconfigurationRequest__criticalExtensions, choice.criticalExtensionsFuture),
		&asn_DEF_criticalExtensionsFuture_96,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"criticalExtensionsFuture"
#endif
	},
};
static asn_CHOICE_specifics_t asn_SPC_criticalExtensions_specs_94 = {
	sizeof(struct SonRRCConnectionReconfigurationRequest__criticalExtensions),
	offsetof(struct SonRRCConnectionReconfigurationRequest__criticalExtensions, present),
	sizeof(((struct SonRRCConnectionReconfigurationRequest__criticalExtensions *)0)->present),
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_criticalExtensions_94 = {
#ifdef _ASN1_DEBUG_MODE_
	"criticalExtensions",
#endif
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	&asn_PER_type_criticalExtensions_constr_94,
	asn_MBR_criticalExtensions_94,
	2,	/* Elements count */
	&asn_SPC_criticalExtensions_specs_94	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SonRRCConnectionReconfigurationRequest_93[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReconfigurationRequest, criticalExtensions),
		&asn_DEF_criticalExtensions_94,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"criticalExtensions"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_SonRRCConnectionReconfigurationRequest_specs_93 = {
	sizeof(struct SonRRCConnectionReconfigurationRequest),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionReconfigurationRequest = {
#ifdef _ASN1_DEBUG_MODE_
	"SonRRCConnectionReconfigurationRequest",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SonRRCConnectionReconfigurationRequest_93,
	1,	/* Elements count */
	&asn_SPC_SonRRCConnectionReconfigurationRequest_specs_93	/* Additional specs */
};

/******  SonRRCConnectionReconfigurationRequest Implement End *****/

