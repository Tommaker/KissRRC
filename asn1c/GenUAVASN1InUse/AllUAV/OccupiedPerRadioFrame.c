/******  OccupiedPerRadioFrame Implement Start *****/
static asn_TYPE_member_t asn_MBR_OccupiedPerRadioFrame_131[] = {
	{ ATF_POINTER, 1, offsetof(struct OccupiedPerRadioFrame, fixedOccupiedPerRadioFrame),
		&asn_DEF_FixedOccupiedPerRadioFrame,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"fixedOccupiedPerRadioFrame"
#endif
	},
	{ ATF_POINTER, 1, offsetof(struct OccupiedPerRadioFrame, dynamicOccupiedPerRadioFrame),
		&asn_DEF_DynamicOccupiedPerRadioFrame,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"dynamicOccupiedPerRadioFrame"
#endif
	},
};
static const uint8_t asn_MAP_OccupiedPerRadioFrame_oms_131[] = { 0, 1 };
static asn_SEQUENCE_specifics_t asn_SPC_OccupiedPerRadioFrame_specs_131 = {
	sizeof(struct OccupiedPerRadioFrame),
	asn_MAP_OccupiedPerRadioFrame_oms_131,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_OccupiedPerRadioFrame = {
#ifdef _ASN1_DEBUG_MODE_
	"OccupiedPerRadioFrame",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_OccupiedPerRadioFrame_131,
	2,	/* Elements count */
	&asn_SPC_OccupiedPerRadioFrame_specs_131	/* Additional specs */
};

/******  OccupiedPerRadioFrame Implement End *****/

