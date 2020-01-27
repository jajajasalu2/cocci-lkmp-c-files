cocci_test_suite() {
	struct dma_fence_array *cocci_id/* drivers/gpu/drm/i915/i915_request.c 953 */;
	struct dma_fence **cocci_id/* drivers/gpu/drm/i915/i915_request.c 940 */;
	signed long cocci_id/* drivers/gpu/drm/i915/i915_request.c 90 */;
	struct dma_fence *cocci_id/* drivers/gpu/drm/i915/i915_request.c 85 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/i915_request.c 823 */;
	const int cocci_id/* drivers/gpu/drm/i915/i915_request.c 820 */;
	u32 cocci_id/* drivers/gpu/drm/i915/i915_request.c 818 */;
	intel_engine_mask_t cocci_id/* drivers/gpu/drm/i915/i915_request.c 797 */;
	typeof(*rq) cocci_id/* drivers/gpu/drm/i915/i915_request.c 735 */;
	struct intel_context *cocci_id/* drivers/gpu/drm/i915/i915_request.c 592 */;
	const char *cocci_id/* drivers/gpu/drm/i915/i915_request.c 58 */;
	typeof(*request) cocci_id/* drivers/gpu/drm/i915/i915_request.c 536 */;
	enum i915_sw_fence_notify cocci_id/* drivers/gpu/drm/i915/i915_request.c 533 */;
	struct i915_sw_fence *cocci_id/* drivers/gpu/drm/i915/i915_request.c 533 */;
	int __i915_sw_fence_call cocci_id/* drivers/gpu/drm/i915/i915_request.c 532 */;
	struct i915_global_request {
		struct i915_global base;
		struct kmem_cache *slab_requests;
		struct kmem_cache *slab_dependencies;
		struct kmem_cache *slab_execute_cbs;
	} cocci_id/* drivers/gpu/drm/i915/i915_request.c 51 */;
	struct execute_cb {
		struct list_head link;
		struct irq_work work;
		struct i915_sw_fence *fence;
		void (*hook)(struct i915_request *rq,
			     struct dma_fence *signal);
		struct i915_request *signal;
	} cocci_id/* drivers/gpu/drm/i915/i915_request.c 43 */;
	bool cocci_id/* drivers/gpu/drm/i915/i915_request.c 349 */;
	struct execute_cb *cocci_id/* drivers/gpu/drm/i915/i915_request.c 309 */;
	gfp_t cocci_id/* drivers/gpu/drm/i915/i915_request.c 307 */;
	void (*cocci_id/* drivers/gpu/drm/i915/i915_request.c 305 */)(struct i915_request *rq,
								      struct dma_fence *signal);
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/i915_request.c 303 */;
	int cocci_id/* drivers/gpu/drm/i915/i915_request.c 302 */;
	typeof(*tmp) cocci_id/* drivers/gpu/drm/i915/i915_request.c 298 */;
	struct i915_capture_list *cocci_id/* drivers/gpu/drm/i915/i915_request.c 189 */;
	struct drm_i915_file_private *cocci_id/* drivers/gpu/drm/i915/i915_request.c 172 */;
	int __init cocci_id/* drivers/gpu/drm/i915/i915_request.c 1598 */;
	struct i915_global_request cocci_id/* drivers/gpu/drm/i915/i915_request.c 1593 */;
	struct request_wait cocci_id/* drivers/gpu/drm/i915/i915_request.c 1471 */;
	typeof(*wait) cocci_id/* drivers/gpu/drm/i915/i915_request.c 1445 */;
	struct request_wait *cocci_id/* drivers/gpu/drm/i915/i915_request.c 1445 */;
	struct dma_fence_cb *cocci_id/* drivers/gpu/drm/i915/i915_request.c 1443 */;
	struct request_wait {
		struct dma_fence_cb cb;
		struct task_struct *tsk;
	} cocci_id/* drivers/gpu/drm/i915/i915_request.c 1438 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/i915_request.c 1394 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/i915_request.c 1392 */;
	const struct i915_request *const cocci_id/* drivers/gpu/drm/i915/i915_request.c 1391 */;
	struct i915_request cocci_id/* drivers/gpu/drm/i915/i915_request.c 137 */;
	unsigned int *cocci_id/* drivers/gpu/drm/i915/i915_request.c 1358 */;
	struct intel_timeline *const cocci_id/* drivers/gpu/drm/i915/i915_request.c 1295 */;
	struct i915_sched_attr cocci_id/* drivers/gpu/drm/i915/i915_request.c 1294 */;
	const struct i915_sched_attr *cocci_id/* drivers/gpu/drm/i915/i915_request.c 1273 */;
	void cocci_id/* drivers/gpu/drm/i915/i915_request.c 1272 */;
	typeof(*cb) cocci_id/* drivers/gpu/drm/i915/i915_request.c 127 */;
	struct irq_work *cocci_id/* drivers/gpu/drm/i915/i915_request.c 125 */;
	struct intel_ring *cocci_id/* drivers/gpu/drm/i915/i915_request.c 1244 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/i915_request.c 1243 */;
	struct intel_timeline *cocci_id/* drivers/gpu/drm/i915/i915_request.c 1183 */;
	long cocci_id/* drivers/gpu/drm/i915/i915_request.c 1160 */;
	const struct dma_fence_ops cocci_id/* drivers/gpu/drm/i915/i915_request.c 116 */;
	void *cocci_id/* drivers/gpu/drm/i915/i915_request.c 1157 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/i915_request.c 1115 */;
	const struct dma_fence *cocci_id/* drivers/gpu/drm/i915/i915_request.c 1006 */;
}
