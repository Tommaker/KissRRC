#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
/******  OccupiedRadioFrameList Definition Start *****/

/* Forward declarations */
struct OccupiedPerRadioFrame;

/* OccupiedRadioFrameList */
typedef struct OccupiedRadioFrameList {
	A_SEQUENCE_OF(struct OccupiedPerRadioFrame) list;
} OccupiedRadioFrameList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OccupiedRadioFrameList;

/******  OccupiedRadioFrameList Definition End *****/
