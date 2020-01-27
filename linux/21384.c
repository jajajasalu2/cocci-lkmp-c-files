cocci_test_suite() {
	unsigned int cocci_id/* arch/csky/kernel/perf_event.c 952 */;
	u64 cocci_id/* arch/csky/kernel/perf_event.c 950 */;
	int64_t cocci_id/* arch/csky/kernel/perf_event.c 929 */;
	uint64_t cocci_id/* arch/csky/kernel/perf_event.c 922 */;
	struct hw_perf_event *cocci_id/* arch/csky/kernel/perf_event.c 920 */;
	struct perf_event *cocci_id/* arch/csky/kernel/perf_event.c 919 */;
	void cocci_id/* arch/csky/kernel/perf_event.c 919 */;
	s64 cocci_id/* arch/csky/kernel/perf_event.c 881 */;
	const int cocci_id/* arch/csky/kernel/perf_event.c 729 */[C(MAX)][C(OP_MAX)][C(RESULT_MAX)];
	const int cocci_id/* arch/csky/kernel/perf_event.c 714 */[PERF_COUNT_HW_MAX];
	struct csky_pmu cocci_id/* arch/csky/kernel/perf_event.c 49 */;
	uint32_t cocci_id/* arch/csky/kernel/perf_event.c 404 */;
	struct csky_pmu_t {
		struct pmu pmu;
		struct pmu_hw_events __percpu *hw_events;
		struct platform_device *plat_device;
		uint32_t count_width;
		uint32_t hpcr;
		u64 max_period;
	} cocci_id/* arch/csky/kernel/perf_event.c 39 */;
	void (*cocci_id/* arch/csky/kernel/perf_event.c 37 */[CSKY_PMU_MAX_EVENTS])(uint64_t val);
	 cocci_id/* arch/csky/kernel/perf_event.c 36 */(*hw_raw_read_mapping[CSKY_PMU_MAX_EVENTS]);
	struct pmu_hw_events {
		struct perf_event *events[CSKY_PMU_MAX_EVENTS];
		unsigned long used_mask[BITS_TO_LONGS(CSKY_PMU_MAX_EVENTS)];
	} cocci_id/* arch/csky/kernel/perf_event.c 23 */;
	int __init cocci_id/* arch/csky/kernel/perf_event.c 1358 */;
	struct platform_driver cocci_id/* arch/csky/kernel/perf_event.c 1350 */;
	struct platform_device *cocci_id/* arch/csky/kernel/perf_event.c 1345 */;
	const struct of_device_id cocci_id/* arch/csky/kernel/perf_event.c 1340 */[];
	struct device_node *cocci_id/* arch/csky/kernel/perf_event.c 1296 */;
	const struct of_device_id *cocci_id/* arch/csky/kernel/perf_event.c 1294 */;
	struct pmu cocci_id/* arch/csky/kernel/perf_event.c 1207 */;
	struct pmu_hw_events cocci_id/* arch/csky/kernel/perf_event.c 1200 */;
	irq_handler_t cocci_id/* arch/csky/kernel/perf_event.c 1160 */;
	struct pt_regs *cocci_id/* arch/csky/kernel/perf_event.c 1107 */;
	struct perf_sample_data cocci_id/* arch/csky/kernel/perf_event.c 1105 */;
	irqreturn_t cocci_id/* arch/csky/kernel/perf_event.c 1103 */;
	void *cocci_id/* arch/csky/kernel/perf_event.c 1103 */;
	struct pmu_hw_events *cocci_id/* arch/csky/kernel/perf_event.c 1088 */;
	int cocci_id/* arch/csky/kernel/perf_event.c 1086 */;
	unsigned long cocci_id/* arch/csky/kernel/perf_event.c 1023 */;
	struct pmu *cocci_id/* arch/csky/kernel/perf_event.c 1016 */;
}
