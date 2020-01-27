cocci_test_suite() {
	void *cocci_id/* arch/um/kernel/tlb.c 91 */;
	struct vm_area_struct *cocci_id/* arch/um/kernel/tlb.c 594 */;
	struct mm_struct *cocci_id/* arch/um/kernel/tlb.c 564 */;
	unsigned long cocci_id/* arch/um/kernel/tlb.c 559 */;
	void cocci_id/* arch/um/kernel/tlb.c 559 */;
	unsigned long long cocci_id/* arch/um/kernel/tlb.c 509 */;
	struct mm_id *cocci_id/* arch/um/kernel/tlb.c 473 */;
	pte_t *cocci_id/* arch/um/kernel/tlb.c 366 */;
	pmd_t *cocci_id/* arch/um/kernel/tlb.c 365 */;
	pud_t *cocci_id/* arch/um/kernel/tlb.c 364 */;
	p4d_t *cocci_id/* arch/um/kernel/tlb.c 363 */;
	struct host_vm_change cocci_id/* arch/um/kernel/tlb.c 328 */;
	pgd_t *cocci_id/* arch/um/kernel/tlb.c 327 */;
	struct host_vm_change {
		struct host_vm_op {
			enum{NONE, MMAP, MUNMAP, MPROTECT,} type;
			union {
				struct {
					unsigned long addr;
					unsigned long len;
					unsigned int prot;
					int fd;
					__u64 offset;
				} mmap;
				struct {
					unsigned long addr;
					unsigned long len;
				} munmap;
				struct {
					unsigned long addr;
					unsigned long len;
					unsigned int prot;
				} mprotect;
			} u;
		} ops[1];
		int userspace;
		int index;
		struct mm_struct *mm;
		void *data;
		int force;
	} cocci_id/* arch/um/kernel/tlb.c 18 */;
	struct host_vm_op cocci_id/* arch/um/kernel/tlb.c 149 */;
	struct host_vm_op *cocci_id/* arch/um/kernel/tlb.c 126 */;
	__u64 cocci_id/* arch/um/kernel/tlb.c 125 */;
	struct host_vm_change *cocci_id/* arch/um/kernel/tlb.c 123 */;
	unsigned int cocci_id/* arch/um/kernel/tlb.c 123 */;
	int cocci_id/* arch/um/kernel/tlb.c 122 */;
}
