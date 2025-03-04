#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "NodeRouteInformation.h"
#include "constr_SEQUENCE.h"
/******  SonSystemInformationBlockType1 Definition Start *****/

/* Dependencies */
typedef enum SonSystemInformationBlockType1__messageSegmentType {
	SonSystemInformationBlockType1__messageSegmentType_notLastSegment	= 0,
	SonSystemInformationBlockType1__messageSegmentType_lastSegment	= 1
} e_SonSystemInformationBlockType1__messageSegmentType;

/* SonSystemInformationBlockType1 */
typedef struct SonSystemInformationBlockType1 {
	long	 messageSequenceNumber;
	long	 messageSegmentType;
	long	 messageSegmentNumber;
	NodeRouteInformation_t	 nodeRouteInformation;
	struct SonSystemInformationBlockType1__nonCriticalExtension {
	} *nonCriticalExtension;
} SonSystemInformationBlockType1_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_messageSegmentType_111;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SonSystemInformationBlockType1;

/******  SonSystemInformationBlockType1 Definition End *****/
