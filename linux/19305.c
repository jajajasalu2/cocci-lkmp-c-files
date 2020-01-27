cocci_test_suite() {
	sigset_t cocci_id/* arch/nds32/kernel/signal.c 82 */;
	struct rt_sigframe __user *cocci_id/* arch/nds32/kernel/signal.c 80 */;
	struct fpu_struct cocci_id/* arch/nds32/kernel/signal.c 51 */;
	struct pt_regs *cocci_id/* arch/nds32/kernel/signal.c 377 */;
	unsigned int cocci_id/* arch/nds32/kernel/signal.c 377 */;
	void cocci_id/* arch/nds32/kernel/signal.c 376 */;
	struct ksignal cocci_id/* arch/nds32/kernel/signal.c 345 */;
	sigset_t *cocci_id/* arch/nds32/kernel/signal.c 303 */;
	struct task_struct *cocci_id/* arch/nds32/kernel/signal.c 28 */;
	struct sigcontext __user *cocci_id/* arch/nds32/kernel/signal.c 26 */;
	void __user __force *cocci_id/* arch/nds32/kernel/signal.c 243 */;
	unsigned long cocci_id/* arch/nds32/kernel/signal.c 233 */;
	int cocci_id/* arch/nds32/kernel/signal.c 231 */;
	struct ksignal *cocci_id/* arch/nds32/kernel/signal.c 230 */;
	void __user *cocci_id/* arch/nds32/kernel/signal.c 230 */;
	struct rt_sigframe {
		struct siginfo info;
		struct ucontext uc;
	} cocci_id/* arch/nds32/kernel/signal.c 20 */;
	long cocci_id/* arch/nds32/kernel/signal.c 137 */;
}
