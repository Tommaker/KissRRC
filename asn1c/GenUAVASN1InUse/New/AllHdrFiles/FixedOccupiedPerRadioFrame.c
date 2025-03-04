/******  FixedOccupiedPerRadioFrame Implement Start *****/
static asn_per_constraints_t asn_PER_memb_metric_constr_135 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_nodeSN_constr_137 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */
};
static asn_TYPE_member_t asn_MBR_FixedOccupiedPerRadioFrame_134[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FixedOccupiedPerRadioFrame, metric),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_metric_constr_135,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"metric"
#endif
	},
	{ ATF_POINTER, 1, offsetof(struct FixedOccupiedPerRadioFrame, parameter),
		&asn_DEF_Parameter,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"parameter"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct FixedOccupiedPerRadioFrame, nodeSN),
		&asn_DEF_OCTET_STRING,
		&asn_PER_memb_nodeSN_constr_137,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nodeSN"
#endif
	},
};
static const uint8_t asn_MAP_FixedOccupiedPerRadioFrame_oms_134[] = { 1 };
static asn_SEQUENCE_specifics_t asn_SPC_FixedOccupiedPerRadioFrame_specs_134 = {
	sizeof(struct FixedOccupiedPerRadioFrame),
	asn_MAP_FixedOccupiedPerRadioFrame_oms_134,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FixedOccupiedPerRadioFrame = {
#ifdef _ASN1_DEBUG_MODE_
	"FixedOccupiedPerRadioFrame",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_FixedOccupiedPerRadioFrame_134,
	3,	/* Elements count */
	&asn_SPC_FixedOccupiedPerRadioFrame_specs_134	/* Additional specs */
};

/******  FixedOccupiedPerRadioFrame Implement End *****/

