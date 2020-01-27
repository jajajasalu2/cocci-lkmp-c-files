cocci_test_suite() {
	ni_syscall cocci_id/* arch/s390/kernel/sys_s390.c 99 */;
	unsigned int cocci_id/* arch/s390/kernel/sys_s390.c 82 */;
	void *cocci_id/* arch/s390/kernel/sys_s390.c 66 */;
	uint cocci_id/* arch/s390/kernel/sys_s390.c 65 */;
	unsigned long cocci_id/* arch/s390/kernel/sys_s390.c 65 */;
	int cocci_id/* arch/s390/kernel/sys_s390.c 52 */;
	struct s390_mmap_arg_struct cocci_id/* arch/s390/kernel/sys_s390.c 51 */;
	struct s390_mmap_arg_struct *cocci_id/* arch/s390/kernel/sys_s390.c 49 */;
	struct s390_mmap_arg_struct {
		unsigned long addr;
		unsigned long len;
		unsigned long prot;
		unsigned long flags;
		unsigned long fd;
		unsigned long offset;
	} cocci_id/* arch/s390/kernel/sys_s390.c 40 */;
}
