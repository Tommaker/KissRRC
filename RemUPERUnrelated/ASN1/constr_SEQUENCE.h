/*-
 * Copyright (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */
#ifndef	_CONSTR_SEQUENCE_H_
#define	_CONSTR_SEQUENCE_H_

#include <asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef const struct asn_SEQUENCE_specifics_s {
	/*
	 * Target structure description.
	 */
    /* ECM9100-1765 Compress data type to small size. */
	//int struct_size;	/* Size of the target structure. */
    short struct_size;	/* Size of the target structure. */
//	int ctx_offset;		/* Offset of the asn_struct_ctx_t member */
//
//	/*
//	 * Tags to members mapping table (sorted).
//	 */
//	const asn_TYPE_tag2member_t *tag2el;
//	int tag2el_count;

	/*
	 * Optional members of the extensions root (roms) or additions (aoms).
	 * Meaningful for PER.
	 */
	const uint8_t *oms;		/* Optional MemberS */
#if 0
	int  roms_count;	/* Root optional members count */
	int  aoms_count;	/* Additions optional members count */
#endif
    /* ECM9100-1765 Compress data type to small size. */
	int8_t  roms_count;	/* Root optional members count */
	int8_t  aoms_count;	/* Additions optional members count */

	/*
	 * Description of an extensions group.
	 */
#if 0
	int ext_after;		/* Extensions start after this member */
	int ext_before;		/* Extensions stop before this member */
#endif
    /* ECM9100-1765 Compress data type to small size. */
    int8_t ext_after;      /* Extensions start after this member */
    int8_t ext_before;     /* Extensions stop before this member */

} asn_SEQUENCE_specifics_t;


/*
 * A set specialized functions dealing with the SEQUENCE type.
 */
//asn_struct_free_f SEQUENCE_free;
//asn_struct_print_f SEQUENCE_print;
//asn_constr_check_f SEQUENCE_constraint;
//ber_type_decoder_f SEQUENCE_decode_ber;
//der_type_encoder_f SEQUENCE_encode_der;
//xer_type_decoder_f SEQUENCE_decode_xer;
//xer_type_encoder_f SEQUENCE_encode_xer;
per_type_decoder_f SEQUENCE_decode_uper;
per_type_encoder_f SEQUENCE_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CONSTR_SEQUENCE_H_ */
