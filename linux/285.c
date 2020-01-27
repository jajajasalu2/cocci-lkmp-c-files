cocci_test_suite() {
	long cocci_id/* kernel/time/timer.c 969 */;
	unsigned long *cocci_id/* kernel/time/timer.c 920 */;
	bool cocci_id/* kernel/time/timer.c 822 */;
	struct hlist_node *cocci_id/* kernel/time/timer.c 811 */;
	const char *cocci_id/* kernel/time/timer.c 780 */;
	struct lock_class_key *cocci_id/* kernel/time/timer.c 780 */;
	void cocci_id/* kernel/time/timer.c 732 */(struct timer_list *timer,
						   void (*func)(struct timer_list *),
						   unsigned int flags,
						   const char *name,
						   struct lock_class_key *key);
	enum debug_obj_state cocci_id/* kernel/time/timer.c 645 */;
	void *cocci_id/* kernel/time/timer.c 603 */;
	struct debug_obj_descr cocci_id/* kernel/time/timer.c 601 */;
	struct timer_list *cocci_id/* kernel/time/timer.c 548 */;
	void cocci_id/* kernel/time/timer.c 547 */;
	loff_t *cocci_id/* kernel/time/timer.c 253 */;
	size_t *cocci_id/* kernel/time/timer.c 252 */;
	void __user *cocci_id/* kernel/time/timer.c 252 */;
	struct ctl_table *cocci_id/* kernel/time/timer.c 251 */;
	struct work_struct *cocci_id/* kernel/time/timer.c 238 */;
	void cocci_id/* kernel/time/timer.c 219 */(struct work_struct *work);
	ktime_t cocci_id/* kernel/time/timer.c 2081 */;
	void __sched cocci_id/* kernel/time/timer.c 2079 */;
	void __init cocci_id/* kernel/time/timer.c 2011 */;
	struct timer_base {
		raw_spinlock_t lock;
		struct timer_list *running_timer;
#ifdef CONFIG_PREEMPT_RT
		spinlock_t expiry_lock;
		atomic_t timer_waiters;
#endif
		unsigned long clk;
		unsigned long next_expiry;
		unsigned int cpu;
		bool is_idle;
		bool must_forward_clk;
	DECLARE_BITMAP(pending_map,WHEEL_SIZE)
		;
		struct hlist_head vectors[WHEEL_SIZE];
	}____cacheline_aligned cocci_id/* kernel/time/timer.c 196 */;
	struct process_timer cocci_id/* kernel/time/timer.c 1858 */;
	signed long __sched cocci_id/* kernel/time/timer.c 1856 */;
	signed long cocci_id/* kernel/time/timer.c 1856 */;
	struct process_timer *cocci_id/* kernel/time/timer.c 1822 */;
	struct process_timer {
		struct timer_list timer;
		struct task_struct *task;
	} cocci_id/* kernel/time/timer.c 1815 */;
	struct softirq_action *cocci_id/* kernel/time/timer.c 1782 */;
	struct hlist_head cocci_id/* kernel/time/timer.c 1742 */[LVL_DEPTH];
	struct task_struct *cocci_id/* kernel/time/timer.c 1721 */;
	u64 cocci_id/* kernel/time/timer.c 1570 */;
	unsigned cocci_id/* kernel/time/timer.c 1509 */;
	unsigned int cocci_id/* kernel/time/timer.c 1463 */;
	unsigned long cocci_id/* kernel/time/timer.c 1460 */;
	struct hlist_head *cocci_id/* kernel/time/timer.c 1458 */;
	struct timer_base *cocci_id/* kernel/time/timer.c 1457 */;
	int cocci_id/* kernel/time/timer.c 1457 */;
	struct timer_list cocci_id/* kernel/time/timer.c 1435 */;
	struct lockdep_map cocci_id/* kernel/time/timer.c 1392 */;
	void (*cocci_id/* kernel/time/timer.c 1379 */)(struct timer_list *);
	u32 cocci_id/* kernel/time/timer.c 1277 */;
	
}
