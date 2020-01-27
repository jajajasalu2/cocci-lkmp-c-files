cocci_test_suite() {
	const struct i915_wa *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 989 */;
	bool (*cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 970 */)(struct intel_engine_cs *engine,
										 u32 a,
										 u32 b,
										 i915_reg_t reg);
	const struct regmask cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 924 */[];
	unsigned long cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 907 */;
	const struct regmask *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 906 */;
	i915_reg_t cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 905 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 904 */;
	struct regmask {
		i915_reg_t reg;
		unsigned long gen_mask;
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 899 */;
	struct wa_lists *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 86 */;
	struct i915_wa_list *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 73 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 714 */;
	enum intel_engine_id cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 713 */;
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 710 */;
	void *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 708 */;
	bool cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 509 */;
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 505 */;
	u64 cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 504 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 503 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 488 */;
	struct i915_vma *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 485 */;
	struct i915_address_space *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 484 */;
	struct igt_spinner *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 47 */;
	const u32 cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 458 */[];
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 456 */;
	struct i915_gem_context *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 455 */;
	int cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 455 */;
	enum intel_platform cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 415 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 372 */;
	struct wa_lists {
		struct i915_wa_list gt_wa_list;
		struct {
			struct i915_wa_list wa_list;
			struct i915_wa_list ctx_wa_list;
		} engine[I915_NUM_ENGINES];
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 28 */;
	const struct wo_register {
		enum intel_platform platform;
		u32 reg;
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 21 */[];
	const u32 *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 190 */;
	void cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 189 */;
	const struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 180 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 180 */;
	const struct i915_subtest cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 1277 */[];
	struct wa_lists cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 1199 */;
	intel_wakeref_t cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 1198 */;
	struct igt_spinner cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 1196 */;
	struct intel_context *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 1195 */;
	struct i915_gem_engines_iter cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 1193 */;
	const char *cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 1122 */;
	struct {
		struct i915_gem_context *ctx;
		struct i915_vma *scratch[2];
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 1008 */[2];
	const u32 cocci_id/* drivers/gpu/drm/i915/gt/selftest_workarounds.c 100 */;
}
