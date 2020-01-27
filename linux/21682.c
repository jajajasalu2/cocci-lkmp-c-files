cocci_test_suite() {
	struct cf_trailer_entry {
		union {
			struct {
				unsigned int clock_base:1;
				unsigned int speed:1;
				unsigned int mtda:1;
				unsigned int caca:1;
				unsigned int lcda:1;
			};
			unsigned long flags;
		};
		unsigned int cfvn:16;
		unsigned int csvn:16;
		unsigned int cpu_speed:32;
		unsigned long timestamp;
		union {
			struct {
				unsigned long progusage1;
				unsigned long progusage2;
				unsigned long progusage3;
				unsigned long tod_base;
			};
			unsigned long progusage[4];
		};
		unsigned int mach_type:16;
		unsigned int res1:16;
		unsigned int res2:32;
	} cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 71 */;
	struct cpumf_ctr_info cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 672 */;
	int __init cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 670 */;
	struct hws_qsi_info_block cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 649 */;
	struct cf_ctrset_entry {
		unsigned int def:16;
		unsigned int set:16;
		unsigned int ctr:16;
		unsigned int res1:16;
	} cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 64 */;
	struct pmu cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 631 */;
	const struct attribute_group *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 624 */[];
	struct attribute_group cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 616 */;
	struct attribute *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 604 */[];
	void cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 588 */;
	struct hw_perf_event *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 525 */;
	struct pt_regs cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 492 */;
	struct perf_raw_record cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 491 */;
	struct perf_sample_data cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 490 */;
	u64 *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 461 */;
	struct cf_ctrset_entry *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 446 */;
	struct cf_trailer_entry *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 445 */;
	struct cf_diag_csd *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 443 */;
	unsigned long cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 443 */;
	void *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 402 */;
	struct cf_ctrset_entry cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 349 */;
	u64 cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 348 */;
	struct cf_trailer_entry cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 341 */;
	struct cpumf_ctr_info *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 339 */;
	size_t cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 339 */;
	struct cf_diag_csd {
		size_t used;
		unsigned char start[PAGE_SIZE];
		unsigned char data[PAGE_SIZE];
	} cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 32 */;
	debug_info_t *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 30 */;
	unsigned int cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 29 */;
	enum cpumf_ctr_set cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 201 */;
	struct cpu_cf_events *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 200 */;
	struct perf_event_attr *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 199 */;
	struct perf_event *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 197 */;
	int cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 197 */;
	atomic_t cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 180 */;
	struct pmu *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 156 */;
	__u64 *cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 122 */;
	struct cpuid cocci_id/* arch/s390/kernel/perf_cpum_cf_diag.c 110 */;
	__typeof__(struct cf_diag_csd) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
