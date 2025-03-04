#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "constr_SEQUENCE.h"
/******  DynamicOccupiedPerRadioFrame Definition Start *****/

/* Dependencies */
typedef enum DynamicOccupiedPerRadioFrame__conflictIndication {
	DynamicOccupiedPerRadioFrame__conflictIndication_false	= 0,
	DynamicOccupiedPerRadioFrame__conflictIndication_true	= 1
} e_DynamicOccupiedPerRadioFrame__conflictIndication;

/* DynamicOccupiedPerRadioFrame */
typedef struct DynamicOccupiedPerRadioFrame {
	long	 nodeId;
	long	 conflictIndication;
} DynamicOccupiedPerRadioFrame_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_conflictIndication_142;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DynamicOccupiedPerRadioFrame;

/******  DynamicOccupiedPerRadioFrame Definition End *****/
