cocci_test_suite() {
	const struct prot_bits cocci_id/* arch/arm/mm/dump.c 65 */[];
	struct prot_bits {
		u64 mask;
		u64 val;
		const char *set;
		const char *clear;
		bool ro_bit;
		bool nx_bit;
	} cocci_id/* arch/arm/mm/dump.c 56 */;
	struct pg_state {
		struct seq_file *seq;
		const struct addr_marker *marker;
		unsigned long start_address;
		unsigned level;
		u64 current_prot;
		bool check_wx;
		unsigned long wx_pages;
		const char *current_domain;
	} cocci_id/* arch/arm/mm/dump.c 45 */;
	int cocci_id/* arch/arm/mm/dump.c 446 */;
	struct pg_state cocci_id/* arch/arm/mm/dump.c 428 */;
	struct ptdump_info cocci_id/* arch/arm/mm/dump.c 420 */;
	struct seq_file *cocci_id/* arch/arm/mm/dump.c 391 */;
	struct ptdump_info *cocci_id/* arch/arm/mm/dump.c 391 */;
	pgd_t *cocci_id/* arch/arm/mm/dump.c 377 */;
	struct mm_struct *cocci_id/* arch/arm/mm/dump.c 374 */;
	pud_t *cocci_id/* arch/arm/mm/dump.c 334 */;
	pmd_t *cocci_id/* arch/arm/mm/dump.c 315 */;
	pte_t *cocci_id/* arch/arm/mm/dump.c 305 */;
	const char cocci_id/* arch/arm/mm/dump.c 257 */[];
	u64 cocci_id/* arch/arm/mm/dump.c 255 */;
	unsigned int cocci_id/* arch/arm/mm/dump.c 255 */;
	unsigned long cocci_id/* arch/arm/mm/dump.c 254 */;
	void *cocci_id/* arch/arm/mm/dump.c 249 */;
	const char *cocci_id/* arch/arm/mm/dump.c 225 */;
	unsigned cocci_id/* arch/arm/mm/dump.c 222 */;
	const struct prot_bits *cocci_id/* arch/arm/mm/dump.c 220 */;
	struct pg_state *cocci_id/* arch/arm/mm/dump.c 220 */;
	size_t cocci_id/* arch/arm/mm/dump.c 220 */;
	void cocci_id/* arch/arm/mm/dump.c 220 */;
	struct addr_marker cocci_id/* arch/arm/mm/dump.c 22 */[];
	struct pg_level cocci_id/* arch/arm/mm/dump.c 207 */[];
	struct pg_level {
		const struct prot_bits *bits;
		size_t num;
		u64 mask;
		const struct prot_bits *ro_bit;
		const struct prot_bits *nx_bit;
	} cocci_id/* arch/arm/mm/dump.c 199 */;
}
