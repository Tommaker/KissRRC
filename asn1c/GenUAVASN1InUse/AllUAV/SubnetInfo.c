/******  SubnetInfo Implement Start *****/
static asn_per_constraints_t asn_PER_memb_physCellId_constr_153 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  503 }	/* (0..503) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_subnetFreq_constr_154 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_SubnetInfo_152[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SubnetInfo, physCellId),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_physCellId_constr_153,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"physCellId"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SubnetInfo, subnetFreq),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_subnetFreq_constr_154,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"subnetFreq"
#endif
	},
	{ ATF_POINTER, 1, offsetof(struct SubnetInfo, leaveTime),
		&asn_DEF_ActiveTime,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"leaveTime"
#endif
	},
};
static const uint8_t asn_MAP_SubnetInfo_oms_152[] = { 2 };
static asn_SEQUENCE_specifics_t asn_SPC_SubnetInfo_specs_152 = {
	sizeof(struct SubnetInfo),
	asn_MAP_SubnetInfo_oms_152,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SubnetInfo = {
#ifdef _ASN1_DEBUG_MODE_
	"SubnetInfo",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SubnetInfo_152,
	3,	/* Elements count */
	&asn_SPC_SubnetInfo_specs_152	/* Additional specs */
};

/******  SubnetInfo Implement End *****/

