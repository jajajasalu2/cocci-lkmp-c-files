cocci_test_suite() {
	int __init cocci_id/* drivers/gpu/drm/i915/i915_active.c 837 */;
	struct i915_global_active cocci_id/* drivers/gpu/drm/i915/i915_active.c 832 */;
	struct debug_obj_descr cocci_id/* drivers/gpu/drm/i915/i915_active.c 82 */;
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/i915_active.c 790 */;
	struct i915_active_fence *cocci_id/* drivers/gpu/drm/i915/i915_active.c 750 */;
	void *cocci_id/* drivers/gpu/drm/i915/i915_active.c 75 */;
	struct dma_fence *cocci_id/* drivers/gpu/drm/i915/i915_active.c 749 */;
	struct list_head *cocci_id/* drivers/gpu/drm/i915/i915_active.c 69 */;
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/i915_active.c 593 */;
	intel_engine_mask_t cocci_id/* drivers/gpu/drm/i915/i915_active.c 592 */;
	struct rb_node *cocci_id/* drivers/gpu/drm/i915/i915_active.c 506 */;
	const struct i915_active_fence *cocci_id/* drivers/gpu/drm/i915/i915_active.c 43 */;
	int cocci_id/* drivers/gpu/drm/i915/i915_active.c 396 */;
	struct llist_node *cocci_id/* drivers/gpu/drm/i915/i915_active.c 293 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/i915_active.c 290 */;
	struct active_node *cocci_id/* drivers/gpu/drm/i915/i915_active.c 289 */;
	bool cocci_id/* drivers/gpu/drm/i915/i915_active.c 288 */;
	struct i915_active *cocci_id/* drivers/gpu/drm/i915/i915_active.c 288 */;
	struct active_node {
		struct i915_active_fence base;
		struct i915_active *ref;
		struct rb_node node;
		u64 timeline;
	} cocci_id/* drivers/gpu/drm/i915/i915_active.c 28 */;
	struct lock_class_key *cocci_id/* drivers/gpu/drm/i915/i915_active.c 265 */;
	void (*cocci_id/* drivers/gpu/drm/i915/i915_active.c 264 */)(struct i915_active *ref);
	int (*cocci_id/* drivers/gpu/drm/i915/i915_active.c 263 */)(struct i915_active *ref);
	typeof(*node) cocci_id/* drivers/gpu/drm/i915/i915_active.c 258 */;
	struct active_node cocci_id/* drivers/gpu/drm/i915/i915_active.c 234 */;
	struct i915_global_active {
		struct i915_global base;
		struct kmem_cache *slab_cache;
	} cocci_id/* drivers/gpu/drm/i915/i915_active.c 23 */;
	u64 cocci_id/* drivers/gpu/drm/i915/i915_active.c 208 */;
	struct rb_node **cocci_id/* drivers/gpu/drm/i915/i915_active.c 207 */;
	struct intel_timeline *cocci_id/* drivers/gpu/drm/i915/i915_active.c 204 */;
	struct i915_active cocci_id/* drivers/gpu/drm/i915/i915_active.c 200 */;
	struct dma_fence_cb *cocci_id/* drivers/gpu/drm/i915/i915_active.c 197 */;
	typeof(*ref) cocci_id/* drivers/gpu/drm/i915/i915_active.c 165 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/i915/i915_active.c 163 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/i915_active.c 132 */;
	struct rb_root cocci_id/* drivers/gpu/drm/i915/i915_active.c 131 */;
	void cocci_id/* drivers/gpu/drm/i915/i915_active.c 127 */;
}
