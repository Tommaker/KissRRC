#include "SonRRCConnectionReject-IEs.h"
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"
/******  SonRRCConnectionReject Definition Start *****/

/* Dependencies */
typedef enum SonRRCConnectionReject__criticalExtensions_PR {
	SonRRCConnectionReject__criticalExtensions_PR_NOTHING,	/* No components present */
	SonRRCConnectionReject__criticalExtensions_PR_c1,
	SonRRCConnectionReject__criticalExtensions_PR_criticalExtensionsFuture
} SonRRCConnectionReject__criticalExtensions_PR;
typedef enum SonRRCConnectionReject__criticalExtensions__c1_PR {
	SonRRCConnectionReject__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	SonRRCConnectionReject__criticalExtensions__c1_PR_rrcConnectionReject,
	SonRRCConnectionReject__criticalExtensions__c1_PR_spare
} SonRRCConnectionReject__criticalExtensions__c1_PR;

/* SonRRCConnectionReject */
typedef struct SonRRCConnectionReject {
	struct SonRRCConnectionReject__criticalExtensions {
		SonRRCConnectionReject__criticalExtensions_PR present;
		union SonRRCConnectionReject__criticalExtensions_u {
			struct SonRRCConnectionReject__criticalExtensions__c1 {
				SonRRCConnectionReject__criticalExtensions__c1_PR present;
				union SonRRCConnectionReject__criticalExtensions__c1_u {
					SonRRCConnectionReject_IEs_t	 rrcConnectionReject;
					NULL_t	 spare;
				} choice;
			} c1;
			struct SonRRCConnectionReject__criticalExtensions__criticalExtensionsFuture {
			} criticalExtensionsFuture;
		} choice;
	} criticalExtensions;
} SonRRCConnectionReject_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionReject;

/******  SonRRCConnectionReject Definition End *****/
