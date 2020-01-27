cocci_test_suite() {
	void (*cocci_id/* arch/arm/mm/dma-mapping.c 889 */)(const void *,
							    size_t, int);
	struct sg_table *cocci_id/* arch/arm/mm/dma-mapping.c 865 */;
	struct arm_dma_free_args cocci_id/* arch/arm/mm/dma-mapping.c 837 */;
	struct arm_dma_buffer *cocci_id/* arch/arm/mm/dma-mapping.c 836 */;
	void cocci_id/* arch/arm/mm/dma-mapping.c 831 */;
	struct vm_area_struct *cocci_id/* arch/arm/mm/dma-mapping.c 787 */;
	struct arm_dma_buffer {
		struct list_head list;
		void *virt;
		struct arm_dma_allocator *allocator;
	} cocci_id/* arch/arm/mm/dma-mapping.c 71 */;
	struct arm_dma_alloc_args cocci_id/* arch/arm/mm/dma-mapping.c 696 */;
	u64 cocci_id/* arch/arm/mm/dma-mapping.c 691 */;
	struct arm_dma_allocator {
		void *(*alloc)(struct arm_dma_alloc_args *args,
			       struct page **ret_page);
		void (*free)(struct arm_dma_free_args *args);
	} cocci_id/* arch/arm/mm/dma-mapping.c 65 */;
	struct arm_dma_allocator cocci_id/* arch/arm/mm/dma-mapping.c 645 */;
	struct arm_dma_free_args *cocci_id/* arch/arm/mm/dma-mapping.c 639 */;
	struct arm_dma_alloc_args *cocci_id/* arch/arm/mm/dma-mapping.c 630 */;
	struct page *cocci_id/* arch/arm/mm/dma-mapping.c 552 */;
	unsigned long cocci_id/* arch/arm/mm/dma-mapping.c 550 */;
	gfp_t cocci_id/* arch/arm/mm/dma-mapping.c 548 */;
	int cocci_id/* arch/arm/mm/dma-mapping.c 548 */;
	bool cocci_id/* arch/arm/mm/dma-mapping.c 547 */;
	const void *cocci_id/* arch/arm/mm/dma-mapping.c 547 */;
	pgprot_t cocci_id/* arch/arm/mm/dma-mapping.c 546 */;
	struct page **cocci_id/* arch/arm/mm/dma-mapping.c 546 */;
	struct device *cocci_id/* arch/arm/mm/dma-mapping.c 545 */;
	void *cocci_id/* arch/arm/mm/dma-mapping.c 545 */;
	size_t cocci_id/* arch/arm/mm/dma-mapping.c 545 */;
	struct arm_dma_free_args {
		struct device *dev;
		size_t size;
		void *cpu_addr;
		struct page *page;
		bool want_vaddr;
	} cocci_id/* arch/arm/mm/dma-mapping.c 54 */;
	phys_addr_t cocci_id/* arch/arm/mm/dma-mapping.c 521 */;
	unsigned cocci_id/* arch/arm/mm/dma-mapping.c 476 */;
	pgprot_t *cocci_id/* arch/arm/mm/dma-mapping.c 467 */;
	pte_t *cocci_id/* arch/arm/mm/dma-mapping.c 464 */;
	struct arm_dma_alloc_args {
		struct device *dev;
		size_t size;
		gfp_t gfp;
		pgprot_t prot;
		const void *caller;
		bool want_vaddr;
		int coherent_flag;
	} cocci_id/* arch/arm/mm/dma-mapping.c 44 */;
	struct map_desc cocci_id/* arch/arm/mm/dma-mapping.c 431 */;
	void __init cocci_id/* arch/arm/mm/dma-mapping.c 418 */;
	struct dma_contig_early_reserve cocci_id/* arch/arm/mm/dma-mapping.c 414 */[MAX_CMA_AREAS]__initdata;
	struct dma_contig_early_reserve {
		phys_addr_t base;
		unsigned long size;
	} cocci_id/* arch/arm/mm/dma-mapping.c 409 */;
	int __init cocci_id/* arch/arm/mm/dma-mapping.c 358 */;
	char *cocci_id/* arch/arm/mm/dma-mapping.c 348 */;
	struct gen_pool *cocci_id/* arch/arm/mm/dma-mapping.c 344 */;
	void *cocci_id/* arch/arm/mm/dma-mapping.c 339 */(struct device *dev,
							  size_t size,
							  gfp_t gfp,
							  pgprot_t prot,
							  struct page **ret_page,
							  const void *caller,
							  bool want_vaddr);
	void *cocci_id/* arch/arm/mm/dma-mapping.c 334 */(struct device *dev,
							  size_t size,
							  pgprot_t prot,
							  struct page **ret_page,
							  const void *caller,
							  bool want_vaddr,
							  int coherent_flag,
							  gfp_t gfp);
	const struct dma_map_ops *cocci_id/* arch/arm/mm/dma-mapping.c 2299 */;
	const struct iommu_ops *cocci_id/* arch/arm/mm/dma-mapping.c 2297 */;
	struct kref *cocci_id/* arch/arm/mm/dma-mapping.c 2134 */;
	unsigned long *cocci_id/* arch/arm/mm/dma-mapping.c 2101 */;
	struct dma_iommu_mapping cocci_id/* arch/arm/mm/dma-mapping.c 2096 */;
	const struct dma_map_ops cocci_id/* arch/arm/mm/dma-mapping.c 209 */;
	long cocci_id/* arch/arm/mm/dma-mapping.c 2079 */;
	struct bus_type *cocci_id/* arch/arm/mm/dma-mapping.c 2076 */;
	int cocci_id/* arch/arm/mm/dma-mapping.c 205 */(struct device *dev,
							struct vm_area_struct *vma,
							void *cpu_addr,
							dma_addr_t dma_addr,
							size_t size,
							unsigned long attrs);
	void cocci_id/* arch/arm/mm/dma-mapping.c 203 */(struct device *dev,
							 size_t size,
							 void *cpu_addr,
							 dma_addr_t handle,
							 unsigned long attrs);
	void *cocci_id/* arch/arm/mm/dma-mapping.c 201 */(struct device *dev,
							  size_t size,
							  dma_addr_t *handle,
							  gfp_t gfp,
							  unsigned long attrs);
	struct scatterlist *cocci_id/* arch/arm/mm/dma-mapping.c 1659 */;
	dma_addr_t *cocci_id/* arch/arm/mm/dma-mapping.c 1462 */;
	const int cocci_id/* arch/arm/mm/dma-mapping.c 1234 */[];
	u32 cocci_id/* arch/arm/mm/dma-mapping.c 1205 */;
	unsigned int cocci_id/* arch/arm/mm/dma-mapping.c 1143 */;
	dma_addr_t cocci_id/* arch/arm/mm/dma-mapping.c 1140 */;
	struct dma_iommu_mapping *cocci_id/* arch/arm/mm/dma-mapping.c 1140 */;
	int cocci_id/* arch/arm/mm/dma-mapping.c 1138 */(struct dma_iommu_mapping *mapping);
	enum dma_data_direction cocci_id/* arch/arm/mm/dma-mapping.c 1117 */;
	void cocci_id/* arch/arm/mm/dma-mapping.c 109 */(struct page *,
							 unsigned long,
							 size_t,
							 enum dma_data_direction);
}
