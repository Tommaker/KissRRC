#include "NativeInteger.h"
#include "constr_SEQUENCE.h"
/******  SubnetInfo Definition Start *****/

/* Forward declarations */
struct ActiveTime;

/* SubnetInfo */
typedef struct SubnetInfo {
	long	 physCellId;
	long	 subnetFreq;
	struct ActiveTime	*leaveTime	/* OPTIONAL */;
} SubnetInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubnetInfo;

/******  SubnetInfo Definition End *****/
