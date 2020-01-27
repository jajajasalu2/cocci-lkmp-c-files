cocci_test_suite() {
	struct qnode {
		struct mcs_spinlock mcs;
#ifdef CONFIG_PARAVIRT_SPINLOCKS
		long reserved[2];
#endif
	} cocci_id/* kernel/locking/qspinlock.c 80 */;
	u32 cocci_id/* kernel/locking/qspinlock.c 276 */;
	struct qspinlock *cocci_id/* kernel/locking/qspinlock.c 274 */;
	struct mcs_spinlock *cocci_id/* kernel/locking/qspinlock.c 271 */;
	void cocci_id/* kernel/locking/qspinlock.c 271 */;
	struct qnode *cocci_id/* kernel/locking/qspinlock.c 135 */;
	int cocci_id/* kernel/locking/qspinlock.c 126 */;
	struct qnode cocci_id/* kernel/locking/qspinlock.c 107 */;
}
