cocci_test_suite() {
	pgd_t cocci_id/* arch/x86/mm/mem_encrypt_identity.c 98 */;
	pgd_t *cocci_id/* arch/x86/mm/mem_encrypt_identity.c 93 */;
	char cocci_id/* arch/x86/mm/mem_encrypt_identity.c 86 */[]__initdata;
	struct sme_populate_pgd_data {
		void *pgtable_area;
		pgd_t *pgd;
		pmdval_t pmd_flags;
		pteval_t pte_flags;
		unsigned long paddr;
		unsigned long vaddr;
		unsigned long vaddr_end;
	} cocci_id/* arch/x86/mm/mem_encrypt_identity.c 61 */;
	u64 cocci_id/* arch/x86/mm/mem_encrypt_identity.c 495 */;
	char cocci_id/* arch/x86/mm/mem_encrypt_identity.c 494 */[16];
	bool cocci_id/* arch/x86/mm/mem_encrypt_identity.c 492 */;
	unsigned int cocci_id/* arch/x86/mm/mem_encrypt_identity.c 490 */;
	const char *cocci_id/* arch/x86/mm/mem_encrypt_identity.c 489 */;
	struct boot_params *cocci_id/* arch/x86/mm/mem_encrypt_identity.c 487 */;
	void *cocci_id/* arch/x86/mm/mem_encrypt_identity.c 377 */;
	struct sme_populate_pgd_data cocci_id/* arch/x86/mm/mem_encrypt_identity.c 286 */;
	pte_t cocci_id/* arch/x86/mm/mem_encrypt_identity.c 265 */;
	pmd_t cocci_id/* arch/x86/mm/mem_encrypt_identity.c 264 */;
	pud_t cocci_id/* arch/x86/mm/mem_encrypt_identity.c 263 */;
	p4d_t cocci_id/* arch/x86/mm/mem_encrypt_identity.c 262 */;
	unsigned long __init cocci_id/* arch/x86/mm/mem_encrypt_identity.c 243 */;
	unsigned long cocci_id/* arch/x86/mm/mem_encrypt_identity.c 207 */;
	pteval_t cocci_id/* arch/x86/mm/mem_encrypt_identity.c 205 */;
	pmdval_t cocci_id/* arch/x86/mm/mem_encrypt_identity.c 205 */;
	struct sme_populate_pgd_data *cocci_id/* arch/x86/mm/mem_encrypt_identity.c 204 */;
	void __init cocci_id/* arch/x86/mm/mem_encrypt_identity.c 204 */;
	pte_t *cocci_id/* arch/x86/mm/mem_encrypt_identity.c 162 */;
	pmd_t *cocci_id/* arch/x86/mm/mem_encrypt_identity.c 161 */;
	pud_t *cocci_id/* arch/x86/mm/mem_encrypt_identity.c 160 */;
	p4d_t *cocci_id/* arch/x86/mm/mem_encrypt_identity.c 108 */;
	pud_t __init *cocci_id/* arch/x86/mm/mem_encrypt_identity.c 105 */;
}
