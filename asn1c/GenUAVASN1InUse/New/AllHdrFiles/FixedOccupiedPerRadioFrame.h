#include "NativeInteger.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"
/******  FixedOccupiedPerRadioFrame Definition Start *****/

/* Forward declarations */
struct Parameter;

/* FixedOccupiedPerRadioFrame */
typedef struct FixedOccupiedPerRadioFrame {
	long	 metric;
	struct Parameter	*parameter	/* OPTIONAL */;
	OCTET_STRING_t	 nodeSN;
} FixedOccupiedPerRadioFrame_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FixedOccupiedPerRadioFrame;

/******  FixedOccupiedPerRadioFrame Definition End *****/
