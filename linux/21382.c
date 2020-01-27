cocci_test_suite() {
	sigset_t cocci_id/* arch/csky/kernel/signal.c 69 */;
	struct rt_sigframe __user *cocci_id/* arch/csky/kernel/signal.c 68 */;
	struct pt_regs *cocci_id/* arch/csky/kernel/signal.c 67 */;
	rt_sigreturn cocci_id/* arch/csky/kernel/signal.c 65 */;
	struct pt_regs cocci_id/* arch/csky/kernel/signal.c 57 */;
	long cocci_id/* arch/csky/kernel/signal.c 51 */;
	struct rt_sigframe {
		int pad[3];
		struct siginfo info;
		struct ucontext uc;
	} cocci_id/* arch/csky/kernel/signal.c 41 */;
	unsigned long cocci_id/* arch/csky/kernel/signal.c 252 */;
	void cocci_id/* arch/csky/kernel/signal.c 251 */;
	struct ksignal cocci_id/* arch/csky/kernel/signal.c 211 */;
	struct user_fp cocci_id/* arch/csky/kernel/signal.c 19 */;
	int cocci_id/* arch/csky/kernel/signal.c 176 */;
	sigset_t *cocci_id/* arch/csky/kernel/signal.c 175 */;
	struct sigcontext __user *cocci_id/* arch/csky/kernel/signal.c 16 */;
	struct csky_vdso *cocci_id/* arch/csky/kernel/signal.c 137 */;
	struct rt_sigframe *cocci_id/* arch/csky/kernel/signal.c 135 */;
	void __user __force *cocci_id/* arch/csky/kernel/signal.c 121 */;
	size_t cocci_id/* arch/csky/kernel/signal.c 110 */;
	struct ksignal *cocci_id/* arch/csky/kernel/signal.c 109 */;
	void __user *cocci_id/* arch/csky/kernel/signal.c 109 */;
}
