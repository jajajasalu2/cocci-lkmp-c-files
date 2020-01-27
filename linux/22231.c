cocci_test_suite() {
	void cocci_id/* mm/mmap.c 76 */(struct mm_struct *mm,
					struct vm_area_struct *vma,
					struct vm_area_struct *prev,
					unsigned long start,
					unsigned long end);
	long cocci_id/* mm/mmap.c 713 */;
	struct anon_vma *cocci_id/* mm/mmap.c 710 */;
	struct rb_root_cached *cocci_id/* mm/mmap.c 709 */;
	pgoff_t cocci_id/* mm/mmap.c 703 */;
	struct rb_node **cocci_id/* mm/mmap.c 676 */;
	void cocci_id/* mm/mmap.c 673 */;
	struct rb_node *cocci_id/* mm/mmap.c 642 */;
	const int cocci_id/* mm/mmap.c 64 */;
	struct rb_node ***cocci_id/* mm/mmap.c 536 */;
	struct anon_vma_chain *cocci_id/* mm/mmap.c 528 */;
	struct rb_root *cocci_id/* mm/mmap.c 466 */;
	int __meminit cocci_id/* mm/mmap.c 3749 */;
	struct notifier_block cocci_id/* mm/mmap.c 3745 */;
	struct notifier_block *cocci_id/* mm/mmap.c 3706 */;
	void __init cocci_id/* mm/mmap.c 3638 */;
	struct page **cocci_id/* mm/mmap.c 3447 */;
	const struct vm_special_mapping *cocci_id/* mm/mmap.c 3439 */;
	struct vm_area_struct cocci_id/* mm/mmap.c 343 */;
	const struct vm_area_struct *cocci_id/* mm/mmap.c 3419 */;
	const struct vm_operations_struct *cocci_id/* mm/mmap.c 3386 */;
	void *cocci_id/* mm/mmap.c 3385 */;
	struct page *cocci_id/* mm/mmap.c 3373 */;
	struct vm_special_mapping *cocci_id/* mm/mmap.c 3361 */;
	vm_fault_t cocci_id/* mm/mmap.c 3352 */;
	struct vm_fault *cocci_id/* mm/mmap.c 3352 */;
	const struct vm_operations_struct cocci_id/* mm/mmap.c 3347 */;
	const char *cocci_id/* mm/mmap.c 3322 */;
	vm_fault_t cocci_id/* mm/mmap.c 3313 */(struct vm_fault *vmf);
	bool *cocci_id/* mm/mmap.c 3199 */;
	struct vm_area_struct **cocci_id/* mm/mmap.c 3197 */;
	struct mmu_gather cocci_id/* mm/mmap.c 3089 */;
	struct vm_area_struct *cocci_id/* mm/mmap.c 2726 */;
	bool cocci_id/* mm/mmap.c 2723 */;
	struct list_head *cocci_id/* mm/mmap.c 2723 */;
	struct mm_struct *cocci_id/* mm/mmap.c 2722 */;
	unsigned long cocci_id/* mm/mmap.c 2722 */;
	int cocci_id/* mm/mmap.c 2722 */;
	size_t cocci_id/* mm/mmap.c 2722 */;
	char *cocci_id/* mm/mmap.c 2495 */;
	int __init cocci_id/* mm/mmap.c 2495 */;
	unsigned long (*cocci_id/* mm/mmap.c 2182 */)(struct file *,
						      unsigned long,
						      unsigned long,
						      unsigned long,
						      unsigned long);
	const unsigned long cocci_id/* mm/mmap.c 2095 */;
	struct vm_unmapped_area_info cocci_id/* mm/mmap.c 2094 */;
	int cocci_id/* mm/mmap.c 191 */(unsigned long addr,
					unsigned long request,
					unsigned long flags,
					struct list_head *uf);
	struct vm_unmapped_area_info *cocci_id/* mm/mmap.c 1865 */;
	vm_flags_t cocci_id/* mm/mmap.c 1687 */;
	struct mmap_arg_struct cocci_id/* mm/mmap.c 1633 */;
	struct mmap_arg_struct *cocci_id/* mm/mmap.c 1631 */;
	struct mmap_arg_struct {
		unsigned long addr;
		unsigned long len;
		unsigned long prot;
		unsigned long flags;
		unsigned long fd;
		unsigned long offset;
	} cocci_id/* mm/mmap.c 1622 */;
	struct hstate *cocci_id/* mm/mmap.c 1584 */;
	struct user_struct *cocci_id/* mm/mmap.c 1583 */;
	struct file *cocci_id/* mm/mmap.c 146 */;
	struct address_space *cocci_id/* mm/mmap.c 146 */;
	struct inode *cocci_id/* mm/mmap.c 1454 */;
	unsigned long *cocci_id/* mm/mmap.c 1378 */;
	u64 cocci_id/* mm/mmap.c 1362 */;
	struct mempolicy *cocci_id/* mm/mmap.c 1125 */;
	struct vm_userfaultfd_ctx cocci_id/* mm/mmap.c 1066 */;
	pgprot_t cocci_id/* mm/mmap.c 106 */;
	pgprot_t cocci_id/* mm/mmap.c 100 */[16];
}
