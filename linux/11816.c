cocci_test_suite() {
	const struct nvkm_memory_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 99 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 82 */;
	struct nvkm_vmm_map cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 74 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 71 */;
	struct nvkm_vma *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 71 */;
	struct nvkm_vmm *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 70 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 69 */;
	struct nvkm_mem *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 57 */;
	struct nvkm_memory *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 55 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 54 */;
	struct nvkm_mem {
		struct nvkm_memory memory;
		enum nvkm_memory_target target;
		struct nvkm_mmu *mmu;
		u64 pages;
		struct page **mem;
		union {
			struct scatterlist *sgl;
			dma_addr_t *dma;
		};
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 30 */;
	struct nvkm_mem cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 22 */;
	struct page *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 205 */;
	gfp_t cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 155 */;
	enum nvkm_memory_target cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 153 */;
	union {
		struct nvif_mem_ram_vn vn;
		struct nvif_mem_ram_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 148 */;
	struct device *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 147 */;
	struct nvkm_memory **cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 145 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 144 */;
	struct nvkm_mmu *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 144 */;
	void **cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/mem.c 133 */;
}
