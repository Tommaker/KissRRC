#include "NativeInteger.h"
#include "NodeAddressIdentity.h"
#include "constr_SEQUENCE.h"
/******  SonRRCConnectionConfirm-IEs Definition Start *****/

/* SonRRCConnectionConfirm-IEs */
typedef struct SonRRCConnectionConfirm_IEs {
	long	 occupiedRF;
	NodeAddressIdentity_t	 accessingNodeAddress;
	NodeAddressIdentity_t	 accessedNodeAddress;
	struct SonRRCConnectionConfirm_IEs__nonCriticalExtension {
	} *nonCriticalExtension;
} SonRRCConnectionConfirm_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionConfirm_IEs;

/******  SonRRCConnectionConfirm-IEs Definition End *****/
