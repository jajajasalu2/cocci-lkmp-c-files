cocci_test_suite() {
	long long cocci_id/* arch/arm/mm/mmu.c 934 */;
	pgd_t *cocci_id/* arch/arm/mm/mmu.c 914 */;
	const struct mem_type *cocci_id/* arch/arm/mm/mmu.c 913 */;
	phys_addr_t cocci_id/* arch/arm/mm/mmu.c 912 */;
	bool cocci_id/* arch/arm/mm/mmu.c 909 */;
	void *(*cocci_id/* arch/arm/mm/mmu.c 908 */)(unsigned long sz);
	struct mm_struct *cocci_id/* arch/arm/mm/mmu.c 907 */;
	struct map_desc *cocci_id/* arch/arm/mm/mmu.c 907 */;
	void __init cocci_id/* arch/arm/mm/mmu.c 907 */;
	struct cachepolicy cocci_id/* arch/arm/mm/mmu.c 89 */[]__initdata;
	pud_t *cocci_id/* arch/arm/mm/mmu.c 798 */;
	pmd_t *cocci_id/* arch/arm/mm/mmu.c 771 */;
	pte_t *__initcocci_id/* arch/arm/mm/mmu.c 739 */;
	void *__initcocci_id/* arch/arm/mm/mmu.c 730 */;
	struct cachepolicy {
		const char policy[16];
		unsigned int cr_mask;
		pmdval_t pmd;
		pteval_t pte;
		pteval_t pte_s2;
	} cocci_id/* arch/arm/mm/mmu.c 73 */;
	void __init *cocci_id/* arch/arm/mm/mmu.c 719 */;
	struct file *cocci_id/* arch/arm/mm/mmu.c 705 */;
	struct mem_type *cocci_id/* arch/arm/mm/mmu.c 696 */;
	pmdval_t cocci_id/* arch/arm/mm/mmu.c 54 */;
	struct page *cocci_id/* arch/arm/mm/mmu.c 46 */;
	int cocci_id/* arch/arm/mm/mmu.c 438 */;
	pteval_t cocci_id/* arch/arm/mm/mmu.c 436 */;
	unsigned int cocci_id/* arch/arm/mm/mmu.c 435 */;
	struct cachepolicy *cocci_id/* arch/arm/mm/mmu.c 434 */;
	pte_t *cocci_id/* arch/arm/mm/mmu.c 409 */;
	pgprot_t cocci_id/* arch/arm/mm/mmu.c 406 */;
	enum fixed_addresses cocci_id/* arch/arm/mm/mmu.c 406 */;
	void cocci_id/* arch/arm/mm/mmu.c 406 */;
	pmd_t *__initcocci_id/* arch/arm/mm/mmu.c 375 */;
	pte_t cocci_id/* arch/arm/mm/mmu.c 362 */[PTRS_PER_PTE + PTE_HWTABLE_PTRS]
	__aligned(PTE_HWTABLE_OFF+PTE_HWTABLE_SIZE)__initdata;
	pte_t *(*cocci_id/* arch/arm/mm/mmu.c 360 */)(pmd_t *dir,
						      unsigned long addr);
	struct mem_type cocci_id/* arch/arm/mm/mmu.c 245 */[];
	char *__unusedcocci_id/* arch/arm/mm/mmu.c 195 */;
	char *cocci_id/* arch/arm/mm/mmu.c 156 */;
	int __init cocci_id/* arch/arm/mm/mmu.c 156 */;
	pgtables_remap *cocci_id/* arch/arm/mm/mmu.c 1525 */;
	pgtables_remap cocci_id/* arch/arm/mm/mmu.c 1517 */;
	void cocci_id/* arch/arm/mm/mmu.c 1516 */(long long offset,
						  unsigned long pgd,
						  void *bdata);
	unsigned long cocci_id/* arch/arm/mm/mmu.c 1515 */;
	void *cocci_id/* arch/arm/mm/mmu.c 1340 */;
	const struct machine_desc *cocci_id/* arch/arm/mm/mmu.c 1336 */;
	pgd_t cocci_id/* arch/arm/mm/mmu.c 1306 */;
	pmd_t cocci_id/* arch/arm/mm/mmu.c 1304 */;
	uintptr_t cocci_id/* arch/arm/mm/mmu.c 1178 */;
	struct memblock_region *cocci_id/* arch/arm/mm/mmu.c 1168 */;
	u64 cocci_id/* arch/arm/mm/mmu.c 1167 */;
	void *__initdatacocci_id/* arch/arm/mm/mmu.c 1133 */;
	struct map_desc cocci_id/* arch/arm/mm/mmu.c 1120 */;
	struct vm_struct *cocci_id/* arch/arm/mm/mmu.c 1060 */;
	struct static_vm *cocci_id/* arch/arm/mm/mmu.c 1059 */;
}
