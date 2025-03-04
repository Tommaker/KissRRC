#include "SonRRCConnectionReconfigurationRequest-IEs.h"
#include "constr_SEQUENCE.h"
#include "constr_CHOICE.h"
/******  SonRRCConnectionReconfigurationRequest Definition Start *****/

/* Dependencies */
typedef enum SonRRCConnectionReconfigurationRequest__criticalExtensions_PR {
	SonRRCConnectionReconfigurationRequest__criticalExtensions_PR_NOTHING,	/* No components present */
	SonRRCConnectionReconfigurationRequest__criticalExtensions_PR_sonrrcConnectionReconfigurationRequest,
	SonRRCConnectionReconfigurationRequest__criticalExtensions_PR_criticalExtensionsFuture
} SonRRCConnectionReconfigurationRequest__criticalExtensions_PR;

/* SonRRCConnectionReconfigurationRequest */
typedef struct SonRRCConnectionReconfigurationRequest {
	struct SonRRCConnectionReconfigurationRequest__criticalExtensions {
		SonRRCConnectionReconfigurationRequest__criticalExtensions_PR present;
		union SonRRCConnectionReconfigurationRequest__criticalExtensions_u {
			SonRRCConnectionReconfigurationRequest_IEs_t	 sonrrcConnectionReconfigurationRequest;
			struct SonRRCConnectionReconfigurationRequest__criticalExtensions__criticalExtensionsFuture {
			} criticalExtensionsFuture;
		} choice;
	} criticalExtensions;
} SonRRCConnectionReconfigurationRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionReconfigurationRequest;

/******  SonRRCConnectionReconfigurationRequest Definition End *****/
