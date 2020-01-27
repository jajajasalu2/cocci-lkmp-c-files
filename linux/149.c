cocci_test_suite() {
	struct hlist_head *cocci_id/* kernel/locking/lockdep.c 984 */;
	struct lock_chain *cocci_id/* kernel/locking/lockdep.c 983 */;
	bool cocci_id/* kernel/locking/lockdep.c 980 */;
	void cocci_id/* kernel/locking/lockdep.c 980 */;
	u16 cocci_id/* kernel/locking/lockdep.c 941 */[MAX_LOCKDEP_CHAIN_HLOCKS];
	arch_spinlock_t cocci_id/* kernel/locking/lockdep.c 87 */;
	struct lockdep_map cocci_id/* kernel/locking/lockdep.c 822 */;
	struct lockdep_subclass_key *cocci_id/* kernel/locking/lockdep.c 794 */;
	char cocci_id/* kernel/locking/lockdep.c 633 */[KSYM_NAME_LEN];
	char cocci_id/* kernel/locking/lockdep.c 618 */[LOCK_USAGE_CHARS];
	char cocci_id/* kernel/locking/lockdep.c 592 */;
	unsigned long cocci_id/* kernel/locking/lockdep.c 584 */;
	const struct lockdep_subclass_key *cocci_id/* kernel/locking/lockdep.c 582 */;
	const char *cocci_id/* kernel/locking/lockdep.c 582 */;
	char *cocci_id/* kernel/locking/lockdep.c 582 */;
	const int cocci_id/* kernel/locking/lockdep.c 5392 */;
	const void *cocci_id/* kernel/locking/lockdep.c 5277 */;
	void __init cocci_id/* kernel/locking/lockdep.c 5203 */;
	struct rcu_head *cocci_id/* kernel/locking/lockdep.c 4953 */;
	struct pending_free *cocci_id/* kernel/locking/lockdep.c 4935 */;
	void cocci_id/* kernel/locking/lockdep.c 4910 */(struct rcu_head *cb);
	const unsigned int cocci_id/* kernel/locking/lockdep.c 4883 */;
	void *const cocci_id/* kernel/locking/lockdep.c 4882 */;
	struct held_lock cocci_id/* kernel/locking/lockdep.c 4756 */;
	struct hlist_head cocci_id/* kernel/locking/lockdep.c 471 */[STACK_TRACE_HASH_SIZE];
	unsigned long cocci_id/* kernel/locking/lockdep.c 470 */[MAX_STACK_TRACE_ENTRIES];
	struct lock_trace cocci_id/* kernel/locking/lockdep.c 466 */;
	struct lock_class_stats *cocci_id/* kernel/locking/lockdep.c 4659 */;
	struct lock_trace {
		struct hlist_node hash_entry;
		u32 hash;
		u32 nr_entries;
		unsigned long entries[0]__aligned(sizeof(unsigned long));
	} cocci_id/* kernel/locking/lockdep.c 459 */;
	struct pin_cookie cocci_id/* kernel/locking/lockdep.c 4317 */;
	const struct lockdep_map *cocci_id/* kernel/locking/lockdep.c 4298 */;
	struct lock_class_key *cocci_id/* kernel/locking/lockdep.c 4117 */;
	unsigned int *cocci_id/* kernel/locking/lockdep.c 4084 */;
	int *cocci_id/* kernel/locking/lockdep.c 4050 */;
	const struct lock_class *cocci_id/* kernel/locking/lockdep.c 4018 */;
	const struct held_lock *cocci_id/* kernel/locking/lockdep.c 4011 */;
	u64 cocci_id/* kernel/locking/lockdep.c 3823 */;
	struct held_lock *cocci_id/* kernel/locking/lockdep.c 3819 */;
	struct task_struct *cocci_id/* kernel/locking/lockdep.c 3817 */;
	struct lockdep_map *cocci_id/* kernel/locking/lockdep.c 3812 */;
	int cocci_id/* kernel/locking/lockdep.c 3802 */(const struct lockdep_map *lock,
							int read);
	struct lock_class_key cocci_id/* kernel/locking/lockdep.c 3767 */;
	u32 cocci_id/* kernel/locking/lockdep.c 364 */;
	struct hlist_head cocci_id/* kernel/locking/lockdep.c 356 */[CHAINHASH_SIZE];
	struct hlist_head cocci_id/* kernel/locking/lockdep.c 345 */[CLASSHASH_SIZE];
	check_usage_f cocci_id/* kernel/locking/lockdep.c 3302 */;
	struct delayed_free {
		struct rcu_head rcu_head;
		int index;
		int scheduled;
		struct pending_free pf[2];
	} cocci_id/* kernel/locking/lockdep.c 330 */;
	int (*cocci_id/* kernel/locking/lockdep.c 3284 */)(struct task_struct *,
							   struct held_lock *,
							   enum lock_usage_bit bit,
							   const char *name);
	int (*cocci_id/* kernel/locking/lockdep.c 3271 */[])(struct lock_class *class);
	struct lock_class *cocci_id/* kernel/locking/lockdep.c 3253 */;
	int cocci_id/* kernel/locking/lockdep.c 3253 */;
	struct pending_free {
		struct list_head zapped;
	DECLARE_BITMAP(lock_chains_being_freed,MAX_LOCKDEP_CHAINS)
		;
	} cocci_id/* kernel/locking/lockdep.c 314 */;
	int cocci_id/* kernel/locking/lockdep.c 3047 */(struct task_struct *curr,
							struct held_lock *this,
							enum lock_usage_bit new_bit);
	unsigned long long cocci_id/* kernel/locking/lockdep.c 3014 */;
	long cocci_id/* kernel/locking/lockdep.c 2763 */;
	struct lock_class_stats cocci_id/* kernel/locking/lockdep.c 266 */;
	struct lock_chain cocci_id/* kernel/locking/lockdep.c 2624 */[MAX_LOCKDEP_CHAINS];
	struct lock_trace *cocci_id/* kernel/locking/lockdep.c 2553 */;
	struct lock_list cocci_id/* kernel/locking/lockdep.c 2231 */;
	enum lock_usage_bit cocci_id/* kernel/locking/lockdep.c 2228 */;
	enum lock_usage_bit *cocci_id/* kernel/locking/lockdep.c 2202 */;
	struct lock_time *cocci_id/* kernel/locking/lockdep.c 214 */;
	const char *cocci_id/* kernel/locking/lockdep.c 2098 */[];
	void __used cocci_id/* kernel/locking/lockdep.c 1942 */;
	unsigned long cocci_id/* kernel/locking/lockdep.c 186 */[];
	struct lock_trace **const cocci_id/* kernel/locking/lockdep.c 1786 */;
	unsigned long *cocci_id/* kernel/locking/lockdep.c 1701 */;
	struct lock_class cocci_id/* kernel/locking/lockdep.c 1537 */;
	struct lock_class cocci_id/* kernel/locking/lockdep.c 153 */[MAX_LOCKDEP_KEYS];
	unsigned int cocci_id/* kernel/locking/lockdep.c 1499 */;
	struct hlist_head cocci_id/* kernel/locking/lockdep.c 148 */[KEYHASH_SIZE];
	struct circular_queue *cocci_id/* kernel/locking/lockdep.c 1470 */;
	struct list_head *cocci_id/* kernel/locking/lockdep.c 1469 */;
	struct lock_list **cocci_id/* kernel/locking/lockdep.c 1464 */;
	int (*cocci_id/* kernel/locking/lockdep.c 1463 */)(struct lock_list *entry,
							   void *data);
	void *cocci_id/* kernel/locking/lockdep.c 1462 */;
	struct lock_list *cocci_id/* kernel/locking/lockdep.c 1461 */;
	struct lock_list cocci_id/* kernel/locking/lockdep.c 137 */[MAX_LOCKDEP_ENTRIES];
	struct circular_queue cocci_id/* kernel/locking/lockdep.c 1352 */;
	struct circular_queue {
		struct lock_list *element[MAX_CIRCULAR_QUEUE_SIZE];
		unsigned int front,rear;
	} cocci_id/* kernel/locking/lockdep.c 1347 */;
	const struct lock_trace *cocci_id/* kernel/locking/lockdep.c 1306 */;
	typeof(*class) cocci_id/* kernel/locking/lockdep.c 1214 */;
	const struct lock_class_key *cocci_id/* kernel/locking/lockdep.c 1140 */;
	uintptr_t cocci_id/* kernel/locking/lockdep.c 1108 */;
	__typeof__(struct lockdep_stats) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct lock_class_stats[MAX_LOCKDEP_KEYS]) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
