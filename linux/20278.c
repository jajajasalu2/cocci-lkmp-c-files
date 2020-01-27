cocci_test_suite() {
	struct op_register_config *cocci_id/* arch/alpha/oprofile/op_model_ev67.c 72 */;
	void *cocci_id/* arch/alpha/oprofile/op_model_ev67.c 70 */;
	void cocci_id/* arch/alpha/oprofile/op_model_ev67.c 69 */;
	struct op_axp_model cocci_id/* arch/alpha/oprofile/op_model_ev67.c 253 */;
	struct op_system_config *cocci_id/* arch/alpha/oprofile/op_model_ev67.c 23 */;
	enum trap_types{TRAP_REPLAY, TRAP_INVALID0, TRAP_DTB_DOUBLE_MISS_3, TRAP_DTB_DOUBLE_MISS_4, TRAP_FP_DISABLED, TRAP_UNALIGNED, TRAP_DTB_SINGLE_MISS, TRAP_DSTREAM_FAULT, TRAP_OPCDEC, TRAP_INVALID1, TRAP_MACHINE_CHECK, TRAP_INVALID2, TRAP_ARITHMETIC, TRAP_INVALID3, TRAP_MT_FPCR, TRAP_RESET,} cocci_id/* arch/alpha/oprofile/op_model_ev67.c 162 */;
	union {
		unsigned long v;
		struct {
			unsigned reserved:30;
			unsigned overcount:3;
			unsigned icache_miss:1;
			unsigned trap_type:4;
			unsigned load_store:1;
			unsigned trap:1;
			unsigned mispredict:1;
		} fields;
	} cocci_id/* arch/alpha/oprofile/op_model_ev67.c 149 */;
	int cocci_id/* arch/alpha/oprofile/op_model_ev67.c 147 */;
	struct op_counter_config *cocci_id/* arch/alpha/oprofile/op_model_ev67.c 144 */;
	struct pt_regs *cocci_id/* arch/alpha/oprofile/op_model_ev67.c 143 */;
	unsigned long cocci_id/* arch/alpha/oprofile/op_model_ev67.c 143 */;
	enum profileme_counters{PM_STALLED, PM_TAKEN, PM_MISPREDICT, PM_ITB_MISS, PM_DTB_MISS, PM_REPLAY, PM_LOAD_STORE, PM_ICACHE_MISS, PM_UNALIGNED, PM_NUM_COUNTERS,} cocci_id/* arch/alpha/oprofile/op_model_ev67.c 117 */;
}
