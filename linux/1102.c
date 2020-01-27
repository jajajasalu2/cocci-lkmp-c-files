cocci_test_suite() {
	struct notifier_block cocci_id/* drivers/cpufreq/powernv-cpufreq.c 997 */;
	struct opal_occ_msg cocci_id/* drivers/cpufreq/powernv-cpufreq.c 934 */;
	struct opal_msg *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 933 */;
	void *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 931 */;
	struct notifier_block *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 930 */;
	cpumask_t cocci_id/* drivers/cpufreq/powernv-cpufreq.c 906 */;
	struct work_struct *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 902 */;
	struct cpufreq_policy cocci_id/* drivers/cpufreq/powernv-cpufreq.c 887 */;
	struct cpufreq_frequency_table cocci_id/* drivers/cpufreq/powernv-cpufreq.c 86 */[POWERNV_MAX_PSTATES + 1];
	struct kernfs_node *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 829 */;
	struct global_pstate_info {
		int highest_lpstate_idx;
		unsigned int elapsed_time;
		unsigned int last_sampled_time;
		int last_lpstate_idx;
		int last_gpstate_idx;
		spinlock_t gpstate_lock;
		struct timer_list timer;
		struct cpufreq_policy *policy;
	} cocci_id/* drivers/cpufreq/powernv-cpufreq.c 75 */;
	struct powernv_smp_call_data cocci_id/* drivers/cpufreq/powernv-cpufreq.c 677 */;
	struct global_pstate_info *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 671 */;
	struct timer_list *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 669 */;
	unsigned int cocci_id/* drivers/cpufreq/powernv-cpufreq.c 618 */;
	int cocci_id/* drivers/cpufreq/powernv-cpufreq.c 618 */;
	struct chip *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 555 */;
	struct powernv_smp_call_data *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 488 */;
	struct powernv_smp_call_data {
		unsigned int freq;
		u8 pstate_id;
		u8 gpstate_id;
	} cocci_id/* drivers/cpufreq/powernv-cpufreq.c 468 */;
	unsigned long cocci_id/* drivers/cpufreq/powernv-cpufreq.c 435 */;
	const struct attribute_group cocci_id/* drivers/cpufreq/powernv-cpufreq.c 426 */;
	struct attribute *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 414 */[];
	struct freq_attr *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 388 */[];
	struct freq_attr cocci_id/* drivers/cpufreq/powernv-cpufreq.c 383 */;
	char *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 377 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 376 */;
	ssize_t cocci_id/* drivers/cpufreq/powernv-cpufreq.c 376 */;
	struct pstate_idx_revmap_data *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 314 */;
	u32 cocci_id/* drivers/cpufreq/powernv-cpufreq.c 234 */;
	const __be32 *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 233 */;
	struct device_node *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 231 */;
	u8 cocci_id/* drivers/cpufreq/powernv-cpufreq.c 162 */;
	u64 cocci_id/* drivers/cpufreq/powernv-cpufreq.c 162 */;
	struct powernv_pstate_info {
		unsigned int min;
		unsigned int max;
		unsigned int nominal;
		unsigned int nr_pstates;
		bool wof_enabled;
	} cocci_id/* drivers/cpufreq/powernv-cpufreq.c 154 */;
	struct chip {
		unsigned int id;
		bool throttled;
		bool restore;
		u8 throttle_reason;
		cpumask_t mask;
		struct work_struct throttle;
		int throttle_turbo;
		int throttle_sub_turbo;
		int reason[OCC_MAX_REASON];
	} *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 129 */;
	enum throttle_reason_type{NO_THROTTLE=0, POWERCAP, CPU_OVERTEMP, POWER_SUPPLY_FAILURE, OVERCURRENT, OCC_RESET_THROTTLE, OCC_MAX_REASON,} cocci_id/* drivers/cpufreq/powernv-cpufreq.c 119 */;
	void __exit cocci_id/* drivers/cpufreq/powernv-cpufreq.c 1138 */;
	const char *const cocci_id/* drivers/cpufreq/powernv-cpufreq.c 110 */[];
	int __init cocci_id/* drivers/cpufreq/powernv-cpufreq.c 1093 */;
	void cocci_id/* drivers/cpufreq/powernv-cpufreq.c 1081 */;
	bool cocci_id/* drivers/cpufreq/powernv-cpufreq.c 108 */;
	struct chip cocci_id/* drivers/cpufreq/powernv-cpufreq.c 1062 */;
	unsigned int *cocci_id/* drivers/cpufreq/powernv-cpufreq.c 1044 */;
	struct cpufreq_driver cocci_id/* drivers/cpufreq/powernv-cpufreq.c 1029 */;
	struct pstate_idx_revmap_data {
		u8 pstate_id;
		unsigned int cpufreq_table_idx;
		struct hlist_node hentry;
	} cocci_id/* drivers/cpufreq/powernv-cpufreq.c 102 */;
	__typeof__(struct chip *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
