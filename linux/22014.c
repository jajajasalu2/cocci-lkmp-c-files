cocci_test_suite() {
	const size_t cocci_id/* lib/zstd/compress.c 92 */;
	ZSTD_compressionParameters cocci_id/* lib/zstd/compress.c 90 */;
	U64 cocci_id/* lib/zstd/compress.c 894 */;
	unsigned cocci_id/* lib/zstd/compress.c 890 */;
	U16 cocci_id/* lib/zstd/compress.c 872 */;
	const BYTE cocci_id/* lib/zstd/compress.c 784 */;
	FSE_CState_t cocci_id/* lib/zstd/compress.c 752 */;
	BIT_CStream_t cocci_id/* lib/zstd/compress.c 751 */;
	S16 cocci_id/* lib/zstd/compress.c 613 */;
	S16 *cocci_id/* lib/zstd/compress.c 605 */;
	BYTE *cocci_id/* lib/zstd/compress.c 598 */;
	const seqDef *constcocci_id/* lib/zstd/compress.c 594 */;
	FSE_CTable *cocci_id/* lib/zstd/compress.c 590 */;
	const seqStore_t *cocci_id/* lib/zstd/compress.c 589 */;
	const BYTE cocci_id/* lib/zstd/compress.c 557 */[128];
	const BYTE cocci_id/* lib/zstd/compress.c 553 */[64];
	struct ZSTD_CCtx_s {
		const BYTE *nextSrc;
		const BYTE *base;
		const BYTE *dictBase;
		U32 dictLimit;
		U32 lowLimit;
		U32 nextToUpdate;
		U32 nextToUpdate3;
		U32 hashLog3;
		U32 loadedDictEnd;
		U32 forceWindow;
		U32 forceRawDict;
		ZSTD_compressionStage_e stage;
		U32 rep[ZSTD_REP_NUM];
		U32 repToConfirm[ZSTD_REP_NUM];
		U32 dictID;
		ZSTD_parameters params;
		void *workSpace;
		size_t workSpaceSize;
		size_t blockSize;
		U64 frameContentSize;
		struct xxh64_state xxhState;
		ZSTD_customMem customMem;
		seqStore_t seqStore;
		U32 *hashTable;
		U32 *hashTable3;
		U32 *chainTable;
		HUF_CElt *hufTable;
		U32 flagStaticTables;
		HUF_repeat flagStaticHufTable;
		FSE_CTable offcodeCTable[FSE_CTABLE_SIZE_U32(OffFSELog,
							     MaxOff)];
		FSE_CTable matchlengthCTable[FSE_CTABLE_SIZE_U32(MLFSELog,
								 MaxML)];
		FSE_CTable litlengthCTable[FSE_CTABLE_SIZE_U32(LLFSELog,
							       MaxLL)];
		unsigned tmpCounters[HUF_COMPRESS_WORKSPACE_SIZE_U32];
	} cocci_id/* lib/zstd/compress.c 53 */;
	BYTE cocci_id/* lib/zstd/compress.c 470 */;
	BYTE *constcocci_id/* lib/zstd/compress.c 464 */;
	ZSTD_customMem cocci_id/* lib/zstd/compress.c 353 */;
	const ZSTD_CCtx *cocci_id/* lib/zstd/compress.c 348 */;
	const ZSTD_compressionParameters cocci_id/* lib/zstd/compress.c 3440 */;
	enum{ZSTDcs_created=0, ZSTDcs_init, ZSTDcs_ongoing, ZSTDcs_ending,} cocci_id/* lib/zstd/compress.c 33 */;
	const ZSTD_compressionParameters cocci_id/* lib/zstd/compress.c 3297 */[4][ZSTD_MAX_CLEVEL + 1];
	const char *cocci_id/* lib/zstd/compress.c 3228 */;
	ZSTD_outBuffer *cocci_id/* lib/zstd/compress.c 3223 */;
	ZSTD_inBuffer *cocci_id/* lib/zstd/compress.c 3223 */;
	ZSTD_CStream *cocci_id/* lib/zstd/compress.c 3223 */;
	seqDef *cocci_id/* lib/zstd/compress.c 318 */;
	ZSTD_optimal_t *cocci_id/* lib/zstd/compress.c 314 */;
	char *constcocci_id/* lib/zstd/compress.c 3135 */;
	const char *constcocci_id/* lib/zstd/compress.c 3132 */;
	const ZSTD_flush_e cocci_id/* lib/zstd/compress.c 3129 */;
	enum{zsf_gather, zsf_flush, zsf_end,} cocci_id/* lib/zstd/compress.c 3120 */;
	ZSTD_match_t *cocci_id/* lib/zstd/compress.c 312 */;
	ZSTD_CStream *constcocci_id/* lib/zstd/compress.c 3095 */;
	void cocci_id/* lib/zstd/compress.c 3023 */;
	ZSTD_CStream cocci_id/* lib/zstd/compress.c 2979 */;
	struct ZSTD_CStream_s {
		ZSTD_CCtx *cctx;
		ZSTD_CDict *cdictLocal;
		const ZSTD_CDict *cdict;
		char *inBuff;
		size_t inBuffSize;
		size_t inToCompress;
		size_t inBuffPos;
		size_t inBuffTarget;
		size_t blockSize;
		char *outBuff;
		size_t outBuffSize;
		size_t outBuffContentSize;
		size_t outBuffFlushedSize;
		ZSTD_cStreamStage stage;
		U32 checksum;
		U32 frameEnded;
		U64 pledgedSrcSize;
		U64 inputProcessed;
		ZSTD_parameters params;
		ZSTD_customMem customMem;
	} cocci_id/* lib/zstd/compress.c 2950 */;
	enum{zcss_init, zcss_load, zcss_flush, zcss_final,} cocci_id/* lib/zstd/compress.c 2948 */;
	const ZSTD_CDict *cocci_id/* lib/zstd/compress.c 2914 */;
	const ZSTD_customMem cocci_id/* lib/zstd/compress.c 2904 */;
	void *constcocci_id/* lib/zstd/compress.c 2866 */;
	HUF_CElt *cocci_id/* lib/zstd/compress.c 286 */;
	ZSTD_CCtx *constcocci_id/* lib/zstd/compress.c 2854 */;
	ZSTD_CDict *constcocci_id/* lib/zstd/compress.c 2853 */;
	ZSTD_CDict *cocci_id/* lib/zstd/compress.c 2847 */;
	ZSTD_CDict cocci_id/* lib/zstd/compress.c 2845 */;
	struct ZSTD_CDict_s {
		void *dictBuffer;
		const void *dictContent;
		size_t dictContentSize;
		ZSTD_CCtx *refContext;
	} cocci_id/* lib/zstd/compress.c 2838 */;
	const ZSTD_parameters cocci_id/* lib/zstd/compress.c 2756 */;
	ZSTD_parameters cocci_id/* lib/zstd/compress.c 2747 */;
	const void *cocci_id/* lib/zstd/compress.c 2747 */;
	const ZSTD_compResetPolicy_e cocci_id/* lib/zstd/compress.c 2740 */;
	short *cocci_id/* lib/zstd/compress.c 2605 */;
	void *cocci_id/* lib/zstd/compress.c 2546 */;
	ptrdiff_t cocci_id/* lib/zstd/compress.c 2523 */;
	const ptrdiff_t cocci_id/* lib/zstd/compress.c 2510 */;
	char *cocci_id/* lib/zstd/compress.c 2503 */;
	enum{ZSTDcrp_continue, ZSTDcrp_noMemset, ZSTDcrp_fullReset,} cocci_id/* lib/zstd/compress.c 238 */;
	const ZSTD_blockCompressor cocci_id/* lib/zstd/compress.c 2335 */;
	const ZSTD_blockCompressor cocci_id/* lib/zstd/compress.c 2324 */[2][8];
	ZSTD_blockCompressor cocci_id/* lib/zstd/compress.c 2322 */;
	void (*cocci_id/* lib/zstd/compress.c 2320 */)(ZSTD_CCtx *ctx,
						       const void *src,
						       size_t srcSize);
	const int cocci_id/* lib/zstd/compress.c 2139 */;
	searchMax_f cocci_id/* lib/zstd/compress.c 2078 */;
	size_t (*cocci_id/* lib/zstd/compress.c 2077 */)(ZSTD_CCtx *zc,
							 const BYTE *ip,
							 const BYTE *iLimit,
							 size_t *offsetPtr,
							 U32 maxNbAttempts,
							 U32 matchLengthSearch);
	const searchMax_f cocci_id/* lib/zstd/compress.c 1911 */;
	const U64 cocci_id/* lib/zstd/compress.c 188 */;
	int cocci_id/* lib/zstd/compress.c 1834 */;
	U32 *constcocci_id/* lib/zstd/compress.c 1823 */;
	unsigned long long cocci_id/* lib/zstd/compress.c 180 */;
	FORCE_INLINE

U32
 cocci_id/* lib/zstd/compress.c 1795 */;
	const BYTE *cocci_id/* lib/zstd/compress.c 1744 */;
	const U32 cocci_id/* lib/zstd/compress.c 1735 */;
	const BYTE *constcocci_id/* lib/zstd/compress.c 1735 */;
	ZSTD_CCtx *cocci_id/* lib/zstd/compress.c 1735 */;
	size_t *cocci_id/* lib/zstd/compress.c 1735 */;
	size_t cocci_id/* lib/zstd/compress.c 1735 */;
	ZSTD_strategy cocci_id/* lib/zstd/compress.c 168 */;
	seqStore_t *cocci_id/* lib/zstd/compress.c 1401 */;
	U32 *cocci_id/* lib/zstd/compress.c 1118 */;
	ZSTD_CCtx cocci_id/* lib/zstd/compress.c 106 */;
	U32 cocci_id/* lib/zstd/compress.c 100 */;
}
