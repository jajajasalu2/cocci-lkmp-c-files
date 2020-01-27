cocci_test_suite() {
	struct nvkm_msgqueue *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 999 */;
	const struct acr_r352_ls_func *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 939 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 907 */;
	const struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 906 */;
	struct nvkm_secboot *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 904 */;
	struct acr_r352 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 904 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 903 */;
	const struct nvkm_device *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 880 */;
	const struct ls_ucode_img_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 81 */;
	struct acr_r352_flcn_bl_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 80 */;
	u8 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 791 */;
	struct fw_bl_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 788 */;
	struct fw_bin_header *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 787 */;
	const u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 785 */;
	struct nvkm_falcon *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 781 */;
	const struct ls_ucode_img *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 77 */;
	const struct nvkm_acr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 76 */;
	struct nvkm_subdev *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 717 */;
	struct hsf_fw_header *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 660 */;
	struct hsf_load_header *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 655 */;
	const char *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 654 */;
	struct nvkm_gpuobj **cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 654 */;
	const struct hsf_load_header *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 623 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 605 */;
	struct nvkm_gpuobj *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 601 */;
	struct hsflcn_acr_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 600 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 598 */;
	struct acr_r352_flcn_bl_desc {
		u32 reserved[4];
		u32 signature[4];
		u32 ctx_dma;
		u32 code_dma_base;
		u32 non_sec_code_off;
		u32 non_sec_code_size;
		u32 sec_code_off;
		u32 sec_code_size;
		u32 code_entry_point;
		u32 data_dma_base;
		u32 data_size;
		u32 code_dma_base1;
		u32 data_dma_base1;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 56 */;
	struct list_head cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 484 */;
	struct ls_ucode_img_r352 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 383 */;
	struct list_head *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 381 */;
	const struct acr_r352_lsf_func *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 309 */;
	struct ls_ucode_img_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 308 */;
	struct acr_r352_lsf_lsb_header *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 307 */;
	struct acr_r352_lsf_wpr_header *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 306 */;
	struct ls_ucode_img *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 305 */;
	enum nvkm_secboot_falcon cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 245 */;
	const struct nvkm_secboot *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 244 */;
	const struct acr_r352 *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 243 */;
	struct ls_ucode_img_r352 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 237 */;
	struct ls_ucode_img_r352 {
		struct ls_ucode_img base;
		const struct acr_r352_lsf_func *func;
		struct acr_r352_lsf_wpr_header wpr_header;
		struct acr_r352_lsf_lsb_header lsb_header;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 229 */;
	struct acr_r352_lsf_wpr_header {
		u32 falcon_id;
		u32 lsb_offset;
		u32 bootstrap_owner;
		u32 lazy_bootstrap;
		u32 status;
#define LSF_IMAGE_STATUS_NONE 0
#define LSF_IMAGE_STATUS_COPY 1
#define LSF_IMAGE_STATUS_VALIDATION_CODE_FAILED 2
#define LSF_IMAGE_STATUS_VALIDATION_DATA_FAILED 3
#define LSF_IMAGE_STATUS_VALIDATION_DONE 4
#define LSF_IMAGE_STATUS_VALIDATION_SKIPPED 5
#define LSF_IMAGE_STATUS_BOOTSTRAP_READY 6
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 211 */;
	struct acr_r352_lsf_lsb_header {
		struct {
			u8 prd_keys[2][16];
			u8 dbg_keys[2][16];
			u32 b_prd_present;
			u32 b_dbg_present;
			u32 falcon_id;
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
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 169 */;
	const struct acr_r352_func *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1211 */;
	const struct nvkm_acr_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1202 */;
	struct acr_r352_flcn_bl_desc cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1191 */;
	const struct acr_r352_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1187 */;
	struct acr_r352_pmu_bl_desc cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1174 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1148 */;
	struct acr_r352_pmu_bl_desc *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1144 */;
	const struct nvkm_pmu *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1143 */;
	struct hsflcn_acr_desc {
		union {
			u8 reserved_dmem[0x200];
			u32 signatures[4];
		} ucode_reserved_space;
		u32 wpr_region_id;
		u32 wpr_offset;
		u32 mmu_mem_range;
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
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 112 */;
	struct acr_r352_pmu_bl_desc {
		u32 dma_idx;
		u32 code_dma_base;
		u32 code_size_total;
		u32 code_size_to_load;
		u32 code_entry_point;
		u32 data_dma_base;
		u32 data_size;
		u32 overlay_dma_base;
		u32 argc;
		u32 argv;
		u16 code_dma_base1;
		u16 data_dma_base1;
		u16 overlay_dma_base1;
	} cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1117 */;
	const struct acr_r352_ls_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1074 */;
	const struct acr_r352_lsf_func cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1068 */;
	struct nvkm_acr *cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1053 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1052 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/nvkm/subdev/secboot/acr_r352.c 1045 */;
}
