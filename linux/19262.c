cocci_test_suite() {
	struct rt_sigframe {
		struct siginfo info;
		struct ucontext uc;
#define MAGIC_SIGALTSTK 0x07302004
		unsigned int sigret_magic;
	} cocci_id/* arch/arc/kernel/signal.c 57 */;
	int cocci_id/* arch/arc/kernel/signal.c 361 */;
	struct ksignal cocci_id/* arch/arc/kernel/signal.c 360 */;
	sigset_t *cocci_id/* arch/arc/kernel/signal.c 349 */;
	struct k_sigaction *cocci_id/* arch/arc/kernel/signal.c 300 */;
	void cocci_id/* arch/arc/kernel/signal.c 300 */;
	struct rt_sigframe cocci_id/* arch/arc/kernel/signal.c 232 */;
	unsigned long cocci_id/* arch/arc/kernel/signal.c 206 */;
	struct ksignal *cocci_id/* arch/arc/kernel/signal.c 204 */;
	void __user *cocci_id/* arch/arc/kernel/signal.c 204 */;
	struct rt_sigframe __force __user *cocci_id/* arch/arc/kernel/signal.c 167 */;
	struct pt_regs *cocci_id/* arch/arc/kernel/signal.c 155 */;
	unsigned int cocci_id/* arch/arc/kernel/signal.c 154 */;
	struct rt_sigframe __user *cocci_id/* arch/arc/kernel/signal.c 153 */;
	rt_sigreturn cocci_id/* arch/arc/kernel/signal.c 151 */;
	struct user_regs_struct cocci_id/* arch/arc/kernel/signal.c 106 */;
	sigset_t cocci_id/* arch/arc/kernel/signal.c 104 */;
}
