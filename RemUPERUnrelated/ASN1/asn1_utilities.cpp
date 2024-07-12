#define FILE_NAME asn1_utilities
#define THIS_MODULE MODULE_ERRC

/*
 * @Author: liuyongqi
 * @Date: 2023-07-14 16:29:19
 * @LastEditors: liuyongqi
 * @LastEditTime: 2023-07-14 16:29:19
 * @Description: ASN.1 common operation function defined here.
 */

#include "asn1_common_def.h"

MemoryPool g_Asn1MemPool;  // ASN.1 Encode and decode memory pool

/**
* @description: Print the Hex byte stream.
* @param {S8} *binDataName The Hex byte stream preamble.
* @param {U8} *binData : Hex byte data stream.
* @param {U32} binDataLength : hex data len in byte.
* @return {*} None
*/
//void PrintBinData(S8 *binDataName, U8 *binData, U32 binDataLength)
//{
//    U32 rawDataStringLength = ((binDataLength < 100) ? binDataLength : 100) * 2 + 1;
//    S8 *rawDataString = (S8 *)pl_malloc(rawDataStringLength);
//    if (rawDataString)
//    {
//        pl_memset(rawDataString, 0, rawDataStringLength);
//        // Only print the start 100 character.
//        U32 ulBinDataRealLen = (binDataLength < 100) ? binDataLength : 100;
//        for (U32 dataIndex = 0; dataIndex < ulBinDataRealLen; dataIndex++)
//        {
//            sprintf(rawDataString, "%s%02X", rawDataString, binData[dataIndex]);
//        }
//        LOG_INFO_STR("%s=%s len=%d", binDataName, rawDataString, binDataLength);
//        ASN1_MEM_DEBUG("%s = %s len = %d\n", binDataName, rawDataString, binDataLength);
//        pl_free(rawDataString);
//    }
//}



// list使用之前需要有一个初始化，否则操作时存在随机值的问题
/**
* @description: Init ASN.1 list.
* @param {void } *pSetOfList: List head pointer.
* @return {U16} Init result.
*/
U16 asn_list_init(void *pSetOfList)
{
     if (NULL == pSetOfList)
     {
         return ASN1_INPUT_PARAM_INVALID;
     }
     ASetOfList_t *pList = (ASetOfList_t *)(pSetOfList);
     pList->array = NULL;
     pList->count = 0;
     pList->size = 0;

     return ASN1_SUCCESS;
}
 
 
/**
* @description: Allocated a list with specific number.
* @param {void } *pSetOfList: List head pointer.
* @param {U32 } uElementNum: List member number.
* @return {U16} Init result.
*/
U16 asn_list_alloc(void *pSetOfList, U32 uElementNum)
{
    if (NULL == pSetOfList)
    {
        return ASN1_INPUT_PARAM_INVALID;
    }

    ASetOfList_t *pList = (ASetOfList_t *)(pSetOfList);

    // The initial array list set length uElementNum.
    void *pNewArray = MALLOC(uElementNum * sizeof(void *));

    if (pNewArray)
    {
        pList->array = (void **)pNewArray;
        pList->size = uElementNum;
        pList->count = 0;
    }
    else
    {
        // Malloc fail, empty this list.
        pList->size = 0;
        pList->count = 0;
        return ASN1_MALLOC_FAIL;
    }
    return ASN1_SUCCESS;
}
 
