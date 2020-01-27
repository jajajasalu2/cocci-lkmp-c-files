cocci_test_suite() {
	unsigned long cocci_id/* kernel/stop_machine.c 81 */;
	bool cocci_id/* kernel/stop_machine.c 77 */;
	struct wake_q_head *cocci_id/* kernel/stop_machine.c 70 */;
	struct cpu_stop_work *cocci_id/* kernel/stop_machine.c 69 */;
	struct cpu_stopper *cocci_id/* kernel/stop_machine.c 68 */;
	void cocci_id/* kernel/stop_machine.c 68 */;
	struct multi_stop_data cocci_id/* kernel/stop_machine.c 599 */;
	int __init cocci_id/* kernel/stop_machine.c 578 */;
	struct smp_hotplug_thread cocci_id/* kernel/stop_machine.c 568 */;
	unsigned int cocci_id/* kernel/stop_machine.c 548 */;
	void cocci_id/* kernel/stop_machine.c 546 */(int cpu,
						     struct task_struct *stop);
	struct cpu_stop_done *cocci_id/* kernel/stop_machine.c 54 */;
	struct cpu_stop_work cocci_id/* kernel/stop_machine.c 508 */;
	struct cpu_stop_done cocci_id/* kernel/stop_machine.c 408 */;
	cpu_stop_fn_t cocci_id/* kernel/stop_machine.c 406 */;
	void *cocci_id/* kernel/stop_machine.c 406 */;
	const struct cpumask *cocci_id/* kernel/stop_machine.c 405 */;
	int cocci_id/* kernel/stop_machine.c 405 */;
	struct cpu_stopper {
		struct task_struct *thread;
		raw_spinlock_t lock;
		bool enabled;
		struct list_head works;
		struct cpu_stop_work stop_work;
	} cocci_id/* kernel/stop_machine.c 37 */;
	struct cpu_stop_done {
		atomic_t nr_todo;
		int ret;
		struct completion completion;
	} cocci_id/* kernel/stop_machine.c 30 */;
	enum multi_stop_state cocci_id/* kernel/stop_machine.c 190 */;
	void __weak cocci_id/* kernel/stop_machine.c 181 */;
	struct multi_stop_data *cocci_id/* kernel/stop_machine.c 175 */;
	struct multi_stop_data {
		cpu_stop_fn_t fn;
		void *data;
		unsigned int num_threads;
		const struct cpumask *active_cpus;
		enum multi_stop_state state;
		atomic_t thread_ack;
	} cocci_id/* kernel/stop_machine.c 154 */;
	enum multi_stop_state{MULTI_STOP_NONE, MULTI_STOP_PREPARE, MULTI_STOP_DISABLE_IRQ, MULTI_STOP_RUN, MULTI_STOP_EXIT,} cocci_id/* kernel/stop_machine.c 141 */;
	__typeof__(struct cpu_stopper) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
