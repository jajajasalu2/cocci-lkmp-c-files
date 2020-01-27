cocci_test_suite() {
	struct acr_r367_lsf_wpr_header {
		u32 falcon_id;
		u32 lsb_offset;
		u32 bootstrap_owner;
		u32 lazy_bootstrap;
		u32 bin_version;
		u32 status;
#define LSF_IMAGE_STATUS_NONE 0
#define LSF_IMAGE_STATUS_COPY 1
#define LSF_IMAGE_STATUS_VALIDATION_CODE_FAILED 2
#define LSF_IMAGE_STATUS_VALIDATION_DATA_FAILED 3
#define LSF_IMAGE_STATUS_VALIDATION_DONE 4
#define LSF_IMAGE_STATUS_VALIDATION_SKIPPED 5
#define LSF_IMAGE_STATUS_BOOTSTRAP_READY 6
#define LSF_IMAGE_STATUS_REVOCATION_CHECK_FAILED 7
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 81 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 415 */;
	struct nvkm_acr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 413 */;
	struct acr_r367_lsf_lsb_header {
		struct {
			u8 prd_keys[2][16];
			u8 dbg_keys[2][16];
			u32 b_prd_present;
			u32 b_dbg_present;
			u32 falcon_id;
			u32 supports_versioning;
			u32 version;
			u32 depmap_count;
			u8 depmap[LSF_LSB_DEPMAP_SIZE * 2 * 4];
			u8 kdf[16];
		} signature;
		u32 ucode_off;
		u32 ucode_size;
		u32 data_size;
		u32 bl_code_size;
		u32 bl_imem_off;
		u32 bl_data_off;
		u32 bl_data_size;
		u32 app_code_off;
		u32 app_code_size;
		u32 app_data_off;
		u32 app_data_size;
		u32 flags;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 41 */;
	struct acr_r361_flcn_bl_desc cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 400 */;
	const struct acr_r352_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 396 */;
	const struct acr_r352_ls_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 385 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 360 */;
	struct nvkm_gpuobj *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 356 */;
	struct acr_r367_hsflcn_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 355 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 353 */;
	struct nvkm_secboot *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 352 */;
	struct acr_r352 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 352 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 351 */;
	struct acr_r367_hsflcn_desc {
		u8 reserved_dmem[0x200];
		u32 signatures[4];
		u32 wpr_region_id;
		u32 wpr_offset;
		u32 mmu_memory_range;
#define FLCN_ACR_MAX_REGIONS 2
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
			} region_props[FLCN_ACR_MAX_REGIONS];
		} regions;
		u32 ucode_blob_size;
		u64 ucode_blob_base __aligned(8);
		struct {
			u32 vpr_enabled;
			u32 vpr_start;
			u32 vpr_end;
			u32 hdcp_policies;
		} vpr_desc;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 322 */;
	u8 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 274 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 241 */;
	struct ls_ucode_img_r367 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 239 */;
	struct list_head *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 237 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 236 */;
	const struct acr_r352_lsf_func *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 167 */;
	struct ls_ucode_img_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 166 */;
	struct acr_r367_lsf_lsb_header *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 165 */;
	struct acr_r367_lsf_wpr_header *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 164 */;
	struct ls_ucode_img *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 163 */;
	const struct acr_r352_ls_func *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 117 */;
	const struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 116 */;
	enum nvkm_secboot_falcon cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 114 */;
	const struct nvkm_secboot *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 113 */;
	const struct acr_r352 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 112 */;
	struct ls_ucode_img_r367 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 109 */;
	struct ls_ucode_img_r367 {
		struct ls_ucode_img base;
		const struct acr_r352_lsf_func *func;
		struct acr_r367_lsf_wpr_header wpr_header;
		struct acr_r367_lsf_lsb_header lsb_header;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r367.c 101 */;
}
