cocci_test_suite() {
	typeof(*phases) *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 991 */;
	const struct {
		const char *name;
		unsigned int flags;
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 972 */[];
	struct task_struct *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 804 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 787 */;
	struct active_engine cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 786 */[I915_NUM_ENGINES];
	struct drm_file *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 703 */;
	struct i915_gem_context *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 702 */[ARRAY_SIZE(rq)];
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 701 */[8];
	struct active_engine *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 699 */;
	void *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 696 */;
	struct active_engine {
		struct task_struct *task;
		struct intel_engine_cs *engine;
		unsigned long resets;
		unsigned int flags;
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 661 */;
	struct drm_printer cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 596 */;
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 584 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 564 */;
	struct hang cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 549 */;
	enum intel_engine_id cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 548 */;
	struct i915_gpu_error *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 546 */;
	bool cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 544 */;
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 544 */;
	struct hang {
		struct intel_gt *gt;
		struct drm_i915_gem_object *hws;
		struct drm_i915_gem_object *obj;
		struct i915_gem_context *ctx;
		u32 *seqno;
		u32 *batch;
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 44 */;
	void cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 285 */;
	const struct hang *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 280 */;
	intel_wakeref_t cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1696 */;
	const struct i915_subtest cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1680 */[];
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1678 */;
	const typeof(*igt_atomic_phases) *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1641 */;
	struct tasklet_struct *const cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1568 */;
	const char *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1566 */;
	const struct igt_atomic_section *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1565 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1564 */;
	int cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1564 */;
	struct i915_gpu_state *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1507 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 140 */;
	struct i915_vma *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 137 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 135 */;
	struct hang *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 131 */;
	struct i915_gem_context *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1303 */;
	struct evict_vma *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1113 */;
	struct drm_mm_node cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1099 */;
	struct i915_address_space *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1098 */;
	struct evict_vma {
		struct completion completion;
		struct i915_vma *vma;
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1090 */;
	const struct i915_request *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 109 */;
	u64 cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 108 */;
	const struct i915_vma *cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 108 */;
	long cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1025 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1008 */;
	intel_engine_mask_t cocci_id/* drivers/gpu/drm/i915/gt/selftest_hangcheck.c 1008 */;
}
