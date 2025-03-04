/******  SON-BCCH-BCH-MessageType Implement Start *****/
/*
 * This type is implemented using SonMasterInformationBlock,
 * so here we adjust the DEF accordingly.
 */
static void
SON_BCCH_BCH_MessageType_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->uper_decoder   = asn_DEF_SonMasterInformationBlock.uper_decoder;
	td->uper_encoder   = asn_DEF_SonMasterInformationBlock.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_SonMasterInformationBlock.per_constraints;
	td->elements       = asn_DEF_SonMasterInformationBlock.elements;
	td->elements_count = asn_DEF_SonMasterInformationBlock.elements_count;
	td->specifics      = asn_DEF_SonMasterInformationBlock.specifics;
}

asn_dec_rval_t
SON_BCCH_BCH_MessageType_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	SON_BCCH_BCH_MessageType_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
SON_BCCH_BCH_MessageType_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	SON_BCCH_BCH_MessageType_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_TYPE_descriptor_t asn_DEF_SON_BCCH_BCH_MessageType = {
#ifdef _ASN1_DEBUG_MODE_
	"SON-BCCH-BCH-MessageType",
#endif
	SON_BCCH_BCH_MessageType_decode_uper,
	SON_BCCH_BCH_MessageType_encode_uper,
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	0	/* No specifics */
};

/******  SON-BCCH-BCH-MessageType Implement End *****/

