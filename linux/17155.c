cocci_test_suite() {
	func_descr_t __user *cocci_id/* arch/powerpc/kernel/signal_64.c 892 */;
	unsigned long __user *cocci_id/* arch/powerpc/kernel/signal_64.c 880 */;
	struct rt_sigframe __user *cocci_id/* arch/powerpc/kernel/signal_64.c 823 */;
	struct task_struct *cocci_id/* arch/powerpc/kernel/signal_64.c 821 */;
	sigset_t *cocci_id/* arch/powerpc/kernel/signal_64.c 820 */;
	struct ksignal *cocci_id/* arch/powerpc/kernel/signal_64.c 820 */;
	int cocci_id/* arch/powerpc/kernel/signal_64.c 820 */;
	long cocci_id/* arch/powerpc/kernel/signal_64.c 814 */;
	unsigned long cocci_id/* arch/powerpc/kernel/signal_64.c 717 */;
	sigset_t cocci_id/* arch/powerpc/kernel/signal_64.c 715 */;
	struct ucontext __user *cocci_id/* arch/powerpc/kernel/signal_64.c 714 */;
	struct pt_regs *cocci_id/* arch/powerpc/kernel/signal_64.c 713 */;
	rt_sigreturn cocci_id/* arch/powerpc/kernel/signal_64.c 711 */;
	const char cocci_id/* arch/powerpc/kernel/signal_64.c 69 */[];
	u8 __user *cocci_id/* arch/powerpc/kernel/signal_64.c 679 */;
	unsigned char cocci_id/* arch/powerpc/kernel/signal_64.c 643 */;
	struct ucontext *cocci_id/* arch/powerpc/kernel/signal_64.c 640 */;
	struct ucontext cocci_id/* arch/powerpc/kernel/signal_64.c 635 */;
	unsigned int __user *cocci_id/* arch/powerpc/kernel/signal_64.c 606 */;
	unsigned int cocci_id/* arch/powerpc/kernel/signal_64.c 606 */;
	struct rt_sigframe {
		struct ucontext uc;
#ifdef CONFIG_PPC_TRANSACTIONAL_MEM
		struct ucontext uc_transact;
#endif
		unsigned long _unused[2];
		unsigned int tramp[TRAMP_SIZE];
		struct siginfo __user *pinfo;
		void __user *puc;
		struct siginfo info;
		char abigap[USER_REDZONE_SIZE];
	}__attribute__((aligned(16))) cocci_id/* arch/powerpc/kernel/signal_64.c 54 */;
	struct pt_regs cocci_id/* arch/powerpc/kernel/signal_64.c 40 */;
	u32 __user *cocci_id/* arch/powerpc/kernel/signal_64.c 394 */;
	elf_vrreg_t __user *cocci_id/* arch/powerpc/kernel/signal_64.c 332 */;
	struct sigcontext __user *cocci_id/* arch/powerpc/kernel/signal_64.c 329 */;
}
