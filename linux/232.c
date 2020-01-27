cocci_test_suite() {
	u16 *cocci_id/* kernel/trace/trace_events_hist.c 923 */;
	enum field_op_id{FIELD_OP_NONE, FIELD_OP_PLUS, FIELD_OP_MINUS, FIELD_OP_UNARY_MINUS,} cocci_id/* kernel/trace/trace_events_hist.c 92 */;
	u8 *cocci_id/* kernel/trace/trace_events_hist.c 919 */;
	struct ring_buffer *cocci_id/* kernel/trace/trace_events_hist.c 882 */;
	struct trace_event_buffer cocci_id/* kernel/trace/trace_events_hist.c 881 */;
	struct trace_event_functions cocci_id/* kernel/trace/trace_events_hist.c 871 */;
	struct trace_print_flags cocci_id/* kernel/trace/trace_events_hist.c 848 */[];
	u64 (*cocci_id/* kernel/trace/trace_events_hist.c 83 */)(struct hist_field *field,
								 struct tracing_map_elt *elt,
								 struct ring_buffer_event *rbe,
								 void *event);
	struct synth_event cocci_id/* kernel/trace/trace_events_hist.c 825 */;
	char cocci_id/* kernel/trace/trace_events_hist.c 821 */[32];
	struct synth_trace_event *cocci_id/* kernel/trace/trace_events_hist.c 818 */;
	struct trace_seq *cocci_id/* kernel/trace/trace_events_hist.c 817 */;
	struct trace_event *cocci_id/* kernel/trace/trace_events_hist.c 814 */;
	enum print_line_t cocci_id/* kernel/trace/trace_events_hist.c 812 */;
	struct trace_iterator *cocci_id/* kernel/trace/trace_events_hist.c 812 */;
	const char *cocci_id/* kernel/trace/trace_events_hist.c 79 */[];
	long cocci_id/* kernel/trace/trace_events_hist.c 757 */;
	unsigned char cocci_id/* kernel/trace/trace_events_hist.c 751 */;
	char cocci_id/* kernel/trace/trace_events_hist.c 749 */;
	u16 cocci_id/* kernel/trace/trace_events_hist.c 743 */;
	enum{ERRORS,} cocci_id/* kernel/trace/trace_events_hist.c 74 */;
	char cocci_id/* kernel/trace/trace_events_hist.c 698 */[4];
	typeof(trace) cocci_id/* kernel/trace/trace_events_hist.c 647 */;
	struct synth_trace_event cocci_id/* kernel/trace/trace_events_hist.c 646 */;
	struct dentry *cocci_id/* kernel/trace/trace_events_hist.c 6454 */;
	struct synth_trace_event {
		struct trace_entry ent;
		u64 fields[];
	} cocci_id/* kernel/trace/trace_events_hist.c 639 */;
	struct enable_trigger_data *cocci_id/* kernel/trace/trace_events_hist.c 6323 */;
	u8 cocci_id/* kernel/trace/trace_events_hist.c 627 */;
	struct event_command *cocci_id/* kernel/trace/trace_events_hist.c 6126 */;
	struct event_trigger_ops *cocci_id/* kernel/trace/trace_events_hist.c 5789 */;
	struct event_trigger_ops cocci_id/* kernel/trace/trace_events_hist.c 5782 */;
	const struct file_operations cocci_id/* kernel/trace/trace_events_hist.c 5553 */;
	struct inode *cocci_id/* kernel/trace/trace_events_hist.c 5542 */;
	struct file *cocci_id/* kernel/trace/trace_events_hist.c 5542 */;
	struct tracing_map_sort_entry **cocci_id/* kernel/trace/trace_events_hist.c 5472 */;
	char cocci_id/* kernel/trace/trace_events_hist.c 5360 */[KSYM_SYMBOL_LEN];
	struct snapshot_context {
		struct tracing_map_elt *elt;
		void *key;
	} cocci_id/* kernel/trace/trace_events_hist.c 535 */;
	unsigned long *cocci_id/* kernel/trace/trace_events_hist.c 5337 */;
	struct hist_elt_data {
		char *comm;
		u64 *var_ref_vals;
		char *field_var_str[SYNTH_FIELDS_MAX];
	} cocci_id/* kernel/trace/trace_events_hist.c 529 */;
	char cocci_id/* kernel/trace/trace_events_hist.c 5289 */[HIST_KEY_SIZE_MAX];
	u64 cocci_id/* kernel/trace/trace_events_hist.c 5288 */[TRACING_MAP_VARS_MAX];
	unsigned long cocci_id/* kernel/trace/trace_events_hist.c 5287 */[HIST_STACKTRACE_DEPTH];
	struct event_trigger_data *cocci_id/* kernel/trace/trace_events_hist.c 5282 */;
	u32 *cocci_id/* kernel/trace/trace_events_hist.c 5252 */;
	struct ftrace_event_field *cocci_id/* kernel/trace/trace_events_hist.c 5248 */;
	size_t cocci_id/* kernel/trace/trace_events_hist.c 5245 */;
	struct track_data {
		u64 track_val;
		bool updated;
		unsigned int key_len;
		void *key;
		struct tracing_map_elt elt;
		struct action_data *action_data;
		struct hist_trigger_data *hist_data;
	} cocci_id/* kernel/trace/trace_events_hist.c 517 */;
	const struct tracing_map_ops *cocci_id/* kernel/trace/trace_events_hist.c 5157 */;
	struct hist_trigger_attrs *cocci_id/* kernel/trace/trace_events_hist.c 5153 */;
	tracing_map_cmp_fn_t cocci_id/* kernel/trace/trace_events_hist.c 5116 */;
	struct tracing_map *cocci_id/* kernel/trace/trace_events_hist.c 5108 */;
	bool cocci_id/* kernel/trace/trace_events_hist.c 5006 */;
	struct tracing_map_sort_key *cocci_id/* kernel/trace/trace_events_hist.c 4759 */;
	struct action_data {
		enum handler_id handler;
		enum action_id action;
		char *action_name;
		action_fn_t fn;
		unsigned int n_params;
		char *params[SYNTH_FIELDS_MAX];
		unsigned int var_ref_idx;
		struct synth_event *synth_event;
		bool use_trace_keyword;
		char *synth_event_name;
		union {
			struct {
				char *event;
				char *event_system;
			} match_data;
			struct {
				char *var_str;
				struct hist_field *var_ref;
				struct hist_field *track_var;
				check_track_val_fn_t check_val;
				action_fn_t save_data;
			} track_data;
		};
	} cocci_id/* kernel/trace/trace_events_hist.c 459 */;
	enum action_id{ACTION_SAVE=1, ACTION_TRACE, ACTION_SNAPSHOT,} cocci_id/* kernel/trace/trace_events_hist.c 453 */;
	enum handler_id{HANDLER_ONMATCH=1, HANDLER_ONMAX, HANDLER_ONCHANGE,} cocci_id/* kernel/trace/trace_events_hist.c 447 */;
	bool (*cocci_id/* kernel/trace/trace_events_hist.c 445 */)(u64 track_val,
								   u64 var_val);
	struct hist_field *cocci_id/* kernel/trace/trace_events_hist.c 4439 */;
	unsigned long cocci_id/* kernel/trace/trace_events_hist.c 4437 */;
	char *cocci_id/* kernel/trace/trace_events_hist.c 4436 */;
	struct trace_event_file *cocci_id/* kernel/trace/trace_events_hist.c 4435 */;
	unsigned int cocci_id/* kernel/trace/trace_events_hist.c 4434 */;
	struct hist_trigger_data *cocci_id/* kernel/trace/trace_events_hist.c 4433 */;
	void (*cocci_id/* kernel/trace/trace_events_hist.c 440 */)(struct hist_trigger_data *hist_data,
								   struct tracing_map_elt *elt,
								   void *rec,
								   struct ring_buffer_event *rbe,
								   void *key,
								   struct action_data *data,
								   u64 *var_ref_vals);
	struct action_data cocci_id/* kernel/trace/trace_events_hist.c 438 */;
	struct track_data *cocci_id/* kernel/trace/trace_events_hist.c 4304 */;
	struct trace_array *cocci_id/* kernel/trace/trace_events_hist.c 4303 */;
	struct action_data *cocci_id/* kernel/trace/trace_events_hist.c 4300 */;
	struct synth_event {
		struct dyn_event devent;
		int ref;
		char *name;
		struct synth_field **fields;
		unsigned int n_fields;
		unsigned int n_u64;
		struct trace_event_class class;
		struct trace_event_call call;
		struct tracepoint *tp;
	} cocci_id/* kernel/trace/trace_events_hist.c 400 */;
	enum handler_id cocci_id/* kernel/trace/trace_events_hist.c 3927 */;
	struct synth_field {
		char *type;
		char *name;
		size_t size;
		bool is_signed;
		bool is_string;
	} cocci_id/* kernel/trace/trace_events_hist.c 392 */;
	struct dyn_event_operations cocci_id/* kernel/trace/trace_events_hist.c 384 */;
	int cocci_id/* kernel/trace/trace_events_hist.c 3827 */(struct hist_trigger_data *hist_data,
								struct action_data *data);
	bool cocci_id/* kernel/trace/trace_events_hist.c 381 */(const char *system,
								const char *event,
								int argc,
								const char **argv,
								struct dyn_event *ev);
	bool cocci_id/* kernel/trace/trace_events_hist.c 380 */(struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_events_hist.c 379 */(struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_events_hist.c 378 */(struct seq_file *m,
							       struct dyn_event *ev);
	int cocci_id/* kernel/trace/trace_events_hist.c 377 */(int argc,
							       const char **argv);
	void cocci_id/* kernel/trace/trace_events_hist.c 3677 */(struct seq_file *m,
								 struct hist_trigger_data *hist_data,
								 void *key,
								 struct tracing_map_elt *elt);
	struct snapshot_context cocci_id/* kernel/trace/trace_events_hist.c 3669 */;
	struct snapshot_context *cocci_id/* kernel/trace/trace_events_hist.c 3634 */;
	struct trace_event_call *cocci_id/* kernel/trace/trace_events_hist.c 3552 */;
	struct field_var cocci_id/* kernel/trace/trace_events_hist.c 3508 */;
	type cocci_id/* kernel/trace/trace_events_hist.c 3466 */;
	struct hist_trigger_data {
		struct hist_field *fields[HIST_FIELDS_MAX];
		unsigned int n_vals;
		unsigned int n_keys;
		unsigned int n_fields;
		unsigned int n_vars;
		unsigned int key_size;
		struct tracing_map_sort_key sort_keys[TRACING_MAP_SORT_KEYS_MAX];
		unsigned int n_sort_keys;
		struct trace_event_file *event_file;
		struct hist_trigger_attrs *attrs;
		struct tracing_map *map;
		bool enable_timestamps;
		bool remove;
		struct hist_field *var_refs[TRACING_MAP_VARS_MAX];
		unsigned int n_var_refs;
		struct action_data *actions[HIST_ACTIONS_MAX];
		unsigned int n_actions;
		struct field_var *field_vars[SYNTH_FIELDS_MAX];
		unsigned int n_field_vars;
		unsigned int n_field_var_str;
		struct field_var_hist *field_var_hists[SYNTH_FIELDS_MAX];
		unsigned int n_field_var_hists;
		struct field_var *save_vars[SYNTH_FIELDS_MAX];
		unsigned int n_save_vars;
		unsigned int n_save_var_str;
	} cocci_id/* kernel/trace/trace_events_hist.c 346 */;
	struct field_var_hist {
		struct hist_trigger_data *hist_data;
		char *cmd;
	} cocci_id/* kernel/trace/trace_events_hist.c 341 */;
	uintptr_t cocci_id/* kernel/trace/trace_events_hist.c 3409 */;
	struct field_var *cocci_id/* kernel/trace/trace_events_hist.c 3400 */;
	u64 cocci_id/* kernel/trace/trace_events_hist.c 3397 */;
	struct hist_elt_data *cocci_id/* kernel/trace/trace_events_hist.c 3395 */;
	struct field_var **cocci_id/* kernel/trace/trace_events_hist.c 3391 */;
	void *cocci_id/* kernel/trace/trace_events_hist.c 3390 */;
	struct ring_buffer_event *cocci_id/* kernel/trace/trace_events_hist.c 3389 */;
	struct tracing_map_elt *cocci_id/* kernel/trace/trace_events_hist.c 3388 */;
	struct field_var {
		struct hist_field *var;
		struct hist_field *val;
	} cocci_id/* kernel/trace/trace_events_hist.c 336 */;
	struct field_var_hist *cocci_id/* kernel/trace/trace_events_hist.c 3249 */;
	struct hist_trigger_attrs {
		char *keys_str;
		char *vals_str;
		char *sort_key_str;
		char *name;
		char *clock;
		bool pause;
		bool cont;
		bool clear;
		bool ts_in_usecs;
		unsigned int map_bits;
		char *assignment_str[TRACING_MAP_VARS_MAX];
		unsigned int n_assignments;
		char *action_str[HIST_ACTIONS_MAX];
		unsigned int n_actions;
		struct var_defs var_defs;
	} cocci_id/* kernel/trace/trace_events_hist.c 315 */;
	int cocci_id/* kernel/trace/trace_events_hist.c 3129 */(struct event_command *cmd_ops,
								struct trace_event_file *file,
								char *glob,
								char *cmd,
								char *param);
	struct event_command cocci_id/* kernel/trace/trace_events_hist.c 3128 */;
	struct var_defs {
		unsigned int n_vars;
		char *name[TRACING_MAP_VARS_MAX];
		char *expr[TRACING_MAP_VARS_MAX];
	} cocci_id/* kernel/trace/trace_events_hist.c 309 */;
	struct hist_field *cocci_id/* kernel/trace/trace_events_hist.c 2899 */(struct hist_trigger_data *hist_data,
									       struct trace_event_file *file,
									       char *str,
									       unsigned long flags,
									       char *var_name,
									       unsigned int level);
	enum hist_field_flags{HIST_FIELD_FL_HITCOUNT=1 << 0, HIST_FIELD_FL_KEY=1 << 1, HIST_FIELD_FL_STRING=1 << 2, HIST_FIELD_FL_HEX=1 << 3, HIST_FIELD_FL_SYM=1 << 4, HIST_FIELD_FL_SYM_OFFSET=1 << 5, HIST_FIELD_FL_EXECNAME=1 << 6, HIST_FIELD_FL_SYSCALL=1 << 7, HIST_FIELD_FL_STACKTRACE=1 << 8, HIST_FIELD_FL_LOG2=1 << 9, HIST_FIELD_FL_TIMESTAMP=1 << 10, HIST_FIELD_FL_TIMESTAMP_USECS=1 << 11, HIST_FIELD_FL_VAR=1 << 12, HIST_FIELD_FL_EXPR=1 << 13, HIST_FIELD_FL_VAR_REF=1 << 14, HIST_FIELD_FL_CPU=1 << 15, HIST_FIELD_FL_ALIAS=1 << 16,} cocci_id/* kernel/trace/trace_events_hist.c 289 */;
	 cocci_id/* kernel/trace/trace_events_hist.c 267 */(u32);
	 cocci_id/* kernel/trace/trace_events_hist.c 265 */(u64);
	 cocci_id/* kernel/trace/trace_events_hist.c 264 */(s64);
	type *cocci_id/* kernel/trace/trace_events_hist.c 259 */;
	s64 cocci_id/* kernel/trace/trace_events_hist.c 247 */;
	struct hist_field cocci_id/* kernel/trace/trace_events_hist.c 2465 */;
	void cocci_id/* kernel/trace/trace_events_hist.c 2426 */;
	enum field_op_id cocci_id/* kernel/trace/trace_events_hist.c 2402 */;
	const struct tracing_map_ops cocci_id/* kernel/trace/trace_events_hist.c 2303 */;
	struct task_struct *cocci_id/* kernel/trace/trace_events_hist.c 2220 */;
	hist_field_fn_t cocci_id/* kernel/trace/trace_events_hist.c 1994 */;
	char cocci_id/* kernel/trace/trace_events_hist.c 1975 */[MAX_FILTER_STR_VAL];
	u32 cocci_id/* kernel/trace/trace_events_hist.c 183 */;
	struct hist_var_data *cocci_id/* kernel/trace/trace_events_hist.c 1600 */;
	loff_t *cocci_id/* kernel/trace/trace_events_hist.c 1488 */;
	const char __user *cocci_id/* kernel/trace/trace_events_hist.c 1487 */;
	ssize_t cocci_id/* kernel/trace/trace_events_hist.c 1486 */;
	const struct seq_operations cocci_id/* kernel/trace/trace_events_hist.c 1462 */;
	struct seq_file *cocci_id/* kernel/trace/trace_events_hist.c 1423 */;
	char **cocci_id/* kernel/trace/trace_events_hist.c 1357 */;
	struct synth_event *cocci_id/* kernel/trace/trace_events_hist.c 1292 */;
	struct synth_field *cocci_id/* kernel/trace/trace_events_hist.c 1291 */;
	const char *cocci_id/* kernel/trace/trace_events_hist.c 1289 */;
	const char **cocci_id/* kernel/trace/trace_events_hist.c 1289 */;
	int cocci_id/* kernel/trace/trace_events_hist.c 1289 */;
	struct hist_var_data {
		struct list_head list;
		struct hist_trigger_data *hist_data;
	} cocci_id/* kernel/trace/trace_events_hist.c 1284 */;
	u64 *cocci_id/* kernel/trace/trace_events_hist.c 1277 */;
	struct synth_field **cocci_id/* kernel/trace/trace_events_hist.c 1239 */;
	struct hist_field {
		struct ftrace_event_field *field;
		unsigned long flags;
		hist_field_fn_t fn;
		unsigned int size;
		unsigned int offset;
		unsigned int is_signed;
		const char *type;
		struct hist_field *operands[HIST_FIELD_OPERANDS_MAX];
		struct hist_trigger_data *hist_data;
		struct hist_var var;
		enum field_op_id operator;
		char *system;
		char *event_name;
		char *name;
		unsigned int var_ref_idx;
		bool read_once;
	} cocci_id/* kernel/trace/trace_events_hist.c 115 */;
	struct dyn_event *cocci_id/* kernel/trace/trace_events_hist.c 1143 */;
	synth_probe_func_t cocci_id/* kernel/trace/trace_events_hist.c 1124 */;
	struct tracepoint_func *cocci_id/* kernel/trace/trace_events_hist.c 1123 */;
	void (*cocci_id/* kernel/trace/trace_events_hist.c 1114 */)(void *__data,
								    u64 *var_ref_vals,
								    unsigned int var_ref_idx);
	struct tracepoint *cocci_id/* kernel/trace/trace_events_hist.c 1097 */;
	struct hist_var {
		char *name;
		struct hist_trigger_data *hist_data;
		unsigned int idx;
	} cocci_id/* kernel/trace/trace_events_hist.c 109 */;
	int *cocci_id/* kernel/trace/trace_events_hist.c 1009 */;
}
