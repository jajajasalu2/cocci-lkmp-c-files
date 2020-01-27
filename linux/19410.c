cocci_test_suite() {
	sigset_t cocci_id/* arch/microblaze/kernel/signal.c 88 */;
	long cocci_id/* arch/microblaze/kernel/signal.c 83 */;
	unsigned int cocci_id/* arch/microblaze/kernel/signal.c 62 */;
	struct sigcontext __user *cocci_id/* arch/microblaze/kernel/signal.c 60 */;
	int *cocci_id/* arch/microblaze/kernel/signal.c 60 */;
	struct rt_sigframe {
		struct siginfo info;
		struct ucontext uc;
		unsigned long tramp[2];
	} cocci_id/* arch/microblaze/kernel/signal.c 53 */;
	struct sigframe {
		struct sigcontext sc;
		unsigned long extramask[_NSIG_WORDS - 1];
		unsigned long tramp[2];
	} cocci_id/* arch/microblaze/kernel/signal.c 47 */;
	struct pt_regs *cocci_id/* arch/microblaze/kernel/signal.c 322 */;
	int cocci_id/* arch/microblaze/kernel/signal.c 322 */;
	void cocci_id/* arch/microblaze/kernel/signal.c 322 */;
	struct ksignal cocci_id/* arch/microblaze/kernel/signal.c 296 */;
	sigset_t *cocci_id/* arch/microblaze/kernel/signal.c 276 */;
	struct k_sigaction *cocci_id/* arch/microblaze/kernel/signal.c 246 */;
	pte_t *cocci_id/* arch/microblaze/kernel/signal.c 167 */;
	pmd_t *cocci_id/* arch/microblaze/kernel/signal.c 166 */;
	pud_t *cocci_id/* arch/microblaze/kernel/signal.c 165 */;
	p4d_t *cocci_id/* arch/microblaze/kernel/signal.c 164 */;
	pgd_t *cocci_id/* arch/microblaze/kernel/signal.c 163 */;
	struct rt_sigframe __user *cocci_id/* arch/microblaze/kernel/signal.c 159 */;
	unsigned long cocci_id/* arch/microblaze/kernel/signal.c 151 */;
	struct ksignal *cocci_id/* arch/microblaze/kernel/signal.c 148 */;
	size_t cocci_id/* arch/microblaze/kernel/signal.c 148 */;
	void __user *cocci_id/* arch/microblaze/kernel/signal.c 147 */;
}
