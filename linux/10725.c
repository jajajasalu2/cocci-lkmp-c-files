cocci_test_suite() {
	struct intel_css_header {
		u32 module_type;
		u32 header_len;
		u32 header_ver;
		u32 module_id;
		u32 module_vendor;
		u32 date;
		u32 size;
		u32 key_size;
		u32 modulus_size;
		u32 exponent_size;
		u32 reserved1[12];
		u32 version;
		u32 reserved2[8];
		u32 kernel_header_info;
	}__packed cocci_id/* drivers/gpu/drm/i915/intel_csr.c 83 */;
	typeof(*dev_priv) cocci_id/* drivers/gpu/drm/i915/intel_csr.c 629 */;
	const struct firmware *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 627 */;
	struct intel_csr *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 626 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 625 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 623 */;
	void cocci_id/* drivers/gpu/drm/i915/intel_csr.c 623 */;
	intel_wakeref_t cocci_id/* drivers/gpu/drm/i915/intel_csr.c 617 */;
	struct intel_dmc_header_base *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 578 */;
	struct intel_package_header *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 577 */;
	struct intel_css_header *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 576 */;
	struct intel_css_header cocci_id/* drivers/gpu/drm/i915/intel_csr.c 544 */;
	size_t cocci_id/* drivers/gpu/drm/i915/intel_csr.c 542 */;
	struct intel_fw_info cocci_id/* drivers/gpu/drm/i915/intel_csr.c 507 */;
	struct intel_package_header cocci_id/* drivers/gpu/drm/i915/intel_csr.c 486 */;
	const struct intel_package_header *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 482 */;
	struct intel_dmc_header_v1 cocci_id/* drivers/gpu/drm/i915/intel_csr.c 412 */;
	const struct intel_dmc_header_v1 *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 409 */;
	struct intel_dmc_header_v3 cocci_id/* drivers/gpu/drm/i915/intel_csr.c 398 */;
	const struct intel_dmc_header_v3 *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 395 */;
	struct intel_dmc_header_base cocci_id/* drivers/gpu/drm/i915/intel_csr.c 390 */;
	u8 *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 381 */;
	const u32 *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 379 */;
	const struct intel_dmc_header_base *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 375 */;
	u8 cocci_id/* drivers/gpu/drm/i915/intel_csr.c 337 */;
	const struct stepping_info *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 336 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/intel_csr.c 335 */;
	u32 cocci_id/* drivers/gpu/drm/i915/intel_csr.c 334 */;
	const struct intel_fw_info *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 334 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/intel_csr.c 297 */;
	const struct stepping_info cocci_id/* drivers/gpu/drm/i915/intel_csr.c 241 */;
	const struct stepping_info cocci_id/* drivers/gpu/drm/i915/intel_csr.c 230 */[];
	struct stepping_info {
		char stepping;
		char substepping;
	} cocci_id/* drivers/gpu/drm/i915/intel_csr.c 218 */;
	struct intel_dmc_header_v3 {
		struct intel_dmc_header_base base;
		u32 start_mmioaddr;
		u32 reserved[9];
		char dfile[32];
		u32 mmio_count;
		u32 mmioaddr[DMC_V3_MAX_MMIO_COUNT];
		u32 mmiodata[DMC_V3_MAX_MMIO_COUNT];
	}__packed cocci_id/* drivers/gpu/drm/i915/intel_csr.c 197 */;
	struct intel_dmc_header_v1 {
		struct intel_dmc_header_base base;
		u32 mmio_count;
		u32 mmioaddr[DMC_V1_MAX_MMIO_COUNT];
		u32 mmiodata[DMC_V1_MAX_MMIO_COUNT];
		char dfile[32];
		u32 reserved1[2];
	}__packed cocci_id/* drivers/gpu/drm/i915/intel_csr.c 179 */;
	struct intel_dmc_header_base {
		u32 signature;
		u8 header_len;
		u8 header_ver;
		u16 dmcc_ver;
		u32 project;
		u32 fw_size;
		u32 fw_version;
	}__packed cocci_id/* drivers/gpu/drm/i915/intel_csr.c 156 */;
	struct intel_package_header {
		u8 header_len;
		u8 header_ver;
		u8 reserved[10];
		u32 num_entries;
	}__packed cocci_id/* drivers/gpu/drm/i915/intel_csr.c 143 */;
	struct intel_fw_info {
		u8 reserved1;
		u8 dmc_id;
		char stepping;
		char substepping;
		u32 offset;
		u32 reserved2;
	}__packed cocci_id/* drivers/gpu/drm/i915/intel_csr.c 127 */;
}
