cocci_test_suite() {
	const U32 cocci_id/* lib/zstd/decompress.c 951 */[MaxOff + 1];
	const U32 cocci_id/* lib/zstd/decompress.c 947 */[MaxML + 1];
	const U32 cocci_id/* lib/zstd/decompress.c 944 */[MaxLL + 1];
	seq_t cocci_id/* lib/zstd/decompress.c 931 */;
	seqState_t *cocci_id/* lib/zstd/decompress.c 931 */;
	struct {
		BIT_DStream_t DStream;
		FSE_DState_t stateLL;
		FSE_DState_t stateOffb;
		FSE_DState_t stateML;
		size_t prevOffset[ZSTD_REP_NUM];
		const BYTE *base;
		size_t pos;
		uPtrDiff gotoDict;
	} cocci_id/* lib/zstd/decompress.c 868 */;
	struct {
		size_t litLength;
		size_t matchLength;
		size_t offset;
		const BYTE *match;
	} cocci_id/* lib/zstd/decompress.c 861 */;
	int cocci_id/* lib/zstd/decompress.c 806 */;
	int *cocci_id/* lib/zstd/decompress.c 794 */;
	U32 *cocci_id/* lib/zstd/decompress.c 778 */;
	S16 cocci_id/* lib/zstd/decompress.c 774 */;
	S16 *cocci_id/* lib/zstd/decompress.c 773 */;
	struct ZSTD_DCtx_s {
		const FSE_DTable *LLTptr;
		const FSE_DTable *MLTptr;
		const FSE_DTable *OFTptr;
		const HUF_DTable *HUFptr;
		ZSTD_entropyTables_t entropy;
		const void *previousDstEnd;
		const void *base;
		const void *vBase;
		const void *dictEnd;
		size_t expected;
		ZSTD_frameParams fParams;
		blockType_e bType;
		ZSTD_dStage stage;
		U32 litEntropy;
		U32 fseEntropy;
		struct xxh64_state xxhState;
		size_t headerSize;
		U32 dictID;
		const BYTE *litPtr;
		ZSTD_customMem customMem;
		size_t litSize;
		size_t rleSize;
		BYTE litBuffer[ZSTD_BLOCKSIZE_ABSOLUTEMAX + WILDCOPY_OVERLENGTH];
		BYTE headerBuffer[ZSTD_FRAMEHEADERSIZE_MAX];
	} cocci_id/* lib/zstd/decompress.c 77 */;
	const FSE_DTable *cocci_id/* lib/zstd/decompress.c 765 */;
	const BYTE *cocci_id/* lib/zstd/decompress.c 760 */;
	const void *constcocci_id/* lib/zstd/decompress.c 755 */;
	const FSE_decode_t4 *cocci_id/* lib/zstd/decompress.c 753 */;
	void *cocci_id/* lib/zstd/decompress.c 753 */;
	symbolEncodingType_e cocci_id/* lib/zstd/decompress.c 752 */;
	U32 cocci_id/* lib/zstd/decompress.c 752 */;
	FSE_DTable *cocci_id/* lib/zstd/decompress.c 752 */;
	const FSE_DTable **cocci_id/* lib/zstd/decompress.c 752 */;
	const FSE_decode_t4 cocci_id/* lib/zstd/decompress.c 712 */[(1 << OF_DEFAULTNORMLOG) + 1];
	struct {
		FSE_DTable LLTable[FSE_DTABLE_SIZE_U32(LLFSELog)];
		FSE_DTable OFTable[FSE_DTABLE_SIZE_U32(OffFSELog)];
		FSE_DTable MLTable[FSE_DTABLE_SIZE_U32(MLFSELog)];
		HUF_DTable hufTable[HUF_DTABLE_SIZE(HufLog)];
		U64 workspace[HUF_DECOMPRESS_WORKSPACE_SIZE_U32 / 2];
		U32 rep[ZSTD_REP_NUM];
	} cocci_id/* lib/zstd/decompress.c 68 */;
	const FSE_decode_t4 cocci_id/* lib/zstd/decompress.c 644 */[(1 << ML_DEFAULTNORMLOG) + 1];
	const FSE_decode_t4 cocci_id/* lib/zstd/decompress.c 576 */[(1 << LL_DEFAULTNORMLOG) + 1];
	union {
		FSE_decode_t realData;
		U32 alignedBy4;
	} cocci_id/* lib/zstd/decompress.c 571 */;
	enum{ZSTDds_getFrameHeaderSize, ZSTDds_decodeFrameHeader, ZSTDds_decodeBlockHeader, ZSTDds_decompressBlock, ZSTDds_decompressLastBlock, ZSTDds_checkChecksum, ZSTDds_decodeSkippableHeader, ZSTDds_skipFrame,} cocci_id/* lib/zstd/decompress.c 57 */;
	const U32 cocci_id/* lib/zstd/decompress.c 452 */;
	const symbolEncodingType_e cocci_id/* lib/zstd/decompress.c 439 */;
	const BYTE *constcocci_id/* lib/zstd/decompress.c 438 */;
	blockType_e cocci_id/* lib/zstd/decompress.c 402 */;
	blockProperties_t *cocci_id/* lib/zstd/decompress.c 394 */;
	struct {
		blockType_e blockType;
		U32 lastBlock;
		U32 origSize;
	} cocci_id/* lib/zstd/decompress.c 386 */;
	const unsigned long long cocci_id/* lib/zstd/decompress.c 341 */;
	unsigned long long cocci_id/* lib/zstd/decompress.c 319 */;
	U64 cocci_id/* lib/zstd/decompress.c 2335 */;
	char *constcocci_id/* lib/zstd/decompress.c 2303 */;
	const char *constcocci_id/* lib/zstd/decompress.c 2300 */;
	ZSTD_outBuffer *cocci_id/* lib/zstd/decompress.c 2298 */;
	ZSTD_inBuffer *cocci_id/* lib/zstd/decompress.c 2298 */;
	ZSTD_DStream *cocci_id/* lib/zstd/decompress.c 2192 */;
	ZSTD_DStream cocci_id/* lib/zstd/decompress.c 2189 */;
	const size_t cocci_id/* lib/zstd/decompress.c 2186 */;
	struct ZSTD_DStream_s {
		ZSTD_DCtx *dctx;
		ZSTD_DDict *ddictLocal;
		const ZSTD_DDict *ddict;
		ZSTD_frameParams fParams;
		ZSTD_dStreamStage stage;
		char *inBuff;
		size_t inBuffSize;
		size_t inPos;
		size_t maxWindowSize;
		char *outBuff;
		size_t outBuffSize;
		size_t outStart;
		size_t outEnd;
		size_t blockSize;
		BYTE headerBuffer[ZSTD_FRAMEHEADERSIZE_MAX];
		size_t lhSize;
		ZSTD_customMem customMem;
		void *legacyContext;
		U32 previousLegacyVersion;
		U32 legacyVersion;
		U32 hostageByte;
	} cocci_id/* lib/zstd/decompress.c 2160 */;
	enum{zdss_init, zdss_loadHeader, zdss_read, zdss_load, zdss_flush,} cocci_id/* lib/zstd/decompress.c 2157 */;
	const ZSTD_customMem cocci_id/* lib/zstd/decompress.c 2094 */;
	ZSTD_frameParams *cocci_id/* lib/zstd/decompress.c 207 */;
	HUF_DTable cocci_id/* lib/zstd/decompress.c 2065 */;
	void *constcocci_id/* lib/zstd/decompress.c 2055 */;
	ZSTD_DDict *constcocci_id/* lib/zstd/decompress.c 2046 */;
	ZSTD_DDict *cocci_id/* lib/zstd/decompress.c 2040 */;
	unsigned cocci_id/* lib/zstd/decompress.c 2040 */;
	const ZSTD_DDict *cocci_id/* lib/zstd/decompress.c 1991 */;
	const void *cocci_id/* lib/zstd/decompress.c 1991 */;
	ZSTD_DDict cocci_id/* lib/zstd/decompress.c 1989 */;
	struct ZSTD_DDict_s {
		void *dictBuffer;
		const void *dictContent;
		size_t dictSize;
		ZSTD_entropyTables_t entropy;
		U32 dictID;
		U32 entropyPresent;
		ZSTD_customMem cMem;
	} cocci_id/* lib/zstd/decompress.c 1979 */;
	const BYTE cocci_id/* lib/zstd/decompress.c 194 */;
	short cocci_id/* lib/zstd/decompress.c 1915 */[MaxLL + 1];
	short cocci_id/* lib/zstd/decompress.c 1903 */[MaxML + 1];
	short cocci_id/* lib/zstd/decompress.c 1891 */[MaxOff + 1];
	ZSTD_entropyTables_t *cocci_id/* lib/zstd/decompress.c 1874 */;
	blockProperties_t cocci_id/* lib/zstd/decompress.c 1781 */;
	ZSTD_nextInputType_e cocci_id/* lib/zstd/decompress.c 1723 */;
	size_t cocci_id/* lib/zstd/decompress.c 1641 */(const ZSTD_DDict *ddict);
	const void *cocci_id/* lib/zstd/decompress.c 1640 */(const ZSTD_DDict *ddict);
	void cocci_id/* lib/zstd/decompress.c 161 */(ZSTD_DCtx *dstDCtx,
						     const ZSTD_DDict *ddict);
	BYTE *cocci_id/* lib/zstd/decompress.c 1571 */;
	BYTE *constcocci_id/* lib/zstd/decompress.c 1569 */;
	const void **cocci_id/* lib/zstd/decompress.c 1566 */;
	size_t *cocci_id/* lib/zstd/decompress.c 1566 */;
	const ZSTD_DCtx *cocci_id/* lib/zstd/decompress.c 155 */;
	ZSTD_frameParams cocci_id/* lib/zstd/decompress.c 1518 */;
	BYTE cocci_id/* lib/zstd/decompress.c 1497 */;
	char *cocci_id/* lib/zstd/decompress.c 1484 */;
	const char *cocci_id/* lib/zstd/decompress.c 1473 */;
	ZSTD_DCtx *cocci_id/* lib/zstd/decompress.c 1469 */;
	uPtrDiff cocci_id/* lib/zstd/decompress.c 1389 */;
	seq_t *cocci_id/* lib/zstd/decompress.c 1376 */;
	ZSTD_customMem cocci_id/* lib/zstd/decompress.c 126 */;
	const unsigned cocci_id/* lib/zstd/decompress.c 1253 */;
	const int cocci_id/* lib/zstd/decompress.c 1163 */;
	FORCE_INLINE
seq_t
 cocci_id/* lib/zstd/decompress.c 1163 */;
	const seq_t cocci_id/* lib/zstd/decompress.c 1132 */;
	seqState_t cocci_id/* lib/zstd/decompress.c 1117 */;
	ptrdiff_t cocci_id/* lib/zstd/decompress.c 1088 */;
	const int cocci_id/* lib/zstd/decompress.c 1064 */[];
	const U32 cocci_id/* lib/zstd/decompress.c 1063 */[];
	ZSTD_DCtx cocci_id/* lib/zstd/decompress.c 104 */;
	size_t cocci_id/* lib/zstd/decompress.c 104 */;
	void cocci_id/* lib/zstd/decompress.c 104 */;
	const BYTE **cocci_id/* lib/zstd/decompress.c 1007 */;
}
