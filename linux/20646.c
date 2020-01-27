cocci_test_suite() {
	const char *const cocci_id/* arch/x86/events/intel/rapl.c 80 */[NR_RAPL_DOMAINS]__initconst;
	void __exit cocci_id/* arch/x86/events/intel/rapl.c 796 */;
	void *cocci_id/* arch/x86/events/intel/rapl.c 761 */;
	struct rapl_model *cocci_id/* arch/x86/events/intel/rapl.c 752 */;
	const struct x86_cpu_id *cocci_id/* arch/x86/events/intel/rapl.c 751 */;
	const struct x86_cpu_id cocci_id/* arch/x86/events/intel/rapl.c 718 */[]__initconst;
	enum perf_rapl_events{PERF_RAPL_PP0=0, PERF_RAPL_PKG, PERF_RAPL_RAM, PERF_RAPL_PP1, PERF_RAPL_PSYS, PERF_RAPL_MAX, NR_RAPL_DOMAINS=PERF_RAPL_MAX,} cocci_id/* arch/x86/events/intel/rapl.c 69 */;
	struct rapl_model cocci_id/* arch/x86/events/intel/rapl.c 688 */;
	size_t cocci_id/* arch/x86/events/intel/rapl.c 649 */;
	int __init cocci_id/* arch/x86/events/intel/rapl.c 646 */;
	int cocci_id/* arch/x86/events/intel/rapl.c 630 */;
	void __init cocci_id/* arch/x86/events/intel/rapl.c 613 */;
	u64 cocci_id/* arch/x86/events/intel/rapl.c 580 */;
	bool cocci_id/* arch/x86/events/intel/rapl.c 578 */;
	unsigned long *cocci_id/* arch/x86/events/intel/rapl.c 513 */;
	struct attribute_group cocci_id/* arch/x86/events/intel/rapl.c 458 */;
	const struct attribute_group *cocci_id/* arch/x86/events/intel/rapl.c 444 */[];
	struct attribute *cocci_id/* arch/x86/events/intel/rapl.c 424 */[];
	struct device_attribute *cocci_id/* arch/x86/events/intel/rapl.c 382 */;
	char *cocci_id/* arch/x86/events/intel/rapl.c 382 */;
	struct device *cocci_id/* arch/x86/events/intel/rapl.c 381 */;
	ssize_t cocci_id/* arch/x86/events/intel/rapl.c 381 */;
	long cocci_id/* arch/x86/events/intel/rapl.c 352 */;
	struct perf_event *cocci_id/* arch/x86/events/intel/rapl.c 247 */;
	struct rapl_pmu *cocci_id/* arch/x86/events/intel/rapl.c 246 */;
	void cocci_id/* arch/x86/events/intel/rapl.c 246 */;
	unsigned long cocci_id/* arch/x86/events/intel/rapl.c 221 */;
	struct rapl_pmu cocci_id/* arch/x86/events/intel/rapl.c 219 */;
	enum hrtimer_restart cocci_id/* arch/x86/events/intel/rapl.c 217 */;
	struct hrtimer *cocci_id/* arch/x86/events/intel/rapl.c 217 */;
	s64 cocci_id/* arch/x86/events/intel/rapl.c 180 */;
	struct hw_perf_event *cocci_id/* arch/x86/events/intel/rapl.c 178 */;
	unsigned int cocci_id/* arch/x86/events/intel/rapl.c 143 */;
	struct perf_msr cocci_id/* arch/x86/events/intel/rapl.c 141 */[];
	cpumask_t cocci_id/* arch/x86/events/intel/rapl.c 138 */;
	struct rapl_pmus *cocci_id/* arch/x86/events/intel/rapl.c 137 */;
	int cocci_id/* arch/x86/events/intel/rapl.c 136 */[NR_RAPL_DOMAINS]__read_mostly;
	struct rapl_model {
		unsigned long events;
		bool apply_quirk;
	} cocci_id/* arch/x86/events/intel/rapl.c 130 */;
	struct rapl_pmus {
		struct pmu pmu;
		unsigned int maxdie;
		struct rapl_pmu *pmus[];
	} cocci_id/* arch/x86/events/intel/rapl.c 124 */;
	struct rapl_pmu {
		raw_spinlock_t lock;
		int n_active;
		int cpu;
		struct list_head active_list;
		struct pmu *pmu;
		ktime_t timer_interval;
		struct hrtimer hrtimer;
	} cocci_id/* arch/x86/events/intel/rapl.c 114 */;
	struct perf_pmu_events_attr cocci_id/* arch/x86/events/intel/rapl.c 108 */;
}
