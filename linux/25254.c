cocci_test_suite() {
	char cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 74 */[15 * 3 + 1];
	void cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 490 */;
	struct tep_handle *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 448 */;
	int cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 448 */;
	unsigned long cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 444 */;
	unsigned long long *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 442 */;
	uint64_t cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 40 */;
	const char *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 40 */;
	unsigned char *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 40 */;
	union kvm_mmu_page_role cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 381 */;
	const char *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 378 */[];
	union kvm_mmu_page_role {
		unsigned word;
		struct {
			unsigned level:4;
			unsigned cr4_pae:1;
			unsigned quadrant:2;
			unsigned direct:1;
			unsigned access:3;
			unsigned invalid:1;
			unsigned nxe:1;
			unsigned cr0_wp:1;
			unsigned smep_and_not_wp:1;
			unsigned smap_and_not_wp:1;
			unsigned pad_for_nice_hex_output:8;
			unsigned smm:8;
		};
	} cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 356 */;
	ud_t cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 32 */;
	uint8_t *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 300 */;
	unsigned long long cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 298 */;
	struct tep_event *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 296 */;
	void *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 296 */;
	struct tep_record *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 295 */;
	struct trace_seq *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 294 */;
	struct str_values *cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 234 */;
	unsigned cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 232 */;
	struct isa_exit_reasons {
		unsigned isa;
		struct str_values *strings;
	} cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 223 */[];
	struct str_values cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 218 */[];
	struct str_values {
		const char *str;
		int val;
	} cocci_id/* tools/lib/traceevent/plugins/plugin_kvm.c 208 */;
}
