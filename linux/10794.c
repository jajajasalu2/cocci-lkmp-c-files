cocci_test_suite() {
	const struct i915_subtest cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 743 */[];
	unsigned long cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 662 */;
	struct i915_sw_fence *cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 64 */;
	int cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 64 */;
	struct dma_fence *cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 628 */;
	void cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 628 */;
	const struct dma_fence_ops cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 621 */;
	const char *cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 616 */;
	struct timed_fence cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 572 */;
	struct task_ipc cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 525 */;
	typeof(*ipc) cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 514 */;
	struct task_ipc *cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 514 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 512 */;
	struct task_ipc {
		struct work_struct work;
		struct completion started;
		struct i915_sw_fence *in,*out;
		int value;
	} cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 505 */;
	struct i915_sw_fence **cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 453 */;
	enum i915_sw_fence_notify cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 32 */;
	int __i915_sw_fence_call cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 31 */;
	void *cocci_id/* drivers/gpu/drm/i915/selftests/i915_sw_fence.c 175 */;
}
