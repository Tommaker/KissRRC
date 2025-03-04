#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "SubnetInfo.h"
#include "NodeAddressIdentity.h"
#include "constr_SEQUENCE.h"
/******  SonSystemInformationBlockType2 Definition Start *****/

/* Dependencies */
typedef enum SonSystemInformationBlockType2__currentNodeLeaveIndication {
	SonSystemInformationBlockType2__currentNodeLeaveIndication_false	= 0,
	SonSystemInformationBlockType2__currentNodeLeaveIndication_true	= 1
} e_SonSystemInformationBlockType2__currentNodeLeaveIndication;

/* Forward declarations */
struct OccupiedRadioFrameList;

/* SonSystemInformationBlockType2 */
typedef struct SonSystemInformationBlockType2 {
	long	 ssfnCycle;
	long	 currentNodeId;
	long	 messageSequenceNumber;
	long	 currentNodeLeaveIndication;
	SubnetInfo_t	 subnetInfo;
	NodeAddressIdentity_t	 currentNodeAddress;
	NodeAddressIdentity_t	 mainNodeAddress;
	struct OccupiedRadioFrameList	*occupiedRadioFrameList	/* OPTIONAL */;
	struct SonSystemInformationBlockType2__nonCriticalExtension {
	} *nonCriticalExtension;
} SonSystemInformationBlockType2_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_currentNodeLeaveIndication_121;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SonSystemInformationBlockType2;

/******  SonSystemInformationBlockType2 Definition End *****/
