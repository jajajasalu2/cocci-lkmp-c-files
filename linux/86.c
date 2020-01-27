cocci_test_suite() {
	unsigned int cocci_id/* kernel/cpu.c 977 */;
	int __ref cocci_id/* kernel/cpu.c 977 */;
	struct lockdep_map cocci_id/* kernel/cpu.c 85 */;
	cpumask_t cocci_id/* kernel/cpu.c 79 */;
	struct smp_hotplug_thread cocci_id/* kernel/cpu.c 787 */;
	struct cpuhp_cpu_state {
		enum cpuhp_state state;
		enum cpuhp_state target;
		enum cpuhp_state fail;
#ifdef CONFIG_SMP
		struct task_struct *thread;
		bool should_run;
		bool rollback;
		bool single;
		bool bringup;
		struct hlist_node *node;
		struct hlist_node *last;
		enum cpuhp_state cb_state;
		int result;
		struct completion done_up;
		struct completion done_down;
#endif
	} cocci_id/* kernel/cpu.c 55 */;
	struct cpuhp_cpu_state *cocci_id/* kernel/cpu.c 488 */;
	enum cpuhp_smt_control cocci_id/* kernel/cpu.c 391 */;
	void cocci_id/* kernel/cpu.c 357 */;
	struct completion *cocci_id/* kernel/cpu.c 249 */;
	char *cocci_id/* kernel/cpu.c 2389 */;
	enum cpu_mitigations cocci_id/* kernel/cpu.c 2386 */;
	enum cpu_mitigations{CPU_MITIGATIONS_OFF, CPU_MITIGATIONS_AUTO, CPU_MITIGATIONS_AUTO_NOSMT,} cocci_id/* kernel/cpu.c 2380 */;
	void __init cocci_id/* kernel/cpu.c 2368 */;
	const struct cpumask *cocci_id/* kernel/cpu.c 2321 */;
	atomic_t cocci_id/* kernel/cpu.c 2308 */;
	struct cpumask cocci_id/* kernel/cpu.c 2305 */;
	const unsigned long cocci_id/* kernel/cpu.c 2277 */[BITS_PER_LONG + 1][BITS_TO_LONGS(NR_CPUS)];
	const char *cocci_id/* kernel/cpu.c 2187 */[];
	size_t cocci_id/* kernel/cpu.c 2139 */;
	struct device_attribute *cocci_id/* kernel/cpu.c 2138 */;
	struct device *cocci_id/* kernel/cpu.c 2138 */;
	ssize_t cocci_id/* kernel/cpu.c 2137 */;
	const struct attribute_group cocci_id/* kernel/cpu.c 2026 */;
	struct attribute *cocci_id/* kernel/cpu.c 2019 */[];
	bool cocci_id/* kernel/cpu.c 1904 */;
	enum cpuhp_state cocci_id/* kernel/cpu.c 1904 */;
	struct cpuhp_step *cocci_id/* kernel/cpu.c 1868 */;
	int (*cocci_id/* kernel/cpu.c 1804 */)(unsigned int cpu);
	const char *cocci_id/* kernel/cpu.c 1803 */;
	struct hlist_node *cocci_id/* kernel/cpu.c 1714 */;
	int (*cocci_id/* kernel/cpu.c 153 */)(unsigned int cpu,
					      struct hlist_node *node);
	struct hlist_node **cocci_id/* kernel/cpu.c 149 */;
	int cocci_id/* kernel/cpu.c 1365 */;
	void *cocci_id/* kernel/cpu.c 1329 */;
	unsigned long cocci_id/* kernel/cpu.c 1329 */;
	struct notifier_block *cocci_id/* kernel/cpu.c 1328 */;
	int __init cocci_id/* kernel/cpu.c 1308 */;
	struct cpuhp_step cocci_id/* kernel/cpu.c 130 */[];
	void __weak cocci_id/* kernel/cpu.c 1268 */;
	cpumask_var_t cocci_id/* kernel/cpu.c 1208 */;
	struct cpuhp_step {
		const char *name;
		union {
			int (*single)(unsigned int cpu);
			int (*multi)(unsigned int cpu,
				     struct hlist_node *node);
		} startup;
		union {
			int (*single)(unsigned int cpu);
			int (*multi)(unsigned int cpu,
				     struct hlist_node *node);
		} teardown;
		struct hlist_head list;
		bool cant_stop;
		bool multi_instance;
	} cocci_id/* kernel/cpu.c 112 */;
	struct task_struct *cocci_id/* kernel/cpu.c 1111 */;
	__typeof__(struct cpuhp_cpu_state) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
