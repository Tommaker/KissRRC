/******  Parameter Implement Start *****/
static asn_per_constraints_t asn_PER_memb_dataArrivalRate_constr_139 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_Parameter_138[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Parameter, dataArrivalRate),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_dataArrivalRate_constr_139,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"dataArrivalRate"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_Parameter_specs_138 = {
	sizeof(struct Parameter),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Parameter = {
#ifdef _ASN1_DEBUG_MODE_
	"Parameter",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_Parameter_138,
	1,	/* Elements count */
	&asn_SPC_Parameter_specs_138	/* Additional specs */
};

/******  Parameter Implement End *****/

