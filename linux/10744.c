cocci_test_suite() {
	struct context_barrier_task *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 945 */;
	void (*cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 942 */)(void *data);
	int (*cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 941 */)(struct i915_request *rq,
									     void *data);
	bool (*cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 940 */)(struct intel_context *ce,
									      void *data);
	intel_engine_mask_t cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 939 */;
	struct context_barrier_task {
		struct i915_active base;
		void (*task)(void *data);
		void *data;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 919 */;
	struct i915_lut_handle *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 89 */;
	struct i915_global_gem_context {
		struct i915_global base;
		struct kmem_cache *slab_luts;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 84 */;
	struct drm_i915_gem_vm_control *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 839 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 819 */;
	struct i915_gem_context **cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 665 */;
	struct intel_timeline *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 606 */;
	struct intel_timeline **cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 589 */;
	struct i915_address_space *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 579 */;
	struct i915_gem_context *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 578 */;
	struct intel_context *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 559 */;
	void *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 559 */;
	void cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 559 */;
	struct i915_gem_engines_iter cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 551 */;
	void (*cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 548 */)(struct intel_context *ce,
									      void *data);
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 494 */;
	int cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 467 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 338 */;
	struct i915_request *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 338 */;
	bool cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 314 */;
	struct intel_gt *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 291 */;
	const struct i915_gem_context *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 284 */;
	struct i915_gem_engines *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 283 */;
	typeof(*ctx) cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 275 */;
	struct kref *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 273 */;
	typeof(*gc) cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 268 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 265 */;
	struct i915_gem_contexts *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 260 */;
	struct llist_node *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 252 */;
	int __init cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2449 */;
	struct i915_global_gem_context cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2444 */;
	const struct i915_gem_engines *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2416 */;
	struct i915_gem_engines_iter *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2414 */;
	struct drm_i915_reset_stats *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2378 */;
	struct drm_i915_gem_context_param_sseu cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2229 */;
	struct drm_i915_gem_context_destroy *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2204 */;
	struct create_ext cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2154 */;
	struct drm_i915_gem_context_create_ext *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2153 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2149 */;
	struct drm_i915_file_private *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2144 */;
	const i915_user_extension_fn cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2139 */[];
	const struct create_ext *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2102 */;
	struct drm_i915_gem_context_create_ext_clone cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2101 */;
	int (*cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2090 */[])(struct i915_gem_context *dst,
										struct i915_gem_context *src);
	struct i915_user_extension __user *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 2088 */;
	enum intel_engine_id cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 198 */;
	const struct intel_gt *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 195 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1924 */;
	struct drm_i915_gem_context_create_ext_setparam cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1906 */;
	struct i915_gem_engines cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 190 */;
	struct create_ext {
		struct i915_gem_context *ctx;
		struct drm_i915_file_private *fpriv;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1899 */;
	struct rcu_head *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 188 */;
	s64 cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1856 */;
	struct drm_i915_gem_context_param *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1811 */;
	struct i915_engine_class_instance cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1776 */;
	size_t cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1726 */;
	struct i915_context_param_engines __user *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1724 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1702 */;
	u16 cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1647 */;
	struct set_engines cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1601 */;
	const struct drm_i915_gem_context_param *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1597 */;
	const struct set_engines *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1512 */;
	typeof(*ext) cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1511 */;
	struct i915_context_engines_bond __user *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1510 */;
	struct intel_engine_cs **cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1422 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1421 */[16];
	struct i915_context_engines_load_balance __user *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1418 */;
	struct set_engines {
		struct i915_gem_context *ctx;
		struct i915_gem_engines *engines;
	} cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1410 */;
	const struct sseu_dev_info *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1262 */;
	struct intel_sseu *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1260 */;
	const struct drm_i915_gem_context_param_sseu *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1259 */;
	u64 cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1182 */;
	struct intel_sseu cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1180 */;
	struct drm_i915_gem_object *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 109 */;
	struct i915_vma *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 108 */;
	const dma_addr_t cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1060 */;
	struct i915_ppgtt *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1059 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1055 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 1054 */;
	void __rcu **cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 102 */;
	struct radix_tree_iter cocci_id/* drivers/gpu/drm/i915/gem/i915_gem_context.c 101 */;
}
