cocci_test_suite() {
	struct ksignal cocci_id/* arch/sh/kernel/signal_64.c 81 */;
	struct pt_regs *cocci_id/* arch/sh/kernel/signal_64.c 558 */;
	unsigned long cocci_id/* arch/sh/kernel/signal_64.c 558 */;
	void cocci_id/* arch/sh/kernel/signal_64.c 558 */;
	int cocci_id/* arch/sh/kernel/signal_64.c 547 */;
	sigset_t *cocci_id/* arch/sh/kernel/signal_64.c 546 */;
	struct ksignal *cocci_id/* arch/sh/kernel/signal_64.c 544 */;
	struct rt_sigframe __user *cocci_id/* arch/sh/kernel/signal_64.c 463 */;
	signed long cocci_id/* arch/sh/kernel/signal_64.c 446 */;
	struct sigaction *cocci_id/* arch/sh/kernel/signal_64.c 44 */;
	void *cocci_id/* arch/sh/kernel/signal_64.c 423 */;
	void cocci_id/* arch/sh/kernel/signal_64.c 40 */(struct ksignal *ksig,
							 struct pt_regs *regs);
	struct sigframe __user *cocci_id/* arch/sh/kernel/signal_64.c 376 */;
	void cocci_id/* arch/sh/kernel/signal_64.c 371 */(void);
	struct k_sigaction *cocci_id/* arch/sh/kernel/signal_64.c 363 */;
	size_t cocci_id/* arch/sh/kernel/signal_64.c 363 */;
	void __user *cocci_id/* arch/sh/kernel/signal_64.c 362 */;
	sigset_t cocci_id/* arch/sh/kernel/signal_64.c 290 */;
	long cocci_id/* arch/sh/kernel/signal_64.c 289 */;
	unsigned long long cocci_id/* arch/sh/kernel/signal_64.c 205 */;
	unsigned int cocci_id/* arch/sh/kernel/signal_64.c 204 */;
	struct sigcontext __user *cocci_id/* arch/sh/kernel/signal_64.c 202 */;
	long long *cocci_id/* arch/sh/kernel/signal_64.c 202 */;
	long long cocci_id/* arch/sh/kernel/signal_64.c 158 */;
	struct rt_sigframe {
		struct siginfo __user *pinfo;
		void *puc;
		struct siginfo info;
		struct ucontext uc;
		long long retcode[2];
	} cocci_id/* arch/sh/kernel/signal_64.c 132 */;
	struct sigframe {
		struct sigcontext sc;
		unsigned long extramask[_NSIG_WORDS - 1];
		long long retcode[2];
	} cocci_id/* arch/sh/kernel/signal_64.c 126 */;
}
