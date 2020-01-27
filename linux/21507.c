cocci_test_suite() {
	const struct prot_bits cocci_id/* arch/arm64/mm/dump.c 95 */[];
	struct prot_bits {
		u64 mask;
		u64 val;
		const char *set;
		const char *clear;
	} cocci_id/* arch/arm64/mm/dump.c 88 */;
	struct pg_state {
		struct seq_file *seq;
		const struct addr_marker *marker;
		unsigned long start_address;
		unsigned level;
		u64 current_prot;
		bool check_wx;
		unsigned long wx_pages;
		unsigned long uxn_pages;
	} cocci_id/* arch/arm64/mm/dump.c 77 */;
	int cocci_id/* arch/arm64/mm/dump.c 413 */;
	struct pg_state cocci_id/* arch/arm64/mm/dump.c 395 */;
	struct ptdump_info cocci_id/* arch/arm64/mm/dump.c 387 */;
	struct addr_marker cocci_id/* arch/arm64/mm/dump.c 37 */[];
	struct seq_file *cocci_id/* arch/arm64/mm/dump.c 365 */;
	struct ptdump_info *cocci_id/* arch/arm64/mm/dump.c 365 */;
	pgd_t cocci_id/* arch/arm64/mm/dump.c 353 */;
	pgd_t *cocci_id/* arch/arm64/mm/dump.c 350 */;
	struct mm_struct *cocci_id/* arch/arm64/mm/dump.c 345 */;
	pud_t cocci_id/* arch/arm64/mm/dump.c 333 */;
	pmd_t cocci_id/* arch/arm64/mm/dump.c 314 */;
	pmd_t *cocci_id/* arch/arm64/mm/dump.c 311 */;
	pud_t *cocci_id/* arch/arm64/mm/dump.c 307 */;
	pte_t *cocci_id/* arch/arm64/mm/dump.c 300 */;
	enum address_markers_idx{PAGE_OFFSET_NR=0, PAGE_END_NR,

#ifdef CONFIG_KASAN
 KASAN_START_NR,

#endif
} cocci_id/* arch/arm64/mm/dump.c 29 */;
	const char cocci_id/* arch/arm64/mm/dump.c 247 */[];
	u64 cocci_id/* arch/arm64/mm/dump.c 245 */;
	unsigned long cocci_id/* arch/arm64/mm/dump.c 244 */;
	void *cocci_id/* arch/arm64/mm/dump.c 224 */;
	const char *cocci_id/* arch/arm64/mm/dump.c 203 */;
	unsigned cocci_id/* arch/arm64/mm/dump.c 200 */;
	size_t cocci_id/* arch/arm64/mm/dump.c 198 */;
	const struct prot_bits *cocci_id/* arch/arm64/mm/dump.c 197 */;
	struct pg_state *cocci_id/* arch/arm64/mm/dump.c 197 */;
	void cocci_id/* arch/arm64/mm/dump.c 197 */;
	struct pg_level cocci_id/* arch/arm64/mm/dump.c 176 */[];
	struct pg_level {
		const struct prot_bits *bits;
		const char *name;
		size_t num;
		u64 mask;
	} cocci_id/* arch/arm64/mm/dump.c 169 */;
}
