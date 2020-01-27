cocci_test_suite() {
	struct work_struct *cocci_id/* kernel/sched/cpufreq_schedutil.c 922 */;
	struct mutex cocci_id/* kernel/sched/cpufreq_schedutil.c 920 */;
	bool cocci_id/* kernel/sched/cpufreq_schedutil.c 919 */;
	int __init cocci_id/* kernel/sched/cpufreq_schedutil.c 912 */;
	struct cpufreq_governor *cocci_id/* kernel/sched/cpufreq_schedutil.c 906 */;
	void cocci_id/* kernel/sched/cpufreq_schedutil.c 906 */;
	struct sched_attr cocci_id/* kernel/sched/cpufreq_schedutil.c 657 */;
	struct cpufreq_governor cocci_id/* kernel/sched/cpufreq_schedutil.c 634 */;
	struct kobj_type cocci_id/* kernel/sched/cpufreq_schedutil.c 627 */;
	struct attribute *cocci_id/* kernel/sched/cpufreq_schedutil.c 621 */[];
	struct governor_attr cocci_id/* kernel/sched/cpufreq_schedutil.c 619 */;
	const char *cocci_id/* kernel/sched/cpufreq_schedutil.c 602 */;
	size_t cocci_id/* kernel/sched/cpufreq_schedutil.c 602 */;
	struct gov_attr_set *cocci_id/* kernel/sched/cpufreq_schedutil.c 594 */;
	char *cocci_id/* kernel/sched/cpufreq_schedutil.c 594 */;
	ssize_t cocci_id/* kernel/sched/cpufreq_schedutil.c 594 */;
	struct sugov_tunables cocci_id/* kernel/sched/cpufreq_schedutil.c 591 */;
	struct sugov_tunables *cocci_id/* kernel/sched/cpufreq_schedutil.c 586 */;
	struct sugov_policy cocci_id/* kernel/sched/cpufreq_schedutil.c 579 */;
	struct irq_work *cocci_id/* kernel/sched/cpufreq_schedutil.c 575 */;
	struct kthread_work *cocci_id/* kernel/sched/cpufreq_schedutil.c 549 */;
	struct sugov_cpu cocci_id/* kernel/sched/cpufreq_schedutil.c 526 */;
	struct update_util_data *cocci_id/* kernel/sched/cpufreq_schedutil.c 524 */;
	struct sugov_cpu {
		struct update_util_data update_util;
		struct sugov_policy *sg_policy;
		unsigned int cpu;
		bool iowait_boost_pending;
		unsigned int iowait_boost;
		u64 last_update;
		unsigned long bw_dl;
		unsigned long max;
#ifdef CONFIG_NO_HZ_COMMON
		unsigned long saved_idle_calls;
#endif
	} cocci_id/* kernel/sched/cpufreq_schedutil.c 47 */;
	struct sugov_cpu *cocci_id/* kernel/sched/cpufreq_schedutil.c 444 */;
	s64 cocci_id/* kernel/sched/cpufreq_schedutil.c 318 */;
	struct sugov_policy {
		struct cpufreq_policy *policy;
		struct sugov_tunables *tunables;
		struct list_head tunables_hook;
		raw_spinlock_t update_lock;
		u64 last_freq_update_time;
		s64 freq_update_delay_ns;
		unsigned int next_freq;
		unsigned int cached_raw_freq;
		struct irq_work irq_work;
		struct kthread_work work;
		struct mutex work_lock;
		struct kthread_worker worker;
		struct task_struct *thread;
		bool work_in_progress;
		bool limits_changed;
		bool need_freq_update;
	} cocci_id/* kernel/sched/cpufreq_schedutil.c 23 */;
	struct rq *cocci_id/* kernel/sched/cpufreq_schedutil.c 211 */;
	struct task_struct *cocci_id/* kernel/sched/cpufreq_schedutil.c 208 */;
	enum schedutil_type cocci_id/* kernel/sched/cpufreq_schedutil.c 207 */;
	int cocci_id/* kernel/sched/cpufreq_schedutil.c 206 */;
	struct sugov_tunables {
		struct gov_attr_set attr_set;
		unsigned int rate_limit_us;
	} cocci_id/* kernel/sched/cpufreq_schedutil.c 18 */;
	struct cpufreq_policy *cocci_id/* kernel/sched/cpufreq_schedutil.c 172 */;
	unsigned long cocci_id/* kernel/sched/cpufreq_schedutil.c 170 */;
	struct sugov_policy *cocci_id/* kernel/sched/cpufreq_schedutil.c 169 */;
	unsigned int cocci_id/* kernel/sched/cpufreq_schedutil.c 169 */;
	u64 cocci_id/* kernel/sched/cpufreq_schedutil.c 135 */;
	__typeof__(struct sugov_cpu) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
