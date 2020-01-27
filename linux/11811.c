cocci_test_suite() {
	union {
		struct nvif_vmm_pfnmap_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 78 */;
	union {
		struct nvif_vmm_pfnclr_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 49 */;
	union {
		struct nvif_vmm_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 377 */;
	const bool cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 376 */;
	struct nvkm_mmu *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 375 */;
	struct nvkm_object **cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 373 */;
	const struct nvkm_oclass *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 372 */;
	struct nvkm_uvmm *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 360 */;
	struct nvkm_object *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 358 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 357 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 333 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 332 */;
	const struct nvkm_object_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 32 */;
	const struct nvkm_vmm_page *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 310 */;
	union {
		struct nvif_vmm_page_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 307 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 280 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 279 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 278 */;
	struct nvkm_vma *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 276 */;
	struct nvkm_vmm *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 275 */;
	union {
		struct nvif_vmm_get_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 272 */;
	struct nvkm_client *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 271 */;
	union {
		struct nvif_vmm_put_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 234 */;
	struct nvkm_memory *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 161 */;
	union {
		struct nvif_vmm_map_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 155 */;
	union {
		struct nvif_vmm_unmap_v0 v0;
	} *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/mmu/uvmm.c 112 */;
}
