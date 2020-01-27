cocci_test_suite() {
	struct signal_frame __user *cocci_id/* arch/sparc/kernel/signal_32.c 79 */;
	struct rt_signal_frame cocci_id/* arch/sparc/kernel/signal_32.c 62 */;
	struct signal_frame cocci_id/* arch/sparc/kernel/signal_32.c 61 */;
	char *cocci_id/* arch/sparc/kernel/signal_32.c 550 */;
	struct sigstack __user *cocci_id/* arch/sparc/kernel/signal_32.c 534 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/signal_32.c 523 */;
	unsigned long cocci_id/* arch/sparc/kernel/signal_32.c 523 */;
	void cocci_id/* arch/sparc/kernel/signal_32.c 523 */;
	struct rt_signal_frame {
		struct sparc_stackf ss;
		siginfo_t info;
		struct pt_regs regs;
		sigset_t mask;
		__siginfo_fpu_t __user *fpu_save;
		unsigned int insns[2];
		stack_t stack;
		unsigned int extra_size;
		__siginfo_rwin_t __user *rwin_save;
	}__attribute__((aligned(8))) cocci_id/* arch/sparc/kernel/signal_32.c 48 */;
	bool cocci_id/* arch/sparc/kernel/signal_32.c 461 */;
	struct ksignal cocci_id/* arch/sparc/kernel/signal_32.c 459 */;
	struct sigaction *cocci_id/* arch/sparc/kernel/signal_32.c 433 */;
	sigset_t *cocci_id/* arch/sparc/kernel/signal_32.c 422 */;
	struct signal_frame {
		struct sparc_stackf ss;
		__siginfo32_t info;
		__siginfo_fpu_t __user *fpu_save;
		unsigned long insns[2]__attribute__((aligned(8)));
		unsigned int extramask[_NSIG_WORDS - 1];
		unsigned int extra_size;
		__siginfo_rwin_t __user *rwin_save;
	}__attribute__((aligned(8))) cocci_id/* arch/sparc/kernel/signal_32.c 38 */;
	void cocci_id/* arch/sparc/kernel/signal_32.c 36 */(unsigned long *fpregs,
							    unsigned long *fsr);
	void cocci_id/* arch/sparc/kernel/signal_32.c 34 */(unsigned long *fpregs,
							    unsigned long *fsr,
							    void *fpqueue,
							    unsigned long *fpqdepth);
	struct reg_window32 *cocci_id/* arch/sparc/kernel/signal_32.c 284 */;
	struct reg_window32 cocci_id/* arch/sparc/kernel/signal_32.c 282 */;
	__siginfo_rwin_t cocci_id/* arch/sparc/kernel/signal_32.c 243 */;
	__siginfo_fpu_t cocci_id/* arch/sparc/kernel/signal_32.c 241 */;
	struct ksignal *cocci_id/* arch/sparc/kernel/signal_32.c 202 */;
	void __user *cocci_id/* arch/sparc/kernel/signal_32.c 202 */;
	int cocci_id/* arch/sparc/kernel/signal_32.c 150 */;
	sigset_t cocci_id/* arch/sparc/kernel/signal_32.c 149 */;
	__siginfo_rwin_t __user *cocci_id/* arch/sparc/kernel/signal_32.c 148 */;
	__siginfo_fpu_t __user *cocci_id/* arch/sparc/kernel/signal_32.c 147 */;
	unsigned int cocci_id/* arch/sparc/kernel/signal_32.c 146 */;
	struct rt_signal_frame __user *cocci_id/* arch/sparc/kernel/signal_32.c 145 */;
	struct pt_regs cocci_id/* arch/sparc/kernel/signal_32.c 110 */;
}