// 将一个array元素添加到列表中
/**
* @description: Add a element pointer to a list.
* @param {void } *pSetOfList: List head pointer.
* @param {void } *pNewElem: Element to be add to list.
* @return {U16} add list result.
*/
U16 asn_list_add(void *pSetOfList, void *pNewElem)
{
    if (NULL == pSetOfList || NULL == pNewElem)
    {
        return ASN1_INPUT_PARAM_INVALID;
    }

    ASetOfList_t *pList = (ASetOfList_t *)(pSetOfList);
    /*
     * Make sure there's enough space to insert an element.
     */
    if (pList->count == pList->size)
    {
        S32 sNewSize = pList->size ? (pList->size << 1) : 4;
        void *pNewArray = MALLOC(sNewSize * sizeof(void *));
        if (pNewArray)
        {
            //void *pOldListArray = (void *)pList->array;
            pl_memcpy(pNewArray, pList->array, (pList->size) * (sizeof(pList->array[0])));
            pList->array = (void **)pNewArray;
            pList->size = sNewSize;

            // Free the previous memory. Shoud not free the allcated memory, DO IT IN MEM POOL
            //FREEMEM(pOldListArray);
        }
        else
        {
            /* Malloc Fail */
            return ASN1_MALLOC_FAIL;
        }
    }

    pList->array[pList->count++] = pNewElem;

    return ASN1_SUCCESS;
}
 
// 初始化内存池
/**
* @description: Init ASN.1 memory pool
* @return {U16} Init memory pool result.
*/
extern "C" U16 asn1_initMemoryPool()
{
#if 0
    if (NULL == g_Asn1MemPool.pMemPoolBuf)
    {
        g_Asn1MemPool.pMemPoolBuf = (U8 *)malloc(MEM_POOL_SIZE);
        if (NULL == g_Asn1MemPool.pMemPoolBuf)
        {
            ASN1_MEM_DEBUG("Init ASN1 Memory Pool FAIL!\n");
            LOG_WARN("Init ASN1 Memory Pool FAIL!\n");
            return ASN1_MALLOC_FAIL;
        }
        ASN1_MEM_DEBUG("Init ASN1 Memory Pool SUCCESS! StartAddr:%x, MemSize:%d\n", (U32)(g_Asn1MemPool.pMemPoolBuf), MEM_POOL_SIZE);
        LOG_INFO("Init ASN1 Memory Pool SUCCESS! StartAddr=%x;MemSize=%d", (U32)(g_Asn1MemPool.pMemPoolBuf), MEM_POOL_SIZE);
        g_Asn1MemPool.ulTotalSize = MEM_POOL_SIZE;
        g_Asn1MemPool.ulUsedSize = 0;
        g_Asn1MemPool.ulAllocCnt = 0;
        g_Asn1MemPool.ulTotalAdjust = 0;
    }
#endif
    // g_Asn1MemPool.pMemPoolBuf allocated in static area
    pl_memset(g_Asn1MemPool.pMemPoolBuf, 0, MEM_POOL_SIZE);
    g_Asn1MemPool.ulTotalSize = MEM_POOL_SIZE;
    g_Asn1MemPool.ulUsedSize = 0;
    g_Asn1MemPool.ulAllocCnt = 0;
    g_Asn1MemPool.ulTotalAdjust = 0;
    LOG_INFO("Init ASN1 Memory Pool in Static Area SUCCESS! StartAddr=%x;MemSize=%d", (U32)(g_Asn1MemPool.pMemPoolBuf), MEM_POOL_SIZE);

    return ASN1_SUCCESS;
}
 
