cocci_test_suite() {
	void *cocci_id/* arch/alpha/kernel/signal.c 92 */;
	struct sigaction *cocci_id/* arch/alpha/kernel/signal.c 91 */;
	const struct sigaction *cocci_id/* arch/alpha/kernel/signal.c 90 */;
	old_sigset_t cocci_id/* arch/alpha/kernel/signal.c 67 */;
	struct k_sigaction cocci_id/* arch/alpha/kernel/signal.c 63 */;
	struct osf_sigaction *cocci_id/* arch/alpha/kernel/signal.c 61 */;
	const struct osf_sigaction *cocci_id/* arch/alpha/kernel/signal.c 60 */;
	struct ksignal cocci_id/* arch/alpha/kernel/signal.c 486 */;
	unsigned long cocci_id/* arch/alpha/kernel/signal.c 483 */;
	struct k_sigaction *cocci_id/* arch/alpha/kernel/signal.c 447 */;
	int cocci_id/* arch/alpha/kernel/signal.c 435 */;
	sigset_t *cocci_id/* arch/alpha/kernel/signal.c 434 */;
	void cocci_id/* arch/alpha/kernel/signal.c 38 */(void);
	struct sigframe __user *cocci_id/* arch/alpha/kernel/signal.c 331 */;
	struct ksignal *cocci_id/* arch/alpha/kernel/signal.c 265 */;
	size_t cocci_id/* arch/alpha/kernel/signal.c 265 */;
	void __user *cocci_id/* arch/alpha/kernel/signal.c 250 */;
	sigset_t cocci_id/* arch/alpha/kernel/signal.c 235 */;
	struct pt_regs *cocci_id/* arch/alpha/kernel/signal.c 234 */;
	struct rt_sigframe __user *cocci_id/* arch/alpha/kernel/signal.c 232 */;
	void cocci_id/* arch/alpha/kernel/signal.c 231 */;
	struct sigcontext __user *cocci_id/* arch/alpha/kernel/signal.c 204 */;
	struct switch_stack *cocci_id/* arch/alpha/kernel/signal.c 152 */;
	long cocci_id/* arch/alpha/kernel/signal.c 148 */;
	char cocci_id/* arch/alpha/kernel/signal.c 141 */[offsetof(struct rt_sigframe,
								   uc.uc_mcontext) == 176 ? 1 : -1];
	struct rt_sigframe {
		struct siginfo info;
		struct ucontext uc;
		unsigned int retcode[3];
	} cocci_id/* arch/alpha/kernel/signal.c 131 */;
	struct sigframe {
		struct sigcontext sc;
		unsigned int retcode[3];
	} cocci_id/* arch/alpha/kernel/signal.c 125 */;
}
