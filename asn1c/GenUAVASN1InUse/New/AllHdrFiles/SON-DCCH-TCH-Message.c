/******  SON-DCCH-TCH-Message Implement Start *****/
static asn_TYPE_member_t asn_MBR_SON_DCCH_TCH_Message_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SON_DCCH_TCH_Message, message),
		&asn_DEF_SON_DCCH_TCH_MessageType,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"message"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_SON_DCCH_TCH_Message_specs_16 = {
	sizeof(struct SON_DCCH_TCH_Message),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SON_DCCH_TCH_Message = {
#ifdef _ASN1_DEBUG_MODE_
	"SON-DCCH-TCH-Message",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SON_DCCH_TCH_Message_16,
	1,	/* Elements count */
	&asn_SPC_SON_DCCH_TCH_Message_specs_16	/* Additional specs */
};

/******  SON-DCCH-TCH-Message Implement End *****/

