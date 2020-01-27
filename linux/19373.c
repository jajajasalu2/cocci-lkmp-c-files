cocci_test_suite() {
	const u32 cocci_id/* arch/xtensa/kernel/perf_event.c 73 */[][C(OP_MAX)][C(RESULT_MAX)];
	const u32 cocci_id/* arch/xtensa/kernel/perf_event.c 58 */[];
	struct xtensa_pmu_events {
		struct perf_event *event[XCHAL_NUM_PERF_COUNTERS];
		unsigned long used_mask[BITS_TO_LONGS(XCHAL_NUM_PERF_COUNTERS)];
	} cocci_id/* arch/xtensa/kernel/perf_event.c 50 */;
	int __init cocci_id/* arch/xtensa/kernel/perf_event.c 416 */;
	struct pmu cocci_id/* arch/xtensa/kernel/perf_event.c 393 */;
	struct perf_sample_data cocci_id/* arch/xtensa/kernel/perf_event.c 380 */;
	uint32_t cocci_id/* arch/xtensa/kernel/perf_event.c 368 */;
	irqreturn_t cocci_id/* arch/xtensa/kernel/perf_event.c 359 */;
	unsigned cocci_id/* arch/xtensa/kernel/perf_event.c 346 */;
	unsigned long cocci_id/* arch/xtensa/kernel/perf_event.c 345 */;
	struct pt_regs *cocci_id/* arch/xtensa/kernel/perf_event.c 330 */;
	void cocci_id/* arch/xtensa/kernel/perf_event.c 329 */;
	struct perf_callchain_entry_ctx *cocci_id/* arch/xtensa/kernel/perf_event.c 323 */;
	struct stackframe *cocci_id/* arch/xtensa/kernel/perf_event.c 321 */;
	void *cocci_id/* arch/xtensa/kernel/perf_event.c 321 */;
	int cocci_id/* arch/xtensa/kernel/perf_event.c 321 */;
	struct xtensa_pmu_events *cocci_id/* arch/xtensa/kernel/perf_event.c 283 */;
	struct pmu *cocci_id/* arch/xtensa/kernel/perf_event.c 193 */;
	s64 cocci_id/* arch/xtensa/kernel/perf_event.c 158 */;
	struct hw_perf_event *cocci_id/* arch/xtensa/kernel/perf_event.c 155 */;
	bool cocci_id/* arch/xtensa/kernel/perf_event.c 154 */;
	struct perf_event *cocci_id/* arch/xtensa/kernel/perf_event.c 154 */;
	int64_t cocci_id/* arch/xtensa/kernel/perf_event.c 140 */;
	uint64_t cocci_id/* arch/xtensa/kernel/perf_event.c 139 */;
	unsigned int cocci_id/* arch/xtensa/kernel/perf_event.c 106 */;
	u64 cocci_id/* arch/xtensa/kernel/perf_event.c 104 */;
	__typeof__(struct xtensa_pmu_events) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
