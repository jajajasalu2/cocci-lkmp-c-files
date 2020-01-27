cocci_test_suite() {
	struct rt_sigframe_x32 __user *cocci_id/* arch/x86/kernel/signal.c 867 */;
	struct task_struct *cocci_id/* arch/x86/kernel/signal.c 848 */;
	char *cocci_id/* arch/x86/kernel/signal.c 846 */;
	u16 cocci_id/* arch/x86/kernel/signal.c 82 */;
	struct ksignal cocci_id/* arch/x86/kernel/signal.c 813 */;
	void cocci_id/* arch/x86/kernel/signal.c 811 */;
	const struct pt_regs *cocci_id/* arch/x86/kernel/signal.c 771 */;
	u32 cocci_id/* arch/x86/kernel/signal.c 76 */;
	struct kernel_vm86_regs *cocci_id/* arch/x86/kernel/signal.c 717 */;
	struct fpu *cocci_id/* arch/x86/kernel/signal.c 714 */;
	bool cocci_id/* arch/x86/kernel/signal.c 713 */;
	compat_sigset_t *cocci_id/* arch/x86/kernel/signal.c 692 */;
	long cocci_id/* arch/x86/kernel/signal.c 647 */;
	unsigned long cocci_id/* arch/x86/kernel/signal.c 645 */;
	struct rt_sigframe __user *cocci_id/* arch/x86/kernel/signal.c 643 */;
	rt_sigreturn cocci_id/* arch/x86/kernel/signal.c 640 */;
	sigset_t cocci_id/* arch/x86/kernel/signal.c 612 */;
	struct sigframe __user *cocci_id/* arch/x86/kernel/signal.c 611 */;
	struct pt_regs *cocci_id/* arch/x86/kernel/signal.c 610 */;
	sigreturn cocci_id/* arch/x86/kernel/signal.c 608 */;
	unsigned short cocci_id/* arch/x86/kernel/signal.c 55 */;
	u64 *cocci_id/* arch/x86/kernel/signal.c 355 */;
	void __user *cocci_id/* arch/x86/kernel/signal.c 316 */;
	sigset_t *cocci_id/* arch/x86/kernel/signal.c 312 */;
	struct ksignal *cocci_id/* arch/x86/kernel/signal.c 312 */;
	int cocci_id/* arch/x86/kernel/signal.c 311 */;
	const struct {
		u8 movl;
		u32 val;
		u16 int80;
		u8 pad;
	}__attribute__((packed)) cocci_id/* arch/x86/kernel/signal.c 299 */;
	const struct {
		u16 poplmovl;
		u32 val;
		u16 int80;
	}__attribute__((packed)) cocci_id/* arch/x86/kernel/signal.c 289 */;
	void __user **cocci_id/* arch/x86/kernel/signal.c 241 */;
	struct k_sigaction *cocci_id/* arch/x86/kernel/signal.c 240 */;
	size_t cocci_id/* arch/x86/kernel/signal.c 240 */;
}
