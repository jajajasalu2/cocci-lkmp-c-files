cocci_test_suite() {
	unsigned int cocci_id/* arch/arc/mm/tlb.c 902 */[4];
	struct pt_regs *cocci_id/* arch/arc/mm/tlb.c 887 */;
	volatile int cocci_id/* arch/arc/mm/tlb.c 884 */;
	unsigned long cocci_id/* arch/arc/mm/tlb.c 841 */;
	int cocci_id/* arch/arc/mm/tlb.c 801 */;
	char cocci_id/* arch/arc/mm/tlb.c 800 */[256];
	struct cpuinfo_arc_mmu *cocci_id/* arch/arc/mm/tlb.c 799 */;
	char cocci_id/* arch/arc/mm/tlb.c 775 */[64];
	char *cocci_id/* arch/arc/mm/tlb.c 771 */;
	struct bcr_mmu_4 *cocci_id/* arch/arc/mm/tlb.c 759 */;
	struct bcr_mmu_3 *cocci_id/* arch/arc/mm/tlb.c 750 */;
	struct bcr_mmu_1_2 *cocci_id/* arch/arc/mm/tlb.c 743 */;
	struct bcr_mmu_4 {
#ifdef CONFIG_CPU_BIG_ENDIAN
		unsigned int ver:8,sasid:1,sz1:4,sz0:4,res:2,pae:1,n_ways:2,n_entry:2,n_super:2,u_itlb:3,u_dtlb:3;
#else
		unsigned int u_dtlb:3,u_itlb:3,n_super:2,n_entry:2,n_ways:2,pae:1,res:2,sz0:4,sz1:4,sasid:1,ver:8;
#endif
	} *cocci_id/* arch/arc/mm/tlb.c 727 */;
	struct bcr_mmu_3 {
#ifdef CONFIG_CPU_BIG_ENDIAN
		unsigned int ver:8,ways:4,sets:4,res:3,sasid:1,pg_sz:4,u_itlb:4,u_dtlb:4;
#else
		unsigned int u_dtlb:4,u_itlb:4,pg_sz:4,sasid:1,res:3,sets:4,ways:4,ver:8;
#endif
	} *cocci_id/* arch/arc/mm/tlb.c 717 */;
	struct bcr_mmu_1_2 {
#ifdef CONFIG_CPU_BIG_ENDIAN
		unsigned int ver:8,ways:4,sets:4,u_itlb:8,u_dtlb:8;
#else
		unsigned int u_dtlb:8,u_itlb:8,sets:4,ways:4,ver:8;
#endif
	} *cocci_id/* arch/arc/mm/tlb.c 709 */;
	struct list_head *cocci_id/* arch/arc/mm/tlb.c 645 */;
	pgtable_t cocci_id/* arch/arc/mm/tlb.c 643 */;
	pmd_t *cocci_id/* arch/arc/mm/tlb.c 642 */;
	struct page *cocci_id/* arch/arc/mm/tlb.c 580 */;
	phys_addr_t cocci_id/* arch/arc/mm/tlb.c 579 */;
	pte_t cocci_id/* arch/arc/mm/tlb.c 499 */;
	unsigned int cocci_id/* arch/arc/mm/tlb.c 497 */;
	pte_t *cocci_id/* arch/arc/mm/tlb.c 494 */;
	struct vm_area_struct *cocci_id/* arch/arc/mm/tlb.c 494 */;
	struct tlb_args cocci_id/* arch/arc/mm/tlb.c 470 */;
	struct mm_struct *cocci_id/* arch/arc/mm/tlb.c 438 */;
	smp_call_func_t cocci_id/* arch/arc/mm/tlb.c 435 */;
	struct tlb_args *cocci_id/* arch/arc/mm/tlb.c 420 */;
	void *cocci_id/* arch/arc/mm/tlb.c 418 */;
	struct tlb_args {
		struct vm_area_struct *ta_vma;
		unsigned long ta_start;
		unsigned long ta_end;
	} cocci_id/* arch/arc/mm/tlb.c 397 */;
	const unsigned int cocci_id/* arch/arc/mm/tlb.c 380 */;
	const int cocci_id/* arch/arc/mm/tlb.c 258 */;
	u64 cocci_id/* arch/arc/mm/tlb.c 223 */;
	void cocci_id/* arch/arc/mm/tlb.c 110 */;
	int __read_mostly cocci_id/* arch/arc/mm/tlb.c 104 */;
	__typeof__(unsigned int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
