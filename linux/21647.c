cocci_test_suite() {
	sigset_t cocci_id/* arch/openrisc/kernel/signal.c 72 */;
	struct rt_sigframe __user *cocci_id/* arch/openrisc/kernel/signal.c 71 */;
	struct rt_sigframe *cocci_id/* arch/openrisc/kernel/signal.c 71 */;
	struct pt_regs *cocci_id/* arch/openrisc/kernel/signal.c 69 */;
	long cocci_id/* arch/openrisc/kernel/signal.c 69 */;
	struct sigcontext __user *cocci_id/* arch/openrisc/kernel/signal.c 40 */;
	struct rt_sigframe {
		struct siginfo info;
		struct ucontext uc;
		unsigned char retcode[16];
	} cocci_id/* arch/openrisc/kernel/signal.c 33 */;
	unsigned int cocci_id/* arch/openrisc/kernel/signal.c 293 */;
	struct ksignal cocci_id/* arch/openrisc/kernel/signal.c 229 */;
	int cocci_id/* arch/openrisc/kernel/signal.c 227 */;
	void cocci_id/* arch/openrisc/kernel/signal.c 205 */;
	unsigned long *cocci_id/* arch/openrisc/kernel/signal.c 186 */;
	short *cocci_id/* arch/openrisc/kernel/signal.c 184 */;
	sigset_t *cocci_id/* arch/openrisc/kernel/signal.c 151 */;
	size_t cocci_id/* arch/openrisc/kernel/signal.c 132 */;
	struct ksignal *cocci_id/* arch/openrisc/kernel/signal.c 131 */;
	void __user *cocci_id/* arch/openrisc/kernel/signal.c 131 */;
	unsigned long cocci_id/* arch/openrisc/kernel/signal.c 121 */;
}
