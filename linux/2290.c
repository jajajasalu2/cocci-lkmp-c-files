cocci_test_suite() {
	const struct kernel_param *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 99 */;
	const char *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 99 */;
	unsigned long *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 91 */;
	struct thermal_cooling_device *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 90 */;
	struct powerclamp_worker_data __percpu *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 89 */;
	void __exit cocci_id/* drivers/thermal/intel/intel_powerclamp.c 764 */;
	struct powerclamp_worker_data {
		struct kthread_worker *worker;
		struct kthread_work balancing_work;
		struct kthread_delayed_work idle_injection_work;
		unsigned int cpu;
		unsigned int count;
		unsigned int guard;
		unsigned int window_size_now;
		unsigned int target_ratio;
		unsigned int duration_jiffies;
		bool clamping;
	} cocci_id/* drivers/thermal/intel/intel_powerclamp.c 76 */;
	const struct sched_param cocci_id/* drivers/thermal/intel/intel_powerclamp.c 73 */;
	long cocci_id/* drivers/thermal/intel/intel_powerclamp.c 713 */;
	bool cocci_id/* drivers/thermal/intel/intel_powerclamp.c 71 */;
	int __init cocci_id/* drivers/thermal/intel/intel_powerclamp.c 708 */;
	enum cpuhp_state cocci_id/* drivers/thermal/intel/intel_powerclamp.c 706 */;
	struct seq_file *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 679 */;
	void *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 679 */;
	atomic_t cocci_id/* drivers/thermal/intel/intel_powerclamp.c 66 */;
	const struct x86_cpu_id __initconst cocci_id/* drivers/thermal/intel/intel_powerclamp.c 653 */[];
	struct thermal_cooling_device_ops cocci_id/* drivers/thermal/intel/intel_powerclamp.c 647 */;
	struct dentry *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 59 */;
	struct kthread_worker *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 480 */;
	struct work_struct *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 446 */;
	void cocci_id/* drivers/thermal/intel/intel_powerclamp.c 444 */(struct work_struct *dummy);
	struct powerclamp_worker_data cocci_id/* drivers/thermal/intel/intel_powerclamp.c 373 */;
	unsigned long cocci_id/* drivers/thermal/intel/intel_powerclamp.c 369 */;
	struct powerclamp_worker_data *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 367 */;
	struct kthread_work *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 365 */;
	struct powerclamp_calibration_data *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 304 */;
	unsigned int cocci_id/* drivers/thermal/intel/intel_powerclamp.c 301 */;
	int cocci_id/* drivers/thermal/intel/intel_powerclamp.c 301 */;
	void cocci_id/* drivers/thermal/intel/intel_powerclamp.c 301 */;
	struct pkg_cstate_info *cocci_id/* drivers/thermal/intel/intel_powerclamp.c 233 */;
	u64 cocci_id/* drivers/thermal/intel/intel_powerclamp.c 232 */;
	struct pkg_cstate_info cocci_id/* drivers/thermal/intel/intel_powerclamp.c 219 */[];
	struct pkg_cstate_info {
		bool skip;
		int msr_index;
		int cstate_id;
	} cocci_id/* drivers/thermal/intel/intel_powerclamp.c 208 */;
	struct powerclamp_calibration_data cocci_id/* drivers/thermal/intel/intel_powerclamp.c 145 */[MAX_TARGET_RATIO];
	struct powerclamp_calibration_data {
		unsigned long confidence;
		unsigned long steady_comp;
		unsigned long dynamic_comp;
	} cocci_id/* drivers/thermal/intel/intel_powerclamp.c 130 */;
	const struct kernel_param_ops cocci_id/* drivers/thermal/intel/intel_powerclamp.c 121 */;
}
