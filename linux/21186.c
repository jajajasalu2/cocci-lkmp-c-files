cocci_test_suite() {
	long cocci_id/* arch/sh/kernel/signal_32.c 87 */;
	struct rt_sigframe {
		struct siginfo info;
		struct ucontext uc;
		u16 retcode[8];
	} cocci_id/* arch/sh/kernel/signal_32.c 70 */;
	struct sigframe {
		struct sigcontext sc;
		unsigned long extramask[_NSIG_WORDS - 1];
		u16 retcode[8];
	} cocci_id/* arch/sh/kernel/signal_32.c 63 */;
	unsigned long cocci_id/* arch/sh/kernel/signal_32.c 500 */;
	struct pt_regs *cocci_id/* arch/sh/kernel/signal_32.c 499 */;
	unsigned int cocci_id/* arch/sh/kernel/signal_32.c 499 */;
	void cocci_id/* arch/sh/kernel/signal_32.c 499 */;
	struct ksignal cocci_id/* arch/sh/kernel/signal_32.c 459 */;
	int cocci_id/* arch/sh/kernel/signal_32.c 437 */;
	sigset_t *cocci_id/* arch/sh/kernel/signal_32.c 436 */;
	struct ksignal *cocci_id/* arch/sh/kernel/signal_32.c 434 */;
	struct sigaction *cocci_id/* arch/sh/kernel/signal_32.c 405 */;
	struct fdpic_func_descriptor {
		unsigned long text;
		unsigned long GOT;
	} cocci_id/* arch/sh/kernel/signal_32.c 36 */;
	struct rt_sigframe __user *cocci_id/* arch/sh/kernel/signal_32.c 336 */;
	struct fdpic_func_descriptor __user *cocci_id/* arch/sh/kernel/signal_32.c 316 */;
	struct sigframe __user *cocci_id/* arch/sh/kernel/signal_32.c 270 */;
	void cocci_id/* arch/sh/kernel/signal_32.c 265 */(void);
	struct k_sigaction *cocci_id/* arch/sh/kernel/signal_32.c 252 */;
	size_t cocci_id/* arch/sh/kernel/signal_32.c 252 */;
	void __user *cocci_id/* arch/sh/kernel/signal_32.c 251 */;
	sigset_t cocci_id/* arch/sh/kernel/signal_32.c 187 */;
	struct task_struct *cocci_id/* arch/sh/kernel/signal_32.c 137 */;
	struct sigcontext __user *cocci_id/* arch/sh/kernel/signal_32.c 116 */;
	int *cocci_id/* arch/sh/kernel/signal_32.c 116 */;
}
