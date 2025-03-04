/******  NodeAddressIdentity Implement Start *****/
static asn_per_constraints_t asn_PER_memb_nodeSN_constr_151 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */
};
static asn_TYPE_member_t asn_MBR_NodeAddressIdentity_150[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NodeAddressIdentity, nodeSN),
		&asn_DEF_OCTET_STRING,
		&asn_PER_memb_nodeSN_constr_151,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nodeSN"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_NodeAddressIdentity_specs_150 = {
	sizeof(struct NodeAddressIdentity),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NodeAddressIdentity = {
#ifdef _ASN1_DEBUG_MODE_
	"NodeAddressIdentity",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_NodeAddressIdentity_150,
	1,	/* Elements count */
	&asn_SPC_NodeAddressIdentity_specs_150	/* Additional specs */
};

/******  NodeAddressIdentity Implement End *****/

