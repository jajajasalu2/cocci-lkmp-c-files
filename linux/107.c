cocci_test_suite() {
	struct kernel_cpustat cocci_id/* kernel/sched/cpuacct.c 74 */;
	struct cpuacct_usage cocci_id/* kernel/sched/cpuacct.c 70 */;
	struct cgroup_subsys cocci_id/* kernel/sched/cpuacct.c 370 */;
	struct cpuacct cocci_id/* kernel/sched/cpuacct.c 37 */;
	struct task_struct *cocci_id/* kernel/sched/cpuacct.c 360 */;
	void cocci_id/* kernel/sched/cpuacct.c 360 */;
	struct pt_regs *cocci_id/* kernel/sched/cpuacct.c 342 */;
	struct cftype cocci_id/* kernel/sched/cpuacct.c 296 */[];
	long long cocci_id/* kernel/sched/cpuacct.c 290 */;
	struct cpuacct {
		struct cgroup_subsys_state css;
		struct cpuacct_usage __percpu *cpuusage;
		struct kernel_cpustat __percpu *cpustat;
	} cocci_id/* kernel/sched/cpuacct.c 28 */;
	u64 *cocci_id/* kernel/sched/cpuacct.c 278 */;
	s64 cocci_id/* kernel/sched/cpuacct.c 272 */[CPUACCT_STAT_NSTATS];
	struct cpuacct_usage *cocci_id/* kernel/sched/cpuacct.c 245 */;
	void *cocci_id/* kernel/sched/cpuacct.c 233 */;
	struct cpuacct_usage {
		u64 usages[CPUACCT_STAT_NSTATS];
	} cocci_id/* kernel/sched/cpuacct.c 23 */;
	unsigned long long cocci_id/* kernel/sched/cpuacct.c 212 */;
	u64 cocci_id/* kernel/sched/cpuacct.c 207 */;
	struct cpuacct *cocci_id/* kernel/sched/cpuacct.c 206 */;
	enum cpuacct_stat_index cocci_id/* kernel/sched/cpuacct.c 204 */;
	struct seq_file *cocci_id/* kernel/sched/cpuacct.c 203 */;
	int cocci_id/* kernel/sched/cpuacct.c 203 */;
	struct cftype *cocci_id/* kernel/sched/cpuacct.c 180 */;
	const char *const cocci_id/* kernel/sched/cpuacct.c 18 */[];
	struct cgroup_subsys_state *cocci_id/* kernel/sched/cpuacct.c 155 */;
	enum cpuacct_stat_index{CPUACCT_STAT_USER, CPUACCT_STAT_SYSTEM, CPUACCT_STAT_NSTATS,} cocci_id/* kernel/sched/cpuacct.c 11 */;
	__typeof__(struct cpuacct_usage) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
