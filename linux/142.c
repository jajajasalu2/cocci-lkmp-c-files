cocci_test_suite() {
	int cocci_id/* kernel/locking/semaphore.c 75 */;
	unsigned long cocci_id/* kernel/locking/semaphore.c 55 */;
	void cocci_id/* kernel/locking/semaphore.c 53 */;
	int cocci_id/* kernel/locking/semaphore.c 39 */(struct semaphore *sem,
							long timeout);
	int cocci_id/* kernel/locking/semaphore.c 37 */(struct semaphore *sem);
	void cocci_id/* kernel/locking/semaphore.c 36 */(struct semaphore *sem);
	struct semaphore_waiter *cocci_id/* kernel/locking/semaphore.c 257 */;
	struct semaphore *cocci_id/* kernel/locking/semaphore.c 235 */;
	void __sched cocci_id/* kernel/locking/semaphore.c 235 */;
	struct semaphore_waiter cocci_id/* kernel/locking/semaphore.c 207 */;
	long cocci_id/* kernel/locking/semaphore.c 204 */;
	int __sched cocci_id/* kernel/locking/semaphore.c 204 */;
	struct semaphore_waiter {
		struct list_head list;
		struct task_struct *task;
		bool up;
	} cocci_id/* kernel/locking/semaphore.c 193 */;
}
