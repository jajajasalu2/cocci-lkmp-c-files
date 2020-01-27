cocci_test_suite() {
	void *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 55 */;
	struct page *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 54 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 53 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 51 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 51 */;
	int cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 51 */;
	const struct i915_subtest cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 417 */[];
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 415 */;
	struct context cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 308 */;
	const struct igt_coherency_mode *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 304 */;
	const unsigned int cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 302 */;
	struct rnd_state *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 283 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 282 */;
	const struct igt_coherency_mode {
		const char *name;
		int (*set)(struct context *ctx, unsigned long offset, u32 v);
		int (*get)(struct context *ctx, unsigned long offset, u32 *v);
		bool (*valid)(struct context *ctx);
	} cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 269 */[];
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 253 */;
	bool cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 246 */;
	struct context *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 246 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 21 */;
	struct i915_vma *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 189 */;
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 188 */;
	struct context {
		struct drm_i915_gem_object *obj;
		struct intel_engine_cs *engine;
	} cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 16 */;
	u32 __iomem *cocci_id/* drivers/gpu/drm/i915/gem/selftests/i915_gem_coherency.c 114 */;
}
