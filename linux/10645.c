cocci_test_suite() {
	int cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 98 */;
	u64 cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 97 */;
	void cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 93 */;
	struct gvt_sched_data {
		struct intel_gvt *gvt;
		struct hrtimer timer;
		unsigned long period;
		struct list_head lru_runq_head;
		ktime_t expire_time;
	} cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 67 */;
	struct vgpu_sched_data {
		struct list_head lru_list;
		struct intel_vgpu *vgpu;
		bool active;
		bool pri_sched;
		ktime_t pri_time;
		ktime_t sched_in_time;
		ktime_t sched_time;
		ktime_t left_ts;
		ktime_t allocated_ts;
		struct vgpu_sched_ctl sched_ctl;
	} cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 53 */;
	struct drm_i915_private *cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 449 */;
	struct intel_gvt_workload_scheduler *cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 445 */;
	struct intel_gvt *cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 392 */;
	struct intel_gvt_sched_policy_ops cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 371 */;
	bool cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 37 */;
	struct gvt_sched_data cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 268 */;
	enum hrtimer_restart cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 264 */;
	struct hrtimer *cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 264 */;
	void *cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 249 */;
	struct vgpu_sched_data cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 186 */;
	struct list_head *cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 180 */;
	struct vgpu_sched_data *cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 178 */;
	struct intel_vgpu *cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 176 */;
	struct gvt_sched_data *cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 176 */;
	struct intel_engine_cs *cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 136 */;
	enum intel_engine_id cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 135 */;
	ktime_t cocci_id/* drivers/gpu/drm/i915/gvt/sched_policy.c 105 */;
}
