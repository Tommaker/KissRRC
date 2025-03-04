/******  OccupiedRadioFrameList Implement Start *****/
static asn_per_constraints_t asn_PER_type_OccupiedRadioFrameList_constr_129 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */
};
static asn_TYPE_member_t asn_MBR_OccupiedRadioFrameList_129[] = {
	{ ATF_POINTER, 0, 0,
		&asn_DEF_OccupiedPerRadioFrame,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		""
#endif
	},
};
static asn_SET_OF_specifics_t asn_SPC_OccupiedRadioFrameList_specs_129 = {
	sizeof(struct OccupiedRadioFrameList),
};
asn_TYPE_descriptor_t asn_DEF_OccupiedRadioFrameList = {
#ifdef _ASN1_DEBUG_MODE_
	"OccupiedRadioFrameList",
#endif
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	&asn_PER_type_OccupiedRadioFrameList_constr_129,
	asn_MBR_OccupiedRadioFrameList_129,
	1,	/* Single element */
	&asn_SPC_OccupiedRadioFrameList_specs_129	/* Additional specs */
};

/******  OccupiedRadioFrameList Implement End *****/

