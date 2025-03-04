/******  DynamicOccupiedPerRadioFrame Implement Start *****/
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
conflictIndication_142_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static asn_dec_rval_t
conflictIndication_142_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	conflictIndication_142_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
conflictIndication_142_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	conflictIndication_142_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_conflictIndication_constr_142 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_nodeId_constr_141 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static const asn_INTEGER_enum_map_t asn_MAP_conflictIndication_value2enum_142[] = {
	{ 0 },
	{ 1 }
};
static const uint8_t asn_MAP_conflictIndication_enum2value_142[] = {
	0,	/* false(0) */
	1	/* true(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_conflictIndication_specs_142 = {
	asn_MAP_conflictIndication_value2enum_142,	/* "tag" => N; sorted by tag */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	0
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_conflictIndication_142 = {
#ifdef _ASN1_DEBUG_MODE_
	"conflictIndication",
#endif
	conflictIndication_142_decode_uper,
	conflictIndication_142_encode_uper,
	&asn_PER_type_conflictIndication_constr_142,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_conflictIndication_specs_142	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_DynamicOccupiedPerRadioFrame_140[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DynamicOccupiedPerRadioFrame, nodeId),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_nodeId_constr_141,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nodeId"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct DynamicOccupiedPerRadioFrame, conflictIndication),
		&asn_DEF_conflictIndication_142,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"conflictIndication"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_DynamicOccupiedPerRadioFrame_specs_140 = {
	sizeof(struct DynamicOccupiedPerRadioFrame),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DynamicOccupiedPerRadioFrame = {
#ifdef _ASN1_DEBUG_MODE_
	"DynamicOccupiedPerRadioFrame",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_DynamicOccupiedPerRadioFrame_140,
	2,	/* Elements count */
	&asn_SPC_DynamicOccupiedPerRadioFrame_specs_140	/* Additional specs */
};

/******  DynamicOccupiedPerRadioFrame Implement End *****/

