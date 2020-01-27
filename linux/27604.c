cocci_test_suite() {
	struct fd cocci_id/* fs/exec.c 987 */;
	ssize_t cocci_id/* fs/exec.c 899 */;
	loff_t cocci_id/* fs/exec.c 896 */;
	enum kernel_read_file_id cocci_id/* fs/exec.c 896 */;
	loff_t *cocci_id/* fs/exec.c 895 */;
	void **cocci_id/* fs/exec.c 895 */;
	struct open_flags cocci_id/* fs/exec.c 842 */;
	unsigned long *cocci_id/* fs/exec.c 810 */;
	struct linux_binfmt *cocci_id/* fs/exec.c 80 */;
	void cocci_id/* fs/exec.c 80 */;
	struct mmu_gather cocci_id/* fs/exec.c 633 */;
	const char __user *const __user *cocci_id/* fs/exec.c 600 */;
	mm_segment_t cocci_id/* fs/exec.c 598 */;
	const char *const *cocci_id/* fs/exec.c 594 */;
	const char __user *cocci_id/* fs/exec.c 508 */;
	struct page *cocci_id/* fs/exec.c 502 */;
	compat_uptr_t cocci_id/* fs/exec.c 406 */;
	struct user_arg_ptr {
#ifdef CONFIG_COMPAT
		bool is_compat;
#endif
		union {
			const char __user *const __user *native;
#ifdef CONFIG_COMPAT
			const compat_uptr_t __user *compat;
#endif
		} ptr;
	} cocci_id/* fs/exec.c 388 */;
	void *cocci_id/* fs/exec.c 277 */;
	struct mm_struct *cocci_id/* fs/exec.c 246 */;
	struct vm_area_struct *cocci_id/* fs/exec.c 245 */;
	struct linux_binprm *cocci_id/* fs/exec.c 242 */;
	int cocci_id/* fs/exec.c 242 */;
	const compat_uptr_t __user *cocci_id/* fs/exec.c 1900 */;
	long cocci_id/* fs/exec.c 185 */;
	unsigned long cocci_id/* fs/exec.c 182 */;
	struct files_struct *cocci_id/* fs/exec.c 1722 */;
	char *cocci_id/* fs/exec.c 1720 */;
	struct file *cocci_id/* fs/exec.c 1718 */;
	struct user_arg_ptr cocci_id/* fs/exec.c 1716 */;
	struct filename *cocci_id/* fs/exec.c 1715 */;
	pid_t cocci_id/* fs/exec.c 1692 */;
	ushort *cocci_id/* fs/exec.c 1680 */;
	kgid_t cocci_id/* fs/exec.c 1518 */;
	kuid_t cocci_id/* fs/exec.c 1517 */;
	unsigned int cocci_id/* fs/exec.c 1516 */;
	struct inode *cocci_id/* fs/exec.c 1515 */;
	unsigned cocci_id/* fs/exec.c 1484 */;
	struct user_namespace *cocci_id/* fs/exec.c 1316 */;
	const struct open_flags cocci_id/* fs/exec.c 126 */;
	bool cocci_id/* fs/exec.c 1242 */;
	const char *cocci_id/* fs/exec.c 1242 */;
	struct task_struct *cocci_id/* fs/exec.c 1228 */;
	size_t cocci_id/* fs/exec.c 1228 */;
	const struct path *cocci_id/* fs/exec.c 107 */;
	spinlock_t *cocci_id/* fs/exec.c 1064 */;
	struct sighand_struct *cocci_id/* fs/exec.c 1063 */;
	struct signal_struct *cocci_id/* fs/exec.c 1062 */;
	void __user *cocci_id/* fs/exec.c 1002 */;
}
