cocci_test_suite() {
	struct mm_struct cocci_id/* arch/x86/kernel/tboot.c 88 */;
	struct sinit_mle_data *cocci_id/* arch/x86/kernel/tboot.c 501 */;
	u64 cocci_id/* arch/x86/kernel/tboot.c 498 */;
	void __init cocci_id/* arch/x86/kernel/tboot.c 49 */;
	u64 *cocci_id/* arch/x86/kernel/tboot.c 484 */;
	u8 cocci_id/* arch/x86/kernel/tboot.c 47 */[16]__initdata;
	void *cocci_id/* arch/x86/kernel/tboot.c 467 */;
	struct acpi_table_header *cocci_id/* arch/x86/kernel/tboot.c 465 */;
	struct sinit_mle_data {
		u32 version;
		struct sha1_hash bios_acm_id;
		u32 edx_senter_flags;
		u64 mseg_valid;
		struct sha1_hash sinit_hash;
		struct sha1_hash mle_hash;
		struct sha1_hash stm_hash;
		struct sha1_hash lcp_policy_hash;
		u32 lcp_policy_control;
		u32 rlp_wakeup_addr;
		u32 reserved;
		u32 num_mdrs;
		u32 mdrs_off;
		u32 num_vtd_dmars;
		u32 vtd_dmars_off;
	}__packed cocci_id/* arch/x86/kernel/tboot.c 447 */;
	struct sha1_hash {
		u8 hash[SHA1_SIZE];
	} cocci_id/* arch/x86/kernel/tboot.c 443 */;
	const struct file_operations cocci_id/* arch/x86/kernel/tboot.c 397 */;
	struct tboot *cocci_id/* arch/x86/kernel/tboot.c 38 */;
	u8 cocci_id/* arch/x86/kernel/tboot.c 352 */[16];
	void __iomem *cocci_id/* arch/x86/kernel/tboot.c 351 */;
	loff_t *cocci_id/* arch/x86/kernel/tboot.c 349 */;
	struct file *cocci_id/* arch/x86/kernel/tboot.c 349 */;
	char __user *cocci_id/* arch/x86/kernel/tboot.c 349 */;
	ssize_t cocci_id/* arch/x86/kernel/tboot.c 349 */;
	size_t cocci_id/* arch/x86/kernel/tboot.c 349 */;
	uint8_t cocci_id/* arch/x86/kernel/tboot.c 347 */[16];
	unsigned int cocci_id/* arch/x86/kernel/tboot.c 327 */;
	atomic_t *cocci_id/* arch/x86/kernel/tboot.c 315 */;
	atomic_t cocci_id/* arch/x86/kernel/tboot.c 308 */;
	u8 cocci_id/* arch/x86/kernel/tboot.c 299 */;
	u32 cocci_id/* arch/x86/kernel/tboot.c 274 */[ACPI_S_STATE_COUNT];
	struct acpi_table_facs cocci_id/* arch/x86/kernel/tboot.c 269 */;
	const struct acpi_table_fadt *cocci_id/* arch/x86/kernel/tboot.c 249 */;
	void (*cocci_id/* arch/x86/kernel/tboot.c 219 */)(void);
	struct tboot_mac_region *cocci_id/* arch/x86/kernel/tboot.c 173 */;
	phys_addr_t cocci_id/* arch/x86/kernel/tboot.c 171 */;
	unsigned long cocci_id/* arch/x86/kernel/tboot.c 171 */;
	void cocci_id/* arch/x86/kernel/tboot.c 171 */;
	u32 cocci_id/* arch/x86/kernel/tboot.c 159 */;
	pte_t *cocci_id/* arch/x86/kernel/tboot.c 110 */;
	pmd_t *cocci_id/* arch/x86/kernel/tboot.c 109 */;
	pud_t *cocci_id/* arch/x86/kernel/tboot.c 108 */;
	p4d_t *cocci_id/* arch/x86/kernel/tboot.c 107 */;
	pgd_t *cocci_id/* arch/x86/kernel/tboot.c 106 */;
	pgprot_t cocci_id/* arch/x86/kernel/tboot.c 104 */;
	int cocci_id/* arch/x86/kernel/tboot.c 103 */;
}
