cocci_test_suite() {
	typeof(*stub) cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 92 */;
	void cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 89 */;
	struct stub_fence *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 62 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 60 */;
	struct dma_fence *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 59 */;
	const struct dma_fence_ops cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 53 */;
	const char *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 33 */;
	enum i915_sw_fence_notify cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 16 */;
	struct i915_sw_fence *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 16 */;
	int __i915_sw_fence_call cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 15 */;
	struct stub_fence {
		struct dma_fence dma;
		struct i915_sw_fence chain;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_fence.c 10 */;
}
