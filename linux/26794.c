cocci_test_suite() {
	struct linux_binfmt cocci_id/* fs/binfmt_elf.c 92 */;
	int cocci_id/* fs/binfmt_elf.c 73 */(struct coredump_params *cprm);
	struct arch_elf_state cocci_id/* fs/binfmt_elf.c 700 */;
	struct {
		struct elfhdr elf_ex;
		struct elfhdr interp_elf_ex;
	} *cocci_id/* fs/binfmt_elf.c 696 */;
	int cocci_id/* fs/binfmt_elf.c 63 */(struct file *);
	int cocci_id/* fs/binfmt_elf.c 60 */(struct linux_binprm *bprm);
	struct arch_elf_state *cocci_id/* fs/binfmt_elf.c 530 */;
	struct elfhdr *cocci_id/* fs/binfmt_elf.c 528 */;
	int cocci_id/* fs/binfmt_elf.c 528 */;
	struct file *cocci_id/* fs/binfmt_elf.c 506 */;
	struct elf_phdr *cocci_id/* fs/binfmt_elf.c 505 */;
	struct arch_elf_state {
	} cocci_id/* fs/binfmt_elf.c 481 */;
	const struct elfhdr *cocci_id/* fs/binfmt_elf.c 427 */;
	ssize_t cocci_id/* fs/binfmt_elf.c 409 */;
	const struct elf_phdr *cocci_id/* fs/binfmt_elf.c 349 */;
	void __user *cocci_id/* fs/binfmt_elf.c 316 */;
	elf_addr_t cocci_id/* fs/binfmt_elf.c 260 */;
	struct elf_phdr cocci_id/* fs/binfmt_elf.c 250 */;
	void __exit cocci_id/* fs/binfmt_elf.c 2386 */;
	int __init cocci_id/* fs/binfmt_elf.c 2380 */;
	void *cocci_id/* fs/binfmt_elf.c 2345 */;
	struct page *cocci_id/* fs/binfmt_elf.c 2340 */;
	Elf_Half cocci_id/* fs/binfmt_elf.c 2190 */;
	struct elf_shdr *cocci_id/* fs/binfmt_elf.c 2189 */;
	struct elf_note_info cocci_id/* fs/binfmt_elf.c 2187 */;
	loff_t cocci_id/* fs/binfmt_elf.c 2186 */;
	mm_segment_t cocci_id/* fs/binfmt_elf.c 2181 */;
	struct coredump_params *cocci_id/* fs/binfmt_elf.c 2178 */;
	struct elf_thread_status cocci_id/* fs/binfmt_elf.c 2111 */;
	struct list_head *cocci_id/* fs/binfmt_elf.c 2109 */;
	size_t cocci_id/* fs/binfmt_elf.c 199 */;
	struct memelfnote cocci_id/* fs/binfmt_elf.c 1983 */;
	struct elf_note_info *cocci_id/* fs/binfmt_elf.c 1977 */;
	struct elf_note_info {
		struct memelfnote *notes;
		struct memelfnote *notes_files;
		struct elf_prstatus *prstatus;
		struct elf_prpsinfo *psinfo;
		struct list_head thread_list;
		elf_fpregset_t *fpu;
#ifdef ELF_CORE_COPY_XFPREGS
		elf_fpxregset_t *xfpu;
#endif
		user_siginfo_t csigdata;
		int thread_status_size;
		int numnote;
	} cocci_id/* fs/binfmt_elf.c 1962 */;
	struct elf_thread_status *cocci_id/* fs/binfmt_elf.c 1929 */;
	long cocci_id/* fs/binfmt_elf.c 1929 */;
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
	} cocci_id/* fs/binfmt_elf.c 1911 */;
	struct elf_thread_core_info cocci_id/* fs/binfmt_elf.c 1804 */;
	const struct cred *cocci_id/* fs/binfmt_elf.c 180 */;
	elf_addr_t *cocci_id/* fs/binfmt_elf.c 178 */;
	struct core_thread *cocci_id/* fs/binfmt_elf.c 1762 */;
	struct elf_prpsinfo *cocci_id/* fs/binfmt_elf.c 1761 */;
	struct elf_thread_core_info *cocci_id/* fs/binfmt_elf.c 1760 */;
	unsigned char cocci_id/* fs/binfmt_elf.c 176 */[16];
	const struct user_regset_view *cocci_id/* fs/binfmt_elf.c 1759 */;
	const kernel_siginfo_t *cocci_id/* fs/binfmt_elf.c 1756 */;
	struct pt_regs *cocci_id/* fs/binfmt_elf.c 1756 */;
	const char *cocci_id/* fs/binfmt_elf.c 174 */;
	elf_addr_t __user *cocci_id/* fs/binfmt_elf.c 170 */;
	size_t *cocci_id/* fs/binfmt_elf.c 1695 */;
	const struct user_regset *cocci_id/* fs/binfmt_elf.c 1679 */;
	struct task_struct *cocci_id/* fs/binfmt_elf.c 1678 */;
	void cocci_id/* fs/binfmt_elf.c 1678 */;
	struct elf_note_info {
		struct elf_thread_core_info *thread;
		struct memelfnote psinfo;
		struct memelfnote signote;
		struct memelfnote auxv;
		struct memelfnote files;
		user_siginfo_t csigdata;
		size_t size;
		int thread_notes;
	} cocci_id/* fs/binfmt_elf.c 1662 */;
	struct elf_thread_core_info {
		struct elf_thread_core_info *next;
		struct task_struct *task;
		struct elf_prstatus prstatus;
		struct memelfnote notes[0];
	} cocci_id/* fs/binfmt_elf.c 1655 */;
	unsigned long cocci_id/* fs/binfmt_elf.c 165 */;
	struct linux_binprm *cocci_id/* fs/binfmt_elf.c 164 */;
	char *cocci_id/* fs/binfmt_elf.c 1581 */;
	user_long_t *cocci_id/* fs/binfmt_elf.c 1579 */;
	unsigned cocci_id/* fs/binfmt_elf.c 1578 */;
	user_siginfo_t __user *cocci_id/* fs/binfmt_elf.c 1558 */;
	user_siginfo_t *cocci_id/* fs/binfmt_elf.c 1553 */;
	struct mm_struct *cocci_id/* fs/binfmt_elf.c 1543 */;
	struct memelfnote *cocci_id/* fs/binfmt_elf.c 1543 */;
	const char __user *cocci_id/* fs/binfmt_elf.c 1513 */;
	struct elf_prpsinfo cocci_id/* fs/binfmt_elf.c 1507 */;
	u64 cocci_id/* fs/binfmt_elf.c 1489 */;
	struct task_cputime cocci_id/* fs/binfmt_elf.c 1479 */;
	struct elf_prstatus *cocci_id/* fs/binfmt_elf.c 1466 */;
	unsigned int cocci_id/* fs/binfmt_elf.c 1454 */;
	struct elfhdr cocci_id/* fs/binfmt_elf.c 1434 */;
	u32 cocci_id/* fs/binfmt_elf.c 1421 */;
	u16 cocci_id/* fs/binfmt_elf.c 1421 */;
	struct elf_note cocci_id/* fs/binfmt_elf.c 1401 */;
	struct memelfnote {
		const char *name;
		int type;
		unsigned int datasz;
		void *data;
	} cocci_id/* fs/binfmt_elf.c 1389 */;
	union {
		u32 cmp;
		char elfmag[SELFMAG];
	} cocci_id/* fs/binfmt_elf.c 1359 */;
	u32 __user *cocci_id/* fs/binfmt_elf.c 1353 */;
	bool cocci_id/* fs/binfmt_elf.c 1269 */;
	struct vm_area_struct *cocci_id/* fs/binfmt_elf.c 1269 */;
}
