cocci_test_suite() {
	const struct acr_r352_ls_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 75 */;
	const struct acr_r352_lsf_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 69 */;
	const struct hsf_load_header *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 53 */;
	const struct ls_ucode_img_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 36 */;
	struct acr_r361_flcn_bl_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 35 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 33 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 32 */;
	const struct ls_ucode_img *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 32 */;
	const struct nvkm_acr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 31 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 30 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 225 */;
	struct nvkm_acr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 224 */;
	struct acr_r361_flcn_bl_desc cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 212 */;
	const struct acr_r352_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 208 */;
	const struct nvkm_sec2 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 166 */;
	struct acr_r361_pmu_bl_desc cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 147 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 124 */;
	struct acr_r361_pmu_bl_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 122 */;
	const struct nvkm_pmu *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 121 */;
	struct acr_r361_pmu_bl_desc {
		u32 reserved;
		u32 dma_idx;
		struct flcn_u64 code_dma_base;
		u32 total_code_size;
		u32 code_size_to_load;
		u32 code_entry_point;
		struct flcn_u64 data_dma_base;
		u32 data_size;
		struct flcn_u64 overlay_dma_base;
		u32 argc;
		u32 argv;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r361.c 101 */;
}