#ifdef _ASN1_MEM_POOL_ALIGN_
// 从内存池中分配内存块
/**
* @description: Allocate the specific num of memory from memory pool
* @param {U32 } ulMemSize: Memory wanted to be allocated.
* @return {U16} Init memory pool result.
*/
extern "C" void *asn1_allocateMemory(U32 ulMemSize)
{
    U32 ulNextAddr = (U32)(g_Asn1MemPool.pMemPoolBuf + g_Asn1MemPool.ulUsedSize);
    U32 ulAdjustment = MEM_ALIGN_BYTE - (ulNextAddr & (MEM_ALIGN_BYTE - 1));
    // Set Address start align to MEM_ALIGN_BYTE bytes.
    if (MEM_ALIGN_BYTE == ulAdjustment) 
    {
        ulAdjustment = 0;
    }
    U32 ulNextAddrAdjust = (U32)(ulNextAddr + ulAdjustment);
    if (ulNextAddrAdjust + ulMemSize <= (U32)(g_Asn1MemPool.pMemPoolBuf + g_Asn1MemPool.ulTotalSize))
    {
        // 从内存池中分配内存块
        void *pNewBlock = (void *)ulNextAddrAdjust;
        g_Asn1MemPool.ulUsedSize += ulMemSize + ulAdjustment;
        g_Asn1MemPool.ulAllocCnt++;
        g_Asn1MemPool.ulTotalAdjust += ulAdjustment;
        ASN1_MEM_DEBUG("ASN1 Memory Pool Allocating! Total:%d, Used:%d, CurrMalloc:%d, Adjust:%d, Addr:%x, TotalAdjust:%d!!\n",
            g_Asn1MemPool.ulTotalSize, g_Asn1MemPool.ulUsedSize, ulMemSize, ulAdjustment, ulNextAddrAdjust, g_Asn1MemPool.ulTotalAdjust);
        return pNewBlock;
    }
    else
    {
        // 内存池已满，无法分配更多内存块
        ASN1_MEM_DEBUG("ASN1 Memory Pool Is Full! No more fresh memory to allocate!!\n");
        LOG_ERROR("ASN1 Memory Pool Is Full(Used=%d, Try to Malloc=%d)! No more fresh memory to allocate!!", g_Asn1MemPool.ulUsedSize, ulMemSize);
        return NULL;
    }
}
#else
// 从内存池中分配内存块
/**
* @description: Allocate the specific num of memory from memory pool
* @param {U32 } ulMemSize: Memory wanted to be allocated.
* @return {U16} Init memory pool result.
*/
extern "C" void *asn1_allocateMemory(U32 ulMemSize)
{
    if (g_Asn1MemPool.ulUsedSize + ulMemSize <= g_Asn1MemPool.ulTotalSize)
    {
        // 从内存池中分配内存块
        void *pNewBlock = g_Asn1MemPool.pMemPoolBuf + g_Asn1MemPool.ulUsedSize;
        g_Asn1MemPool.ulUsedSize += ulMemSize;
        g_Asn1MemPool.ulAllocCnt++;

        ASN1_MEM_DEBUG("ASN1 Memory Pool Allocating! Total:%d, Used:%d, CurrMalloc:%d, Addr:%x!!\n",
            g_Asn1MemPool.ulTotalSize, g_Asn1MemPool.ulUsedSize, ulMemSize, (U32)pNewBlock);

        return pNewBlock;
    }
    else
    {
        // 内存池已满，无法分配更多内存块
        ASN1_MEM_DEBUG("ASN1 Memory Pool Is Full(Used:%d, Try to Malloc:%d)! No more fresh memory to allocate!!\n", g_Asn1MemPool.ulUsedSize, ulMemSize);
        LOG_ERROR("ASN1 Memory Pool Is Full(Used=%d, Try to Malloc=%d)! No more fresh memory to allocate!!", g_Asn1MemPool.ulUsedSize, ulMemSize);
        return NULL;
    }
}
#endif


// 重置内存池
/**
* @description: Reset RRC ASN.1 memory pool
* @return {void} None
*/
extern "C" void asn1_ResetMemoryPool()
{
    ASN1_MEM_DEBUG("Reset ASN1 Memory Pool, Pre Mem Poll Info Used:%d, MallocCnt:%d, AdjustTotal:%d\n",
        g_Asn1MemPool.ulUsedSize, g_Asn1MemPool.ulAllocCnt, g_Asn1MemPool.ulTotalAdjust);

//    LOG_INFO("Reset ASN1 Memory Pool, Pre Mem Poll Info Used=%d;MallocCnt=%d;AdjustTotal=%d\n",
//        g_Asn1MemPool.ulUsedSize, g_Asn1MemPool.ulAllocCnt, g_Asn1MemPool.ulTotalAdjust);
    
    //LOG_INFO("Asn1MemPool Info, StartAddr=%x", g_Asn1MemPool.pMemPoolBuf);

    // Reset memory pool to zeor.
    pl_memset(g_Asn1MemPool.pMemPoolBuf, 0, MEM_POOL_SIZE);

    // Reset Memory pool parameters.
    // g_Asn1MemPool.ulTotalSize = MEM_POOL_SIZE;
    g_Asn1MemPool.ulUsedSize = 0;
    g_Asn1MemPool.ulAllocCnt = 0;
    g_Asn1MemPool.ulTotalAdjust = 0;
}
 

