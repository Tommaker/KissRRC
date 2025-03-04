/******  SonSystemInformationBlockType2 Implement Start *****/
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
currentNodeLeaveIndication_121_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static asn_dec_rval_t
currentNodeLeaveIndication_121_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	currentNodeLeaveIndication_121_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
currentNodeLeaveIndication_121_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	currentNodeLeaveIndication_121_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_currentNodeLeaveIndication_constr_121 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_ssfnCycle_constr_118 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_currentNodeId_constr_119 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_messageSequenceNumber_constr_120 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static const asn_INTEGER_enum_map_t asn_MAP_currentNodeLeaveIndication_value2enum_121[] = {
	{ 0 },
	{ 1 }
};
static const uint8_t asn_MAP_currentNodeLeaveIndication_enum2value_121[] = {
	0,	/* false(0) */
	1	/* true(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_currentNodeLeaveIndication_specs_121 = {
	asn_MAP_currentNodeLeaveIndication_value2enum_121,	/* "tag" => N; sorted by tag */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	0
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_currentNodeLeaveIndication_121 = {
#ifdef _ASN1_DEBUG_MODE_
	"currentNodeLeaveIndication",
#endif
	currentNodeLeaveIndication_121_decode_uper,
	currentNodeLeaveIndication_121_encode_uper,
	&asn_PER_type_currentNodeLeaveIndication_constr_121,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_currentNodeLeaveIndication_specs_121	/* Additional specs */
};

static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_128 = {
	sizeof(struct SonSystemInformationBlockType2__nonCriticalExtension),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_128 = {
#ifdef _ASN1_DEBUG_MODE_
	"nonCriticalExtension",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_128	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SonSystemInformationBlockType2_117[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType2, ssfnCycle),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_ssfnCycle_constr_118,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"ssfnCycle"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType2, currentNodeId),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_currentNodeId_constr_119,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"currentNodeId"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType2, messageSequenceNumber),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_messageSequenceNumber_constr_120,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"messageSequenceNumber"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType2, currentNodeLeaveIndication),
		&asn_DEF_currentNodeLeaveIndication_121,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"currentNodeLeaveIndication"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType2, subnetInfo),
		&asn_DEF_SubnetInfo,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"subnetInfo"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType2, currentNodeAddress),
		&asn_DEF_NodeAddressIdentity,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"currentNodeAddress"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonSystemInformationBlockType2, mainNodeAddress),
		&asn_DEF_NodeAddressIdentity,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"mainNodeAddress"
#endif
	},
	{ ATF_POINTER, 1, offsetof(struct SonSystemInformationBlockType2, occupiedRadioFrameList),
		&asn_DEF_OccupiedRadioFrameList,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"occupiedRadioFrameList"
#endif
	},
	{ ATF_POINTER, 1, offsetof(struct SonSystemInformationBlockType2, nonCriticalExtension),
		&asn_DEF_nonCriticalExtension_128,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nonCriticalExtension"
#endif
	},
};
static const uint8_t asn_MAP_SonSystemInformationBlockType2_oms_117[] = { 7, 8 };
static asn_SEQUENCE_specifics_t asn_SPC_SonSystemInformationBlockType2_specs_117 = {
	sizeof(struct SonSystemInformationBlockType2),
	asn_MAP_SonSystemInformationBlockType2_oms_117,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SonSystemInformationBlockType2 = {
#ifdef _ASN1_DEBUG_MODE_
	"SonSystemInformationBlockType2",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SonSystemInformationBlockType2_117,
	9,	/* Elements count */
	&asn_SPC_SonSystemInformationBlockType2_specs_117	/* Additional specs */
};

/******  SonSystemInformationBlockType2 Implement End *****/

