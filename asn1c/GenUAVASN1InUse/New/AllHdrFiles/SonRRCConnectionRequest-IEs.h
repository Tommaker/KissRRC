#include "NativeInteger.h"
#include "NodeAddressIdentity.h"
#include "constr_SEQUENCE.h"
/******  SonRRCConnectionRequest-IEs Definition Start *****/

/* SonRRCConnectionRequest-IEs */
typedef struct SonRRCConnectionRequest_IEs {
	long	 pre_occupiedRF;
	NodeAddressIdentity_t	 accessingNodeAddress;
	NodeAddressIdentity_t	 accessedNodeAddress;
	struct SonRRCConnectionRequest_IEs__nonCriticalExtension {
	} *nonCriticalExtension;
} SonRRCConnectionRequest_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionRequest_IEs;

/******  SonRRCConnectionRequest-IEs Definition End *****/