// 释放内存池
/**
* @description: Free RRC ASN.1 memory pool
* @return {void} None
*/
extern "C" void asn1_freeMemoryPool()
{
	// Global memory need not free
    //free(g_Asn1MemPool.pMemPoolBuf);
    //g_Asn1MemPool.pMemPoolBuf = NULL;
    g_Asn1MemPool.ulTotalSize = 0;
    g_Asn1MemPool.ulUsedSize = 0;
    g_Asn1MemPool.ulAllocCnt = 0;
    g_Asn1MemPool.ulTotalAdjust = 0;
}

/**
* @description: Allocate the specific num of memory from memory pool
* @param {U32 } ulMemSize: Memory wanted to be allocated.
* @param {U32 } ulCnt: Memory block count wanted to be allocated.
* @return {void *} The malloc memory address.
*/
extern "C" void* asn1_callocMemory(U32 ulMemSize, U32 ulCnt)
{
    U32 ulTotalSize = ulMemSize * ulCnt;
    void *pData = asn1_allocateMemory(ulTotalSize);
    ASN1_MEM_DEBUG("ASN1 Memory Pool CallocMemory!\n");

    if(NULL == pData)
    {
        return NULL;
    }
    else
    {
        pl_memset(pData, 0, ulTotalSize);
        return (void*)((int)pData);
    }
}


/**
* @description: Allocate the specific num of memory from memory pool and copy old content to it.
* @param {void } pOldptr: Old Memory pointer save some info.
* @param {U32 } ulMemSize: Memory block count wanted to be allocated.
* @return {void *} The malloc memory address.
*/
extern "C" void* asn1_reallocMemory(void *pOldptr, U32 ulOldMemSize, U32 ulMemSize)
{
    // 如果ptr为NULL，则直接调用malloc函数分配内存
    ASN1_MEM_DEBUG("ASN1 Memory Pool ReallocMemory,OldPtr:0X%x, OldSize:%d, NewSize:%d!\n", (U32)pOldptr, ulOldMemSize, ulMemSize);
    if (pOldptr == NULL) 
    {
        ASN1_MEM_DEBUG("ReallocMemory Input Old ptr is NULL\n");
        return asn1_allocateMemory(ulMemSize);
    }
    
    // 如果size为0，则直接调用free函数释放内存
    if (ulMemSize == 0)
    {
        return NULL;
    }
    
    // 分配新的内存空间
    void* pNewMem = asn1_allocateMemory(ulMemSize);
    
    // 如果分配失败，则返回NULL
    if (pNewMem == NULL) 
    {
        ASN1_MEM_DEBUG("WARNING:ReallocMemory allocate new ptr is NULL!!!\n");
        return NULL;
    }
    
    // 获取原内存空间大小 --> Change to input the old memory length.
    //U32 old_size = malloc_usable_size(pOldptr);
    
    // 如果新的内存空间大小小于原内存空间大小，则只复制新内存空间大小的数据
    U32 ulCopySize = ulMemSize < ulOldMemSize ? ulMemSize : ulOldMemSize;
    ASN1_MEM_DEBUG("MemCopySize:%d, NewPtr:0X%x\n", ulCopySize, (U32)pNewMem);
    
    // 复制数据到新的内存空间
    pl_memcpy(pNewMem, pOldptr, ulCopySize);

#ifdef _DEBUG_RRC_ASN1_CODEC_
    PrintBinData("Old Pointer Content", (U8 *)pOldptr, ulOldMemSize);
    PrintBinData("New Pointer Content", (U8 *)pNewMem, ulCopySize);
#endif
    // 返回新的内存空间指针
    return pNewMem;
 }
 



