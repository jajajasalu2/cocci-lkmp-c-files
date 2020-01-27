cocci_test_suite() {
	s64 cocci_id/* arch/x86/events/amd/uncore.c 86 */;
	u64 cocci_id/* arch/x86/events/amd/uncore.c 85 */;
	bool cocci_id/* arch/x86/events/amd/uncore.c 67 */;
	cpumask_t cocci_id/* arch/x86/events/amd/uncore.c 60 */;
	struct pmu cocci_id/* arch/x86/events/amd/uncore.c 57 */;
	int __init cocci_id/* arch/x86/events/amd/uncore.c 515 */;
	struct hlist_node *cocci_id/* arch/x86/events/amd/uncore.c 425 */;
	struct amd_uncore {
		int id;
		int refcnt;
		int cpu;
		int num_counters;
		int rdpmc_base;
		u32 msr_base;
		cpumask_t *active_mask;
		struct pmu *pmu;
		struct perf_event *events[MAX_COUNTERS];
		struct hlist_node node;
	} cocci_id/* arch/x86/events/amd/uncore.c 40 */;
	struct amd_uncore *__percpu *cocci_id/* arch/x86/events/amd/uncore.c 372 */;
	struct amd_uncore cocci_id/* arch/x86/events/amd/uncore.c 325 */;
	unsigned int cocci_id/* arch/x86/events/amd/uncore.c 323 */;
	struct attribute_group cocci_id/* arch/x86/events/amd/uncore.c 258 */;
	struct attribute *cocci_id/* arch/x86/events/amd/uncore.c 253 */[];
	struct pmu *cocci_id/* arch/x86/events/amd/uncore.c 240 */;
	cpumask_t *cocci_id/* arch/x86/events/amd/uncore.c 239 */;
	char *cocci_id/* arch/x86/events/amd/uncore.c 237 */;
	struct device_attribute *cocci_id/* arch/x86/events/amd/uncore.c 236 */;
	struct device *cocci_id/* arch/x86/events/amd/uncore.c 235 */;
	ssize_t cocci_id/* arch/x86/events/amd/uncore.c 235 */;
	void cocci_id/* arch/x86/events/amd/uncore.c 167 */;
	struct hw_perf_event *cocci_id/* arch/x86/events/amd/uncore.c 130 */;
	struct amd_uncore *cocci_id/* arch/x86/events/amd/uncore.c 129 */;
	struct perf_event *cocci_id/* arch/x86/events/amd/uncore.c 126 */;
	int cocci_id/* arch/x86/events/amd/uncore.c 126 */;
}
