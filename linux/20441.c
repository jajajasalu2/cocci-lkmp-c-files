cocci_test_suite() {
	void *cocci_id/* arch/x86/kernel/cpu/mce/apei.c 89 */;
	struct cper_mce_record {
		struct cper_record_header hdr;
		struct cper_section_descriptor sec_hdr;
		struct mce mce;
	}__packed cocci_id/* arch/x86/kernel/cpu/mce/apei.c 65 */;
	struct mce cocci_id/* arch/x86/kernel/cpu/mce/apei.c 31 */;
	struct cper_sec_mem_err *cocci_id/* arch/x86/kernel/cpu/mce/apei.c 29 */;
	u64 cocci_id/* arch/x86/kernel/cpu/mce/apei.c 142 */;
	int cocci_id/* arch/x86/kernel/cpu/mce/apei.c 137 */;
	void cocci_id/* arch/x86/kernel/cpu/mce/apei.c 137 */;
	struct cper_mce_record cocci_id/* arch/x86/kernel/cpu/mce/apei.c 105 */;
	u64 *cocci_id/* arch/x86/kernel/cpu/mce/apei.c 103 */;
	struct mce *cocci_id/* arch/x86/kernel/cpu/mce/apei.c 103 */;
	ssize_t cocci_id/* arch/x86/kernel/cpu/mce/apei.c 103 */;
}
