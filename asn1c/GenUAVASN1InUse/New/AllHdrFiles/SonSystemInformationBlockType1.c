/******  SonSystemInformationBlockType1 Implement Start *****/
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
messageSegmentType_111_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static asn_dec_rval_t
messageSegmentType_111_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	messageSegmentType_111_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
messageSegmentType_111_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	messageSegmentType_111_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_messageSegmentType_constr_111 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_messageSequenceNumber_constr_110 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_messageSegmentNumber_constr_114 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static const asn_INTEGER_enum_map_t asn_MAP_messageSegmentType_value2enum_111[] = {
	{ 0 },
	{ 1 }
};
static const uint8_t asn_MAP_messageSegmentType_enum2value_111[] = {
	1,	/* lastSegment(1) */
	0	/* notLastSegment(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_messageSegmentType_specs_111 = {
	asn_MAP_messageSegmentType_value2enum_111,	/* "tag" => N; sorted by tag */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	0
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_messageSegmentType_111 = {
#ifdef _ASN1_DEBUG_MODE_
	"messageSegmentType",
#endif
	messageSegmentType_111_decode_uper,
	messageSegmentType_111_encode_uper,
	&asn_PER_type_messageSegmentType_constr_111,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_messageSegmentType_specs_111	/* Additional specs */
};

static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_116 = {
	sizeof(struct SonSystemInformationBlockType1__nonCriticalExtension),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_116 = {
#ifdef _ASN1_DEBUG_MODE_
	"nonCriticalExtension",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_116	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SonSystemInformationBlockType1_109[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType1, messageSequenceNumber),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_messageSequenceNumber_constr_110,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"messageSequenceNumber"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType1, messageSegmentType),
		&asn_DEF_messageSegmentType_111,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"messageSegmentType"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType1, messageSegmentNumber),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_messageSegmentNumber_constr_114,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"messageSegmentNumber"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType1, nodeRouteInformation),
		&asn_DEF_NodeRouteInformation,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nodeRouteInformation"
#endif
	},
	{ ATF_POINTER, 1, offsetof(struct SonSystemInformationBlockType1, nonCriticalExtension),
		&asn_DEF_nonCriticalExtension_116,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nonCriticalExtension"
#endif
	},
};
static const uint8_t asn_MAP_SonSystemInformationBlockType1_oms_109[] = { 4 };
static asn_SEQUENCE_specifics_t asn_SPC_SonSystemInformationBlockType1_specs_109 = {
	sizeof(struct SonSystemInformationBlockType1),
	asn_MAP_SonSystemInformationBlockType1_oms_109,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SonSystemInformationBlockType1 = {
#ifdef _ASN1_DEBUG_MODE_
	"SonSystemInformationBlockType1",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SonSystemInformationBlockType1_109,
	5,	/* Elements count */
	&asn_SPC_SonSystemInformationBlockType1_specs_109	/* Additional specs */
};

/******  SonSystemInformationBlockType1 Implement End *****/

