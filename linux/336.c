cocci_test_suite() {
	int cocci_id/* kernel/smp.c 92 */;
	void __init cocci_id/* kernel/smp.c 90 */;
	struct smp_call_on_cpu_struct cocci_id/* kernel/smp.c 802 */;
	int (*cocci_id/* kernel/smp.c 800 */)(void *);
	struct smp_call_on_cpu_struct *cocci_id/* kernel/smp.c 788 */;
	struct work_struct *cocci_id/* kernel/smp.c 786 */;
	struct smp_call_on_cpu_struct {
		struct work_struct work;
		struct completion done;
		int (*func)(void *);
		void *data;
		int ret;
		int cpu;
	} cocci_id/* kernel/smp.c 777 */;
	void *cocci_id/* kernel/smp.c 726 */;
	gfp_t cocci_id/* kernel/smp.c 719 */;
	bool (*cocci_id/* kernel/smp.c 717 */)(int cpu, void *info);
	cpumask_var_t cocci_id/* kernel/smp.c 687 */;
	const struct cpumask *cocci_id/* kernel/smp.c 685 */;
	void (*cocci_id/* kernel/smp.c 611 */)(void *info);
	unsigned int cocci_id/* kernel/smp.c 568 */;
	char *cocci_id/* kernel/smp.c 556 */;
	int __init cocci_id/* kernel/smp.c 556 */;
	void __weak cocci_id/* kernel/smp.c 530 */;
	void cocci_id/* kernel/smp.c 530 */;
	struct call_function_data *cocci_id/* kernel/smp.c 415 */;
	void cocci_id/* kernel/smp.c 41 */(bool warn_cpu_offline);
	struct llist_head cocci_id/* kernel/smp.c 39 */;
	struct call_function_data cocci_id/* kernel/smp.c 37 */;
	struct call_function_data {
		call_single_data_t __percpu *csd;
		cpumask_var_t cpumask;
		cpumask_var_t cpumask_ipi;
	} cocci_id/* kernel/smp.c 31 */;
	call_single_data_t cocci_id/* kernel/smp.c 273 */;
	enum{CSD_FLAG_LOCK=0x01, CSD_FLAG_SYNCHRONOUS=0x02,} cocci_id/* kernel/smp.c 26 */;
	smp_call_func_t cocci_id/* kernel/smp.c 239 */;
	struct llist_node *cocci_id/* kernel/smp.c 213 */;
	struct llist_head *cocci_id/* kernel/smp.c 212 */;
	bool cocci_id/* kernel/smp.c 210 */;
	unsigned cocci_id/* kernel/smp.c 160 */;
	unsigned long cocci_id/* kernel/smp.c 146 */;
	call_single_data_t *cocci_id/* kernel/smp.c 112 */;
}
