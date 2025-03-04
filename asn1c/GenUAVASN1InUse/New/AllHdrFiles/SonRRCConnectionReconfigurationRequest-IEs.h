#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "ActiveTime.h"
#include "constr_SEQUENCE.h"
/******  SonRRCConnectionReconfigurationRequest-IEs Definition Start *****/

/* Dependencies */
typedef enum SonRRCConnectionReconfigurationRequest_IEs__bandwidth {
	SonRRCConnectionReconfigurationRequest_IEs__bandwidth_n6	= 0,
	SonRRCConnectionReconfigurationRequest_IEs__bandwidth_n15	= 1,
	SonRRCConnectionReconfigurationRequest_IEs__bandwidth_n25	= 2,
	SonRRCConnectionReconfigurationRequest_IEs__bandwidth_n50	= 3,
	SonRRCConnectionReconfigurationRequest_IEs__bandwidth_n75	= 4,
	SonRRCConnectionReconfigurationRequest_IEs__bandwidth_n100	= 5
} e_SonRRCConnectionReconfigurationRequest_IEs__bandwidth;

/* SonRRCConnectionReconfigurationRequest-IEs */
typedef struct SonRRCConnectionReconfigurationRequest_IEs {
	long	 freqInfo;
	long	 bandwidth;
	long	 physCellId;
	ActiveTime_t	 activeTime;
	struct SonRRCConnectionReconfigurationRequest_IEs__nonCriticalExtension {
	} *nonCriticalExtension;
} SonRRCConnectionReconfigurationRequest_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_bandwidth_99;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SonRRCConnectionReconfigurationRequest_IEs;

/******  SonRRCConnectionReconfigurationRequest-IEs Definition End *****/
