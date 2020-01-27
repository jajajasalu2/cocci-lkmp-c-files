cocci_test_suite() {
	int cocci_id/* arch/x86/events/amd/ibs.c 993 */;
	struct syscore_ops cocci_id/* arch/x86/events/amd/ibs.c 971 */;
	struct pci_dev *cocci_id/* arch/x86/events/amd/ibs.c 829 */;
	struct perf_ibs {
		struct pmu pmu;
		unsigned int msr;
		u64 config_mask;
		u64 cnt_mask;
		u64 enable_mask;
		u64 valid_mask;
		u64 max_period;
		unsigned long offset_mask[1];
		int offset_max;
		struct cpu_perf_ibs __percpu *pcpu;
		struct attribute **format_attrs;
		struct attribute_group format_group;
		const struct attribute_group *attr_groups[2];
		u64 (*get_count)(u64 config);
	} cocci_id/* arch/x86/events/amd/ibs.c 82 */;
	struct cpu_perf_ibs {
		struct perf_event *event;
		unsigned long state[BITS_TO_LONGS(IBS_MAX_STATES)];
	} cocci_id/* arch/x86/events/amd/ibs.c 77 */;
	unsigned int cocci_id/* arch/x86/events/amd/ibs.c 759 */;
	u32 cocci_id/* arch/x86/events/amd/ibs.c 756 */;
	void cocci_id/* arch/x86/events/amd/ibs.c 756 */;
	struct attribute **cocci_id/* arch/x86/events/amd/ibs.c 734 */;
	struct cpu_perf_ibs cocci_id/* arch/x86/events/amd/ibs.c 706 */;
	struct cpu_perf_ibs __percpu *cocci_id/* arch/x86/events/amd/ibs.c 703 */;
	char *cocci_id/* arch/x86/events/amd/ibs.c 701 */;
	enum ibs_states{IBS_ENABLED=0, IBS_STARTED=1, IBS_STOPPING=2, IBS_STOPPED=3, IBS_MAX_STATES,} cocci_id/* arch/x86/events/amd/ibs.c 68 */;
	struct perf_ibs_data cocci_id/* arch/x86/events/amd/ibs.c 577 */;
	struct pt_regs cocci_id/* arch/x86/events/amd/ibs.c 576 */;
	struct perf_raw_record cocci_id/* arch/x86/events/amd/ibs.c 575 */;
	struct perf_sample_data cocci_id/* arch/x86/events/amd/ibs.c 574 */;
	struct pt_regs *cocci_id/* arch/x86/events/amd/ibs.c 569 */;
	struct attribute *cocci_id/* arch/x86/events/amd/ibs.c 509 */[];
	struct cpu_perf_ibs *cocci_id/* arch/x86/events/amd/ibs.c 474 */;
	struct perf_ibs cocci_id/* arch/x86/events/amd/ibs.c 473 */;
	u64 cocci_id/* arch/x86/events/amd/ibs.c 328 */;
	struct perf_ibs *cocci_id/* arch/x86/events/amd/ibs.c 193 */;
	struct perf_event *cocci_id/* arch/x86/events/amd/ibs.c 154 */;
	s64 cocci_id/* arch/x86/events/amd/ibs.c 113 */;
	u64 *cocci_id/* arch/x86/events/amd/ibs.c 111 */;
	struct hw_perf_event *cocci_id/* arch/x86/events/amd/ibs.c 111 */;
	struct perf_ibs_data {
		u32 size;
		union {
			u32 data[0];
			u32 caps;
		};
		u64 regs[MSR_AMD64_IBS_REG_COUNT_MAX];
	} cocci_id/* arch/x86/events/amd/ibs.c 101 */;
}
