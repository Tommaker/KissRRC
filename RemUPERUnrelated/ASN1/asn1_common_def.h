/*
 * @Author: liuyongqi
 * @Date: 2023-07-14 16:29:19
 * @LastEditors: liuyongqi
 * @LastEditTime: 2023-07-14 16:29:19
 * @Description: ASN.1 Process common header file.
 */

#ifndef _ASN1_COMMON_DEF_H_
#define _ASN1_COMMON_DEF_H_

#include "pl.h"
#include "asn_application.h"
#include "asn_internal.h" /* for ASN__DEFAULT_STACK_MAX */
#include "utilities.h"


// ASN.1 encoding and decoding enum definition.
typedef enum _ASN1_CODEC_CODE
{
    ASN1_SUCCESS,
    ASN1_ENDOCE_ERR,
    ASN1_DECODE_ERR,
    ASN1_INPUT_PARAM_INVALID,
    ASN1_MALLOC_FAIL,
    ASN1_CODEC_MAX
}ASN1_CODEC_CODE;

// ASN.1 memory pool used to allocate memory in ASN.1 encode and decode procedure.
#define MEM_POOL_SIZE 6144  // RRC ASN.1 Encode and Decode memory pool size.
#define MEM_ALIGN_BYTE 4    // Defaut return address aligned byte when use asn1_allocateMemory/asn1_callocateMemory/asn1_reallocateMemory
//#define _ASN1_MEM_POOL_ALIGN_ // Macro control ASN1 memory pool align to x Byte or not. Not define align 1 BYTE
//#define _ASN1_MEM_POOL_DEBUG_ // Macro control ASN1 memory pool usage print debug log
//#define _ASN1_PROCEDURE_DEBUG_




#ifdef _ASN1_MEM_POOL_DEBUG_
#define ASN1_MEM_DEBUG(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
#define ASN1_MEM_DEBUG(fmt, ...)
#endif

typedef struct _MemoryPool
{
    U8 pMemPoolBuf[MEM_POOL_SIZE];        // Memory Pool start address
    U32 ulTotalSize;        // Total Size
    U32 ulUsedSize;         // Already used size
    U32 ulAllocCnt;         // Allocate count
    U32 ulTotalAdjust;      // When used Aligned byte the padding bytes total.
} MemoryPool;

extern MemoryPool g_Asn1MemPool;

// derived from A_SET_OF macro.
typedef struct ASetOf{	
	void **array;
	int count;	/* Meaningful size */
	int size;	/* Allocated size */
	void (*free)(void *);
}ASetOfList_t;




// Already declared in asn_application.h
//extern "C" void* asn1_callocMemory(U32 num, U32 size);
//extern "C" void* asn1_reallocMemory(void *pOldptr, U32 ulOldMemSize, U32 ulMemSize);

// ASN.1 default integer type is long.
#define INTEGER_TYPE long


#ifdef _ASN1_LOG_STR_
/*CHecK the PoinTeR which is a function argument  , if it is null , Return the error code*/
#define CHK_ASN1_PTR(pAddr , errCd) /*do*/{\
                              if(NULL == pAddr)\
                              {\
                                  LOG__STR(WARN, 33,"CHK_ASN1_PTR check NULL Pointer code:%d ,file_name=%s,line:(%d)",errCd , __FILE__,__LINE__);\
                                  return errCd;\
                              }\
                           }/*while(0)*/

#define CHK_ASN1_RET(errCd) /*do*/{\
                          if(errCd != ASN1_SUCCESS)\
                          {\
                              LOG__STR(WARN, 34,"CHK_ASN1_RET check return code not success code:%d ,file_name=%s,line:(%d)",errCd , __FILE__,__LINE__);\
                              return errCd;\
                          }\
                      }/*while(0)*/

                      /*CHecK the PoinTeR which is a function argument  , if it is null , Return the error code*/
#define CHK_ASN1_LGR(expr , errCd) do{\
                                    if(!(expr))\
                                    {\
                                        LOG__STR(WARN, 35,"CHKLGR lpp code %d ,file_name=%s,line:(%d)",errCd , __FILE__,__LINE__);\
                                        return errCd;\
                                    }\
                                 }while(0)

#else
/*CHecK the PoinTeR which is a function argument  , if it is null , Return the error code*/
#define CHK_ASN1_PTR(pAddr , errCd) /*do*/{\
                              if(NULL == pAddr)\
                              {\
                                  return errCd;\
                              }\
                           }/*while(0)*/

#define CHK_ASN1_RET(errCd) /*do*/{\
                          if(errCd != ASN1_SUCCESS)\
                          {\
                              return errCd;\
                          }\
                      }/*while(0)*/

#endif

// Malloc memory with specific type
#define MALLOCWithTYPE(TYPE)       (TYPE *)asn1_allocateMemory(sizeof(TYPE))
// Malloc memory with specific type

//#define CALLOCWithTYPE(num,TYPE)   (TYPE *)PvPort_calloc(num * sizeof(TYPE))

// Malloc memory U8 array
#define MALLOC_BYTE_ARRAY(len)     (U8 *) asn1_allocateMemory (len)

// Calloc U8 array
//#define CALLOC_BYTE_ARRAY(num, size)   (U8 *)PvPort_calloc(num, size)

// Malloc memory and assign a value to this address.
#define MALLOC_INT_AND_ASSIGN(lpVal, rVal) \
    do{ \
	lpVal = (INTEGER_TYPE*) asn1_allocateMemory (sizeof(INTEGER_TYPE));\
	if (NULL != lpVal) *lpVal = rVal;\
    else CHK_ASN1_PTR(lpVal, ASN1_MALLOC_FAIL); \
    }while(0)


// list使用之前需要有一个初始化，否则操作时存在随机值的问题
U16 asn_list_init(void *pSetOfList);

U16 asn_list_alloc(void *pSetOfList, U32 uElementNum);

// 将一个array元素添加到列表中
U16 asn_list_add(void *pSetOfList, void *pNewElem);

// 初始化内存池
EXTERN_C_DECL U16 asn1_initMemoryPool();

// 重置内存池
EXTERN_C_DECL void asn1_ResetMemoryPool();

// 释放内存池
EXTERN_C_DECL void asn1_freeMemoryPool();

#endif // end of _ASN1_COMMON_DEF_H_
