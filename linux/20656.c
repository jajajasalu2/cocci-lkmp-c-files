cocci_test_suite() {
	enum perf_msr_id{PERF_MSR_TSC=0, PERF_MSR_APERF=1, PERF_MSR_MPERF=2, PERF_MSR_PPERF=3, PERF_MSR_SMI=4, PERF_MSR_PTSC=5, PERF_MSR_IRPERF=6, PERF_MSR_THERM=7, PERF_MSR_EVENT_MAX,} cocci_id/* arch/x86/events/msr.c 8 */;
	int __init cocci_id/* arch/x86/events/msr.c 290 */;
	struct pmu cocci_id/* arch/x86/events/msr.c 277 */;
	struct perf_event *cocci_id/* arch/x86/events/msr.c 269 */;
	int cocci_id/* arch/x86/events/msr.c 269 */;
	void cocci_id/* arch/x86/events/msr.c 264 */;
	s64 cocci_id/* arch/x86/events/msr.c 229 */;
	unsigned long cocci_id/* arch/x86/events/msr.c 202 */;
	bool cocci_id/* arch/x86/events/msr.c 20 */;
	void *cocci_id/* arch/x86/events/msr.c 20 */;
	u64 cocci_id/* arch/x86/events/msr.c 190 */;
	const struct attribute_group *cocci_id/* arch/x86/events/msr.c 171 */[];
	struct attribute_group cocci_id/* arch/x86/events/msr.c 156 */;
	struct perf_msr cocci_id/* arch/x86/events/msr.c 140 */[];
	struct attribute *cocci_id/* arch/x86/events/msr.c 128 */[];
}
