cocci_test_suite() {
	unsigned int cocci_id/* arch/powerpc/perf/core-book3s.c 986 */[];
	struct perf_event **cocci_id/* arch/powerpc/perf/core-book3s.c 986 */;
	int cocci_id/* arch/powerpc/perf/core-book3s.c 870 */[MAX_HWEVENTS];
	unsigned long cocci_id/* arch/powerpc/perf/core-book3s.c 869 */[MAX_HWEVENTS];
	u64 cocci_id/* arch/powerpc/perf/core-book3s.c 865 */[];
	u32 cocci_id/* arch/powerpc/perf/core-book3s.c 806 */[MAX_HWEVENTS];
	void cocci_id/* arch/powerpc/perf/core-book3s.c 722 */(struct pt_regs *regs);
	struct power_pmu *cocci_id/* arch/powerpc/perf/core-book3s.c 66 */;
	unsigned cocci_id/* arch/powerpc/perf/core-book3s.c 637 */[6];
	unsigned int __user *cocci_id/* arch/powerpc/perf/core-book3s.c 430 */;
	void *cocci_id/* arch/powerpc/perf/core-book3s.c 422 */;
	__u64 cocci_id/* arch/powerpc/perf/core-book3s.c 415 */;
	struct cpu_hw_events {
		int n_events;
		int n_percpu;
		int disabled;
		int n_added;
		int n_limited;
		u8 pmcs_enabled;
		struct perf_event *event[MAX_HWEVENTS];
		u64 events[MAX_HWEVENTS];
		unsigned int flags[MAX_HWEVENTS];
		unsigned long mmcr[4];
		struct perf_event *limited_counter[MAX_LIMITED_HWCOUNTERS];
		u8 limited_hwidx[MAX_LIMITED_HWCOUNTERS];
		u64 alternatives[MAX_HWEVENTS][MAX_EVENT_ALTERNATIVES];
		unsigned long amasks[MAX_HWEVENTS][MAX_EVENT_ALTERNATIVES];
		unsigned long avalues[MAX_HWEVENTS][MAX_EVENT_ALTERNATIVES];
		unsigned int txn_flags;
		int n_txn_start;
		u64 bhrb_filter;
		unsigned int bhrb_users;
		void *bhrb_context;
		struct perf_branch_stack bhrb_stack;
		struct perf_branch_entry bhrb_entries[BHRB_MAX_ENTRIES];
		u64 ic_init;
	} cocci_id/* arch/powerpc/perf/core-book3s.c 30 */;
	u32 cocci_id/* arch/powerpc/perf/core-book3s.c 237 */;
	int __init cocci_id/* arch/powerpc/perf/core-book3s.c 2299 */;
	unsigned long cocci_id/* arch/powerpc/perf/core-book3s.c 2175 */[8];
	struct perf_event *cocci_id/* arch/powerpc/perf/core-book3s.c 2174 */;
	struct cpu_hw_events *cocci_id/* arch/powerpc/perf/core-book3s.c 2173 */;
	int cocci_id/* arch/powerpc/perf/core-book3s.c 2172 */;
	struct pt_regs *cocci_id/* arch/powerpc/perf/core-book3s.c 2170 */;
	void cocci_id/* arch/powerpc/perf/core-book3s.c 2170 */;
	struct perf_sample_data cocci_id/* arch/powerpc/perf/core-book3s.c 2082 */;
	struct pmu cocci_id/* arch/powerpc/perf/core-book3s.c 2015 */;
	struct perf_pmu_events_attr cocci_id/* arch/powerpc/perf/core-book3s.c 2010 */;
	struct perf_pmu_events_attr *cocci_id/* arch/powerpc/perf/core-book3s.c 2008 */;
	struct device_attribute *cocci_id/* arch/powerpc/perf/core-book3s.c 2006 */;
	char *cocci_id/* arch/powerpc/perf/core-book3s.c 2006 */;
	struct device *cocci_id/* arch/powerpc/perf/core-book3s.c 2005 */;
	ssize_t cocci_id/* arch/powerpc/perf/core-book3s.c 2005 */;
	u64 cocci_id/* arch/powerpc/perf/core-book3s.c 1842 */[MAX_HWEVENTS];
	struct perf_event *cocci_id/* arch/powerpc/perf/core-book3s.c 1841 */[MAX_HWEVENTS];
	atomic_t cocci_id/* arch/powerpc/perf/core-book3s.c 1778 */;
	u64 cocci_id/* arch/powerpc/perf/core-book3s.c 1736 */[MAX_EVENT_ALTERNATIVES];
	unsigned int cocci_id/* arch/powerpc/perf/core-book3s.c 1733 */;
	u64 cocci_id/* arch/powerpc/perf/core-book3s.c 1732 */;
	long cocci_id/* arch/powerpc/perf/core-book3s.c 1697 */;
	struct pmu *cocci_id/* arch/powerpc/perf/core-book3s.c 1674 */;
	unsigned int *cocci_id/* arch/powerpc/perf/core-book3s.c 1436 */;
	struct perf_event *cocci_id/* arch/powerpc/perf/core-book3s.c 1435 */[];
	u64 *cocci_id/* arch/powerpc/perf/core-book3s.c 1435 */;
	struct perf_event_context *cocci_id/* arch/powerpc/perf/core-book3s.c 129 */;
	unsigned int cocci_id/* arch/powerpc/perf/core-book3s.c 1280 */[MAX_HWEVENTS];
	s64 cocci_id/* arch/powerpc/perf/core-book3s.c 1279 */;
	bool cocci_id/* arch/powerpc/perf/core-book3s.c 122 */;
	unsigned long cocci_id/* arch/powerpc/perf/core-book3s.c 122 */;
	__typeof__(struct cpu_hw_events) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}