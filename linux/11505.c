cocci_test_suite() {
	struct nouveau_dmem cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 84 */;
	struct nouveau_dmem {
		struct nouveau_drm *drm;
		struct dev_pagemap pagemap;
		struct nouveau_dmem_migrate migrate;
		struct list_head chunk_free;
		struct list_head chunk_full;
		struct list_head chunk_empty;
		struct mutex mutex;
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 72 */;
	uint64_t cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 687 */;
	struct page *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 686 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 682 */;
	struct hmm_range *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 680 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 678 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 672 */;
	struct nouveau_dmem_migrate {
		nouveau_migrate_copy_t copy_func;
		struct nouveau_channel *chan;
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 67 */;
	struct vm_area_struct *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 624 */;
	struct nouveau_fence *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 596 */;
	struct nouveau_dmem_chunk {
		struct list_head list;
		struct nouveau_bo *bo;
		struct nouveau_drm *drm;
		unsigned long pfn_first;
		unsigned long callocated;
		unsigned long bitmap[BITS_TO_LONGS(DMEM_CHUNK_NPAGES)];
		spinlock_t lock;
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 57 */;
	int (*cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 53 */)(struct nouveau_drm *drm,
								       u64 npages,
								       enum nouveau_aper,
								       u64 dst_addr,
								       enum nouveau_aper,
								       u64 src_addr);
	struct resource *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 493 */;
	enum nouveau_aper{NOUVEAU_APER_VIRT, NOUVEAU_APER_VRAM, NOUVEAU_APER_HOST,} cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 47 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 419 */;
	struct nouveau_channel *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 418 */;
	enum nouveau_aper cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 415 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 414 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 325 */[1];
	unsigned long *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 279 */;
	struct nouveau_dmem_chunk cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 220 */;
	struct nouveau_dmem_chunk *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 212 */;
	struct nouveau_drm *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 210 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 209 */;
	const struct dev_pagemap_ops cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 204 */;
	struct migrate_vma cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 173 */;
	dma_addr_t cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 171 */;
	struct nouveau_dmem *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 167 */;
	struct device *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 135 */;
	dma_addr_t *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 133 */;
	struct vm_fault *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 132 */;
	struct migrate_vma *cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 132 */;
	vm_fault_t cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 131 */;
	struct nouveau_fence **cocci_id/* drivers/gpu/drm/nouveau/nouveau_dmem.c 118 */;
}
