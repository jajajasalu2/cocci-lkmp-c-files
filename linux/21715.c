cocci_test_suite() {
	struct hws_lsctl_request_block cocci_id/* arch/s390/kernel/perf_cpum_sf.c 992 */;
	struct pmu *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 989 */;
	struct cpu_hw_sf {
		struct hws_qsi_info_block qsi;
		struct hws_lsctl_request_block lsctl;
		struct sf_buffer sfb;
		unsigned int flags;
		struct perf_event *event;
		struct perf_output_handle handle;
	} cocci_id/* arch/s390/kernel/perf_cpum_sf.c 87 */;
	struct aux_buffer {
		struct sf_buffer sfb;
		unsigned long head;
		unsigned long alert_mark;
		unsigned long empty_mark;
		unsigned long *sdb_index;
		unsigned long *sdbt_index;
	} cocci_id/* arch/s390/kernel/perf_cpum_sf.c 78 */;
	struct hw_perf_event *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 767 */;
	struct perf_event_attr *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 766 */;
	struct hws_qsi_info_block cocci_id/* arch/s390/kernel/perf_cpum_sf.c 765 */;
	struct cpu_hw_sf *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 764 */;
	struct perf_event *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 762 */;
	int cocci_id/* arch/s390/kernel/perf_cpum_sf.c 762 */;
	unsigned long cocci_id/* arch/s390/kernel/perf_cpum_sf.c 740 */;
	struct hws_qsi_info_block *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 736 */;
	struct sf_buffer {
		unsigned long *sdbt;
		unsigned long num_sdb;
		unsigned long num_sdbt;
		unsigned long *tail;
	} cocci_id/* arch/s390/kernel/perf_cpum_sf.c 70 */;
	unsigned long __read_mostly cocci_id/* arch/s390/kernel/perf_cpum_sf.c 67 */;
	struct perf_output_handle cocci_id/* arch/s390/kernel/perf_cpum_sf.c 661 */;
	struct perf_event_header cocci_id/* arch/s390/kernel/perf_cpum_sf.c 660 */;
	u32 cocci_id/* arch/s390/kernel/perf_cpum_sf.c 659 */;
	struct pt_regs *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 657 */;
	struct perf_sample_data *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 656 */;
	struct task_struct *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 628 */;
	enum pid_type cocci_id/* arch/s390/kernel/perf_cpum_sf.c 626 */;
	const struct hws_qsi_info_block *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 618 */;
	int *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 546 */;
	atomic_t cocci_id/* arch/s390/kernel/perf_cpum_sf.c 533 */;
	const void *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 43 */;
	struct hws_basic_entry cocci_id/* arch/s390/kernel/perf_cpum_sf.c 402 */;
	size_t cocci_id/* arch/s390/kernel/perf_cpum_sf.c 376 */;
	void *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 303 */;
	struct sf_buffer *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 285 */;
	int __init cocci_id/* arch/s390/kernel/perf_cpum_sf.c 2153 */;
	void __init cocci_id/* arch/s390/kernel/perf_cpum_sf.c 2147 */;
	const struct kernel_param_ops cocci_id/* arch/s390/kernel/perf_cpum_sf.c 2138 */;
	const char *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 2107 */;
	const struct kernel_param *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 2100 */;
	char *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 2100 */;
	unsigned int cocci_id/* arch/s390/kernel/perf_cpum_sf.c 2023 */;
	struct ext_code cocci_id/* arch/s390/kernel/perf_cpum_sf.c 2022 */;
	struct pmu cocci_id/* arch/s390/kernel/perf_cpum_sf.c 2002 */;
	const struct attribute_group *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1996 */[];
	struct attribute_group cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1986 */;
	struct attribute *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1981 */[];
	struct attribute *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1975 */[SF_CYCLES_ATTR_MAX + 1];
	enum{SF_CYCLES_BASIC_ATTR_IDX=0, SF_CYCLES_BASIC_DIAG_ATTR_IDX, SF_CYCLES_ATTR_MAX,} cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1969 */;
	u64 cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1793 */;
	struct aux_buffer cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1710 */;
	bool cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1687 */;
	void **cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1686 */;
	struct aux_buffer *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1642 */;
	void cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1640 */;
	gfp_t cocci_id/* arch/s390/kernel/perf_cpum_sf.c 164 */;
	unsigned long *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 164 */;
	unsigned long long cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1514 */;
	unsigned long long *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1512 */;
	struct hws_trailer_entry *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1405 */;
	struct perf_output_handle *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1398 */;
	struct hws_basic_entry *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1165 */;
	struct perf_sample_data cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1073 */;
	struct pt_regs cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1071 */;
	struct perf_sf_sde_regs *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 1043 */;
	debug_info_t *cocci_id/* arch/s390/kernel/perf_cpum_sf.c 100 */;
	__typeof__(struct cpu_hw_sf) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
