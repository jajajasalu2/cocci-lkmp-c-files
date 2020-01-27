cocci_test_suite() {
	struct map {
		u64 total;
		u64 vas_id;
		u64 htab_size;
		struct mem_region rm;
		struct mem_region r1;
	} cocci_id/* arch/powerpc/platforms/ps3/mm.c 97 */;
	dma_addr_t cocci_id/* arch/powerpc/platforms/ps3/mm.c 919 */;
	u64 cocci_id/* arch/powerpc/platforms/ps3/mm.c 826 */;
	dma_addr_t *cocci_id/* arch/powerpc/platforms/ps3/mm.c 825 */;
	struct mem_region {
		u64 base;
		u64 size;
		unsigned long offset;
		int destroy;
	} cocci_id/* arch/powerpc/platforms/ps3/mm.c 72 */;
	struct dma_chunk cocci_id/* arch/powerpc/platforms/ps3/mm.c 576 */;
	struct dma_chunk **cocci_id/* arch/powerpc/platforms/ps3/mm.c 550 */;
	enum{HTAB_SIZE_MAX=20U, HTAB_SIZE_MIN=18U,} cocci_id/* arch/powerpc/platforms/ps3/mm.c 55 */;
	enum{ALLOCATE_MEMORY_TRY_ALT_UNIT=0X04, ALLOCATE_MEMORY_ADDR_ZERO=0X08,} cocci_id/* arch/powerpc/platforms/ps3/mm.c 48 */;
	unsigned long cocci_id/* arch/powerpc/platforms/ps3/mm.c 394 */;
	struct ps3_dma_region *cocci_id/* arch/powerpc/platforms/ps3/mm.c 393 */;
	struct dma_chunk *cocci_id/* arch/powerpc/platforms/ps3/mm.c 393 */;
	const struct dma_chunk *cocci_id/* arch/powerpc/platforms/ps3/mm.c 379 */;
	void cocci_id/* arch/powerpc/platforms/ps3/mm.c 379 */;
	enum{PAGE_SHIFT_4K=12U, PAGE_SHIFT_64K=16U, PAGE_SHIFT_16M=24U,} cocci_id/* arch/powerpc/platforms/ps3/mm.c 37 */;
	struct dma_chunk {
		struct ps3_dma_region *region;
		unsigned long lpar_addr;
		unsigned long bus_addr;
		unsigned long len;
		struct list_head link;
		unsigned int usage_count;
	} cocci_id/* arch/powerpc/platforms/ps3/mm.c 369 */;
	const struct ps3_dma_region *cocci_id/* arch/powerpc/platforms/ps3/mm.c 344 */;
	enum{

#if defined(CONFIG_PS3_DYNAMIC_DMA)
USE_DYNAMIC_DMA=1,

#else

	USE_DYNAMIC_DMA=0,

#endif
} cocci_id/* arch/powerpc/platforms/ps3/mm.c 29 */;
	const struct mem_region *cocci_id/* arch/powerpc/platforms/ps3/mm.c 244 */;
	struct mem_region *cocci_id/* arch/powerpc/platforms/ps3/mm.c 214 */;
	unsigned long *cocci_id/* arch/powerpc/platforms/ps3/mm.c 138 */;
	void __init cocci_id/* arch/powerpc/platforms/ps3/mm.c 1186 */;
	struct map cocci_id/* arch/powerpc/platforms/ps3/mm.c 118 */;
	enum ps3_dma_region_type cocci_id/* arch/powerpc/platforms/ps3/mm.c 1116 */;
	void *cocci_id/* arch/powerpc/platforms/ps3/mm.c 1116 */;
	enum ps3_dma_page_size cocci_id/* arch/powerpc/platforms/ps3/mm.c 1115 */;
	struct ps3_system_bus_device *cocci_id/* arch/powerpc/platforms/ps3/mm.c 1114 */;
	const struct ps3_dma_region_ops cocci_id/* arch/powerpc/platforms/ps3/mm.c 1107 */;
	const char *cocci_id/* arch/powerpc/platforms/ps3/mm.c 107 */;
	int cocci_id/* arch/powerpc/platforms/ps3/mm.c 107 */;
	const struct map *cocci_id/* arch/powerpc/platforms/ps3/mm.c 106 */;
	void __maybe_unused cocci_id/* arch/powerpc/platforms/ps3/mm.c 106 */;
}
