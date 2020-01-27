cocci_test_suite() {
	struct addr_marker cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 72 */[];
	struct addr_marker {
		unsigned long start_address;
		const char *name;
	} cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 67 */;
	struct pg_state {
		struct seq_file *seq;
		const struct addr_marker *marker;
		unsigned long start_address;
		unsigned long start_pa;
		unsigned long last_pa;
		unsigned int level;
		u64 current_flags;
		bool check_wx;
		unsigned long wx_pages;
	} cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 55 */;
	struct dentry *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 416 */;
	struct pg_state cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 392 */;
	unsigned int cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 381 */;
	void cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 379 */;
	const struct file_operations cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 372 */;
	struct inode *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 367 */;
	struct file *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 367 */;
	struct seq_file *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 347 */;
	pgd_t *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 296 */;
	pmd_t *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 262 */;
	pud_t *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 260 */;
	pte_t *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 249 */;
	void *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 183 */;
	const char *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 148 */;
	const char cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 147 */[];
	struct pg_state *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 145 */;
	unsigned long cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 145 */;
	u64 cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 114 */;
	int cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 114 */;
	const struct flag_info *cocci_id/* arch/powerpc/mm/ptdump/ptdump.c 113 */;
}
