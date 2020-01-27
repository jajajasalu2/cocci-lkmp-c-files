cocci_test_suite() {
	const struct acr_r352_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 96 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 71 */;
	struct nvkm_gpuobj *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 67 */;
	struct acr_r364_hsflcn_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 66 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 64 */;
	struct nvkm_secboot *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 63 */;
	struct acr_r352 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 63 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 62 */;
	struct acr_r364_hsflcn_desc {
		union {
			u8 reserved_dmem[0x200];
			u32 signatures[4];
		} ucode_reserved_space;
		u32 wpr_region_id;
		u32 wpr_offset;
		u32 mmu_memory_range;
		struct {
			u32 no_regions;
			struct {
				u32 start_addr;
				u32 end_addr;
				u32 region_id;
				u32 read_mask;
				u32 write_mask;
				u32 client_mask;
				u32 shadow_mem_start_addr;
			} region_props[2];
		} regions;
		u32 ucode_blob_size;
		u64 ucode_blob_base __aligned(8);
		struct {
			u32 vpr_enabled;
			u32 vpr_start;
			u32 vpr_end;
			u32 hdcp_policies;
		} vpr_desc;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 32 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 113 */;
	struct nvkm_acr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 112 */;
	struct acr_r361_flcn_bl_desc cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r364.c 100 */;
}
