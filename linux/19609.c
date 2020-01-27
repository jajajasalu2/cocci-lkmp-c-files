cocci_test_suite() {
	struct rt_sigframe_n32 __user *cocci_id/* arch/mips/kernel/signal_n32.c 96 */;
	sigset_t *cocci_id/* arch/mips/kernel/signal_n32.c 94 */;
	struct pt_regs *cocci_id/* arch/mips/kernel/signal_n32.c 94 */;
	struct ksignal *cocci_id/* arch/mips/kernel/signal_n32.c 93 */;
	void *cocci_id/* arch/mips/kernel/signal_n32.c 93 */;
	int cocci_id/* arch/mips/kernel/signal_n32.c 93 */;
	sigset_t cocci_id/* arch/mips/kernel/signal_n32.c 58 */;
	void cocci_id/* arch/mips/kernel/signal_n32.c 54 */;
	struct rt_sigframe_n32 {
		u32 rs_ass[4];
		u32 rs_pad[2];
		struct compat_siginfo rs_info;
		struct ucontextn32 rs_uc;
	} cocci_id/* arch/mips/kernel/signal_n32.c 47 */;
	struct ucontextn32 {
		u32 uc_flags;
		s32 uc_link;
		compat_stack_t uc_stack;
		struct sigcontext uc_mcontext;
		compat_sigset_t uc_sigmask;
	} cocci_id/* arch/mips/kernel/signal_n32.c 39 */;
	int cocci_id/* arch/mips/kernel/signal_n32.c 37 */(struct pt_regs *,
							   struct sigcontext __user *);
	struct sigcontext cocci_id/* arch/mips/kernel/signal_n32.c 144 */;
	struct mips_abi cocci_id/* arch/mips/kernel/signal_n32.c 140 */;
	unsigned long cocci_id/* arch/mips/kernel/signal_n32.c 127 */;
}
