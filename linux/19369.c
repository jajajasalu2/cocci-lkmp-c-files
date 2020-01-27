cocci_test_suite() {
	int *cocci_id/* arch/xtensa/kernel/signal.c 76 */;
	unsigned long cocci_id/* arch/xtensa/kernel/signal.c 58 */;
	const unsigned long cocci_id/* arch/xtensa/kernel/signal.c 56 */;
	struct pt_regs *cocci_id/* arch/xtensa/kernel/signal.c 499 */;
	void cocci_id/* arch/xtensa/kernel/signal.c 499 */;
	int cocci_id/* arch/xtensa/kernel/signal.c 432 */;
	struct ksignal cocci_id/* arch/xtensa/kernel/signal.c 427 */;
	void *cocci_id/* arch/xtensa/kernel/signal.c 347 */;
	struct rt_sigframe *cocci_id/* arch/xtensa/kernel/signal.c 336 */;
	sigset_t *cocci_id/* arch/xtensa/kernel/signal.c 333 */;
	struct ksignal *cocci_id/* arch/xtensa/kernel/signal.c 333 */;
	struct task_struct *cocci_id/* arch/xtensa/kernel/signal.c 31 */[];
	unsigned char *cocci_id/* arch/xtensa/kernel/signal.c 284 */;
	sigset_t cocci_id/* arch/xtensa/kernel/signal.c 243 */;
	long cocci_id/* arch/xtensa/kernel/signal.c 239 */;
	xtregs_opt_t cocci_id/* arch/xtensa/kernel/signal.c 229 */;
	xtregs_user_t cocci_id/* arch/xtensa/kernel/signal.c 227 */;
	unsigned int cocci_id/* arch/xtensa/kernel/signal.c 177 */;
	struct thread_info *cocci_id/* arch/xtensa/kernel/signal.c 176 */;
	struct sigcontext __user *cocci_id/* arch/xtensa/kernel/signal.c 175 */;
	struct rt_sigframe __user *cocci_id/* arch/xtensa/kernel/signal.c 173 */;
	struct rt_sigframe {
		struct siginfo info;
		struct ucontext uc;
		struct {
			xtregs_opt_t opt;
			xtregs_user_t user;
#if XTENSA_HAVE_COPROCESSORS
			xtregs_coprocessor_t cp;
#endif
		} xtregs;
		unsigned char retcode[6];
		unsigned int window[4];
	} cocci_id/*  1 */;
}
