cocci_test_suite() {
	unsigned long cocci_id/* arch/x86/events/core.c 875 */[BITS_TO_LONGS(X86_PMC_IDX_MAX)];
	struct perf_sched cocci_id/* arch/x86/events/core.c 857 */;
	int *cocci_id/* arch/x86/events/core.c 855 */;
	struct event_constraint **cocci_id/* arch/x86/events/core.c 854 */;
	int cocci_id/* arch/x86/events/core.c 772 */;
	struct event_constraint *cocci_id/* arch/x86/events/core.c 771 */;
	bool cocci_id/* arch/x86/events/core.c 769 */;
	struct perf_sched *cocci_id/* arch/x86/events/core.c 769 */;
	struct perf_sched {
		int max_weight;
		int max_events;
		int max_gp;
		int saved_states;
		struct event_constraint **constraints;
		struct sched_state state;
		struct sched_state saved[SCHED_STATES_MAX];
	} cocci_id/* arch/x86/events/core.c 708 */;
	struct sched_state {
		int weight;
		int event;
		int counter;
		int unassigned;
		int nr_gp;
		unsigned long used[BITS_TO_LONGS(X86_PMC_IDX_MAX)];
	} cocci_id/* arch/x86/events/core.c 696 */;
	struct pmu *cocci_id/* arch/x86/events/core.c 685 */;
	struct pmu cocci_id/* arch/x86/events/core.c 678 */;
	struct perf_event *cocci_id/* arch/x86/events/core.c 590 */;
	u64 __read_mostly cocci_id/* arch/x86/events/core.c 55 */[PERF_COUNT_HW_CACHE_MAX][PERF_COUNT_HW_CACHE_OP_MAX][PERF_COUNT_HW_CACHE_RESULT_MAX];
	struct x86_pmu cocci_id/* arch/x86/events/core.c 46 */;
	struct perf_event_attr *cocci_id/* arch/x86/events/core.c 303 */;
	struct x86_pmu_capability *cocci_id/* arch/x86/events/core.c 2606 */;
	struct pt_regs *cocci_id/* arch/x86/events/core.c 2551 */;
	unsigned long cocci_id/* arch/x86/events/core.c 2551 */;
	void __user *cocci_id/* arch/x86/events/core.c 2533 */;
	unsigned long __user *cocci_id/* arch/x86/events/core.c 2505 */;
	const unsigned long __user *cocci_id/* arch/x86/events/core.c 2492 */;
	struct stack_frame cocci_id/* arch/x86/events/core.c 2491 */;
	const void __user *cocci_id/* arch/x86/events/core.c 2449 */;
	struct stack_frame_ia32 cocci_id/* arch/x86/events/core.c 2448 */;
	struct ldt_struct *cocci_id/* arch/x86/events/core.c 2418 */;
	struct desc_struct *cocci_id/* arch/x86/events/core.c 2413 */;
	unsigned int cocci_id/* arch/x86/events/core.c 2411 */;
	void *cocci_id/* arch/x86/events/core.c 2396 */;
	struct unwind_state cocci_id/* arch/x86/events/core.c 2382 */;
	struct perf_callchain_entry_ctx *cocci_id/* arch/x86/events/core.c 2380 */;
	struct cyc2ns_data cocci_id/* arch/x86/events/core.c 2333 */;
	u64 cocci_id/* arch/x86/events/core.c 2331 */;
	struct perf_event_mmap_page *cocci_id/* arch/x86/events/core.c 2331 */;
	struct x86_perf_task_context cocci_id/* arch/x86/events/core.c 2323 */;
	struct perf_event_context *cocci_id/* arch/x86/events/core.c 2257 */;
	const struct attribute_group *cocci_id/* arch/x86/events/core.c 2249 */[];
	const char *cocci_id/* arch/x86/events/core.c 2181 */;
	size_t cocci_id/* arch/x86/events/core.c 2181 */;
	struct mm_struct *cocci_id/* arch/x86/events/core.c 2126 */;
	struct cpu_hw_events *cocci_id/* arch/x86/events/core.c 1989 */;
	void cocci_id/* arch/x86/events/core.c 1989 */;
	struct x86_pmu_quirk *cocci_id/* arch/x86/events/core.c 1782 */;
	int __init cocci_id/* arch/x86/events/core.c 1780 */;
	struct attribute_group cocci_id/* arch/x86/events/core.c 1777 */;
	struct kobject *cocci_id/* arch/x86/events/core.c 1720 */;
	umode_t cocci_id/* arch/x86/events/core.c 1719 */;
	struct attribute *cocci_id/* arch/x86/events/core.c 1701 */[];
	struct attribute *cocci_id/* arch/x86/events/core.c 1699 */;
	struct perf_pmu_events_ht_attr cocci_id/* arch/x86/events/core.c 1669 */;
	struct perf_pmu_events_ht_attr *cocci_id/* arch/x86/events/core.c 1668 */;
	char *cocci_id/* arch/x86/events/core.c 1666 */;
	struct device_attribute *cocci_id/* arch/x86/events/core.c 1665 */;
	struct device *cocci_id/* arch/x86/events/core.c 1665 */;
	ssize_t cocci_id/* arch/x86/events/core.c 1665 */;
	struct perf_pmu_events_attr cocci_id/* arch/x86/events/core.c 1651 */;
	struct perf_pmu_events_attr *cocci_id/* arch/x86/events/core.c 1650 */;
	void __init cocci_id/* arch/x86/events/core.c 1624 */;
	struct event_constraint cocci_id/* arch/x86/events/core.c 1576 */;
	struct perf_sample_data cocci_id/* arch/x86/events/core.c 1494 */;
	atomic_t cocci_id/* arch/x86/events/core.c 142 */;
	u64 *cocci_id/* arch/x86/events/core.c 1389 */;
	int cocci_id/* arch/x86/events/core.c 1272 */[X86_PMC_IDX_MAX];
	s64 cocci_id/* arch/x86/events/core.c 1195 */;
	struct extra_reg *cocci_id/* arch/x86/events/core.c 118 */;
	struct hw_perf_event_extra *cocci_id/* arch/x86/events/core.c 117 */;
	void cocci_id/* arch/x86/events/core.c 1112 */(struct perf_event *event,
						       int flags);
	struct hw_perf_event *cocci_id/* arch/x86/events/core.c 1103 */;
	__typeof__(struct cpu_hw_events) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(u64[X86_PMC_IDX_MAX]) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
