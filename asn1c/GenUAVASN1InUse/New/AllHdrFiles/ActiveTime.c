/******  ActiveTime Implement Start *****/
static asn_per_constraints_t asn_PER_memb_ssfnCycle_constr_148 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_per_constraints_t asn_PER_memb_ssfn_constr_149 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 14,  14,  0,  10239 }	/* (0..10239) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_TYPE_member_t asn_MBR_ActiveTime_147[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ActiveTime, ssfnCycle),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_ssfnCycle_constr_148,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"ssfnCycle"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct ActiveTime, ssfn),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_ssfn_constr_149,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"ssfn"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_ActiveTime_specs_147 = {
	sizeof(struct ActiveTime),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ActiveTime = {
#ifdef _ASN1_DEBUG_MODE_
	"ActiveTime",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_ActiveTime_147,
	2,	/* Elements count */
	&asn_SPC_ActiveTime_specs_147	/* Additional specs */
};

/******  ActiveTime Implement End *****/

