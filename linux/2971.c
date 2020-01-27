cocci_test_suite() {
	struct cper_pstore_record *cocci_id/* drivers/acpi/apei/erst.c 977 */;
	struct pstore_info *cocci_id/* drivers/acpi/apei/erst.c 965 */;
	struct cper_pstore_record {
		struct cper_record_header hdr;
		struct cper_section_descriptor sec_hdr;
		char data[];
	}__packed cocci_id/* drivers/acpi/apei/erst.c 945 */;
	struct pstore_info cocci_id/* drivers/acpi/apei/erst.c 921 */;
	int cocci_id/* drivers/acpi/apei/erst.c 919 */(struct pstore_record *record);
	ssize_t cocci_id/* drivers/acpi/apei/erst.c 917 */(struct pstore_record *record);
	int cocci_id/* drivers/acpi/apei/erst.c 916 */(struct pstore_info *psi);
	struct acpi_erst_entry cocci_id/* drivers/acpi/apei/erst.c 909 */;
	struct acpi_table_erst cocci_id/* drivers/acpi/apei/erst.c 902 */;
	struct acpi_table_erst *cocci_id/* drivers/acpi/apei/erst.c 899 */;
	size_t cocci_id/* drivers/acpi/apei/erst.c 821 */;
	struct cper_record_header *cocci_id/* drivers/acpi/apei/erst.c 820 */;
	u64 cocci_id/* drivers/acpi/apei/erst.c 761 */;
	int cocci_id/* drivers/acpi/apei/erst.c 761 */;
	const struct cper_record_header *cocci_id/* drivers/acpi/apei/erst.c 749 */;
	struct apei_exec_context cocci_id/* drivers/acpi/apei/erst.c 705 */;
	struct erst_erange {
		u64 base;
		u64 size;
		void __iomem *vaddr;
		u32 attr;
	} cocci_id/* drivers/acpi/apei/erst.c 66 */;
	unsigned long cocci_id/* drivers/acpi/apei/erst.c 479 */;
	int *cocci_id/* drivers/acpi/apei/erst.c 454 */;
	u64 *cocci_id/* drivers/acpi/apei/erst.c 440 */;
	struct erst_record_id_cache cocci_id/* drivers/acpi/apei/erst.c 435 */;
	struct erst_record_id_cache {
		struct mutex lock;
		u64 *entries;
		int len;
		int size;
		int refcount;
	} cocci_id/* drivers/acpi/apei/erst.c 427 */;
	ssize_t cocci_id/* drivers/acpi/apei/erst.c 396 */;
	void cocci_id/* drivers/acpi/apei/erst.c 396 */;
	struct erst_erange *cocci_id/* drivers/acpi/apei/erst.c 374 */;
	struct apei_exec_ins_type cocci_id/* drivers/acpi/apei/erst.c 289 */[];
	void *cocci_id/* drivers/acpi/apei/erst.c 260 */;
	struct acpi_whea_header *cocci_id/* drivers/acpi/apei/erst.c 131 */;
	struct apei_exec_context *cocci_id/* drivers/acpi/apei/erst.c 130 */;
	struct cper_pstore_record cocci_id/* drivers/acpi/apei/erst.c 1169 */;
	unsigned long long cocci_id/* drivers/acpi/apei/erst.c 1153 */;
	const char *cocci_id/* drivers/acpi/apei/erst.c 1116 */;
	struct acpi_table_header **cocci_id/* drivers/acpi/apei/erst.c 1112 */;
	char *cocci_id/* drivers/acpi/apei/erst.c 1100 */;
	struct resource *cocci_id/* drivers/acpi/apei/erst.c 1099 */;
	struct apei_resources cocci_id/* drivers/acpi/apei/erst.c 1098 */;
	acpi_status cocci_id/* drivers/acpi/apei/erst.c 1096 */;
	int __init cocci_id/* drivers/acpi/apei/erst.c 1093 */;
	struct pstore_record *cocci_id/* drivers/acpi/apei/erst.c 1088 */;
}
