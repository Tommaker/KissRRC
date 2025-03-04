/******  SON-BCCH-BCH-Message Implement Start *****/
static asn_TYPE_member_t asn_MBR_SON_BCCH_BCH_Message_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SON_BCCH_BCH_Message, message),
		&asn_DEF_SON_BCCH_BCH_MessageType,
		0,	/* No PER visible constraints */
		0,
#ifdef _ASN1_DEBUG_MODE_
		"message"
#endif
	},
};
static asn_SEQUENCE_specifics_t asn_SPC_SON_BCCH_BCH_Message_specs_1 = {
	sizeof(struct SON_BCCH_BCH_Message),
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SON_BCCH_BCH_Message = {
#ifdef _ASN1_DEBUG_MODE_
	"SON-BCCH-BCH-Message",
#endif
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* No PER visible constraints */
	asn_MBR_SON_BCCH_BCH_Message_1,
	1,	/* Elements count */
	&asn_SPC_SON_BCCH_BCH_Message_specs_1	/* Additional specs */
};

/******  SON-BCCH-BCH-Message Implement End *****/

