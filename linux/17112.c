cocci_test_suite() {
	const struct pt_regs_offset cocci_id/* arch/powerpc/kernel/ptrace.c 77 */[];
	struct thread_struct cocci_id/* arch/powerpc/kernel/ptrace.c 757 */;
	struct thread_vr_state cocci_id/* arch/powerpc/kernel/ptrace.c 73 */;
	struct pt_regs_offset {
		const char *name;
		int offset;
	} cocci_id/* arch/powerpc/kernel/ptrace.c 61 */;
	struct thread_fp_state cocci_id/* arch/powerpc/kernel/ptrace.c 461 */;
	u64 cocci_id/* arch/powerpc/kernel/ptrace.c 450 */[33];
	struct pt_regs cocci_id/* arch/powerpc/kernel/ptrace.c 354 */;
	void __init cocci_id/* arch/powerpc/kernel/ptrace.c 3368 */;
	void __init cocci_id/* arch/powerpc/kernel/ptrace.c 3362 */(void);
	void cocci_id/* arch/powerpc/kernel/ptrace.c 3346 */;
	u32 cocci_id/* arch/powerpc/kernel/ptrace.c 3276 */;
	struct pt_regs *cocci_id/* arch/powerpc/kernel/ptrace.c 3218 */;
	double cocci_id/* arch/powerpc/kernel/ptrace.c 3187 */;
	struct user_pt_regs cocci_id/* arch/powerpc/kernel/ptrace.c 3144 */;
	struct ppc_hw_breakpoint cocci_id/* arch/powerpc/kernel/ptrace.c 3103 */;
	struct ppc_debug_info cocci_id/* arch/powerpc/kernel/ptrace.c 3058 */;
	unsigned int cocci_id/* arch/powerpc/kernel/ptrace.c 3011 */;
	unsigned long __user *cocci_id/* arch/powerpc/kernel/ptrace.c 2986 */;
	void __user *cocci_id/* arch/powerpc/kernel/ptrace.c 2985 */;
	int cocci_id/* arch/powerpc/kernel/ptrace.c 2984 */;
	unsigned long cocci_id/* arch/powerpc/kernel/ptrace.c 2982 */;
	struct task_struct *cocci_id/* arch/powerpc/kernel/ptrace.c 2981 */;
	long cocci_id/* arch/powerpc/kernel/ptrace.c 2981 */;
	struct perf_event *cocci_id/* arch/powerpc/kernel/ptrace.c 2939 */;
	struct thread_struct *cocci_id/* arch/powerpc/kernel/ptrace.c 2938 */;
	struct arch_hw_breakpoint cocci_id/* arch/powerpc/kernel/ptrace.c 2837 */;
	struct perf_event_attr cocci_id/* arch/powerpc/kernel/ptrace.c 2834 */;
	struct ppc_hw_breakpoint *cocci_id/* arch/powerpc/kernel/ptrace.c 2828 */;
	unsigned long *cocci_id/* arch/powerpc/kernel/ptrace.c 240 */;
	bool cocci_id/* arch/powerpc/kernel/ptrace.c 2395 */;
	struct perf_sample_data *cocci_id/* arch/powerpc/kernel/ptrace.c 2369 */;
	const struct user_regset_view *cocci_id/* arch/powerpc/kernel/ptrace.c 2292 */;
	const struct user_regset_view cocci_id/* arch/powerpc/kernel/ptrace.c 2286 */;
	u64 cocci_id/* arch/powerpc/kernel/ptrace.c 2241 */;
	const struct user_regset cocci_id/* arch/powerpc/kernel/ptrace.c 2192 */[];
	const compat_ulong_t __user *cocci_id/* arch/powerpc/kernel/ptrace.c 2073 */;
	const compat_ulong_t *cocci_id/* arch/powerpc/kernel/ptrace.c 2072 */;
	compat_ulong_t cocci_id/* arch/powerpc/kernel/ptrace.c 2027 */;
	compat_ulong_t __user *cocci_id/* arch/powerpc/kernel/ptrace.c 2026 */;
	compat_ulong_t *cocci_id/* arch/powerpc/kernel/ptrace.c 2025 */;
	enum powerpc_regset{REGSET_GPR, REGSET_FPR,

#ifdef CONFIG_ALTIVEC
 REGSET_VMX,

#endif


#ifdef CONFIG_VSX
 REGSET_VSX,

#endif


#ifdef CONFIG_SPE
 REGSET_SPE,

#endif


#ifdef CONFIG_PPC_TRANSACTIONAL_MEM
 REGSET_TM_CGPR, REGSET_TM_CFPR, REGSET_TM_CVMX, REGSET_TM_CVSX, REGSET_TM_SPR, REGSET_TM_CTAR, REGSET_TM_CPPR, REGSET_TM_CDSCR,

#endif


#ifdef CONFIG_PPC64
 REGSET_PPR, REGSET_DSCR,

#endif


#ifdef CONFIG_PPC_BOOK3S_64
 REGSET_TAR, REGSET_EBB, REGSET_PMR,

#endif


#ifdef CONFIG_PPC_MEM_KEYS
 REGSET_PKEY,

#endif
} cocci_id/* arch/powerpc/kernel/ptrace.c 1863 */;
	const struct pt_regs_offset *cocci_id/* arch/powerpc/kernel/ptrace.c 177 */;
	const char *cocci_id/* arch/powerpc/kernel/ptrace.c 175 */;
	const void __user *cocci_id/* arch/powerpc/kernel/ptrace.c 1648 */;
	const void *cocci_id/* arch/powerpc/kernel/ptrace.c 1648 */;
	void *cocci_id/* arch/powerpc/kernel/ptrace.c 1640 */;
	const struct user_regset *cocci_id/* arch/powerpc/kernel/ptrace.c 1638 */;
	u64 cocci_id/* arch/powerpc/kernel/ptrace.c 1268 */[32];
	union {
		elf_vrreg_t reg;
		u32 word;
	} cocci_id/* arch/powerpc/kernel/ptrace.c 1146 */;
}
