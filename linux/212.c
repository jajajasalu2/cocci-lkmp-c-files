cocci_test_suite() {
	struct prog_entry {
		int target;
		int when_to_branch;
		struct filter_pred *pred;
	} cocci_id/* kernel/trace/trace_events_filter.c 99 */;
	struct trace_seq *cocci_id/* kernel/trace/trace_events_filter.c 933 */;
	struct filter_parse_error *cocci_id/* kernel/trace/trace_events_filter.c 930 */;
	struct trace_array *cocci_id/* kernel/trace/trace_events_filter.c 929 */;
	struct prog_entry *cocci_id/* kernel/trace/trace_events_filter.c 898 */;
	void *cocci_id/* kernel/trace/trace_events_filter.c 896 */;
	enum regex_type cocci_id/* kernel/trace/trace_events_filter.c 866 */;
	struct regex *cocci_id/* kernel/trace/trace_events_filter.c 864 */;
	struct filter_pred *cocci_id/* kernel/trace/trace_events_filter.c 862 */;
	const char *cocci_id/* kernel/trace/trace_events_filter.c 80 */[];
	enum{ERRORS,} cocci_id/* kernel/trace/trace_events_filter.c 75 */;
	u32 cocci_id/* kernel/trace/trace_events_filter.c 696 */;
	u32 *cocci_id/* kernel/trace/trace_events_filter.c 696 */;
	parse_pred_fn cocci_id/* kernel/trace/trace_events_filter.c 411 */;
	enum filter_op_ids{OPS,} cocci_id/* kernel/trace/trace_events_filter.c 38 */;
	struct test_filter_data_t *cocci_id/* kernel/trace/trace_events_filter.c 2221 */;
	struct test_filter_data_t {
		char *filter;
		struct trace_event_raw_ftrace_test_filter rec;
		int match;
		char *not_visited;
	} cocci_id/* kernel/trace/trace_events_filter.c 2115 */[];
	struct function_filter_data cocci_id/* kernel/trace/trace_events_filter.c 2030 */;
	struct perf_event *cocci_id/* kernel/trace/trace_events_filter.c 2025 */;
	struct ftrace_event_field *cocci_id/* kernel/trace/trace_events_filter.c 1975 */;
	char **cocci_id/* kernel/trace/trace_events_filter.c 1946 */;
	int *cocci_id/* kernel/trace/trace_events_filter.c 1945 */;
	struct function_filter_data *cocci_id/* kernel/trace/trace_events_filter.c 1942 */;
	char *cocci_id/* kernel/trace/trace_events_filter.c 1941 */;
	int cocci_id/* kernel/trace/trace_events_filter.c 1941 */;
	struct ftrace_ops *cocci_id/* kernel/trace/trace_events_filter.c 1928 */;
	struct function_filter_data {
		struct ftrace_ops *ops;
		int first_filter;
		int first_notrace;
	} cocci_id/* kernel/trace/trace_events_filter.c 1901 */;
	struct event_subsystem *cocci_id/* kernel/trace/trace_events_filter.c 1851 */;
	struct trace_subsystem_dir *cocci_id/* kernel/trace/trace_events_filter.c 1848 */;
	struct trace_event_call *cocci_id/* kernel/trace/trace_events_filter.c 1799 */;
	struct event_filter **cocci_id/* kernel/trace/trace_events_filter.c 1759 */;
	struct filter_parse_error **cocci_id/* kernel/trace/trace_events_filter.c 1678 */;
	struct filter_list *cocci_id/* kernel/trace/trace_events_filter.c 1596 */;
	struct filter_list {
		struct list_head list;
		struct event_filter *filter;
	} cocci_id/* kernel/trace/trace_events_filter.c 1585 */;
	unsigned long cocci_id/* kernel/trace/trace_events_filter.c 1545 */;
	enum{INVERT=1, PROCESS_AND=2, PROCESS_OR=4,} cocci_id/* kernel/trace/trace_events_filter.c 143 */;
	bool cocci_id/* kernel/trace/trace_events_filter.c 1410 */;
	const char *cocci_id/* kernel/trace/trace_events_filter.c 1408 */;
	enum{TOO_MANY_CLOSE=-1, TOO_MANY_OPEN=-2, MISSING_QUOTE=-3,} cocci_id/* kernel/trace/trace_events_filter.c 1392 */;
	int (*cocci_id/* kernel/trace/trace_events_filter.c 139 */)(const char *str,
								    void *data,
								    int pos,
								    struct filter_parse_error *pe,
								    struct filter_pred **pred);
	struct filter_parse_error {
		int lasterr;
		int lasterr_pos;
	} cocci_id/* kernel/trace/trace_events_filter.c 128 */;
	u64 cocci_id/* kernel/trace/trace_events_filter.c 1162 */;
	char cocci_id/* kernel/trace/trace_events_filter.c 1161 */;
	char cocci_id/* kernel/trace/trace_events_filter.c 1159 */[24];
	struct filter_pred **cocci_id/* kernel/trace/trace_events_filter.c 1154 */;
	filter_pred_fn_t cocci_id/* kernel/trace/trace_events_filter.c 1095 */;
	enum filter_op_ids cocci_id/* kernel/trace/trace_events_filter.c 1095 */;
	struct trace_event_file *cocci_id/* kernel/trace/trace_events_filter.c 1063 */;
	struct event_filter *cocci_id/* kernel/trace/trace_events_filter.c 1030 */;
	void cocci_id/* kernel/trace/trace_events_filter.c 1030 */;
}
