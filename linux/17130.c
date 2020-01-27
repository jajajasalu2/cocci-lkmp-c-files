cocci_test_suite() {
	u32 __user *cocci_id/* arch/powerpc/kernel/signal_32.c 971 */;
	const compat_sigset_t __user *cocci_id/* arch/powerpc/kernel/signal_32.c 94 */;
	sigset_t *cocci_id/* arch/powerpc/kernel/signal_32.c 93 */;
	struct ksignal *cocci_id/* arch/powerpc/kernel/signal_32.c 904 */;
	compat_sigset_t __user *cocci_id/* arch/powerpc/kernel/signal_32.c 88 */;
	struct pt_regs32 cocci_id/* arch/powerpc/kernel/signal_32.c 78 */;
	struct ucontext cocci_id/* arch/powerpc/kernel/signal_32.c 69 */;
	unsigned int cocci_id/* arch/powerpc/kernel/signal_32.c 638 */;
	u64 cocci_id/* arch/powerpc/kernel/signal_32.c 336 */[ELF_NVSRHALFREG];
	double cocci_id/* arch/powerpc/kernel/signal_32.c 312 */;
	u64 cocci_id/* arch/powerpc/kernel/signal_32.c 309 */[ELF_NFPREG];
	struct task_struct *cocci_id/* arch/powerpc/kernel/signal_32.c 306 */;
	struct rt_sigframe {
#ifdef CONFIG_PPC64
		compat_siginfo_t info;
#else
		struct siginfo info;
#endif
		struct ucontext uc;
#ifdef CONFIG_PPC_TRANSACTIONAL_MEM
		struct ucontext uc_transact;
#endif
		int abigap[56];
	} cocci_id/* arch/powerpc/kernel/signal_32.c 221 */;
	struct sigframe {
		struct sigcontext sctx;
		struct mcontext mctx;
#ifdef CONFIG_PPC_TRANSACTIONAL_MEM
		struct sigcontext sctx_transact;
		struct mcontext mctx_transact;
#endif
		int abigap[56];
	} cocci_id/* arch/powerpc/kernel/signal_32.c 193 */;
	const sigset_t __user *cocci_id/* arch/powerpc/kernel/signal_32.c 151 */;
	long cocci_id/* arch/powerpc/kernel/signal_32.c 1480 */;
	sigset_t cocci_id/* arch/powerpc/kernel/signal_32.c 1460 */;
	sigset_t __user *cocci_id/* arch/powerpc/kernel/signal_32.c 146 */;
	void __user *cocci_id/* arch/powerpc/kernel/signal_32.c 1459 */;
	struct sigcontext cocci_id/* arch/powerpc/kernel/signal_32.c 1457 */;
	struct sigcontext __user *cocci_id/* arch/powerpc/kernel/signal_32.c 1456 */;
	struct sigframe __user *cocci_id/* arch/powerpc/kernel/signal_32.c 1455 */;
	sigreturn cocci_id/* arch/powerpc/kernel/signal_32.c 1449 */;
	struct pt_regs cocci_id/* arch/powerpc/kernel/signal_32.c 144 */;
	u8 __user *cocci_id/* arch/powerpc/kernel/signal_32.c 1318 */;
	elf_greg_t64 *cocci_id/* arch/powerpc/kernel/signal_32.c 130 */;
	struct sig_dbg_op cocci_id/* arch/powerpc/kernel/signal_32.c 1260 */;
	struct sig_dbg_op *cocci_id/* arch/powerpc/kernel/signal_32.c 1257 */;
	struct ucontext *cocci_id/* arch/powerpc/kernel/signal_32.c 1256 */;
	u64 cocci_id/* arch/powerpc/kernel/signal_32.c 1194 */;
	struct mcontext __user *cocci_id/* arch/powerpc/kernel/signal_32.c 1190 */;
	u32 cocci_id/* arch/powerpc/kernel/signal_32.c 1189 */;
	uintptr_t cocci_id/* arch/powerpc/kernel/signal_32.c 1187 */;
	unsigned long cocci_id/* arch/powerpc/kernel/signal_32.c 1160 */;
	struct ucontext __user *cocci_id/* arch/powerpc/kernel/signal_32.c 1159 */;
	int cocci_id/* arch/powerpc/kernel/signal_32.c 1157 */;
	struct pt_regs *cocci_id/* arch/powerpc/kernel/signal_32.c 1156 */;
	struct rt_sigframe __user *cocci_id/* arch/powerpc/kernel/signal_32.c 1155 */;
	rt_sigreturn cocci_id/* arch/powerpc/kernel/signal_32.c 1150 */;
	elf_greg_t64 cocci_id/* arch/powerpc/kernel/signal_32.c 108 */;
}
