cocci_test_suite() {
	struct rwsem_waiter cocci_id/* kernel/locking/rwsem.c 998 */;
	struct rw_semaphore __sched *cocci_id/* kernel/locking/rwsem.c 994 */;
	enum owner_state cocci_id/* kernel/locking/rwsem.c 810 */;
	u64 cocci_id/* kernel/locking/rwsem.c 793 */;
	enum owner_state{OWNER_NULL=1 << 0, OWNER_WRITER=1 << 1, OWNER_READER=1 << 2, OWNER_NONSPINNABLE=1 << 3,} cocci_id/* kernel/locking/rwsem.c 697 */;
	struct list_head cocci_id/* kernel/locking/rwsem.c 407 */;
	struct rwsem_waiter *cocci_id/* kernel/locking/rwsem.c 405 */;
	struct wake_q_head *cocci_id/* kernel/locking/rwsem.c 403 */;
	enum rwsem_wake_type cocci_id/* kernel/locking/rwsem.c 402 */;
	enum writer_wait_state{WRITER_NOT_FIRST, WRITER_FIRST, WRITER_HANDOFF,} cocci_id/* kernel/locking/rwsem.c 368 */;
	enum rwsem_wake_type{RWSEM_WAKE_ANY, RWSEM_WAKE_READERS, RWSEM_WAKE_READ_OWNED,} cocci_id/* kernel/locking/rwsem.c 362 */;
	struct rwsem_waiter {
		struct list_head list;
		struct task_struct *task;
		enum rwsem_waiter_type type;
		unsigned long timeout;
		unsigned long last_rowner;
	} cocci_id/* kernel/locking/rwsem.c 352 */;
	enum rwsem_waiter_type{RWSEM_WAITING_FOR_WRITE, RWSEM_WAITING_FOR_READ,} cocci_id/* kernel/locking/rwsem.c 347 */;
	void *cocci_id/* kernel/locking/rwsem.c 331 */;
	struct lock_class_key *cocci_id/* kernel/locking/rwsem.c 325 */;
	const char *cocci_id/* kernel/locking/rwsem.c 324 */;
	unsigned long *cocci_id/* kernel/locking/rwsem.c 296 */;
	bool cocci_id/* kernel/locking/rwsem.c 220 */;
	unsigned long cocci_id/* kernel/locking/rwsem.c 206 */;
	struct task_struct *cocci_id/* kernel/locking/rwsem.c 204 */;
	struct lockdep_map *cocci_id/* kernel/locking/rwsem.c 1611 */;
	int __sched cocci_id/* kernel/locking/rwsem.c 1501 */;
	void __sched cocci_id/* kernel/locking/rwsem.c 1492 */;
	long cocci_id/* kernel/locking/rwsem.c 1365 */;
	int cocci_id/* kernel/locking/rwsem.c 1351 */;
	struct rw_semaphore *cocci_id/* kernel/locking/rwsem.c 1341 */;
	void cocci_id/* kernel/locking/rwsem.c 1341 */;
	enum writer_wait_state cocci_id/* kernel/locking/rwsem.c 1143 */;
}
