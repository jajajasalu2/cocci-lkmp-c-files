cocci_test_suite() {
	int __init cocci_id/* arch/arm/common/bL_switcher.c 773 */;
	bool cocci_id/* arch/arm/common/bL_switcher.c 737 */;
	struct attribute_group cocci_id/* arch/arm/common/bL_switcher.c 716 */;
	struct attribute *cocci_id/* arch/arm/common/bL_switcher.c 710 */[];
	struct kobj_attribute cocci_id/* arch/arm/common/bL_switcher.c 704 */;
	const char *cocci_id/* arch/arm/common/bL_switcher.c 677 */;
	size_t cocci_id/* arch/arm/common/bL_switcher.c 677 */;
	struct kobj_attribute *cocci_id/* arch/arm/common/bL_switcher.c 671 */;
	char *cocci_id/* arch/arm/common/bL_switcher.c 671 */;
	struct kobject *cocci_id/* arch/arm/common/bL_switcher.c 670 */;
	ssize_t cocci_id/* arch/arm/common/bL_switcher.c 670 */;
	volatile long cocci_id/* arch/arm/common/bL_switcher.c 65 */;
	unsigned cocci_id/* arch/arm/common/bL_switcher.c 64 */;
	void *cocci_id/* arch/arm/common/bL_switcher.c 62 */;
	void cocci_id/* arch/arm/common/bL_switcher.c 62 */;
	struct task_struct *cocci_id/* arch/arm/common/bL_switcher.c 607 */;
	void *__always_unused cocci_id/* arch/arm/common/bL_switcher.c 535 */;
	u32 cocci_id/* arch/arm/common/bL_switcher.c 516 */;
	cpumask_t cocci_id/* arch/arm/common/bL_switcher.c 424 */;
	struct device *cocci_id/* arch/arm/common/bL_switcher.c 413 */;
	unsigned long cocci_id/* arch/arm/common/bL_switcher.c 397 */;
	int cocci_id/* arch/arm/common/bL_switcher.c 397 */;
	struct notifier_block *cocci_id/* arch/arm/common/bL_switcher.c 385 */;
	unsigned int cocci_id/* arch/arm/common/bL_switcher.c 382 */[NR_CPUS];
	struct bL_thread *cocci_id/* arch/arm/common/bL_switcher.c 347 */;
	bL_switch_completion_handler cocci_id/* arch/arm/common/bL_switcher.c 344 */;
	unsigned int cocci_id/* arch/arm/common/bL_switcher.c 343 */;
	struct sched_param cocci_id/* arch/arm/common/bL_switcher.c 273 */;
	struct bL_thread cocci_id/* arch/arm/common/bL_switcher.c 268 */[NR_CPUS];
	struct bL_thread {
		spinlock_t lock;
		struct task_struct *task;
		wait_queue_head_t wq;
		int wanted_cluster;
		struct completion started;
		bL_switch_completion_handler completer;
		void *completer_cookie;
	} cocci_id/* arch/arm/common/bL_switcher.c 258 */;
	volatile long *cocci_id/* arch/arm/common/bL_switcher.c 152 */;
	struct completion cocci_id/* arch/arm/common/bL_switcher.c 151 */;
	int cocci_id/* arch/arm/common/bL_switcher.c 138 */[NR_CPUS];
	unsigned int cocci_id/* arch/arm/common/bL_switcher.c 137 */[MAX_CPUS_PER_CLUSTER][MAX_NR_CLUSTERS];
	void cocci_id/* arch/arm/common/bL_switcher.c 121 */(void (*fn)(void *),
							     void *arg,
							     void *sp);
}
