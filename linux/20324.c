cocci_test_suite() {
	long cocci_id/* arch/x86/kernel/process.c 985 */;
	unsigned long *cocci_id/* arch/x86/kernel/process.c 972 */;
	struct mm_struct *cocci_id/* arch/x86/kernel/process.c 918 */;
	int cocci_id/* arch/x86/kernel/process.c 89 */;
	char *cocci_id/* arch/x86/kernel/process.c 877 */;
	int __init cocci_id/* arch/x86/kernel/process.c 877 */;
	u32 cocci_id/* arch/x86/kernel/process.c 856 */;
	void __init cocci_id/* arch/x86/kernel/process.c 854 */;
	void *cocci_id/* arch/x86/kernel/process.c 809 */;
	const struct cpuinfo_x86 *cocci_id/* arch/x86/kernel/process.c 787 */;
	void __cpuidle cocci_id/* arch/x86/kernel/process.c 696 */;
	void (*cocci_id/* arch/x86/kernel/process.c 665 */)(void);
	struct thread_struct *cocci_id/* arch/x86/kernel/process.c 618 */;
	struct task_struct *cocci_id/* arch/x86/kernel/process.c 616 */;
	bool cocci_id/* arch/x86/kernel/process.c 545 */;
	u64 cocci_id/* arch/x86/kernel/process.c 544 */;
	unsigned long cocci_id/* arch/x86/kernel/process.c 540 */;
	void cocci_id/* arch/x86/kernel/process.c 540 */;
	struct ssb_state *cocci_id/* arch/x86/kernel/process.c 480 */;
	struct ssb_state {
		struct ssb_state *shared_state;
		raw_spinlock_t lock;
		unsigned int disable_state;
		unsigned long local_state;
	} cocci_id/* arch/x86/kernel/process.c 418 */;
	u16 *cocci_id/* arch/x86/kernel/process.c 381 */;
	struct tss_struct *cocci_id/* arch/x86/kernel/process.c 353 */;
	struct io_bitmap *cocci_id/* arch/x86/kernel/process.c 353 */;
	unsigned int __user *cocci_id/* arch/x86/kernel/process.c 231 */;
	unsigned int cocci_id/* arch/x86/kernel/process.c 224 */;
	struct pt_regs cocci_id/* arch/x86/kernel/process.c 163 */;
	struct fork_frame cocci_id/* arch/x86/kernel/process.c 134 */;
	struct pt_regs *cocci_id/* arch/x86/kernel/process.c 130 */;
	struct fork_frame *cocci_id/* arch/x86/kernel/process.c 129 */;
	struct inactive_task_frame *cocci_id/* arch/x86/kernel/process.c 128 */;
	struct user_desc __user *cocci_id/* arch/x86/kernel/process.c 117 */;
	struct fpu *cocci_id/* arch/x86/kernel/process.c 105 */;
	__typeof__(struct ssb_state) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(u64) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(bool) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}