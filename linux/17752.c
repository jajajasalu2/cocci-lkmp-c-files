cocci_test_suite() {
	struct dev_pagemap cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 97 */;
	void *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 731 */;
	struct resource *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 730 */;
	const __be32 *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 706 */;
	int cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 705 */;
	struct device_node *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 704 */;
	u64 cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 702 */;
	void cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 702 */;
	const struct dev_pagemap_ops cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 634 */;
	vm_fault_t cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 600 */;
	struct vm_fault *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 600 */;
	struct vm_area_struct *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 467 */;
	struct kvmppc_uvmem_page_pvt *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 417 */;
	struct page *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 416 */;
	struct migrate_vma cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 349 */;
	bool *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 346 */;
	const struct kvm_memory_slot *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 260 */;
	struct kvm_memory_slot *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 208 */;
	struct kvm_memslots *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 207 */;
	struct kvmppc_uvmem_slot *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 187 */;
	unsigned long *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 185 */;
	bool cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 184 */;
	struct kvm *cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 184 */;
	unsigned long cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 184 */;
	struct kvmppc_uvmem_page_pvt {
		struct kvm *kvm;
		unsigned long gpa;
		bool skip_page_out;
	} cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 110 */;
	struct kvmppc_uvmem_slot {
		struct list_head list;
		unsigned long nr_pfns;
		unsigned long base_pfn;
		unsigned long *pfns;
	} cocci_id/* arch/powerpc/kvm/book3s_hv_uvmem.c 103 */;
}
