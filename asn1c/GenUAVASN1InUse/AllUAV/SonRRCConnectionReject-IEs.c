/******  SonRRCConnectionReject-IEs Implement Start *****/
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
rejectCause_74_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static asn_dec_rval_t
rejectCause_74_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	rejectCause_74_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
rejectCause_74_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	rejectCause_74_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_rejectCause_constr_74 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static const asn_INTEGER_enum_map_t asn_MAP_rejectCause_value2enum_74[] = {
	{ 0 },
	{ 1 },
	{ 2 },
	{ 3 },
	{ 4 },
	{ 5 },
	{ 6 },
	{ 7 }
};
static const uint8_t asn_MAP_rejectCause_enum2value_74[] = {
	0,	/* congestion(0) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4,	/* spare4(4) */
	3,	/* spare5(3) */
	2,	/* spare6(2) */
	1	/* spare7(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_rejectCause_specs_74 = {
	asn_MAP_rejectCause_value2enum_74,	/* "tag" => N; sorted by tag */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	0
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rejectCause_74 = {
#ifdef _ASN1_DEBUG_MODE_
	"rejectCause",
#endif
	rejectCause_74_decode_uper,
	rejectCause_74_encode_uper,
	&asn_PER_type_rejectCause_constr_74,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rejectCause_specs_74	/* Additional specs */
};

static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_83 = {
	sizeof(struct SonRRCConnectionReject_IEs__nonCriticalExtension),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_83 = {
#ifdef _ASN1_DEBUG_MODE_
	"nonCriticalExtension",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_83	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SonRRCConnectionReject_IEs_71[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReject_IEs, accessingNodeAddress),
		&asn_DEF_NodeAddressIdentity,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"accessingNodeAddress"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReject_IEs, accessedNodeAddress),
		&asn_DEF_NodeAddressIdentity,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"accessedNodeAddress"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReject_IEs, rejectCause),
		&asn_DEF_rejectCause_74,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"rejectCause"
#endif
	},
	{ ATF_POINTER, 1, offsetof(struct SonRRCConnectionReject_IEs, nonCriticalExtension),
		&asn_DEF_nonCriticalExtension_83,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nonCriticalExtension"
#endif
	},
};
static const uint8_t asn_MAP_SonRRCConnectionReject_IEs_oms_71[] = { 3 };
static asn_SEQUENCE_specifics_t asn_SPC_SonRRCConnectionReject_IEs_specs_71 = {
	sizeof(struct SonRRCConnectionReject_IEs),
	asn_MAP_SonRRCConnectionReject_IEs_oms_71,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionReject_IEs = {
#ifdef _ASN1_DEBUG_MODE_
	"SonRRCConnectionReject-IEs",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SonRRCConnectionReject_IEs_71,
	4,	/* Elements count */
	&asn_SPC_SonRRCConnectionReject_IEs_specs_71	/* Additional specs */
};

/******  SonRRCConnectionReject-IEs Implement End *****/

