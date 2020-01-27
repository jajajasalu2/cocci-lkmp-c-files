cocci_test_suite() {
	struct p4_counter_binding cocci_id/* arch/x86/oprofile/op_model_p4.c 92 */[NUM_COUNTERS_NON_HT];
	struct op_x86_model_spec cocci_id/* arch/x86/oprofile/op_model_p4.c 702 */;
	struct p4_event_binding {
		int escr_select;
		int event_select;
		struct {
			int virt_counter;
			int escr_address;
		} bindings[2];
	} cocci_id/* arch/x86/oprofile/op_model_p4.c 70 */;
	u64 cocci_id/* arch/x86/oprofile/op_model_p4.c 652 */;
	struct p4_counter_binding {
		int virt_counter;
		int counter_address;
		int cccr_address;
	} cocci_id/* arch/x86/oprofile/op_model_p4.c 64 */;
	unsigned long cocci_id/* arch/x86/oprofile/op_model_p4.c 618 */;
	const struct op_msrs *const cocci_id/* arch/x86/oprofile/op_model_p4.c 616 */;
	struct pt_regs *const cocci_id/* arch/x86/oprofile/op_model_p4.c 615 */;
	const struct op_x86_model_spec *cocci_id/* arch/x86/oprofile/op_model_p4.c 569 */;
	int cocci_id/* arch/x86/oprofile/op_model_p4.c 53 */;
	void cocci_id/* arch/x86/oprofile/op_model_p4.c 53 */;
	struct p4_event_binding *cocci_id/* arch/x86/oprofile/op_model_p4.c 512 */;
	const int cocci_id/* arch/x86/oprofile/op_model_p4.c 507 */;
	struct op_msrs *const cocci_id/* arch/x86/oprofile/op_model_p4.c 407 */;
	unsigned long cocci_id/* arch/x86/oprofile/op_model_p4.c 386 */[NUM_COUNTERS_NON_HT];
	unsigned int cocci_id/* arch/x86/oprofile/op_model_p4.c 371 */;
	struct p4_event_binding cocci_id/* arch/x86/oprofile/op_model_p4.c 107 */[NUM_EVENTS];
}
