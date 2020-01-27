cocci_test_suite() {
	struct idle_inject_device {
		struct hrtimer timer;
		unsigned int idle_duration_us;
		unsigned int run_duration_us;
		unsigned long int cpumask[0];
	} cocci_id/* drivers/powercap/idle_inject.c 66 */;
	struct idle_inject_thread {
		struct task_struct *tsk;
		int should_run;
	} cocci_id/* drivers/powercap/idle_inject.c 54 */;
	int __init cocci_id/* drivers/powercap/idle_inject.c 353 */;
	struct smp_hotplug_thread cocci_id/* drivers/powercap/idle_inject.c 345 */;
	int cocci_id/* drivers/powercap/idle_inject.c 291 */;
	struct cpumask *cocci_id/* drivers/powercap/idle_inject.c 288 */;
	struct sched_param cocci_id/* drivers/powercap/idle_inject.c 258 */;
	unsigned int *cocci_id/* drivers/powercap/idle_inject.c 165 */;
	struct idle_inject_thread *cocci_id/* drivers/powercap/idle_inject.c 131 */;
	struct idle_inject_device *cocci_id/* drivers/powercap/idle_inject.c 130 */;
	unsigned int cocci_id/* drivers/powercap/idle_inject.c 128 */;
	void cocci_id/* drivers/powercap/idle_inject.c 128 */;
	struct idle_inject_device cocci_id/* drivers/powercap/idle_inject.c 109 */;
	enum hrtimer_restart cocci_id/* drivers/powercap/idle_inject.c 105 */;
	struct hrtimer *cocci_id/* drivers/powercap/idle_inject.c 105 */;
	__typeof__(struct idle_inject_thread) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct idle_inject_device *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
