cocci_test_suite() {
	unsigned long __user *cocci_id/* arch/sparc/kernel/ptrace_32.c 55 */;
	const struct pt_regs *cocci_id/* arch/sparc/kernel/ptrace_32.c 54 */;
	enum sparc_regset{REGSET_GENERAL, REGSET_FP,} cocci_id/* arch/sparc/kernel/ptrace_32.c 44 */;
	void cocci_id/* arch/sparc/kernel/ptrace_32.c 39 */;
	int cocci_id/* arch/sparc/kernel/ptrace_32.c 349 */;
	struct fps __user *cocci_id/* arch/sparc/kernel/ptrace_32.c 348 */;
	struct pt_regs __user *cocci_id/* arch/sparc/kernel/ptrace_32.c 347 */;
	const struct user_regset_view *cocci_id/* arch/sparc/kernel/ptrace_32.c 346 */;
	void __user *cocci_id/* arch/sparc/kernel/ptrace_32.c 345 */;
	unsigned long cocci_id/* arch/sparc/kernel/ptrace_32.c 342 */;
	struct task_struct *cocci_id/* arch/sparc/kernel/ptrace_32.c 341 */;
	long cocci_id/* arch/sparc/kernel/ptrace_32.c 341 */;
	struct fps {
		unsigned long regs[32];
		unsigned long fsr;
		unsigned long flags;
		unsigned long extra;
		unsigned long fpqd;
		struct fq {
			unsigned long *insnaddr;
			unsigned long insn;
		} fpq[16];
	} cocci_id/* arch/sparc/kernel/ptrace_32.c 329 */;
	const struct user_regset_view cocci_id/* arch/sparc/kernel/ptrace_32.c 319 */;
	const struct user_regset cocci_id/* arch/sparc/kernel/ptrace_32.c 287 */[];
	unsigned long *cocci_id/* arch/sparc/kernel/ptrace_32.c 260 */;
	const void __user *cocci_id/* arch/sparc/kernel/ptrace_32.c 258 */;
	const void *cocci_id/* arch/sparc/kernel/ptrace_32.c 258 */;
	const unsigned long *cocci_id/* arch/sparc/kernel/ptrace_32.c 216 */;
	void *cocci_id/* arch/sparc/kernel/ptrace_32.c 214 */;
	unsigned int cocci_id/* arch/sparc/kernel/ptrace_32.c 213 */;
	const struct user_regset *cocci_id/* arch/sparc/kernel/ptrace_32.c 212 */;
	const unsigned long __user *cocci_id/* arch/sparc/kernel/ptrace_32.c 135 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/ptrace_32.c 132 */;
}
