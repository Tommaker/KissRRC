#include "SonRRCConnectionConfirm-IEs.h"
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"
/******  SonRRCConnectionConfirm Definition Start *****/

/* Dependencies */
typedef enum SonRRCConnectionConfirm__criticalExtensions_PR {
	SonRRCConnectionConfirm__criticalExtensions_PR_NOTHING,	/* No components present */
	SonRRCConnectionConfirm__criticalExtensions_PR_c1,
	SonRRCConnectionConfirm__criticalExtensions_PR_criticalExtensionsFuture
} SonRRCConnectionConfirm__criticalExtensions_PR;
typedef enum SonRRCConnectionConfirm__criticalExtensions__c1_PR {
	SonRRCConnectionConfirm__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	SonRRCConnectionConfirm__criticalExtensions__c1_PR_rrcConnectionConfirm,
	SonRRCConnectionConfirm__criticalExtensions__c1_PR_spare
} SonRRCConnectionConfirm__criticalExtensions__c1_PR;

/* SonRRCConnectionConfirm */
typedef struct SonRRCConnectionConfirm {
	struct SonRRCConnectionConfirm__criticalExtensions {
		SonRRCConnectionConfirm__criticalExtensions_PR present;
		union SonRRCConnectionConfirm__criticalExtensions_u {
			struct SonRRCConnectionConfirm__criticalExtensions__c1 {
				SonRRCConnectionConfirm__criticalExtensions__c1_PR present;
				union SonRRCConnectionConfirm__criticalExtensions__c1_u {
					SonRRCConnectionConfirm_IEs_t	 rrcConnectionConfirm;
					NULL_t	 spare;
				} choice;
			} c1;
			struct SonRRCConnectionConfirm__criticalExtensions__criticalExtensionsFuture {
			} criticalExtensionsFuture;
		} choice;
	} criticalExtensions;
} SonRRCConnectionConfirm_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionConfirm;

/******  SonRRCConnectionConfirm Definition End *****/
