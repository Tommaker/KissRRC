/******  SonRRCConnectionRequest-IEs Implement Start *****/
static asn_per_constraints_t asn_PER_memb_pre_occupiedRF_constr_89 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 }
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_92 = {
	sizeof(struct SonRRCConnectionRequest_IEs__nonCriticalExtension),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_92 = {
#ifdef _ASN1_DEBUG_MODE_
	"nonCriticalExtension",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_92	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SonRRCConnectionRequest_IEs_88[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionRequest_IEs, pre_occupiedRF),
		&asn_DEF_NativeInteger,
		&asn_PER_memb_pre_occupiedRF_constr_89,
		0,
#ifdef _ASN1_DEBUG_MODE_
		"pre-occupiedRF"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionRequest_IEs, accessingNodeAddress),
		&asn_DEF_NodeAddressIdentity,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"accessingNodeAddress"
#endif
	},
	{ ATF_NOFLAGS, 0, offsetof(struct SonRRCConnectionRequest_IEs, accessedNodeAddress),
		&asn_DEF_NodeAddressIdentity,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"accessedNodeAddress"
#endif
	},
	{ ATF_POINTER, 1, offsetof(struct SonRRCConnectionRequest_IEs, nonCriticalExtension),
		&asn_DEF_nonCriticalExtension_92,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nonCriticalExtension"
#endif
	},
};
static const uint8_t asn_MAP_SonRRCConnectionRequest_IEs_oms_88[] = { 3 };
static asn_SEQUENCE_specifics_t asn_SPC_SonRRCConnectionRequest_IEs_specs_88 = {
	sizeof(struct SonRRCConnectionRequest_IEs),
	asn_MAP_SonRRCConnectionRequest_IEs_oms_88,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionRequest_IEs = {
#ifdef _ASN1_DEBUG_MODE_
	"SonRRCConnectionRequest-IEs",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SonRRCConnectionRequest_IEs_88,
	4,	/* Elements count */
	&asn_SPC_SonRRCConnectionRequest_IEs_specs_88	/* Additional specs */
};

/******  SonRRCConnectionRequest-IEs Implement End *****/

