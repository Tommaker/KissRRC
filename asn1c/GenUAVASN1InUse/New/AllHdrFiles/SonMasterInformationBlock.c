/******  SonMasterInformationBlock Implement Start *****/
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
bandwidth_30_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static asn_dec_rval_t
bandwidth_30_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	bandwidth_30_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
bandwidth_30_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	bandwidth_30_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
transmissionMode_38_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static asn_dec_rval_t
transmissionMode_38_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	transmissionMode_38_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
transmissionMode_38_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	transmissionMode_38_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
antennaPortNum_46_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static asn_dec_rval_t
antennaPortNum_46_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	antennaPortNum_46_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
antennaPortNum_46_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	antennaPortNum_46_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_bandwidth_constr_30 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_type_transmissionMode_constr_38 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_type_antennaPortNum_constr_46 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_systemFrameNumber_constr_37 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */
};
static asn_per_constraints_t asn_PER_memb_version_constr_43 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */
};
static asn_per_constraints_t asn_PER_memb_currntNodeId_constr_44 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_totalNodeNum_constr_45 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_txPower_constr_50 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7, -40,  50 }	/* (-40..50) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_macI_constr_51 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */
};
static asn_per_constraints_t asn_PER_memb_sonId_constr_52 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static const asn_INTEGER_enum_map_t asn_MAP_bandwidth_value2enum_30[] = {
	{ 0 },
	{ 1 },
	{ 2 },
	{ 3 },
	{ 4 },
	{ 5 }
};
static const uint8_t asn_MAP_bandwidth_enum2value_30[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_bandwidth_specs_30 = {
	asn_MAP_bandwidth_value2enum_30,	/* "tag" => N; sorted by tag */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	0
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandwidth_30 = {
#ifdef _ASN1_DEBUG_MODE_
	"bandwidth",
#endif
	bandwidth_30_decode_uper,
	bandwidth_30_encode_uper,
	&asn_PER_type_bandwidth_constr_30,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_bandwidth_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_transmissionMode_value2enum_38[] = {
	{ 0 },
	{ 1 },
	{ 2 },
	{ 3 }
};
static const uint8_t asn_MAP_transmissionMode_enum2value_38[] = {
	0,	/* tm0(0) */
	1,	/* tm1(1) */
	2,	/* tm2(2) */
	3	/* tm3(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_transmissionMode_specs_38 = {
	asn_MAP_transmissionMode_value2enum_38,	/* "tag" => N; sorted by tag */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	0
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionMode_38 = {
#ifdef _ASN1_DEBUG_MODE_
	"transmissionMode",
#endif
	transmissionMode_38_decode_uper,
	transmissionMode_38_encode_uper,
	&asn_PER_type_transmissionMode_constr_38,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_transmissionMode_specs_38	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_antennaPortNum_value2enum_46[] = {
	{ 0 },
	{ 1 },
	{ 2 }
};
static const uint8_t asn_MAP_antennaPortNum_enum2value_46[] = {
	0,	/* ap1(0) */
	1,	/* ap2(1) */
	2	/* ap4(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_antennaPortNum_specs_46 = {
	asn_MAP_antennaPortNum_value2enum_46,	/* "tag" => N; sorted by tag */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	0
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_antennaPortNum_46 = {
#ifdef _ASN1_DEBUG_MODE_
	"antennaPortNum",
#endif
	antennaPortNum_46_decode_uper,
	antennaPortNum_46_encode_uper,
	&asn_PER_type_antennaPortNum_constr_46,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_antennaPortNum_specs_46	/* Additional specs */
};

static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_53 = {
	sizeof(struct SonMasterInformationBlock__nonCriticalExtension),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_53 = {
#ifdef _ASN1_DEBUG_MODE_
	"nonCriticalExtension",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_53	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SonMasterInformationBlock_29[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonMasterInformationBlock, bandwidth),
		&asn_DEF_bandwidth_30,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"bandwidth"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonMasterInformationBlock, systemFrameNumber),
		&asn_DEF_BIT_STRING,
		&asn_PER_memb_systemFrameNumber_constr_37,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"systemFrameNumber"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonMasterInformationBlock, transmissionMode),
		&asn_DEF_transmissionMode_38,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"transmissionMode"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonMasterInformationBlock, version),
		&asn_DEF_BIT_STRING,
		&asn_PER_memb_version_constr_43,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"version"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonMasterInformationBlock, currntNodeId),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_currntNodeId_constr_44,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"currntNodeId"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonMasterInformationBlock, totalNodeNum),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_totalNodeNum_constr_45,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"totalNodeNum"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonMasterInformationBlock, antennaPortNum),
		&asn_DEF_antennaPortNum_46,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"antennaPortNum"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonMasterInformationBlock, txPower),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_txPower_constr_50,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"txPower"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonMasterInformationBlock, macI),
		&asn_DEF_BIT_STRING,
		&asn_PER_memb_macI_constr_51,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"macI"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonMasterInformationBlock, sonId),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_sonId_constr_52,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"sonId"
#endif
	},
	{ ATF_POINTER, 1, offsetof(struct SonMasterInformationBlock, nonCriticalExtension),
		&asn_DEF_nonCriticalExtension_53,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nonCriticalExtension"
#endif
	},
};
static const uint8_t asn_MAP_SonMasterInformationBlock_oms_29[] = { 10 };
static asn_SEQUENCE_specifics_t asn_SPC_SonMasterInformationBlock_specs_29 = {
	sizeof(struct SonMasterInformationBlock),
	asn_MAP_SonMasterInformationBlock_oms_29,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SonMasterInformationBlock = {
#ifdef _ASN1_DEBUG_MODE_
	"SonMasterInformationBlock",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SonMasterInformationBlock_29,
	11,	/* Elements count */
	&asn_SPC_SonMasterInformationBlock_specs_29	/* Additional specs */
};

/******  SonMasterInformationBlock Implement End *****/

