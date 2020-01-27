cocci_test_suite() {
	void __exit cocci_id/* fs/binfmt_elf_fdpic.c 96 */;
	void cocci_id/* fs/binfmt_elf_fdpic.c 96 */;
	int __init cocci_id/* fs/binfmt_elf_fdpic.c 90 */;
	Elf32_Dyn cocci_id/* fs/binfmt_elf_fdpic.c 847 */;
	Elf32_Sword cocci_id/* fs/binfmt_elf_fdpic.c 837 */;
	Elf32_Dyn __user *cocci_id/* fs/binfmt_elf_fdpic.c 836 */;
	struct linux_binfmt cocci_id/* fs/binfmt_elf_fdpic.c 81 */;
	int cocci_id/* fs/binfmt_elf_fdpic.c 78 */(struct coredump_params *cprm);
	unsigned cocci_id/* fs/binfmt_elf_fdpic.c 740 */;
	int cocci_id/* fs/binfmt_elf_fdpic.c 74 */(struct elf_fdpic_params *,
						   struct file *,
						   struct mm_struct *);
	struct elf32_fdpic_loadseg *cocci_id/* fs/binfmt_elf_fdpic.c 735 */;
	struct elf32_fdpic_loadmap *cocci_id/* fs/binfmt_elf_fdpic.c 733 */;
	const char *cocci_id/* fs/binfmt_elf_fdpic.c 731 */;
	struct mm_struct *cocci_id/* fs/binfmt_elf_fdpic.c 730 */;
	int cocci_id/* fs/binfmt_elf_fdpic.c 64 */(struct linux_binprm *,
						   struct mm_struct *,
						   struct elf_fdpic_params *,
						   struct elf_fdpic_params *);
	int cocci_id/* fs/binfmt_elf_fdpic.c 61 */(struct elf_fdpic_params *,
						   struct file *,
						   struct mm_struct *,
						   const char *);
	int cocci_id/* fs/binfmt_elf_fdpic.c 60 */(struct elf_fdpic_params *,
						   struct file *);
	int cocci_id/* fs/binfmt_elf_fdpic.c 59 */(struct linux_binprm *);
	char *cocci_id/* fs/binfmt_elf_fdpic.c 43 */;
	struct pt_regs *cocci_id/* fs/binfmt_elf_fdpic.c 185 */;
	struct elf_fdpic_params cocci_id/* fs/binfmt_elf_fdpic.c 184 */;
	struct linux_binprm *cocci_id/* fs/binfmt_elf_fdpic.c 182 */;
	struct elf_phdr cocci_id/* fs/binfmt_elf_fdpic.c 1685 */;
	struct elf_thread_status cocci_id/* fs/binfmt_elf_fdpic.c 1626 */;
	struct memelfnote cocci_id/* fs/binfmt_elf_fdpic.c 1599 */;
	struct core_thread *cocci_id/* fs/binfmt_elf_fdpic.c 1574 */;
	elf_addr_t cocci_id/* fs/binfmt_elf_fdpic.c 1573 */;
	Elf_Half cocci_id/* fs/binfmt_elf_fdpic.c 1572 */;
	struct elf_shdr *cocci_id/* fs/binfmt_elf_fdpic.c 1571 */;
	struct elf_phdr *cocci_id/* fs/binfmt_elf_fdpic.c 1570 */;
	elf_addr_t *cocci_id/* fs/binfmt_elf_fdpic.c 1569 */;
	elf_fpxregset_t *cocci_id/* fs/binfmt_elf_fdpic.c 1566 */;
	elf_fpregset_t *cocci_id/* fs/binfmt_elf_fdpic.c 1564 */;
	struct list_head *cocci_id/* fs/binfmt_elf_fdpic.c 1563 */;
	struct elf_prpsinfo *cocci_id/* fs/binfmt_elf_fdpic.c 1561 */;
	struct elf_prstatus *cocci_id/* fs/binfmt_elf_fdpic.c 1560 */;
	struct memelfnote *cocci_id/* fs/binfmt_elf_fdpic.c 1559 */;
	loff_t cocci_id/* fs/binfmt_elf_fdpic.c 1557 */;
	struct elfhdr *cocci_id/* fs/binfmt_elf_fdpic.c 1556 */;
	mm_segment_t cocci_id/* fs/binfmt_elf_fdpic.c 1552 */;
	struct coredump_params *cocci_id/* fs/binfmt_elf_fdpic.c 1548 */;
	struct vm_area_struct *cocci_id/* fs/binfmt_elf_fdpic.c 1532 */;
	unsigned long cocci_id/* fs/binfmt_elf_fdpic.c 1530 */;
	size_t cocci_id/* fs/binfmt_elf_fdpic.c 1530 */;
	void *cocci_id/* fs/binfmt_elf_fdpic.c 1511 */;
	struct page *cocci_id/* fs/binfmt_elf_fdpic.c 1509 */;
	bool cocci_id/* fs/binfmt_elf_fdpic.c 1493 */;
	struct task_struct *cocci_id/* fs/binfmt_elf_fdpic.c 1442 */;
	struct elf_thread_status *cocci_id/* fs/binfmt_elf_fdpic.c 1440 */;
	long cocci_id/* fs/binfmt_elf_fdpic.c 1440 */;
	int cocci_id/* fs/binfmt_elf_fdpic.c 1440 */;
	struct elf_thread_status {
		struct list_head list;
		struct elf_prstatus prstatus;
		elf_fpregset_t fpu;
		struct task_struct *thread;
#ifdef ELF_CORE_COPY_XFPREGS
		elf_fpxregset_t xfpu;
#endif
		struct memelfnote notes[3];
		int num_notes;
	} cocci_id/* fs/binfmt_elf_fdpic.c 1422 */;
	struct elf32_phdr *cocci_id/* fs/binfmt_elf_fdpic.c 141 */;
	const char __user *cocci_id/* fs/binfmt_elf_fdpic.c 1391 */;
	struct file *cocci_id/* fs/binfmt_elf_fdpic.c 139 */;
	struct elf_prpsinfo cocci_id/* fs/binfmt_elf_fdpic.c 1385 */;
	const struct cred *cocci_id/* fs/binfmt_elf_fdpic.c 1381 */;
	struct elf_fdpic_params *cocci_id/* fs/binfmt_elf_fdpic.c 138 */;
	u64 cocci_id/* fs/binfmt_elf_fdpic.c 1365 */;
	struct task_cputime cocci_id/* fs/binfmt_elf_fdpic.c 1355 */;
	unsigned int cocci_id/* fs/binfmt_elf_fdpic.c 1329 */;
	struct elfhdr cocci_id/* fs/binfmt_elf_fdpic.c 1303 */;
	struct elf_note cocci_id/* fs/binfmt_elf_fdpic.c 1269 */;
	struct memelfnote {
		const char *name;
		int type;
		unsigned int datasz;
		void *data;
	} cocci_id/* fs/binfmt_elf_fdpic.c 1257 */;
	void __user *cocci_id/* fs/binfmt_elf_fdpic.c 1109 */;
}
