/******  NodeRouteInformation Implement Start *****/
static asn_TYPE_member_t asn_MBR_NodeRouteInformation_145[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NodeRouteInformation, nodeRouteInfo),
		&asn_DEF_OCTET_STRING,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"nodeRouteInfo"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_NodeRouteInformation_specs_145 = {
	sizeof(struct NodeRouteInformation),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NodeRouteInformation = {
#ifdef _ASN1_DEBUG_MODE_
	"NodeRouteInformation",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_NodeRouteInformation_145,
	1,	/* Elements count */
	&asn_SPC_NodeRouteInformation_specs_145	/* Additional specs */
};

/******  NodeRouteInformation Implement End *****/

