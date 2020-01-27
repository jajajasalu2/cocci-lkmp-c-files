cocci_test_suite() {
	struct revmap_entry cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 99 */;
	hva_handler_fn cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 973 */;
	unsigned long *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 923 */;
	struct kvm_memory_slot *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 916 */;
	gfn_t cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 771 */;
	struct kvm_memslots *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 765 */;
	int (*cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 755 */)(struct kvm *kvm,
								     struct kvm_memory_slot *memslot,
								     unsigned long gfn);
	struct page *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 74 */;
	u32 cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 70 */;
	struct kvm_hpt_info *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 70 */;
	pte_t *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 607 */;
	struct mm_struct *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 499 */;
	struct vm_area_struct *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 496 */;
	bool cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 494 */;
	struct kvm_resize_hpt {
		struct kvm *kvm;
		struct work_struct work;
		u32 order;
		int error;
		struct kvm_hpt_info hpt;
	} cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 49 */;
	unsigned long cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 483 */[3];
	struct kvm_vcpu *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 479 */;
	struct kvm_run *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 479 */;
	long cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 45 */(struct kvm *kvm,
								  unsigned long flags,
								  long pte_index,
								  unsigned long pteh,
								  unsigned long ptel,
								  unsigned long *pte_idx_ret);
	gpa_t cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 430 */;
	gva_t cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 417 */;
	unsigned int cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 406 */;
	struct kvmppc_slb *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 332 */;
	struct kvmppc_pte *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 329 */;
	u64 cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 301 */;
	struct kvmppc_mmu *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2148 */;
	const struct file_operations cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2130 */;
	const char __user *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2124 */;
	__be64 *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2050 */;
	unsigned long cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2047 */;
	loff_t *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2043 */;
	size_t cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2043 */;
	char __user *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2042 */;
	ssize_t cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2042 */;
	struct debugfs_htab_state *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2019 */;
	struct kvm *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2018 */;
	struct inode *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2016 */;
	struct file *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2016 */;
	int cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2016 */;
	struct debugfs_htab_state {
		struct kvm *kvm;
		struct mutex mutex;
		unsigned long hpt_index;
		int chars_left;
		int buf_index;
		char buf[64];
	} cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 2007 */;
	struct kvm_get_htab_fd *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1970 */;
	__be64 cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1884 */;
	long int cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1839 */;
	unsigned long cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1741 */[2];
	struct kvm_get_htab_header __user *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1738 */;
	unsigned long __user *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1737 */;
	struct kvm_get_htab_header cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1733 */;
	struct kvm_htab_ctx *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1731 */;
	struct revmap_entry *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1639 */;
	struct kvm_htab_ctx {
		unsigned long index;
		unsigned long flags;
		struct kvm *kvm;
		int first_pass;
	} cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1626 */;
	struct kvm_resize_hpt *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1560 */;
	struct kvm_ppc_resize_hpt *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1556 */;
	long cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1555 */;
	void *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 151 */;
	struct kvm_resize_hpt cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1447 */;
	struct work_struct *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1444 */;
	struct kvm_hpt_info cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 129 */;
	struct kvmppc_vpa *cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1118 */;
	pte_t cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1020 */;
	void cocci_id/* arch/powerpc/kvm/book3s_64_mmu_hv.c 1020 */;
}
