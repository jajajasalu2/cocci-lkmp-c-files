cocci_test_suite() {
	struct __packed uc_fw_platform_requirement {
		enum intel_platform p;
		u8 rev;
		const struct uc_fw_blob blobs[INTEL_UC_FW_NUM_TYPES];
	} cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 94 */;
	struct __packed uc_fw_blob {
		u8 major;
		u8 minor;
		const char *path;
	} cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 77 */;
	const struct intel_uc_fw *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 599 */;
	struct drm_printer *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 599 */;
	struct uc_css_header cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 585 */;
	struct sg_table *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 583 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 581 */;
	void *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 581 */;
	size_t cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 581 */;
	struct intel_uncore *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 438 */;
	u64 cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 430 */;
	struct i915_vma cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 409 */;
	struct i915_ggtt *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 408 */;
	struct drm_mm_node *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 395 */;
	struct uc_css_header *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 274 */;
	const struct firmware *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 273 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 272 */;
	struct device *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 271 */;
	enum intel_uc_fw_status cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 26 */;
	bool cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 226 */;
	int cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 224 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 223 */;
	struct intel_uc_fw *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 222 */;
	void cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 222 */;
	enum intel_uc_fw_type cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 198 */;
	struct intel_gt cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 19 */;
	const char *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 152 */;
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 15 */;
	const struct uc_fw_blob *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 118 */;
	const struct uc_fw_platform_requirement cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 111 */[];
	u8 cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 109 */;
	enum intel_platform cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_uc_fw.c 109 */;
}
