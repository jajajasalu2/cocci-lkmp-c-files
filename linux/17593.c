cocci_test_suite() {
	struct mmu_gather *cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 983 */;
	void cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 980 */(struct mm_struct *mm,
								    unsigned long start,
								    unsigned long end,
								    int psize);
	unsigned int cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 834 */;
	unsigned long cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 710 */;
	bool cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 708 */;
	struct mm_struct *cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 708 */;
	void cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 708 */;
	void *cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 637 */;
	struct tlbiel_va_range cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 546 */;
	struct tlbiel_va_range *cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 512 */;
	struct tlbiel_va_range {
		unsigned long pid;
		unsigned long start;
		unsigned long end;
		unsigned long page_size;
		unsigned long psize;
		bool also_pwc;
	} cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 501 */;
	struct tlbiel_va cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 495 */;
	struct tlbiel_va *cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 480 */;
	struct tlbiel_va {
		unsigned long pid;
		unsigned long va;
		unsigned long psize;
		unsigned long ric;
	} cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 471 */;
	struct tlbiel_pid cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 356 */;
	struct cpumask *cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 355 */;
	struct tlbiel_pid *cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 342 */;
	struct tlbiel_pid {
		unsigned long pid;
		unsigned long ric;
	} cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 335 */;
	struct vm_area_struct *cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 1125 */;
	int cocci_id/* arch/powerpc/mm/book3s64/radix_tlb.c 1015 */;
}
