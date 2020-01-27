cocci_test_suite() {
	struct pt_all_user_regs cocci_id/* arch/ia64/kernel/ptrace.c 839 */;
	struct ia64_fpreg cocci_id/* arch/ia64/kernel/ptrace.c 832 */;
	int cocci_id/* arch/ia64/kernel/ptrace.c 823 */(struct task_struct *child,
							unsigned long addr,
							unsigned long *data,
							int write_access);
	struct unw_frame_info cocci_id/* arch/ia64/kernel/ptrace.c 732 */;
	void cocci_id/* arch/ia64/kernel/ptrace.c 728 */;
	struct ia64_psr *cocci_id/* arch/ia64/kernel/ptrace.c 687 */;
	syncfunc_t cocci_id/* arch/ia64/kernel/ptrace.c 586 */;
	long (*cocci_id/* arch/ia64/kernel/ptrace.c 579 */)(struct task_struct *,
							    struct switch_stack *,
							    unsigned long,
							    unsigned long);
	size_t cocci_id/* arch/ia64/kernel/ptrace.c 410 */;
	long *cocci_id/* arch/ia64/kernel/ptrace.c 406 */;
	struct switch_stack *cocci_id/* arch/ia64/kernel/ptrace.c 252 */;
	struct syscall_get_set_args cocci_id/* arch/ia64/kernel/ptrace.c 2184 */;
	struct syscall_get_set_args *cocci_id/* arch/ia64/kernel/ptrace.c 2148 */;
	struct syscall_get_set_args {
		unsigned int i;
		unsigned int n;
		unsigned long *args;
		struct pt_regs *regs;
		int rw;
	} cocci_id/* arch/ia64/kernel/ptrace.c 2138 */;
	const struct user_regset_view *cocci_id/* arch/ia64/kernel/ptrace.c 2133 */;
	const struct user_regset_view cocci_id/* arch/ia64/kernel/ptrace.c 2127 */;
	const struct user_regset cocci_id/* arch/ia64/kernel/ptrace.c 2111 */[];
	unsigned int cocci_id/* arch/ia64/kernel/ptrace.c 1916 */;
	void __user *cocci_id/* arch/ia64/kernel/ptrace.c 1897 */;
	char __user *cocci_id/* arch/ia64/kernel/ptrace.c 184 */;
	struct regset_getset cocci_id/* arch/ia64/kernel/ptrace.c 1830 */;
	const void __user *cocci_id/* arch/ia64/kernel/ptrace.c 1828 */;
	const void *cocci_id/* arch/ia64/kernel/ptrace.c 1828 */;
	const struct user_regset *cocci_id/* arch/ia64/kernel/ptrace.c 1826 */;
	void (*cocci_id/* arch/ia64/kernel/ptrace.c 1824 */)(struct unw_frame_info *,
							     void *);
	elf_fpreg_t cocci_id/* arch/ia64/kernel/ptrace.c 1714 */;
	elf_fpreg_t cocci_id/* arch/ia64/kernel/ptrace.c 1696 */[30];
	struct regset_getset *cocci_id/* arch/ia64/kernel/ptrace.c 1694 */;
	elf_greg_t cocci_id/* arch/ia64/kernel/ptrace.c 1536 */;
	elf_greg_t cocci_id/* arch/ia64/kernel/ptrace.c 1506 */[16];
	struct pt_regs *cocci_id/* arch/ia64/kernel/ptrace.c 1357 */;
	unsigned long *cocci_id/* arch/ia64/kernel/ptrace.c 1355 */;
	unsigned long cocci_id/* arch/ia64/kernel/ptrace.c 1355 */;
	struct unw_frame_info *cocci_id/* arch/ia64/kernel/ptrace.c 1354 */;
	struct task_struct *cocci_id/* arch/ia64/kernel/ptrace.c 1354 */;
	int cocci_id/* arch/ia64/kernel/ptrace.c 1353 */;
	void *cocci_id/* arch/ia64/kernel/ptrace.c 1293 */;
	char cocci_id/* arch/ia64/kernel/ptrace.c 1284 */;
	struct regset_getset {
		struct task_struct *target;
		const struct user_regset *regset;
		union {
			struct regset_get get;
			struct regset_set set;
		} u;
		unsigned int pos;
		unsigned int count;
		int ret;
	} cocci_id/* arch/ia64/kernel/ptrace.c 1265 */;
	struct regset_set {
		const void *kbuf;
		const void __user *ubuf;
	} cocci_id/* arch/ia64/kernel/ptrace.c 1260 */;
	struct regset_get {
		void *kbuf;
		void __user *ubuf;
	} cocci_id/* arch/ia64/kernel/ptrace.c 1255 */;
	struct pt_regs cocci_id/* arch/ia64/kernel/ptrace.c 1218 */;
	struct pt_all_user_regs __user *cocci_id/* arch/ia64/kernel/ptrace.c 1201 */;
	long cocci_id/* arch/ia64/kernel/ptrace.c 1157 */;
}
