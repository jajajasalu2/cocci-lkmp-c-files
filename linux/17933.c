cocci_test_suite() {
	struct hw_perf_event *cocci_id/* arch/sparc/kernel/perf_event.c 992 */;
	void cocci_id/* arch/sparc/kernel/perf_event.c 983 */;
	void cocci_id/* arch/sparc/kernel/perf_event.c 980 */(struct perf_event *event,
							      int flags);
	u64 cocci_id/* arch/sparc/kernel/perf_event.c 959 */;
	s64 cocci_id/* arch/sparc/kernel/perf_event.c 890 */;
	const struct sparc_pmu *cocci_id/* arch/sparc/kernel/perf_event.c 804 */;
	struct cpu_hw_events {
		int n_events;
		int n_added;
		struct perf_event *event[MAX_HWEVENTS];
		unsigned long events[MAX_HWEVENTS];
		int current_idx[MAX_HWEVENTS];
		u64 pcr[MAX_HWEVENTS];
		int enabled;
		unsigned int txn_flags;
	} cocci_id/* arch/sparc/kernel/perf_event.c 78 */;
	const struct sparc_pmu cocci_id/* arch/sparc/kernel/perf_event.c 459 */;
	const cache_map_t cocci_id/* arch/sparc/kernel/perf_event.c 358 */;
	const struct perf_event_map *cocci_id/* arch/sparc/kernel/perf_event.c 353 */;
	const struct perf_event_map cocci_id/* arch/sparc/kernel/perf_event.c 346 */[];
	u8 cocci_id/* arch/sparc/kernel/perf_event.c 1857 */;
	struct sparc_stackf32 cocci_id/* arch/sparc/kernel/perf_event.c 1842 */;
	struct sparc_stackf32 __user *cocci_id/* arch/sparc/kernel/perf_event.c 1841 */;
	struct sparc_stackf cocci_id/* arch/sparc/kernel/perf_event.c 1832 */;
	struct sparc_stackf __user *cocci_id/* arch/sparc/kernel/perf_event.c 1831 */;
	u32 cocci_id/* arch/sparc/kernel/perf_event.c 180 */;
	const void __user *cocci_id/* arch/sparc/kernel/perf_event.c 1788 */;
	struct ftrace_ret_stack *cocci_id/* arch/sparc/kernel/perf_event.c 1774 */;
	struct sparc_stackf *cocci_id/* arch/sparc/kernel/perf_event.c 1752 */;
	unsigned long cocci_id/* arch/sparc/kernel/perf_event.c 1740 */;
	struct pt_regs *cocci_id/* arch/sparc/kernel/perf_event.c 1738 */;
	struct perf_callchain_entry_ctx *cocci_id/* arch/sparc/kernel/perf_event.c 1737 */;
	int __init cocci_id/* arch/sparc/kernel/perf_event.c 1716 */;
	bool __init cocci_id/* arch/sparc/kernel/perf_event.c 1686 */;
	struct notifier_block cocci_id/* arch/sparc/kernel/perf_event.c 1682 */;
	struct perf_sample_data cocci_id/* arch/sparc/kernel/perf_event.c 1617 */;
	struct die_args *cocci_id/* arch/sparc/kernel/perf_event.c 1616 */;
	void *cocci_id/* arch/sparc/kernel/perf_event.c 1614 */;
	struct notifier_block *cocci_id/* arch/sparc/kernel/perf_event.c 1613 */;
	int __kprobes cocci_id/* arch/sparc/kernel/perf_event.c 1613 */;
	struct pmu cocci_id/* arch/sparc/kernel/perf_event.c 1576 */;
	struct sparc_pmu {
		const struct perf_event_map *(*event_map)(int);
		const cache_map_t *cache_map;
		int max_events;
		u32 (*read_pmc)(int);
		void (*write_pmc)(int, u64);
		int upper_shift;
		int lower_shift;
		int event_mask;
		int user_bit;
		int priv_bit;
		int hv_bit;
		int irq_bit;
		int upper_nop;
		int lower_nop;
		unsigned int flags;
#define SPARC_PMU_ALL_EXCLUDES_SAME 0x00000001
#define SPARC_PMU_HAS_CONFLICTS 0x00000002
		int max_hw_events;
		int num_pcrs;
		int num_pic_regs;
	} cocci_id/* arch/sparc/kernel/perf_event.c 157 */;
	struct pmu *cocci_id/* arch/sparc/kernel/perf_event.c 1530 */;
	struct perf_event_map cocci_id/* arch/sparc/kernel/perf_event.c 152 */[PERF_COUNT_HW_CACHE_MAX][PERF_COUNT_HW_CACHE_OP_MAX][PERF_COUNT_HW_CACHE_RESULT_MAX];
	int cocci_id/* arch/sparc/kernel/perf_event.c 1421 */[MAX_HWEVENTS];
	unsigned long cocci_id/* arch/sparc/kernel/perf_event.c 1420 */[MAX_HWEVENTS];
	struct perf_event *cocci_id/* arch/sparc/kernel/perf_event.c 1418 */[MAX_HWEVENTS];
	struct perf_event_attr *cocci_id/* arch/sparc/kernel/perf_event.c 1417 */;
	int *cocci_id/* arch/sparc/kernel/perf_event.c 1347 */;
	struct perf_event *cocci_id/* arch/sparc/kernel/perf_event.c 1346 */[];
	unsigned long *cocci_id/* arch/sparc/kernel/perf_event.c 1346 */;
	struct perf_event **cocci_id/* arch/sparc/kernel/perf_event.c 1314 */;
	struct perf_event_map {
		u16 encoding;
		u8 pic_mask;
#define PIC_NONE 0x00
#define PIC_UPPER 0x01
#define PIC_LOWER 0x02
	} cocci_id/* arch/sparc/kernel/perf_event.c 123 */;
	unsigned int cocci_id/* arch/sparc/kernel/perf_event.c 1198 */;
	atomic_t cocci_id/* arch/sparc/kernel/perf_event.c 1158 */;
	struct perf_event *cocci_id/* arch/sparc/kernel/perf_event.c 1069 */;
	struct cpu_hw_events *cocci_id/* arch/sparc/kernel/perf_event.c 1068 */;
	int cocci_id/* arch/sparc/kernel/perf_event.c 1068 */;
	__typeof__(struct cpu_hw_events) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
