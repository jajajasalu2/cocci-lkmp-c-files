cocci_test_suite() {
	struct pt_regs *cocci_id/* arch/x86/events/intel/p4.c 999 */;
	struct p4_pebs_bind *cocci_id/* arch/x86/events/intel/p4.c 935 */;
	struct cpu_hw_events *cocci_id/* arch/x86/events/intel/p4.c 919 */;
	void cocci_id/* arch/x86/events/intel/p4.c 917 */;
	struct hw_perf_event *cocci_id/* arch/x86/events/intel/p4.c 856 */;
	u32 cocci_id/* arch/x86/events/intel/p4.c 806 */;
	struct perf_event *cocci_id/* arch/x86/events/intel/p4.c 802 */;
	bool cocci_id/* arch/x86/events/intel/p4.c 731 */;
	struct p4_event_bind cocci_id/* arch/x86/events/intel/p4.c 71 */[];
	unsigned int cocci_id/* arch/x86/events/intel/p4.c 707 */;
	u64 cocci_id/* arch/x86/events/intel/p4.c 705 */;
	struct p4_event_bind *cocci_id/* arch/x86/events/intel/p4.c 705 */;
	u64 cocci_id/* arch/x86/events/intel/p4.c 651 */[PERF_COUNT_HW_MAX];
	int cocci_id/* arch/x86/events/intel/p4.c 623 */;
	struct p4_event_alias {
		u64 original;
		u64 alternative;
	} cocci_id/* arch/x86/events/intel/p4.c 590 */[];
	const u64 cocci_id/* arch/x86/events/intel/p4.c 514 */[PERF_COUNT_HW_CACHE_MAX][PERF_COUNT_HW_CACHE_OP_MAX][PERF_COUNT_HW_CACHE_RESULT_MAX];
	struct p4_pebs_bind cocci_id/* arch/x86/events/intel/p4.c 50 */[];
	struct p4_pebs_bind {
		unsigned int metric_pebs;
		unsigned int metric_vert;
	} cocci_id/* arch/x86/events/intel/p4.c 30 */;
	struct p4_event_bind {
		unsigned int opcode;
		unsigned int escr_msr[2];
		unsigned int escr_emask;
		unsigned int shared;
		char cntr[2][P4_CNTR_LIMIT];
	} cocci_id/* arch/x86/events/intel/p4.c 22 */;
	const struct x86_pmu cocci_id/* arch/x86/events/intel/p4.c 1302 */;
	struct attribute *cocci_id/* arch/x86/events/intel/p4.c 1295 */[];
	unsigned long cocci_id/* arch/x86/events/intel/p4.c 1210 */[BITS_TO_LONGS(P4_ESCR_MSR_TABLE_SIZE)];
	unsigned long cocci_id/* arch/x86/events/intel/p4.c 1209 */[BITS_TO_LONGS(X86_PMC_IDX_MAX)];
	int *cocci_id/* arch/x86/events/intel/p4.c 1207 */;
	unsigned long *cocci_id/* arch/x86/events/intel/p4.c 1193 */;
	const unsigned int cocci_id/* arch/x86/events/intel/p4.c 1130 */[P4_ESCR_MSR_TABLE_SIZE];
	struct perf_sample_data cocci_id/* arch/x86/events/intel/p4.c 1001 */;
}
