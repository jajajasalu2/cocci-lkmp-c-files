cocci_test_suite() {
	unsigned long cocci_id/* arch/sh/kernel/perf_event.c 93 */;
	int *cocci_id/* arch/sh/kernel/perf_event.c 91 */;
	void cocci_id/* arch/sh/kernel/perf_event.c 81 */;
	const char *cocci_id/* arch/sh/kernel/perf_event.c 60 */;
	atomic_t cocci_id/* arch/sh/kernel/perf_event.c 39 */;
	struct sh_pmu *cocci_id/* arch/sh/kernel/perf_event.c 360 */;
	struct cpu_hw_events cocci_id/* arch/sh/kernel/perf_event.c 356 */;
	unsigned int cocci_id/* arch/sh/kernel/perf_event.c 352 */;
	struct pmu cocci_id/* arch/sh/kernel/perf_event.c 341 */;
	struct pmu *cocci_id/* arch/sh/kernel/perf_event.c 333 */;
	struct cpu_hw_events {
		struct perf_event *events[MAX_HWEVENTS];
		unsigned long used_mask[BITS_TO_LONGS(MAX_HWEVENTS)];
		unsigned long active_mask[BITS_TO_LONGS(MAX_HWEVENTS)];
	} cocci_id/* arch/sh/kernel/perf_event.c 28 */;
	struct cpu_hw_events *cocci_id/* arch/sh/kernel/perf_event.c 264 */;
	s64 cocci_id/* arch/sh/kernel/perf_event.c 180 */;
	u64 cocci_id/* arch/sh/kernel/perf_event.c 179 */;
	struct hw_perf_event *cocci_id/* arch/sh/kernel/perf_event.c 121 */;
	struct perf_event_attr *cocci_id/* arch/sh/kernel/perf_event.c 120 */;
	struct perf_event *cocci_id/* arch/sh/kernel/perf_event.c 118 */;
	int cocci_id/* arch/sh/kernel/perf_event.c 118 */;
	__typeof__(struct cpu_hw_events) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
