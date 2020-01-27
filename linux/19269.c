cocci_test_suite() {
	struct arc_pmu *cocci_id/* arch/arc/kernel/perf_event.c 96 */;
	struct arc_callchain_trace cocci_id/* arch/arc/kernel/perf_event.c 78 */;
	struct platform_driver cocci_id/* arch/arc/kernel/perf_event.c 673 */;
	const struct of_device_id cocci_id/* arch/arc/kernel/perf_event.c 666 */[];
	struct perf_callchain_entry_ctx *cocci_id/* arch/arc/kernel/perf_event.c 65 */;
	struct arc_callchain_trace *cocci_id/* arch/arc/kernel/perf_event.c 64 */;
	struct pmu cocci_id/* arch/arc/kernel/perf_event.c 628 */;
	struct arc_pmu cocci_id/* arch/arc/kernel/perf_event.c 590 */;
	struct arc_callchain_trace {
		int depth;
		void *perf_stuff;
	} cocci_id/* arch/arc/kernel/perf_event.c 57 */;
	union cc_name {
		struct {
			u32 word0,word1;
			char sentinel;
		} indiv;
		char str[ARCPMU_EVENT_NAME_LEN];
	} cocci_id/* arch/arc/kernel/perf_event.c 568 */;
	struct arc_reg_cc_build cocci_id/* arch/arc/kernel/perf_event.c 564 */;
	struct arc_reg_pct_build cocci_id/* arch/arc/kernel/perf_event.c 563 */;
	struct platform_device *cocci_id/* arch/arc/kernel/perf_event.c 561 */;
	bool cocci_id/* arch/arc/kernel/perf_event.c 533 */;
	char *cocci_id/* arch/arc/kernel/perf_event.c 503 */;
	struct attribute_group cocci_id/* arch/arc/kernel/perf_event.c 499 */;
	struct perf_pmu_events_attr cocci_id/* arch/arc/kernel/perf_event.c 490 */;
	struct perf_pmu_events_attr *cocci_id/* arch/arc/kernel/perf_event.c 488 */;
	struct device_attribute *cocci_id/* arch/arc/kernel/perf_event.c 485 */;
	struct device *cocci_id/* arch/arc/kernel/perf_event.c 484 */;
	ssize_t cocci_id/* arch/arc/kernel/perf_event.c 484 */;
	struct attribute *cocci_id/* arch/arc/kernel/perf_event.c 474 */[];
	int *cocci_id/* arch/arc/kernel/perf_event.c 464 */;
	int cocci_id/* arch/arc/kernel/perf_event.c 464 */;
	void *cocci_id/* arch/arc/kernel/perf_event.c 462 */;
	void cocci_id/* arch/arc/kernel/perf_event.c 462 */;
	struct arc_pmu_cpu {
		unsigned long used_mask[BITS_TO_LONGS(ARC_PERF_MAX_COUNTERS)];
		struct perf_event *act_counter[ARC_PERF_MAX_COUNTERS];
	} cocci_id/* arch/arc/kernel/perf_event.c 44 */;
	struct pt_regs *cocci_id/* arch/arc/kernel/perf_event.c 404 */;
	struct perf_sample_data cocci_id/* arch/arc/kernel/perf_event.c 402 */;
	irqreturn_t cocci_id/* arch/arc/kernel/perf_event.c 400 */;
	struct arc_pmu_cpu *cocci_id/* arch/arc/kernel/perf_event.c 362 */;
	struct arc_pmu {
		struct pmu pmu;
		unsigned int irq;
		int n_counters;
		int n_events;
		u64 max_period;
		int ev_hw_idx[PERF_COUNT_ARC_HW_MAX];
		struct arc_pmu_raw_event_entry *raw_entry;
		struct attribute **attrs;
		struct perf_pmu_events_attr *attr;
		const struct attribute_group *attr_groups[ARCPMU_NR_ATTR_GR + 1];
	} cocci_id/* arch/arc/kernel/perf_event.c 30 */;
	struct arc_pmu_raw_event_entry {
		char name[ARCPMU_EVENT_NAME_LEN];
	} cocci_id/* arch/arc/kernel/perf_event.c 26 */;
	u32 cocci_id/* arch/arc/kernel/perf_event.c 238 */;
	struct pmu *cocci_id/* arch/arc/kernel/perf_event.c 236 */;
	enum arc_pmu_attr_groups{ARCPMU_ATTR_GR_EVENTS, ARCPMU_ATTR_GR_FORMATS, ARCPMU_NR_ATTR_GR,} cocci_id/* arch/arc/kernel/perf_event.c 20 */;
	unsigned int cocci_id/* arch/arc/kernel/perf_event.c 141 */;
	s64 cocci_id/* arch/arc/kernel/perf_event.c 123 */;
	u64 cocci_id/* arch/arc/kernel/perf_event.c 121 */;
	struct hw_perf_event *cocci_id/* arch/arc/kernel/perf_event.c 119 */;
	struct perf_event *cocci_id/* arch/arc/kernel/perf_event.c 118 */;
	__typeof__(struct arc_pmu_cpu) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
