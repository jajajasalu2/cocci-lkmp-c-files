cocci_test_suite() {
	unsigned long cocci_id/* arch/c6x/kernel/signal.c 78 */;
	sigset_t cocci_id/* arch/c6x/kernel/signal.c 65 */;
	struct rt_sigframe __user *cocci_id/* arch/c6x/kernel/signal.c 64 */;
	struct sigcontext __user *cocci_id/* arch/c6x/kernel/signal.c 35 */;
	int cocci_id/* arch/c6x/kernel/signal.c 313 */;
	u32 cocci_id/* arch/c6x/kernel/signal.c 312 */;
	struct pt_regs *cocci_id/* arch/c6x/kernel/signal.c 312 */;
	void cocci_id/* arch/c6x/kernel/signal.c 312 */;
	struct ksignal cocci_id/* arch/c6x/kernel/signal.c 272 */;
	struct rt_sigframe {
		struct siginfo __user *pinfo;
		void __user *puc;
		struct siginfo info;
		struct ucontext uc;
		unsigned long retcode[RETCODE_SIZE >> 2];
	} cocci_id/* arch/c6x/kernel/signal.c 26 */;
	struct k_sigaction *cocci_id/* arch/c6x/kernel/signal.c 209 */;
	struct ucontext cocci_id/* arch/c6x/kernel/signal.c 157 */;
	unsigned long __user *cocci_id/* arch/c6x/kernel/signal.c 144 */;
	sigset_t *cocci_id/* arch/c6x/kernel/signal.c 140 */;
	struct ksignal *cocci_id/* arch/c6x/kernel/signal.c 127 */;
	void __user *cocci_id/* arch/c6x/kernel/signal.c 127 */;
}
