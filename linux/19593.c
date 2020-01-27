cocci_test_suite() {
	s32 cocci_id/* arch/mips/kernel/signal_o32.c 89 */;
	struct sigcontext32 __user *cocci_id/* arch/mips/kernel/signal_o32.c 86 */;
	struct pt_regs *cocci_id/* arch/mips/kernel/signal_o32.c 85 */;
	int cocci_id/* arch/mips/kernel/signal_o32.c 85 */;
	struct rt_sigframe32 {
		u32 rs_ass[4];
		u32 rs_pad[2];
		compat_siginfo_t rs_info;
		struct ucontext32 rs_uc;
	} cocci_id/* arch/mips/kernel/signal_o32.c 45 */;
	struct ucontext32 {
		u32 uc_flags;
		s32 uc_link;
		compat_stack_t uc_stack;
		struct sigcontext32 uc_mcontext;
		compat_sigset_t uc_sigmask;
	} cocci_id/* arch/mips/kernel/signal_o32.c 37 */;
	struct sigframe32 {
		u32 sf_ass[4];
		u32 sf_pad[2];
		struct sigcontext32 sf_sc;
		compat_sigset_t sf_mask;
	} cocci_id/* arch/mips/kernel/signal_o32.c 30 */;
	struct sigcontext32 cocci_id/* arch/mips/kernel/signal_o32.c 248 */;
	struct mips_abi cocci_id/* arch/mips/kernel/signal_o32.c 243 */;
	struct rt_sigframe32 __user *cocci_id/* arch/mips/kernel/signal_o32.c 196 */;
	sigset_t cocci_id/* arch/mips/kernel/signal_o32.c 158 */;
	void cocci_id/* arch/mips/kernel/signal_o32.c 154 */;
	unsigned long cocci_id/* arch/mips/kernel/signal_o32.c 142 */;
	struct sigframe32 __user *cocci_id/* arch/mips/kernel/signal_o32.c 117 */;
	sigset_t *cocci_id/* arch/mips/kernel/signal_o32.c 115 */;
	struct ksignal *cocci_id/* arch/mips/kernel/signal_o32.c 114 */;
	void *cocci_id/* arch/mips/kernel/signal_o32.c 114 */;
}
