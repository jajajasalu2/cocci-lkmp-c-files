cocci_test_suite() {
	struct kthread_delayed_work cocci_id/* kernel/kthread.c 999 */;
	struct kthread_delayed_work *cocci_id/* kernel/kthread.c 998 */;
	unsigned long *cocci_id/* kernel/kthread.c 994 */;
	bool cocci_id/* kernel/kthread.c 993 */;
	struct kthread_work *cocci_id/* kernel/kthread.c 993 */;
	struct kthread_flush_work cocci_id/* kernel/kthread.c 953 */;
	struct kthread_flush_work *cocci_id/* kernel/kthread.c 940 */;
	struct kthread_flush_work {
		struct kthread_work work;
		struct completion done;
	} cocci_id/* kernel/kthread.c 933 */;
	struct timer_list *cocci_id/* kernel/kthread.c 873 */;
	struct list_head *cocci_id/* kernel/kthread.c 796 */;
	void __user *cocci_id/* kernel/kthread.c 70 */;
	struct kthread_work cocci_id/* kernel/kthread.c 663 */;
	struct kthread_worker cocci_id/* kernel/kthread.c 610 */;
	struct lock_class_key *cocci_id/* kernel/kthread.c 608 */;
	const char *cocci_id/* kernel/kthread.c 607 */;
	struct kthread_create_info cocci_id/* kernel/kthread.c 592 */;
	enum KTHREAD_BITS{KTHREAD_IS_PER_CPU=0, KTHREAD_SHOULD_STOP, KTHREAD_SHOULD_PARK,} cocci_id/* kernel/kthread.c 57 */;
	struct kthread {
		unsigned long flags;
		unsigned int cpu;
		void *data;
		struct completion parked;
		struct completion exited;
#ifdef CONFIG_BLK_CGROUP
		struct cgroup_subsys_state *blkcg_css;
#endif
	} cocci_id/* kernel/kthread.c 46 */;
	struct task_struct *cocci_id/* kernel/kthread.c 411 */;
	unsigned int cocci_id/* kernel/kthread.c 411 */;
	long cocci_id/* kernel/kthread.c 411 */;
	void cocci_id/* kernel/kthread.c 411 */;
	unsigned long cocci_id/* kernel/kthread.c 397 */;
	const struct cpumask *cocci_id/* kernel/kthread.c 395 */;
	char cocci_id/* kernel/kthread.c 337 */[TASK_COMM_LEN];
	const struct sched_param cocci_id/* kernel/kthread.c 336 */;
	struct kthread_create_info {
		int (*threadfn)(void *data);
		void *data;
		int node;
		struct task_struct *result;
		struct completion *done;
		struct list_head list;
	} cocci_id/* kernel/kthread.c 32 */;
	struct kthread_create_info *cocci_id/* kernel/kthread.c 300 */;
	va_list cocci_id/* kernel/kthread.c 296 */;
	const char cocci_id/* kernel/kthread.c 295 */[];
	void *cocci_id/* kernel/kthread.c 294 */;
	int (*cocci_id/* kernel/kthread.c 293 */)(void *data);
	struct completion *cocci_id/* kernel/kthread.c 281 */;
	struct kthread *cocci_id/* kernel/kthread.c 186 */;
	bool *cocci_id/* kernel/kthread.c 139 */;
	struct cgroup_subsys_state *cocci_id/* kernel/kthread.c 1204 */;
	int cocci_id/* kernel/kthread.c 1084 */;
	struct kthread_worker *cocci_id/* kernel/kthread.c 1000 */;
}
