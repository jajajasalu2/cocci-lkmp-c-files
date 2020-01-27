cocci_test_suite() {
	char __user *cocci_id/* arch/sparc/kernel/ptrace_64.c 988 */;
	unsigned int cocci_id/* arch/sparc/kernel/ptrace_64.c 968 */;
	struct compat_fps __user *cocci_id/* arch/sparc/kernel/ptrace_64.c 916 */;
	struct pt_regs32 __user *cocci_id/* arch/sparc/kernel/ptrace_64.c 915 */;
	compat_ulong_t cocci_id/* arch/sparc/kernel/ptrace_64.c 911 */;
	compat_long_t cocci_id/* arch/sparc/kernel/ptrace_64.c 910 */;
	struct compat_fps {
		unsigned int regs[32];
		unsigned int fsr;
		unsigned int flags;
		unsigned int extra;
		unsigned int fpqd;
		struct compat_fq {
			unsigned int insnaddr;
			unsigned int insn;
		} fpq[16];
	} cocci_id/* arch/sparc/kernel/ptrace_64.c 898 */;
	const struct user_regset_view cocci_id/* arch/sparc/kernel/ptrace_64.c 882 */;
	const struct user_regset cocci_id/* arch/sparc/kernel/ptrace_64.c 850 */[];
	unsigned long *cocci_id/* arch/sparc/kernel/ptrace_64.c 809 */;
	const void __user *cocci_id/* arch/sparc/kernel/ptrace_64.c 807 */;
	const void *cocci_id/* arch/sparc/kernel/ptrace_64.c 807 */;
	const unsigned long *cocci_id/* arch/sparc/kernel/ptrace_64.c 755 */;
	const struct user_regset *cocci_id/* arch/sparc/kernel/ptrace_64.c 751 */;
	const compat_ulong_t __user *cocci_id/* arch/sparc/kernel/ptrace_64.c 636 */;
	const compat_ulong_t *cocci_id/* arch/sparc/kernel/ptrace_64.c 635 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/ptrace_64.c 633 */;
	const struct pt_regs_offset cocci_id/* arch/sparc/kernel/ptrace_64.c 60 */[];
	compat_ulong_t *cocci_id/* arch/sparc/kernel/ptrace_64.c 523 */;
	compat_ulong_t __user *cocci_id/* arch/sparc/kernel/ptrace_64.c 522 */;
	const struct pt_regs *cocci_id/* arch/sparc/kernel/ptrace_64.c 521 */;
	struct pt_regs_offset {
		const char *name;
		int offset;
	} cocci_id/* arch/sparc/kernel/ptrace_64.c 51 */;
	struct reg_window cocci_id/* arch/sparc/kernel/ptrace_64.c 263 */;
	enum sparc_regset{REGSET_GENERAL, REGSET_FP,} cocci_id/* arch/sparc/kernel/ptrace_64.c 243 */;
	struct reg_window32 cocci_id/* arch/sparc/kernel/ptrace_64.c 199 */;
	struct reg_window *cocci_id/* arch/sparc/kernel/ptrace_64.c 194 */;
	const struct pt_regs_offset *cocci_id/* arch/sparc/kernel/ptrace_64.c 1159 */;
	const char *cocci_id/* arch/sparc/kernel/ptrace_64.c 1157 */;
	void *cocci_id/* arch/sparc/kernel/ptrace_64.c 109 */;
	struct vm_area_struct *cocci_id/* arch/sparc/kernel/ptrace_64.c 108 */;
	struct page *cocci_id/* arch/sparc/kernel/ptrace_64.c 108 */;
	void cocci_id/* arch/sparc/kernel/ptrace_64.c 108 */;
	int cocci_id/* arch/sparc/kernel/ptrace_64.c 1029 */;
	void __user *cocci_id/* arch/sparc/kernel/ptrace_64.c 1028 */;
	struct fps __user *cocci_id/* arch/sparc/kernel/ptrace_64.c 1027 */;
	struct pt_regs __user *cocci_id/* arch/sparc/kernel/ptrace_64.c 1026 */;
	const struct user_regset_view *cocci_id/* arch/sparc/kernel/ptrace_64.c 1024 */;
	unsigned long cocci_id/* arch/sparc/kernel/ptrace_64.c 1022 */;
	struct task_struct *cocci_id/* arch/sparc/kernel/ptrace_64.c 1021 */;
	long cocci_id/* arch/sparc/kernel/ptrace_64.c 1021 */;
	struct fps {
		unsigned int regs[64];
		unsigned long fsr;
	} cocci_id/* arch/sparc/kernel/ptrace_64.c 1016 */;
}
