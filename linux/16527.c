cocci_test_suite() {
	struct cpuidle_coupled {
		cpumask_t coupled_cpus;
		int requested_state[NR_CPUS];
		atomic_t ready_waiting_counts;
		atomic_t abort_barrier;
		int online_count;
		int refcnt;
		int prevent;
	} cocci_id/* drivers/cpuidle/coupled.c 96 */;
	int __init cocci_id/* drivers/cpuidle/coupled.c 773 */;
	struct cpuidle_device *cocci_id/* drivers/cpuidle/coupled.c 745 */;
	unsigned int cocci_id/* drivers/cpuidle/coupled.c 743 */;
	int cocci_id/* drivers/cpuidle/coupled.c 743 */;
	struct cpuidle_coupled *cocci_id/* drivers/cpuidle/coupled.c 728 */;
	void cocci_id/* drivers/cpuidle/coupled.c 728 */;
	struct cpuidle_coupled cocci_id/* drivers/cpuidle/coupled.c 660 */;
	cpumask_t cocci_id/* drivers/cpuidle/coupled.c 441 */;
	bool cocci_id/* drivers/cpuidle/coupled.c 439 */;
	call_single_data_t *cocci_id/* drivers/cpuidle/coupled.c 333 */;
	unsigned long cocci_id/* drivers/cpuidle/coupled.c 314 */;
	void *cocci_id/* drivers/cpuidle/coupled.c 312 */;
	struct cpuidle_driver *cocci_id/* drivers/cpuidle/coupled.c 186 */;
	atomic_t *cocci_id/* drivers/cpuidle/coupled.c 148 */;
	__typeof__(call_single_data_t) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
