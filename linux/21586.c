cocci_test_suite() {
	rt_sigreturn cocci_id/* arch/riscv/kernel/signal.c 98 */;
	struct sigcontext __user *cocci_id/* arch/riscv/kernel/signal.c 87 */;
	u32 cocci_id/* arch/riscv/kernel/signal.c 48 */;
	struct __riscv_d_ext_state __user *cocci_id/* arch/riscv/kernel/signal.c 37 */;
	union __riscv_fp_state __user *cocci_id/* arch/riscv/kernel/signal.c 34 */;
	long cocci_id/* arch/riscv/kernel/signal.c 33 */;
	unsigned long cocci_id/* arch/riscv/kernel/signal.c 310 */;
	void cocci_id/* arch/riscv/kernel/signal.c 309 */;
	struct ksignal cocci_id/* arch/riscv/kernel/signal.c 269 */;
	struct rt_sigframe {
		struct siginfo info;
		struct ucontext uc;
#ifndef CONFIG_MMU
		u32 sigreturn_code[2];
#endif
	} cocci_id/* arch/riscv/kernel/signal.c 24 */;
	int cocci_id/* arch/riscv/kernel/signal.c 235 */;
	sigset_t *cocci_id/* arch/riscv/kernel/signal.c 234 */;
	u32 cocci_id/* arch/riscv/kernel/signal.c 20 */[2];
	void __user __force *cocci_id/* arch/riscv/kernel/signal.c 163 */;
	size_t cocci_id/* arch/riscv/kernel/signal.c 152 */;
	struct ksignal *cocci_id/* arch/riscv/kernel/signal.c 151 */;
	void __user *cocci_id/* arch/riscv/kernel/signal.c 151 */;
	void *cocci_id/* arch/riscv/kernel/signal.c 132 */;
	sigset_t cocci_id/* arch/riscv/kernel/signal.c 103 */;
	struct task_struct *cocci_id/* arch/riscv/kernel/signal.c 102 */;
	struct rt_sigframe __user *cocci_id/* arch/riscv/kernel/signal.c 101 */;
	struct pt_regs *cocci_id/* arch/riscv/kernel/signal.c 100 */;
}
