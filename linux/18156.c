cocci_test_suite() {
	enum ptrace_syscall_dir cocci_id/* arch/arm/kernel/ptrace.c 898 */;
	enum ptrace_syscall_dir{PTRACE_SYSCALL_ENTER=0, PTRACE_SYSCALL_EXIT,} cocci_id/* arch/arm/kernel/ptrace.c 892 */;
	union fp_state cocci_id/* arch/arm/kernel/ptrace.c 816 */;
	struct pt_regs cocci_id/* arch/arm/kernel/ptrace.c 802 */;
	unsigned long __user *cocci_id/* arch/arm/kernel/ptrace.c 788 */;
	int cocci_id/* arch/arm/kernel/ptrace.c 787 */;
	unsigned long cocci_id/* arch/arm/kernel/ptrace.c 785 */;
	struct task_struct *cocci_id/* arch/arm/kernel/ptrace.c 784 */;
	long cocci_id/* arch/arm/kernel/ptrace.c 784 */;
	const struct user_regset_view *cocci_id/* arch/arm/kernel/ptrace.c 779 */;
	const struct user_regset_view cocci_id/* arch/arm/kernel/ptrace.c 774 */;
	struct user_fp cocci_id/* arch/arm/kernel/ptrace.c 752 */;
	u32 cocci_id/* arch/arm/kernel/ptrace.c 741 */;
	const struct user_regset cocci_id/* arch/arm/kernel/ptrace.c 737 */[];
	enum arm_regset{REGSET_GPR, REGSET_FPR,

#ifdef CONFIG_VFP
 REGSET_VFP,

#endif
} cocci_id/* arch/arm/kernel/ptrace.c 729 */;
	struct vfp_hard_struct cocci_id/* arch/arm/kernel/ptrace.c 695 */;
	const struct pt_regs_offset cocci_id/* arch/arm/kernel/ptrace.c 69 */[];
	const size_t cocci_id/* arch/arm/kernel/ptrace.c 659 */;
	struct user_vfp cocci_id/* arch/arm/kernel/ptrace.c 659 */;
	const struct vfp_hard_struct *cocci_id/* arch/arm/kernel/ptrace.c 658 */;
	struct thread_info *cocci_id/* arch/arm/kernel/ptrace.c 619 */;
	const void __user *cocci_id/* arch/arm/kernel/ptrace.c 617 */;
	const void *cocci_id/* arch/arm/kernel/ptrace.c 617 */;
	void __user *cocci_id/* arch/arm/kernel/ptrace.c 607 */;
	void *cocci_id/* arch/arm/kernel/ptrace.c 607 */;
	const struct user_regset *cocci_id/* arch/arm/kernel/ptrace.c 605 */;
	struct pt_regs_offset {
		const char *name;
		int offset;
	} cocci_id/* arch/arm/kernel/ptrace.c 60 */;
	struct arch_hw_breakpoint_ctrl cocci_id/* arch/arm/kernel/ptrace.c 464 */;
	struct perf_event *cocci_id/* arch/arm/kernel/ptrace.c 463 */;
	struct perf_event_attr cocci_id/* arch/arm/kernel/ptrace.c 444 */;
	u8 cocci_id/* arch/arm/kernel/ptrace.c 423 */;
	struct thread_struct *cocci_id/* arch/arm/kernel/ptrace.c 411 */;
	void cocci_id/* arch/arm/kernel/ptrace.c 399 */;
	struct arch_hw_breakpoint *cocci_id/* arch/arm/kernel/ptrace.c 381 */;
	struct perf_sample_data *cocci_id/* arch/arm/kernel/ptrace.c 378 */;
	struct user cocci_id/* arch/arm/kernel/ptrace.c 268 */;
	int __init cocci_id/* arch/arm/kernel/ptrace.c 237 */;
	struct undef_hook cocci_id/* arch/arm/kernel/ptrace.c 213 */;
	struct pt_regs *cocci_id/* arch/arm/kernel/ptrace.c 207 */;
	unsigned int cocci_id/* arch/arm/kernel/ptrace.c 207 */;
	unsigned long *cocci_id/* arch/arm/kernel/ptrace.c 148 */;
	bool cocci_id/* arch/arm/kernel/ptrace.c 131 */;
	const struct pt_regs_offset *cocci_id/* arch/arm/kernel/ptrace.c 116 */;
	const char *cocci_id/* arch/arm/kernel/ptrace.c 114 */;
}
