/*-
 * Copyright (c) 2003, 2004, 2005 Lev Walkin <vlm@lionet.info>.
 * All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */
#ifndef	ASN_CODECS_H
#define	ASN_CODECS_H
#include "log.h"
#include "module.h"

#ifndef THIS_MODULE
#define THIS_MODULE MODULE_ERRC
#endif

//#define _ASN1_LOG_STR_



#ifdef __cplusplus
extern "C" {
#endif

struct asn_TYPE_descriptor_s;	/* Forward declaration */

/*
 * This structure defines a set of parameters that may be passed
 * to every ASN.1 encoder or decoder function.
 * WARNING: if max_stack_size member is set, and you are calling the
 *   function pointers of the asn_TYPE_descriptor_t directly,
 *   this structure must be ALLOCATED ON THE STACK!
 *   If you can't always satisfy this requirement, use ber_decode(),
 *   xer_decode() and uper_decode() functions instead.
 */
typedef struct asn_codec_ctx_s {
	/*
	 * Limit the decoder routines to use no (much) more stack than a given
	 * number of bytes. Most of decoders are stack-based, and this
	 * would protect against stack overflows if the number of nested
	 * encodings is high.
	 * The OCTET STRING, BIT STRING and ANY BER decoders are heap-based,
	 * and are safe from this kind of overflow.
	 * A value from getrlimit(RLIMIT_STACK) may be used to initialize
	 * this variable. Be careful in multithreaded environments, as the
	 * stack size is rather limited.
	 */
	size_t  max_stack_size; /* 0 disables stack bounds checking */
} asn_codec_ctx_t;

/*
 * Type of the return value of the encoding functions (der_encode, xer_encode).
 */
typedef struct asn_enc_rval_s {
	/*
	 * Number of bytes encoded.
	 * -1 indicates failure to encode the structure.
	 * In this case, the members below this one are meaningful.
	 */
	ssize_t encoded;

	/*
	 * Members meaningful when (encoded == -1), for post mortem analysis.
	 */

	/* Type which cannot be encoded */
	struct asn_TYPE_descriptor_s *failed_type;

	/* Pointer to the structure of that type */
	void *structure_ptr;
} asn_enc_rval_t;

#ifdef _ASN1_DEBUG_MODE_
#define	ASN__ENCODE_FAILED do {					\
	asn_enc_rval_t tmp_error;				\
	tmp_error.encoded = -1;					\
	tmp_error.failed_type = td;				\
	tmp_error.structure_ptr = sptr;				\
	ASN_DEBUG("Failed to encode element %s", td ? td->name : "");	\
	return tmp_error;					\
} while(0)
#else
#ifdef _ASN1_LOG_STR_
#define	ASN__ENCODE_FAILED do {					\
	asn_enc_rval_t tmp_error;				\
	tmp_error.encoded = -1;					\
	tmp_error.failed_type = td;				\
	tmp_error.structure_ptr = sptr;				\
    ASN_DEBUG("Failed to encode element in ASN__ENCODE_FAILED");	\
    LOG__STR(WARN, 30,"Encode Fail ,file_name=%s,line:(%d)", __FILE__,__LINE__);\
	return tmp_error;					\
} while(0)
#else
#define	ASN__ENCODE_FAILED do {					\
	asn_enc_rval_t tmp_error;				\
	tmp_error.encoded = -1;					\
	tmp_error.failed_type = td;				\
	tmp_error.structure_ptr = sptr;				\
	return tmp_error;					\
} while(0)

#endif // end of _ASN1_LOG_STR_
#endif // end of _ASN1_DEBUG_MODE_

#define	ASN__ENCODED_OK(rval) do {				\
	rval.structure_ptr = 0;					\
	rval.failed_type = 0;					\
	return rval;						\
} while(0)

/*
 * Type of the return value of the decoding functions (ber_decode, xer_decode)
 * 
 * Please note that the number of consumed bytes is ALWAYS meaningful,
 * even if code==RC_FAIL. This is to indicate the number of successfully
 * decoded bytes, hence providing a possibility to fail with more diagnostics
 * (i.e., print the offending remainder of the buffer).
 */
#if 0 
enum asn_dec_rval_code_e {
	RC_OK,		/* Decoded successfully */
	RC_WMORE,	/* More data expected, call again */
	RC_FAIL		/* Failure to decode data */
};
#else
#define RC_OK       0/* Decoded successfully */
#define RC_WMORE    1/* More data expected, call again */
#define RC_FAIL     2/* Failure to decode data */
typedef uint8_t asn_dec_rval_code_e;
#endif
typedef struct asn_dec_rval_s {
	asn_dec_rval_code_e code;	/* Result code */
	size_t consumed;		/* Number of bytes consumed */
} asn_dec_rval_t;


#ifdef _ASN1_DEBUG_MODE_
#define	ASN__DECODE_FAILED do {					\
	asn_dec_rval_t tmp_error;				\
	tmp_error.code = RC_FAIL;				\
	tmp_error.consumed = 0;					\
    ASN_DEBUG("Failed to decode element %s", td ? td->name : "");	\
	return tmp_error;					\
} while(0)

#else

#ifdef _ASN1_LOG_STR_
#define	ASN__DECODE_FAILED do {					\
	asn_dec_rval_t tmp_error;				\
	tmp_error.code = RC_FAIL;				\
	tmp_error.consumed = 0;					\
    ASN_DEBUG("ASN1C Failed to decode element in ASN__DECODE_FAILED");	\
    LOG__STR(WARN, 31,"ASN1C Decode Fail ,file_name=%s,line:(%d)", __FILE__,__LINE__);\
	return tmp_error;					\
} while(0)

#define	ASN__DECODE_STARVED do {				\
	asn_dec_rval_t tmp_error;				\
	tmp_error.code = RC_WMORE;				\
	tmp_error.consumed = 0;					\
	LOG__STR(WARN, 32,"ASN1C Decode Fail Starved! ,file_name=%s,line:(%d)", __FILE__,__LINE__);\
	return tmp_error;					\
} while(0)

#else
#define	ASN__DECODE_FAILED do {					\
	asn_dec_rval_t tmp_error;				\
	tmp_error.code = RC_FAIL;				\
	tmp_error.consumed = 0;					\
	return tmp_error;					\
} while(0)

#define	ASN__DECODE_STARVED do {				\
	asn_dec_rval_t tmp_error;				\
	tmp_error.code = RC_WMORE;				\
	tmp_error.consumed = 0;					\
	return tmp_error;					\
} while(0)

#endif // end of _ASN1_LOG_STR_

#endif // end of _ASN1_DEBUG_MODE_



#ifdef __cplusplus
}
#endif

#endif	/* ASN_CODECS_H */
