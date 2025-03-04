#include "SonRRCConnectionRequest.h"
#include "SonRRCConnectionReject.h"
#include "SonRRCConnectionConfirm.h"
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"
/******  SON-DCCH-TCH-MessageType Definition Start *****/

/* Dependencies */
typedef enum SON_DCCH_TCH_MessageType_PR {
	SON_DCCH_TCH_MessageType_PR_NOTHING,	/* No components present */
	SON_DCCH_TCH_MessageType_PR_c1,
	SON_DCCH_TCH_MessageType_PR_messageClassExtension
} SON_DCCH_TCH_MessageType_PR;
typedef enum SON_DCCH_TCH_MessageType__c1_PR {
	SON_DCCH_TCH_MessageType__c1_PR_NOTHING,	/* No components present */
	SON_DCCH_TCH_MessageType__c1_PR_sonRrcConnectionRequest,
	SON_DCCH_TCH_MessageType__c1_PR_sonRrcConnectionReject,
	SON_DCCH_TCH_MessageType__c1_PR_sonRrcConnectionConfirm,
	SON_DCCH_TCH_MessageType__c1_PR_spare5,
	SON_DCCH_TCH_MessageType__c1_PR_spare4,
	SON_DCCH_TCH_MessageType__c1_PR_spare3,
	SON_DCCH_TCH_MessageType__c1_PR_spare2,
	SON_DCCH_TCH_MessageType__c1_PR_spare1
} SON_DCCH_TCH_MessageType__c1_PR;

/* SON-DCCH-TCH-MessageType */
typedef struct SON_DCCH_TCH_MessageType {
	SON_DCCH_TCH_MessageType_PR present;
	union SON_DCCH_TCH_MessageType_u {
		struct SON_DCCH_TCH_MessageType__c1 {
			SON_DCCH_TCH_MessageType__c1_PR present;
			union SON_DCCH_TCH_MessageType__c1_u {
				SonRRCConnectionRequest_t	 sonRrcConnectionRequest;
				SonRRCConnectionReject_t	 sonRrcConnectionReject;
				SonRRCConnectionConfirm_t	 sonRrcConnectionConfirm;
				NULL_t	 spare5;
				NULL_t	 spare4;
				NULL_t	 spare3;
				NULL_t	 spare2;
				NULL_t	 spare1;
			} choice;
		} c1;
		struct SON_DCCH_TCH_MessageType__messageClassExtension {
		} messageClassExtension;
	} choice;
} SON_DCCH_TCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SON_DCCH_TCH_MessageType;

/******  SON-DCCH-TCH-MessageType Definition End *****/
