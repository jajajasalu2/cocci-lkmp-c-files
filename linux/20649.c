cocci_test_suite() {
	void __exit cocci_id/* arch/x86/events/intel/cstate.c 746 */;
	const struct cstate_model *cocci_id/* arch/x86/events/intel/cstate.c 738 */;
	const struct x86_cpu_id *cocci_id/* arch/x86/events/intel/cstate.c 728 */;
	int __init cocci_id/* arch/x86/events/intel/cstate.c 689 */;
	void cocci_id/* arch/x86/events/intel/cstate.c 677 */;
	void *cocci_id/* arch/x86/events/intel/cstate.c 666 */;
	const struct x86_cpu_id cocci_id/* arch/x86/events/intel/cstate.c 597 */[]__initconst;
	const struct cstate_model cocci_id/* arch/x86/events/intel/cstate.c 535 */;
	unsigned int cocci_id/* arch/x86/events/intel/cstate.c 398 */;
	int cocci_id/* arch/x86/events/intel/cstate.c 398 */;
	struct perf_event *cocci_id/* arch/x86/events/intel/cstate.c 386 */;
	struct hw_perf_event *cocci_id/* arch/x86/events/intel/cstate.c 357 */;
	u64 cocci_id/* arch/x86/events/intel/cstate.c 303 */;
	struct pmu *cocci_id/* arch/x86/events/intel/cstate.c 291 */;
	char *cocci_id/* arch/x86/events/intel/cstate.c 289 */;
	struct device_attribute *cocci_id/* arch/x86/events/intel/cstate.c 288 */;
	struct device *cocci_id/* arch/x86/events/intel/cstate.c 287 */;
	ssize_t cocci_id/* arch/x86/events/intel/cstate.c 287 */;
	enum perf_cstate_pkg_events{PERF_CSTATE_PKG_C2_RES=0, PERF_CSTATE_PKG_C3_RES, PERF_CSTATE_PKG_C6_RES, PERF_CSTATE_PKG_C7_RES, PERF_CSTATE_PKG_C8_RES, PERF_CSTATE_PKG_C9_RES, PERF_CSTATE_PKG_C10_RES, PERF_CSTATE_PKG_EVENT_MAX,} cocci_id/* arch/x86/events/intel/cstate.c 223 */;
	const struct attribute_group *cocci_id/* arch/x86/events/intel/cstate.c 212 */[];
	cpumask_t cocci_id/* arch/x86/events/intel/cstate.c 200 */;
	struct attribute_group cocci_id/* arch/x86/events/intel/cstate.c 184 */;
	struct attribute *cocci_id/* arch/x86/events/intel/cstate.c 175 */[];
	struct perf_msr cocci_id/* arch/x86/events/intel/cstate.c 168 */[];
	unsigned long *cocci_id/* arch/x86/events/intel/cstate.c 165 */;
	unsigned long cocci_id/* arch/x86/events/intel/cstate.c 156 */;
	enum perf_cstate_core_events{PERF_CSTATE_CORE_C1_RES=0, PERF_CSTATE_CORE_C3_RES, PERF_CSTATE_CORE_C6_RES, PERF_CSTATE_CORE_C7_RES, PERF_CSTATE_CORE_EVENT_MAX,} cocci_id/* arch/x86/events/intel/cstate.c 142 */;
	bool cocci_id/* arch/x86/events/intel/cstate.c 140 */;
	struct pmu cocci_id/* arch/x86/events/intel/cstate.c 139 */;
	struct perf_cstate_msr {
		u64 msr;
		struct perf_pmu_events_attr *attr;
	} cocci_id/* arch/x86/events/intel/cstate.c 132 */;
	struct cstate_model {
		unsigned long core_events;
		unsigned long pkg_events;
		unsigned long quirks;
	} cocci_id/* arch/x86/events/intel/cstate.c 122 */;
	ssize_t cocci_id/* arch/x86/events/intel/cstate.c 117 */(struct device *dev,
								 struct device_attribute *attr,
								 char *buf);
}
