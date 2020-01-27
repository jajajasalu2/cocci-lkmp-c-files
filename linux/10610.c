cocci_test_suite() {
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 487 */;
	struct drm_i915_mocs_table cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 435 */;
	struct intel_uncore *cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 402 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 399 */;
	void cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 399 */;
	u16 cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 383 */;
	struct drm_i915_mocs_table {
		unsigned int size;
		unsigned int n_entries;
		const struct drm_i915_mocs_entry *table;
	} cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 38 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 352 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 351 */;
	const struct drm_i915_mocs_table *cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 351 */;
	i915_reg_t cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 326 */;
	const struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 326 */;
	struct drm_i915_mocs_entry {
		u32 control_value;
		u16 l3cc_value;
		u16 used;
	} cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 32 */;
	int cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 315 */;
	struct drm_i915_mocs_table *cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 284 */;
	bool cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 283 */;
	const struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 283 */;
	const struct drm_i915_mocs_entry cocci_id/* drivers/gpu/drm/i915/gt/intel_mocs.c 138 */[];
}
