#include "constr_SEQUENCE.h"
/******  OccupiedPerRadioFrame Definition Start *****/

/* Forward declarations */
struct FixedOccupiedPerRadioFrame;
struct DynamicOccupiedPerRadioFrame;

/* OccupiedPerRadioFrame */
typedef struct OccupiedPerRadioFrame {
	struct FixedOccupiedPerRadioFrame	*fixedOccupiedPerRadioFrame	/* OPTIONAL */;
	struct DynamicOccupiedPerRadioFrame	*dynamicOccupiedPerRadioFrame	/* OPTIONAL */;
} OccupiedPerRadioFrame_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OccupiedPerRadioFrame;

/******  OccupiedPerRadioFrame Definition End *****/
