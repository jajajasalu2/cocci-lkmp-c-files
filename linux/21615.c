cocci_test_suite() {
	sigset_t cocci_id/* arch/unicore32/kernel/signal.c 54 */;
	struct sigframe __user *cocci_id/* arch/unicore32/kernel/signal.c 52 */;
	struct rt_sigframe {
		struct siginfo info;
		struct sigframe sig;
	} cocci_id/* arch/unicore32/kernel/signal.c 47 */;
	struct sigframe {
		struct ucontext uc;
		unsigned long retcode[2];
	} cocci_id/* arch/unicore32/kernel/signal.c 42 */;
	void *cocci_id/* arch/unicore32/kernel/signal.c 419 */;
	void __init cocci_id/* arch/unicore32/kernel/signal.c 417 */;
	unsigned int cocci_id/* arch/unicore32/kernel/signal.c 402 */;
	void cocci_id/* arch/unicore32/kernel/signal.c 401 */;
	u32 __user *cocci_id/* arch/unicore32/kernel/signal.c 377 */;
	struct ksignal cocci_id/* arch/unicore32/kernel/signal.c 356 */;
	const unsigned long cocci_id/* arch/unicore32/kernel/signal.c 34 */[2];
	sigset_t *cocci_id/* arch/unicore32/kernel/signal.c 305 */;
	struct thread_info *cocci_id/* arch/unicore32/kernel/signal.c 304 */;
	struct ksignal *cocci_id/* arch/unicore32/kernel/signal.c 301 */;
	const unsigned long cocci_id/* arch/unicore32/kernel/signal.c 30 */[3];
	unsigned long __user *cocci_id/* arch/unicore32/kernel/signal.c 212 */;
	unsigned long cocci_id/* arch/unicore32/kernel/signal.c 188 */;
	struct k_sigaction *cocci_id/* arch/unicore32/kernel/signal.c 185 */;
	void __user *cocci_id/* arch/unicore32/kernel/signal.c 185 */;
	struct rt_sigframe __user *cocci_id/* arch/unicore32/kernel/signal.c 102 */;
	struct pt_regs *cocci_id/* arch/unicore32/kernel/signal.c 100 */;
	int cocci_id/* arch/unicore32/kernel/signal.c 100 */;
}
