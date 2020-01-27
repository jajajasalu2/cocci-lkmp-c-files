cocci_test_suite() {
	u8 cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 74 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 73 */;
	const u32 cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 72 */;
	struct __guc_ads_blob *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 71 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 70 */;
	struct intel_guc *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 68 */;
	void cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 68 */;
	struct __guc_ads_blob {
		struct guc_ads ads;
		struct guc_policies policies;
		struct guc_mmio_reg_state reg_state;
		struct guc_gt_system_info system_info;
		struct guc_clients_info clients_info;
		struct guc_ct_pool_entry ct_pool[GUC_CT_POOL_SIZE];
		u8 reg_state_buffer[GUC_S3_SAVE_SPACE_PAGES * PAGE_SIZE];
	}__packed cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 58 */;
	struct guc_ct_pool_entry *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 46 */;
	struct guc_policy *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 29 */;
	struct guc_policies *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 27 */;
	void *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 139 */;
	struct i915_vma *cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 138 */;
	struct __guc_ads_blob cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 137 */;
	int cocci_id/* drivers/gpu/drm/i915/gt/uc/intel_guc_ads.c 135 */;
}
