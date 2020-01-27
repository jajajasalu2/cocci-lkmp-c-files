cocci_test_suite() {
	struct mips_pmu cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 93 */;
	const struct mips_perf_event cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 854 */[PERF_COUNT_HW_MAX];
	struct mips_pmu {
		u64 max_period;
		u64 valid_count;
		u64 overflow;
		const char *name;
		int irq;
		u64 (*read_counter)(unsigned int idx);
		void (*write_counter)(unsigned int idx, u64 val);
		const struct mips_perf_event *(*map_raw_event)(u64 config);
		const struct mips_perf_event *general_event_map[PERF_COUNT_HW_MAX];
		const struct mips_perf_event *cache_event_map[PERF_COUNT_HW_CACHE_MAX][PERF_COUNT_HW_CACHE_OP_MAX][PERF_COUNT_HW_CACHE_RESULT_MAX];
		unsigned int num_counters;
	} cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 76 */;
	void cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 750 */;
	struct pt_regs *cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 735 */;
	struct perf_sample_data *cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 734 */;
	struct cpu_hw_events *cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 733 */;
	struct cpu_hw_events cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 714 */;
	struct mips_perf_event cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 71 */;
	struct pmu cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 646 */;
	void *cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 603 */;
	long cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 603 */;
	int cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 592 */(struct perf_event *event);
	void cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 591 */(void *arg);
	int (*cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 547 */)(void);
	atomic_t cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 545 */;
	struct pmu *cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 537 */;
	struct mips_perf_event {
		unsigned int event_id;
		unsigned int cntr_mask;
#define CNTR_EVEN 0x55555555
#define CNTR_ODD 0xaaaaaaaa
#define CNTR_ALL 0xffffffff
		enum{T=0, V=1, P=2,} range;
	} cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 53 */;
	u64 cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 374 */;
	struct perf_event cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 317 */;
	struct cpu_hw_events {
		struct perf_event *events[MIPS_MAX_HWEVENTS];
		unsigned long used_mask[BITS_TO_LONGS(MIPS_MAX_HWEVENTS)];
		unsigned int saved_ctrl[MIPS_MAX_HWEVENTS];
	} cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 31 */;
	unsigned long cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 294 */;
	u32 cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 174 */;
	int __init cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 1683 */;
	int cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 155 */(void);
	irqreturn_t cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 154 */(int, void *);
	void cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 153 */(void);
	irqreturn_t cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 1436 */;
	unsigned int cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 142 */;
	struct perf_sample_data cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 1384 */;
	const struct mips_perf_event *cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 1283 */;
	struct hw_perf_event *cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 1282 */;
	struct perf_event_attr *cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 1281 */;
	struct perf_event *cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 1279 */;
	int cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 1279 */;
	const struct mips_perf_event cocci_id/* arch/mips/kernel/perf_event_mipsxx.c 1123 */[PERF_COUNT_HW_CACHE_MAX][PERF_COUNT_HW_CACHE_OP_MAX][PERF_COUNT_HW_CACHE_RESULT_MAX];
	__typeof__(struct cpu_hw_events) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
