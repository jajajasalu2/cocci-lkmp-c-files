cocci_test_suite() {
	const struct user_pac_address_keys *cocci_id/* arch/arm64/kernel/ptrace.c 998 */;
	struct ptrauth_keys *cocci_id/* arch/arm64/kernel/ptrace.c 997 */;
	const struct ptrauth_keys *cocci_id/* arch/arm64/kernel/ptrace.c 989 */;
	struct user_pac_address_keys *cocci_id/* arch/arm64/kernel/ptrace.c 988 */;
	__uint128_t cocci_id/* arch/arm64/kernel/ptrace.c 978 */;
	struct ptrauth_key cocci_id/* arch/arm64/kernel/ptrace.c 978 */;
	const struct ptrauth_key *cocci_id/* arch/arm64/kernel/ptrace.c 973 */;
	struct user_sve_header cocci_id/* arch/arm64/kernel/ptrace.c 789 */;
	const struct user_sve_header *cocci_id/* arch/arm64/kernel/ptrace.c 766 */;
	struct user_sve_header *cocci_id/* arch/arm64/kernel/ptrace.c 745 */;
	struct user_fpsimd_state cocci_id/* arch/arm64/kernel/ptrace.c 653 */;
	const void __user *cocci_id/* arch/arm64/kernel/ptrace.c 649 */;
	const void *cocci_id/* arch/arm64/kernel/ptrace.c 649 */;
	struct user_fpsimd_state *cocci_id/* arch/arm64/kernel/ptrace.c 626 */;
	void __user *cocci_id/* arch/arm64/kernel/ptrace.c 624 */;
	void *cocci_id/* arch/arm64/kernel/ptrace.c 624 */;
	unsigned int cocci_id/* arch/arm64/kernel/ptrace.c 623 */;
	const struct user_regset *cocci_id/* arch/arm64/kernel/ptrace.c 622 */;
	struct task_struct *cocci_id/* arch/arm64/kernel/ptrace.c 621 */;
	int cocci_id/* arch/arm64/kernel/ptrace.c 621 */;
	struct user_pt_regs *cocci_id/* arch/arm64/kernel/ptrace.c 596 */;
	const struct pt_regs_offset cocci_id/* arch/arm64/kernel/ptrace.c 57 */[];
	struct pt_regs_offset {
		const char *name;
		int offset;
	} cocci_id/* arch/arm64/kernel/ptrace.c 47 */;
	u64 *cocci_id/* arch/arm64/kernel/ptrace.c 403 */;
	struct perf_event_attr *cocci_id/* arch/arm64/kernel/ptrace.c 330 */;
	struct arch_hw_breakpoint_ctrl cocci_id/* arch/arm64/kernel/ptrace.c 329 */;
	struct perf_event_attr cocci_id/* arch/arm64/kernel/ptrace.c 292 */;
	struct perf_event *cocci_id/* arch/arm64/kernel/ptrace.c 287 */;
	struct debug_info cocci_id/* arch/arm64/kernel/ptrace.c 231 */;
	struct thread_struct *cocci_id/* arch/arm64/kernel/ptrace.c 212 */;
	void cocci_id/* arch/arm64/kernel/ptrace.c 209 */;
	enum ptrace_syscall_dir cocci_id/* arch/arm64/kernel/ptrace.c 1788 */;
	enum ptrace_syscall_dir{PTRACE_SYSCALL_ENTER=0, PTRACE_SYSCALL_EXIT,} cocci_id/* arch/arm64/kernel/ptrace.c 1782 */;
	unsigned long cocci_id/* arch/arm64/kernel/ptrace.c 1777 */;
	long cocci_id/* arch/arm64/kernel/ptrace.c 1776 */;
	const struct user_regset_view *cocci_id/* arch/arm64/kernel/ptrace.c 1759 */;
	const char *cocci_id/* arch/arm64/kernel/ptrace.c 175 */;
	struct arch_hw_breakpoint *cocci_id/* arch/arm64/kernel/ptrace.c 174 */;
	struct pt_regs *cocci_id/* arch/arm64/kernel/ptrace.c 172 */;
	compat_ulong_t __user *cocci_id/* arch/arm64/kernel/ptrace.c 1715 */;
	struct perf_sample_data *cocci_id/* arch/arm64/kernel/ptrace.c 171 */;
	compat_long_t cocci_id/* arch/arm64/kernel/ptrace.c 1680 */;
	u32 *cocci_id/* arch/arm64/kernel/ptrace.c 1596 */;
	u8 cocci_id/* arch/arm64/kernel/ptrace.c 1573 */;
	mm_segment_t cocci_id/* arch/arm64/kernel/ptrace.c 1539 */;
	const struct user_regset_view cocci_id/* arch/arm64/kernel/ptrace.c 1504 */;
	u32 cocci_id/* arch/arm64/kernel/ptrace.c 1479 */;
	struct user_hwdebug_state cocci_id/* arch/arm64/kernel/ptrace.c 1479 */;
	compat_ulong_t cocci_id/* arch/arm64/kernel/ptrace.c 1462 */;
	const struct user_regset cocci_id/* arch/arm64/kernel/ptrace.c 1451 */[];
	unsigned long *cocci_id/* arch/arm64/kernel/ptrace.c 139 */;
	struct pt_regs cocci_id/* arch/arm64/kernel/ptrace.c 1285 */;
	enum compat_regset{REGSET_COMPAT_GPR, REGSET_COMPAT_VFP,} cocci_id/* arch/arm64/kernel/ptrace.c 1222 */;
	bool cocci_id/* arch/arm64/kernel/ptrace.c 121 */;
	struct user_pac_generic_keys cocci_id/* arch/arm64/kernel/ptrace.c 1206 */;
	struct user_pac_address_keys cocci_id/* arch/arm64/kernel/ptrace.c 1198 */;
	struct user_pac_mask cocci_id/* arch/arm64/kernel/ptrace.c 1189 */;
	u64 cocci_id/* arch/arm64/kernel/ptrace.c 1122 */;
	struct user_pt_regs cocci_id/* arch/arm64/kernel/ptrace.c 1122 */;
	enum aarch64_regset{REGSET_GPR, REGSET_FPR, REGSET_TLS,

#ifdef CONFIG_HAVE_HW_BREAKPOINT
 REGSET_HW_BREAK, REGSET_HW_WATCH,

#endif
 REGSET_SYSTEM_CALL,

#ifdef CONFIG_ARM64_SVE
 REGSET_SVE,

#endif


#ifdef CONFIG_ARM64_PTR_AUTH
 REGSET_PAC_MASK,

#ifdef CONFIG_CHECKPOINT_RESTORE
 REGSET_PACA_KEYS, REGSET_PACG_KEYS,

#endif


#endif
} cocci_id/* arch/arm64/kernel/ptrace.c 1098 */;
	const struct user_pac_generic_keys *cocci_id/* arch/arm64/kernel/ptrace.c 1052 */;
	const struct pt_regs_offset *cocci_id/* arch/arm64/kernel/ptrace.c 105 */;
	struct user_pac_generic_keys *cocci_id/* arch/arm64/kernel/ptrace.c 1045 */;
}
