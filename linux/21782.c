cocci_test_suite() {
	const char *cocci_id/* arch/s390/mm/dump_pagetables.c 72 */;
	const char cocci_id/* arch/s390/mm/dump_pagetables.c 70 */[];
	int cocci_id/* arch/s390/mm/dump_pagetables.c 68 */;
	const char *const cocci_id/* arch/s390/mm/dump_pagetables.c 55 */[];
	struct pg_state {
		int level;
		unsigned int current_prot;
		unsigned long start_address;
		unsigned long current_address;
		const struct addr_marker *marker;
	} cocci_id/* arch/s390/mm/dump_pagetables.c 45 */;
	unsigned long cocci_id/* arch/s390/mm/dump_pagetables.c 33 */;
	struct addr_marker cocci_id/* arch/s390/mm/dump_pagetables.c 31 */[];
	const struct file_operations cocci_id/* arch/s390/mm/dump_pagetables.c 270 */;
	struct inode *cocci_id/* arch/s390/mm/dump_pagetables.c 265 */;
	struct file *cocci_id/* arch/s390/mm/dump_pagetables.c 265 */;
	void *cocci_id/* arch/s390/mm/dump_pagetables.c 259 */;
	struct pg_state cocci_id/* arch/s390/mm/dump_pagetables.c 239 */;
	p4d_t *cocci_id/* arch/s390/mm/dump_pagetables.c 215 */;
	pgd_t *cocci_id/* arch/s390/mm/dump_pagetables.c 213 */;
	enum address_markers_idx{IDENTITY_NR=0, KERNEL_START_NR, KERNEL_END_NR,

#ifdef CONFIG_KASAN
 KASAN_SHADOW_START_NR, KASAN_SHADOW_END_NR,

#endif
 VMEMMAP_NR, VMALLOC_NR, MODULES_NR,} cocci_id/* arch/s390/mm/dump_pagetables.c 18 */;
	pmd_t *cocci_id/* arch/s390/mm/dump_pagetables.c 154 */;
	pud_t *cocci_id/* arch/s390/mm/dump_pagetables.c 151 */;
	pte_t *cocci_id/* arch/s390/mm/dump_pagetables.c 137 */;
	struct addr_marker {
		unsigned long start_address;
		const char *name;
	} cocci_id/* arch/s390/mm/dump_pagetables.c 13 */;
	unsigned int cocci_id/* arch/s390/mm/dump_pagetables.c 117 */;
	struct pg_state *cocci_id/* arch/s390/mm/dump_pagetables.c 115 */;
	struct seq_file *cocci_id/* arch/s390/mm/dump_pagetables.c 114 */;
	void cocci_id/* arch/s390/mm/dump_pagetables.c 114 */;
}
