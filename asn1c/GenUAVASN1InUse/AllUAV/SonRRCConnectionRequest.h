#include "SonRRCConnectionRequest-IEs.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"
/******  SonRRCConnectionRequest Definition Start *****/

/* Dependencies */
typedef enum SonRRCConnectionRequest__criticalExtensions_PR {
	SonRRCConnectionRequest__criticalExtensions_PR_NOTHING,	/* No components present */
	SonRRCConnectionRequest__criticalExtensions_PR_sonrrcConnectionRequest,
	SonRRCConnectionRequest__criticalExtensions_PR_criticalExtensionsFuture
} SonRRCConnectionRequest__criticalExtensions_PR;

/* SonRRCConnectionRequest */
typedef struct SonRRCConnectionRequest {
	struct SonRRCConnectionRequest__criticalExtensions {
		SonRRCConnectionRequest__criticalExtensions_PR present;
		union SonRRCConnectionRequest__criticalExtensions_u {
			SonRRCConnectionRequest_IEs_t	 sonrrcConnectionRequest;
			struct SonRRCConnectionRequest__criticalExtensions__criticalExtensionsFuture {
			} criticalExtensionsFuture;
		} choice;
	} criticalExtensions;
} SonRRCConnectionRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionRequest;

/******  SonRRCConnectionRequest Definition End *****/
