cocci_test_suite() {
	struct clear_pages_work {
		struct dma_fence dma;
		struct dma_fence_cb cb;
		struct i915_sw_fence wait;
		struct work_struct work;
		struct irq_work irq_work;
		struct i915_sleeve *sleeve;
		struct intel_context *ce;
		u32 value;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 93 */;
	struct i915_page_sizes *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 58 */;
	struct sg_table *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 57 */;
	struct i915_sleeve *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 55 */;
	struct i915_address_space *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 55 */;
	const struct i915_vma_ops cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 48 */;
	enum i915_cache_level cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 37 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 263 */;
	struct intel_context *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 260 */;
	enum i915_sw_fence_notify cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 239 */;
	struct i915_sw_fence *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 238 */;
	int __i915_sw_fence_call cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 237 */;
	int cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 162 */;
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 160 */;
	struct i915_vma *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 159 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 158 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 155 */;
	typeof(*w) cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 143 */;
	struct clear_pages_work *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 143 */;
	struct dma_fence_cb *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 141 */;
	struct dma_fence *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 140 */;
	void cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 140 */;
	struct irq_work *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 132 */;
	struct i915_sleeve {
		struct i915_vma *vma;
		struct drm_i915_gem_object *obj;
		struct sg_table *pages;
		struct i915_page_sizes page_sizes;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 13 */;
	const struct dma_fence_ops cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 126 */;
	const char *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_client_blt.c 104 */;
}
