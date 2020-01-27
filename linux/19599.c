cocci_test_suite() {
	const struct pt_regs_offset cocci_id/* arch/mips/kernel/ptrace.c 945 */[];
	struct pt_regs cocci_id/* arch/mips/kernel/ptrace.c 937 */;
	struct pt_regs_offset {
		const char *name;
		int offset;
	} cocci_id/* arch/mips/kernel/ptrace.c 930 */;
	enum mips_regset{REGSET_GPR, REGSET_DSP,

#ifdef CONFIG_MIPS_FP_SUPPORT
 REGSET_FPR, REGSET_FP_MODE,

#endif


#ifdef CONFIG_CPU_HAS_MSA
 REGSET_MSA,

#endif
} cocci_id/* arch/mips/kernel/ptrace.c 918 */;
	u64 cocci_id/* arch/mips/kernel/ptrace.c 842 */;
	u64 cocci_id/* arch/mips/kernel/ptrace.c 840 */[NUM_DSP_REGS + 1];
	s32 cocci_id/* arch/mips/kernel/ptrace.c 817 */;
	__s64 __user *cocci_id/* arch/mips/kernel/ptrace.c 80 */;
	const void __user *cocci_id/* arch/mips/kernel/ptrace.c 792 */;
	const void *cocci_id/* arch/mips/kernel/ptrace.c 792 */;
	u32 cocci_id/* arch/mips/kernel/ptrace.c 762 */;
	u32 cocci_id/* arch/mips/kernel/ptrace.c 760 */[NUM_DSP_REGS + 1];
	void *cocci_id/* arch/mips/kernel/ptrace.c 757 */;
	struct msa_control_regs cocci_id/* arch/mips/kernel/ptrace.c 712 */;
	struct user_pt_regs __user *cocci_id/* arch/mips/kernel/ptrace.c 69 */;
	const struct msa_control_regs cocci_id/* arch/mips/kernel/ptrace.c 672 */;
	const unsigned int cocci_id/* arch/mips/kernel/ptrace.c 671 */;
	unsigned long long cocci_id/* arch/mips/kernel/ptrace.c 641 */;
	unsigned int cocci_id/* arch/mips/kernel/ptrace.c 638 */;
	void __user **cocci_id/* arch/mips/kernel/ptrace.c 637 */;
	void **cocci_id/* arch/mips/kernel/ptrace.c 637 */;
	unsigned int *cocci_id/* arch/mips/kernel/ptrace.c 636 */;
	const struct user_regset *cocci_id/* arch/mips/kernel/ptrace.c 635 */;
	struct msa_control_regs {
		unsigned int fir;
		unsigned int fcsr;
		unsigned int msair;
		unsigned int msacsr;
	} cocci_id/* arch/mips/kernel/ptrace.c 627 */;
	void cocci_id/* arch/mips/kernel/ptrace.c 58 */;
	const void __user **cocci_id/* arch/mips/kernel/ptrace.c 489 */;
	const void **cocci_id/* arch/mips/kernel/ptrace.c 489 */;
	const int cocci_id/* arch/mips/kernel/ptrace.c 458 */;
	__u64 cocci_id/* arch/mips/kernel/ptrace.c 372 */;
	__u64 __user *cocci_id/* arch/mips/kernel/ptrace.c 369 */;
	__u32 __user *cocci_id/* arch/mips/kernel/ptrace.c 358 */;
	u64 cocci_id/* arch/mips/kernel/ptrace.c 285 */[ELF_NGREG];
	unsigned cocci_id/* arch/mips/kernel/ptrace.c 232 */;
	u32 cocci_id/* arch/mips/kernel/ptrace.c 218 */[ELF_NGREG];
	u16 cocci_id/* arch/mips/kernel/ptrace.c 166 */[NUM_WATCH_REGS];
	unsigned long cocci_id/* arch/mips/kernel/ptrace.c 165 */[NUM_WATCH_REGS];
	unsigned long cocci_id/* arch/mips/kernel/ptrace.c 1418 */[6];
	struct seccomp_data cocci_id/* arch/mips/kernel/ptrace.c 1417 */;
	struct pt_watch_regs cocci_id/* arch/mips/kernel/ptrace.c 128 */;
	dspreg_t *cocci_id/* arch/mips/kernel/ptrace.c 1246 */;
	enum pt_watch_style cocci_id/* arch/mips/kernel/ptrace.c 123 */;
	struct pt_watch_regs __user *cocci_id/* arch/mips/kernel/ptrace.c 121 */;
	union fpureg *cocci_id/* arch/mips/kernel/ptrace.c 1193 */;
	struct pt_regs *cocci_id/* arch/mips/kernel/ptrace.c 1181 */;
	unsigned long __user *cocci_id/* arch/mips/kernel/ptrace.c 1170 */;
	void __user *cocci_id/* arch/mips/kernel/ptrace.c 1168 */;
	int cocci_id/* arch/mips/kernel/ptrace.c 1167 */;
	unsigned long cocci_id/* arch/mips/kernel/ptrace.c 1165 */;
	struct task_struct *cocci_id/* arch/mips/kernel/ptrace.c 1164 */;
	long cocci_id/* arch/mips/kernel/ptrace.c 1164 */;
	const struct user_regset_view *cocci_id/* arch/mips/kernel/ptrace.c 1147 */;
	const struct user_regset_view cocci_id/* arch/mips/kernel/ptrace.c 1124 */;
	const struct user_regset cocci_id/* arch/mips/kernel/ptrace.c 1076 */[];
	const struct pt_regs_offset *cocci_id/* arch/mips/kernel/ptrace.c 1007 */;
	const char *cocci_id/* arch/mips/kernel/ptrace.c 1005 */;
}
