cocci_test_suite() {
	struct spin_multi_per_thread cocci_id/* arch/mips/kernel/spinlock_test.c 95 */;
	struct spin_multi_state cocci_id/* arch/mips/kernel/spinlock_test.c 94 */;
	ktime_t cocci_id/* arch/mips/kernel/spinlock_test.c 93 */;
	u64 *cocci_id/* arch/mips/kernel/spinlock_test.c 91 */;
	void *cocci_id/* arch/mips/kernel/spinlock_test.c 91 */;
	int cocci_id/* arch/mips/kernel/spinlock_test.c 91 */;
	struct spin_multi_state *cocci_id/* arch/mips/kernel/spinlock_test.c 60 */;
	struct spin_multi_per_thread *cocci_id/* arch/mips/kernel/spinlock_test.c 59 */;
	struct spin_multi_per_thread {
		struct spin_multi_state *state;
		ktime_t start;
	} cocci_id/* arch/mips/kernel/spinlock_test.c 50 */;
	struct spin_multi_state {
		raw_spinlock_t lock;
		atomic_t start_wait;
		atomic_t enter_wait;
		atomic_t exit_wait;
		int loops;
	} cocci_id/* arch/mips/kernel/spinlock_test.c 42 */;
	int __init cocci_id/* arch/mips/kernel/spinlock_test.c 119 */;
	void cocci_id/* arch/mips/kernel/spinlock_test.c 119 */;
}
