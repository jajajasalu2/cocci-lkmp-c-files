cocci_test_suite() {
	const struct i915_subtest cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 827 */[];
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 825 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 69 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 673 */[2];
	const u32 *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 671 */[2];
	enum intel_engine_id cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 580 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 579 */;
	struct intel_timeline **cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 578 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 51 */;
	struct mock_hwsp_freelist *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 50 */;
	void cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 50 */;
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 483 */;
	enum{SHUFFLE=BIT(0),} cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 46 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 421 */;
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 419 */;
	struct mock_hwsp_freelist {
		struct intel_gt *gt;
		struct radix_tree_root cachelines;
		struct intel_timeline **history;
		unsigned long count,max;
		struct rnd_state prng;
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 38 */;
	long long cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 282 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 273 */;
	ktime_t cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 258 */;
	struct intel_timeline cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 255 */;
	struct rnd_state cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 254 */;
	void *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 252 */;
	struct rnd_state *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 247 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 23 */;
	struct page *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 21 */;
	const struct __igt_sync cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 193 */[];
	const char *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 172 */;
	const struct __igt_sync *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 171 */;
	u64 cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 170 */;
	struct intel_timeline *cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 169 */;
	int cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 169 */;
	struct __igt_sync {
		const char *name;
		u32 seqno;
		bool expected;
		bool set;
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 162 */;
	const struct {
		const char *name;
		unsigned int flags;
	} cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 111 */[];
	struct mock_hwsp_freelist cocci_id/* drivers/gpu/drm/i915/gt/selftest_timeline.c 109 */;
}
