#include "NativeEnumerated.h"
#include "BIT_STRING.h"
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"
/******  SonMasterInformationBlock Definition Start *****/

/* Dependencies */
typedef enum SonMasterInformationBlock__bandwidth {
	SonMasterInformationBlock__bandwidth_n6	= 0,
	SonMasterInformationBlock__bandwidth_n15	= 1,
	SonMasterInformationBlock__bandwidth_n25	= 2,
	SonMasterInformationBlock__bandwidth_n50	= 3,
	SonMasterInformationBlock__bandwidth_n75	= 4,
	SonMasterInformationBlock__bandwidth_n100	= 5
} e_SonMasterInformationBlock__bandwidth;
typedef enum SonMasterInformationBlock__transmissionMode {
	SonMasterInformationBlock__transmissionMode_tm0	= 0,
	SonMasterInformationBlock__transmissionMode_tm1	= 1,
	SonMasterInformationBlock__transmissionMode_tm2	= 2,
	SonMasterInformationBlock__transmissionMode_tm3	= 3
} e_SonMasterInformationBlock__transmissionMode;
typedef enum SonMasterInformationBlock__antennaPortNum {
	SonMasterInformationBlock__antennaPortNum_ap1	= 0,
	SonMasterInformationBlock__antennaPortNum_ap2	= 1,
	SonMasterInformationBlock__antennaPortNum_ap4	= 2
} e_SonMasterInformationBlock__antennaPortNum;

/* SonMasterInformationBlock */
typedef struct SonMasterInformationBlock {
	long	 bandwidth;
	BIT_STRING_t	 systemFrameNumber;
	long	 transmissionMode;
	BIT_STRING_t	 version;
	long	 currntNodeId;
	long	 totalNodeNum;
	long	 antennaPortNum;
	long	 txPower;
	BIT_STRING_t	 macI;
	long	 sonId;
	struct SonMasterInformationBlock__nonCriticalExtension {
	} *nonCriticalExtension;
} SonMasterInformationBlock_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_bandwidth_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_transmissionMode_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_antennaPortNum_46;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SonMasterInformationBlock;

/******  SonMasterInformationBlock Definition End *****/
