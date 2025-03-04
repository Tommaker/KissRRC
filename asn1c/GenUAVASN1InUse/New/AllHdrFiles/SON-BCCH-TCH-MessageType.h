#include "SonSystemInformationBlockType1.h"
#include "SonSystemInformationBlockType2.h"
#include "NULL.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"
/******  SON-BCCH-TCH-MessageType Definition Start *****/

/* Dependencies */
typedef enum SON_BCCH_TCH_MessageType_PR {
	SON_BCCH_TCH_MessageType_PR_NOTHING,	/* No components present */
	SON_BCCH_TCH_MessageType_PR_c1,
	SON_BCCH_TCH_MessageType_PR_messageClassExtension
} SON_BCCH_TCH_MessageType_PR;
typedef enum SON_BCCH_TCH_MessageType__c1_PR {
	SON_BCCH_TCH_MessageType__c1_PR_NOTHING,	/* No components present */
	SON_BCCH_TCH_MessageType__c1_PR_sonsystemInformationBlockType1,
	SON_BCCH_TCH_MessageType__c1_PR_sonsystemInformationBlockType2,
	SON_BCCH_TCH_MessageType__c1_PR_spare5,
	SON_BCCH_TCH_MessageType__c1_PR_spare4,
	SON_BCCH_TCH_MessageType__c1_PR_spare3,
	SON_BCCH_TCH_MessageType__c1_PR_spare2,
	SON_BCCH_TCH_MessageType__c1_PR_spare1
} SON_BCCH_TCH_MessageType__c1_PR;

/* SON-BCCH-TCH-MessageType */
typedef struct SON_BCCH_TCH_MessageType {
	SON_BCCH_TCH_MessageType_PR present;
	union SON_BCCH_TCH_MessageType_u {
		struct SON_BCCH_TCH_MessageType__c1 {
			SON_BCCH_TCH_MessageType__c1_PR present;
			union SON_BCCH_TCH_MessageType__c1_u {
				SonSystemInformationBlockType1_t	 sonsystemInformationBlockType1;
				SonSystemInformationBlockType2_t	 sonsystemInformationBlockType2;
				NULL_t	 spare5;
				NULL_t	 spare4;
				NULL_t	 spare3;
				NULL_t	 spare2;
				NULL_t	 spare1;
			} choice;
		} c1;
		struct SON_BCCH_TCH_MessageType__messageClassExtension {
		} messageClassExtension;
	} choice;
} SON_BCCH_TCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SON_BCCH_TCH_MessageType;

/******  SON-BCCH-TCH-MessageType Definition End *****/
