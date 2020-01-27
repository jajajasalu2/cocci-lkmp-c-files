cocci_test_suite() {
	struct addr_marker cocci_id/* arch/x86/mm/dump_pagetables.c 78 */[];
	int __init cocci_id/* arch/x86/mm/dump_pagetables.c 604 */;
	pgd_t *cocci_id/* arch/x86/mm/dump_pagetables.c 569 */;
	struct pg_state cocci_id/* arch/x86/mm/dump_pagetables.c 524 */;
	enum address_markers_idx{USER_SPACE_NR=0, KERNEL_SPACE_NR,

#ifdef CONFIG_MODIFY_LDT_SYSCALL
 LDT_NR,

#endif
 LOW_KERNEL_NR, VMALLOC_START_NR, VMEMMAP_START_NR,

#ifdef CONFIG_KASAN
 KASAN_SHADOW_START_NR, KASAN_SHADOW_END_NR,

#endif
 CPU_ENTRY_AREA_NR,

#ifdef CONFIG_X86_ESPFIX64
 ESPFIX_START_NR,

#endif


#ifdef CONFIG_EFI
 EFI_END_NR,

#endif
 HIGH_KERNEL_NR, MODULES_VADDR_NR, MODULES_END_NR, FIXADDR_START_NR, END_OF_SPACE_NR,} cocci_id/* arch/x86/mm/dump_pagetables.c 51 */;
	bool cocci_id/* arch/x86/mm/dump_pagetables.c 504 */;
	int cocci_id/* arch/x86/mm/dump_pagetables.c 504 */;
	p4d_t *cocci_id/* arch/x86/mm/dump_pagetables.c 475 */;
	pgd_t cocci_id/* arch/x86/mm/dump_pagetables.c 471 */;
	pud_t *cocci_id/* arch/x86/mm/dump_pagetables.c 442 */;
	p4d_t cocci_id/* arch/x86/mm/dump_pagetables.c 438 */;
	struct addr_marker {
		unsigned long start_address;
		const char *name;
		unsigned long max_lines;
	} cocci_id/* arch/x86/mm/dump_pagetables.c 41 */;
	pmd_t *cocci_id/* arch/x86/mm/dump_pagetables.c 409 */;
	pud_t cocci_id/* arch/x86/mm/dump_pagetables.c 405 */;
	void *cocci_id/* arch/x86/mm/dump_pagetables.c 383 */;
	struct seq_file *cocci_id/* arch/x86/mm/dump_pagetables.c 382 */;
	struct pg_state *cocci_id/* arch/x86/mm/dump_pagetables.c 382 */;
	pte_t *cocci_id/* arch/x86/mm/dump_pagetables.c 361 */;
	pmd_t cocci_id/* arch/x86/mm/dump_pagetables.c 357 */;
	pgprotval_t cocci_id/* arch/x86/mm/dump_pagetables.c 351 */;
	const char *cocci_id/* arch/x86/mm/dump_pagetables.c 294 */;
	struct pg_state {
		int level;
		pgprot_t current_prot;
		pgprotval_t effective_prot;
		unsigned long start_address;
		unsigned long current_address;
		const struct addr_marker *marker;
		unsigned long lines;
		bool to_dmesg;
		bool check_wx;
		unsigned long wx_pages;
	} cocci_id/* arch/x86/mm/dump_pagetables.c 28 */;
	const char cocci_id/* arch/x86/mm/dump_pagetables.c 272 */[];
	pgprot_t cocci_id/* arch/x86/mm/dump_pagetables.c 269 */;
	void cocci_id/* arch/x86/mm/dump_pagetables.c 268 */;
	signed long cocci_id/* arch/x86/mm/dump_pagetables.c 236 */;
	unsigned long cocci_id/* arch/x86/mm/dump_pagetables.c 229 */;
	const char *const cocci_id/* arch/x86/mm/dump_pagetables.c 180 */[];
	KERN_CONT cocci_id/* arch/x86/mm/dump_pagetables.c 168 */;
	enum address_markers_idx{USER_SPACE_NR=0, KERNEL_SPACE_NR, VMALLOC_START_NR, VMALLOC_END_NR,

#ifdef CONFIG_HIGHMEM
 PKMAP_BASE_NR,

#endif


#ifdef CONFIG_MODIFY_LDT_SYSCALL
 LDT_NR,

#endif
 CPU_ENTRY_AREA_NR, FIXADDR_START_NR, END_OF_SPACE_NR,} cocci_id/* arch/x86/mm/dump_pagetables.c 113 */;
}
