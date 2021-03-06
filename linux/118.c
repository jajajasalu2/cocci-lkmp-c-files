cocci_test_suite() {
	struct cpumask *cocci_id/* kernel/sched/topology.c 840 */;
	enum s_alloc{sa_rootdomain, sa_sd, sa_sd_storage, sa_none,} cocci_id/* kernel/sched/topology.c 712 */;
	struct s_data {
		struct sched_domain *__percpu *sd;
		struct root_domain *rd;
	} cocci_id/* kernel/sched/topology.c 707 */;
	struct root_domain *cocci_id/* kernel/sched/topology.c 542 */;
	struct root_domain cocci_id/* kernel/sched/topology.c 533 */;
	struct cpufreq_governor *cocci_id/* kernel/sched/topology.c 349 */;
	struct cpufreq_policy *cocci_id/* kernel/sched/topology.c 348 */;
	struct perf_domain *cocci_id/* kernel/sched/topology.c 345 */;
	struct cpufreq_governor cocci_id/* kernel/sched/topology.c 341 */;
	struct perf_domain cocci_id/* kernel/sched/topology.c 299 */;
	struct rcu_head *cocci_id/* kernel/sched/topology.c 295 */;
	struct em_perf_domain *cocci_id/* kernel/sched/topology.c 259 */;
	bool __maybe_unused cocci_id/* kernel/sched/topology.c 2182 */;
	struct sched_domain_attr cocci_id/* kernel/sched/topology.c 2140 */;
	loff_t *cocci_id/* kernel/sched/topology.c 212 */;
	size_t *cocci_id/* kernel/sched/topology.c 212 */;
	void __user *cocci_id/* kernel/sched/topology.c 212 */;
	struct ctl_table *cocci_id/* kernel/sched/topology.c 211 */;
	cpumask_var_t cocci_id/* kernel/sched/topology.c 2086 */[];
	cpumask_var_t *cocci_id/* kernel/sched/topology.c 2069 */;
	unsigned int cocci_id/* kernel/sched/topology.c 2069 */;
	int __weak cocci_id/* kernel/sched/topology.c 2064 */;
	cpumask_var_t cocci_id/* kernel/sched/topology.c 2057 */;
	struct rq *cocci_id/* kernel/sched/topology.c 1951 */;
	struct s_data cocci_id/* kernel/sched/topology.c 1950 */;
	unsigned long cocci_id/* kernel/sched/topology.c 1892 */;
	bool cocci_id/* kernel/sched/topology.c 1890 */;
	struct sched_domain_attr *cocci_id/* kernel/sched/topology.c 1853 */;
	struct sched_group_capacity cocci_id/* kernel/sched/topology.c 1800 */;
	struct sched_group cocci_id/* kernel/sched/topology.c 1791 */;
	struct sched_domain_shared cocci_id/* kernel/sched/topology.c 1784 */;
	struct sched_domain cocci_id/* kernel/sched/topology.c 1777 */;
	struct sched_group_capacity *cocci_id/* kernel/sched/topology.c 1767 */;
	struct sched_group *cocci_id/* kernel/sched/topology.c 1763 */;
	struct sched_domain_shared *cocci_id/* kernel/sched/topology.c 1759 */;
	struct sched_domain *cocci_id/* kernel/sched/topology.c 1755 */;
	struct sd_data *cocci_id/* kernel/sched/topology.c 1753 */;
	struct sched_domain_topology_level *cocci_id/* kernel/sched/topology.c 1749 */;
	int cocci_id/* kernel/sched/topology.c 1747 */;
	char *cocci_id/* kernel/sched/topology.c 15 */;
	int __init cocci_id/* kernel/sched/topology.c 15 */;
	const char *cocci_id/* kernel/sched/topology.c 1464 */;
	struct sched_domain_topology_level cocci_id/* kernel/sched/topology.c 1432 */[];
	int __read_mostly cocci_id/* kernel/sched/topology.c 1284 */;
	struct cpumask ***cocci_id/* kernel/sched/topology.c 1283 */;
	int *cocci_id/* kernel/sched/topology.c 1282 */;
	enum numa_topology_type cocci_id/* kernel/sched/topology.c 1276 */;
	const struct cpumask *cocci_id/* kernel/sched/topology.c 1218 */;
	enum s_alloc cocci_id/* kernel/sched/topology.c 1217 */;
	struct s_data *cocci_id/* kernel/sched/topology.c 1217 */;
	void cocci_id/* kernel/sched/topology.c 1217 */;
	int cocci_id/* kernel/sched/topology.c 1215 */(const struct cpumask *cpu_map);
	void cocci_id/* kernel/sched/topology.c 1214 */(const struct cpumask *cpu_map);
	__typeof__(struct sched_domain_shared *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct sched_domain *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
