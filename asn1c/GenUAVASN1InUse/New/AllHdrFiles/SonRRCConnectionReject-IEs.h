#include "NodeAddressIdentity.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"
/******  SonRRCConnectionReject-IEs Definition Start *****/

/* Dependencies */
typedef enum SonRRCConnectionReject_IEs__rejectCause {
	SonRRCConnectionReject_IEs__rejectCause_congestion	= 0,
	SonRRCConnectionReject_IEs__rejectCause_spare7	= 1,
	SonRRCConnectionReject_IEs__rejectCause_spare6	= 2,
	SonRRCConnectionReject_IEs__rejectCause_spare5	= 3,
	SonRRCConnectionReject_IEs__rejectCause_spare4	= 4,
	SonRRCConnectionReject_IEs__rejectCause_spare3	= 5,
	SonRRCConnectionReject_IEs__rejectCause_spare2	= 6,
	SonRRCConnectionReject_IEs__rejectCause_spare1	= 7
} e_SonRRCConnectionReject_IEs__rejectCause;

/* SonRRCConnectionReject-IEs */
typedef struct SonRRCConnectionReject_IEs {
	NodeAddressIdentity_t	 accessingNodeAddress;
	NodeAddressIdentity_t	 accessedNodeAddress;
	long	 rejectCause;
	struct SonRRCConnectionReject_IEs__nonCriticalExtension {
	} *nonCriticalExtension;
} SonRRCConnectionReject_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rejectCause_74;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionReject_IEs;

/******  SonRRCConnectionReject-IEs Definition End *****/
