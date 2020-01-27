cocci_test_suite() {
	const struct alpha_pmu_t *cocci_id/* arch/alpha/kernel/perf_event.c 95 */;
	int __init cocci_id/* arch/alpha/kernel/perf_event.c 877 */;
	struct perf_sample_data cocci_id/* arch/alpha/kernel/perf_event.c 808 */;
	struct cpu_hw_events *cocci_id/* arch/alpha/kernel/perf_event.c 807 */;
	struct pt_regs *cocci_id/* arch/alpha/kernel/perf_event.c 805 */;
	unsigned long cocci_id/* arch/alpha/kernel/perf_event.c 804 */;
	void cocci_id/* arch/alpha/kernel/perf_event.c 804 */;
	struct pmu cocci_id/* arch/alpha/kernel/perf_event.c 759 */;
	struct pmu *cocci_id/* arch/alpha/kernel/perf_event.c 746 */;
	struct alpha_pmu_t {
		const int *event_map;
		int max_events;
		int num_pmcs;
		int pmc_count_shift[MAX_HWEVENTS];
		unsigned long pmc_count_mask[MAX_HWEVENTS];
		unsigned long pmc_max_period[MAX_HWEVENTS];
		long pmc_left[3];
		int (*check_constraints)(struct perf_event **,
					 unsigned long *, int);
		int (*raw_event_valid)(u64 config);
	} cocci_id/* arch/alpha/kernel/perf_event.c 61 */;
	int cocci_id/* arch/alpha/kernel/perf_event.c 608 */[MAX_HWEVENTS];
	unsigned long cocci_id/* arch/alpha/kernel/perf_event.c 607 */[MAX_HWEVENTS];
	struct perf_event *cocci_id/* arch/alpha/kernel/perf_event.c 606 */[MAX_HWEVENTS];
	struct hw_perf_event *cocci_id/* arch/alpha/kernel/perf_event.c 605 */;
	struct perf_event_attr *cocci_id/* arch/alpha/kernel/perf_event.c 604 */;
	struct perf_event *cocci_id/* arch/alpha/kernel/perf_event.c 602 */;
	int cocci_id/* arch/alpha/kernel/perf_event.c 602 */;
	char *cocci_id/* arch/alpha/kernel/perf_event.c 586 */;
	struct percpu_struct *cocci_id/* arch/alpha/kernel/perf_event.c 582 */;
	unsigned long *cocci_id/* arch/alpha/kernel/perf_event.c 372 */;
	struct perf_event **cocci_id/* arch/alpha/kernel/perf_event.c 371 */;
	int *cocci_id/* arch/alpha/kernel/perf_event.c 342 */;
	struct perf_event *cocci_id/* arch/alpha/kernel/perf_event.c 341 */[];
	struct cpu_hw_events {
		int enabled;
		int n_events;
		int n_added;
		struct perf_event *event[MAX_HWEVENTS];
		unsigned long evtype[MAX_HWEVENTS];
		int current_idx[MAX_HWEVENTS];
		unsigned long config;
		unsigned long idx_mask;
	} cocci_id/* arch/alpha/kernel/perf_event.c 34 */;
	long cocci_id/* arch/alpha/kernel/perf_event.c 255 */;
	const struct alpha_pmu_t cocci_id/* arch/alpha/kernel/perf_event.c 215 */;
	u64 cocci_id/* arch/alpha/kernel/perf_event.c 209 */;
	const struct ev67_mapping_t cocci_id/* arch/alpha/kernel/perf_event.c 140 */[];
	struct ev67_mapping_t {
		int config;
		int idx;
	} cocci_id/* arch/alpha/kernel/perf_event.c 131 */;
	const int cocci_id/* arch/alpha/kernel/perf_event.c 124 */[];
	enum ev67_pmc_event_type{EV67_CYCLES=1, EV67_INSTRUCTIONS, EV67_BCACHEMISS, EV67_MBOXREPLAY, EV67_LAST_ET,} cocci_id/* arch/alpha/kernel/perf_event.c 113 */;
	__typeof__(struct cpu_hw_events) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
