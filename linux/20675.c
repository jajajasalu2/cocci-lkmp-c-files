cocci_test_suite() {
	struct seq_file *cocci_id/* arch/x86/mm/pageattr.c 90 */;
	enum pg_level cocci_id/* arch/x86/mm/pageattr.c 751 */;
	pmd_t *cocci_id/* arch/x86/mm/pageattr.c 716 */;
	pud_t *cocci_id/* arch/x86/mm/pageattr.c 715 */;
	p4d_t *cocci_id/* arch/x86/mm/pageattr.c 714 */;
	pgd_t *cocci_id/* arch/x86/mm/pageattr.c 713 */;
	unsigned long cocci_id/* arch/x86/mm/pageattr.c 71 */[PG_LEVEL_NUM];
	phys_addr_t cocci_id/* arch/x86/mm/pageattr.c 667 */;
	unsigned int *cocci_id/* arch/x86/mm/pageattr.c 622 */;
	const int cocci_id/* arch/x86/mm/pageattr.c 55 */;
	unsigned long long cocci_id/* arch/x86/mm/pageattr.c 507 */;
	const char *cocci_id/* arch/x86/mm/pageattr.c 497 */[];
	const char *cocci_id/* arch/x86/mm/pageattr.c 495 */;
	pgprotval_t cocci_id/* arch/x86/mm/pageattr.c 493 */;
	enum cpa_warn{CPA_CONFLICT, CPA_PROTECT, CPA_DETECT,} cocci_id/* arch/x86/mm/pageattr.c 49 */;
	struct cpa_data {
		unsigned long *vaddr;
		pgd_t *pgd;
		pgprot_t mask_set;
		pgprot_t mask_clr;
		unsigned long numpages;
		unsigned long curpage;
		unsigned long pfn;
		unsigned int flags;
		unsigned int force_split:1,force_static_prot:1;
		struct page **pages;
	} cocci_id/* arch/x86/mm/pageattr.c 35 */;
	void *cocci_id/* arch/x86/mm/pageattr.c 313 */;
	void cocci_id/* arch/x86/mm/pageattr.c 313 */;
	size_t cocci_id/* arch/x86/mm/pageattr.c 307 */;
	const unsigned long cocci_id/* arch/x86/mm/pageattr.c 280 */;
	struct page *cocci_id/* arch/x86/mm/pageattr.c 260 */;
	long cocci_id/* arch/x86/mm/pageattr.c 251 */;
	unsigned cocci_id/* arch/x86/mm/pageattr.c 2208 */;
	u64 cocci_id/* arch/x86/mm/pageattr.c 2207 */;
	bool cocci_id/* arch/x86/mm/pageattr.c 215 */;
	enum page_cache_mode cocci_id/* arch/x86/mm/pageattr.c 2003 */;
	struct page **cocci_id/* arch/x86/mm/pageattr.c 2002 */;
	struct cpa_data cocci_id/* arch/x86/mm/pageattr.c 1941 */;
	unsigned long *cocci_id/* arch/x86/mm/pageattr.c 1763 */;
	int __init cocci_id/* arch/x86/mm/pageattr.c 174 */;
	const struct file_operations cocci_id/* arch/x86/mm/pageattr.c 167 */;
	struct inode *cocci_id/* arch/x86/mm/pageattr.c 162 */;
	struct file *cocci_id/* arch/x86/mm/pageattr.c 162 */;
	int cocci_id/* arch/x86/mm/pageattr.c 1562 */(struct cpa_data *cpa,
						      int checkalias);
	pgprot_t cocci_id/* arch/x86/mm/pageattr.c 1508 */;
	pte_t cocci_id/* arch/x86/mm/pageattr.c 1507 */;
	pte_t *cocci_id/* arch/x86/mm/pageattr.c 1494 */;
	unsigned int cocci_id/* arch/x86/mm/pageattr.c 1493 */;
	unsigned long cocci_id/* arch/x86/mm/pageattr.c 1491 */;
	struct cpa_data *cocci_id/* arch/x86/mm/pageattr.c 1489 */;
	int cocci_id/* arch/x86/mm/pageattr.c 1489 */;
}