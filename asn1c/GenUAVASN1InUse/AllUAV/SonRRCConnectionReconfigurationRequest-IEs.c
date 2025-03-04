/******  SonRRCConnectionReconfigurationRequest-IEs Implement Start *****/
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
bandwidth_99_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static asn_dec_rval_t
bandwidth_99_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	bandwidth_99_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
bandwidth_99_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	bandwidth_99_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_bandwidth_constr_99 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_freqInfo_constr_98 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_physCellId_constr_106 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static const asn_INTEGER_enum_map_t asn_MAP_bandwidth_value2enum_99[] = {
	{ 0 },
	{ 1 },
	{ 2 },
	{ 3 },
	{ 4 },
	{ 5 }
};
static const uint8_t asn_MAP_bandwidth_enum2value_99[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_bandwidth_specs_99 = {
	asn_MAP_bandwidth_value2enum_99,	/* "tag" => N; sorted by tag */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	0
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandwidth_99 = {
#ifdef _ASN1_DEBUG_MODE_
	"bandwidth",
#endif
	bandwidth_99_decode_uper,
	bandwidth_99_encode_uper,
	&asn_PER_type_bandwidth_constr_99,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_bandwidth_specs_99	/* Additional specs */
};

static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_108 = {
	sizeof(struct SonRRCConnectionReconfigurationRequest_IEs__nonCriticalExtension),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_108 = {
#ifdef _ASN1_DEBUG_MODE_
	"nonCriticalExtension",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_108	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SonRRCConnectionReconfigurationRequest_IEs_97[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReconfigurationRequest_IEs, freqInfo),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_freqInfo_constr_98,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"freqInfo"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReconfigurationRequest_IEs, bandwidth),
		&asn_DEF_bandwidth_99,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"bandwidth"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReconfigurationRequest_IEs, physCellId),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_physCellId_constr_106,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"physCellId"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionReconfigurationRequest_IEs, activeTime),
		&asn_DEF_ActiveTime,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"activeTime"
#endif
	},
	{ ATF_POINTER, 1, offsetof(struct SonRRCConnectionReconfigurationRequest_IEs, nonCriticalExtension),
		&asn_DEF_nonCriticalExtension_108,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nonCriticalExtension"
#endif
	},
};
static const uint8_t asn_MAP_SonRRCConnectionReconfigurationRequest_IEs_oms_97[] = { 4 };
static asn_SEQUENCE_specifics_t asn_SPC_SonRRCConnectionReconfigurationRequest_IEs_specs_97 = {
	sizeof(struct SonRRCConnectionReconfigurationRequest_IEs),
	asn_MAP_SonRRCConnectionReconfigurationRequest_IEs_oms_97,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionReconfigurationRequest_IEs = {
#ifdef _ASN1_DEBUG_MODE_
	"SonRRCConnectionReconfigurationRequest-IEs",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SonRRCConnectionReconfigurationRequest_IEs_97,
	5,	/* Elements count */
	&asn_SPC_SonRRCConnectionReconfigurationRequest_IEs_specs_97	/* Additional specs */
};

/******  SonRRCConnectionReconfigurationRequest-IEs Implement End *****/

