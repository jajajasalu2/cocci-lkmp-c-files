cocci_test_suite() {
	struct bpf_map_priv {
		struct list_head ops_list;
	} cocci_id/* tools/perf/util/bpf-loader.c 827 */;
	struct bpf_map_op {
		struct list_head list;
		enum bpf_map_op_type op_type;
		enum bpf_map_key_type key_type;
		union {
			struct parse_events_array array;
		} k;
		union {
			u64 value;
			struct evsel *evsel;
		} v;
	} cocci_id/* tools/perf/util/bpf-loader.c 814 */;
	enum bpf_map_key_type{BPF_MAP_KEY_ALL, BPF_MAP_KEY_RANGES,} cocci_id/* tools/perf/util/bpf-loader.c 809 */;
	enum bpf_map_op_type{BPF_MAP_OP_SET_VALUE, BPF_MAP_OP_SET_EVSEL,} cocci_id/* tools/perf/util/bpf-loader.c 804 */;
	struct perf_probe_event *cocci_id/* tools/perf/util/bpf-loader.c 759 */;
	struct probe_trace_event *cocci_id/* tools/perf/util/bpf-loader.c 758 */;
	struct bpf_prog_priv *cocci_id/* tools/perf/util/bpf-loader.c 757 */;
	struct bpf_program *cocci_id/* tools/perf/util/bpf-loader.c 753 */;
	bpf_prog_iter_callback_t cocci_id/* tools/perf/util/bpf-loader.c 750 */;
	char cocci_id/* tools/perf/util/bpf-loader.c 741 */[128];
	struct strfilter *cocci_id/* tools/perf/util/bpf-loader.c 710 */;
	char cocci_id/* tools/perf/util/bpf-loader.c 709 */[EVENTS_WRITE_BUFSIZE];
	struct bpf_insn cocci_id/* tools/perf/util/bpf-loader.c 611 */;
	struct probe_trace_event **cocci_id/* tools/perf/util/bpf-loader.c 534 */;
	struct probe_trace_arg_ref *cocci_id/* tools/perf/util/bpf-loader.c 497 */;
	struct probe_trace_arg *cocci_id/* tools/perf/util/bpf-loader.c 496 */;
	const struct probe_trace_event **cocci_id/* tools/perf/util/bpf-loader.c 487 */;
	const struct probe_trace_event *cocci_id/* tools/perf/util/bpf-loader.c 486 */;
	const void *cocci_id/* tools/perf/util/bpf-loader.c 483 */;
	struct bpf_prog_prep_result *cocci_id/* tools/perf/util/bpf-loader.c 420 */;
	struct bpf_insn *cocci_id/* tools/perf/util/bpf-loader.c 419 */;
	struct bpf_prog_priv {
		bool is_tp;
		char *sys_name;
		char *evt_name;
		struct perf_probe_event pev;
		bool need_prologue;
		struct bpf_insn *insns_buf;
		int nr_types;
		int *type_mapping;
	} cocci_id/* tools/perf/util/bpf-loader.c 38 */;
	va_list cocci_id/* tools/perf/util/bpf-loader.c 33 */;
	enum libbpf_print_level cocci_id/* tools/perf/util/bpf-loader.c 32 */;
	bool *cocci_id/* tools/perf/util/bpf-loader.c 284 */;
	const char **cocci_id/* tools/perf/util/bpf-loader.c 283 */;
	struct {
		const char *key;
		const char *usage;
		const char *desc;
		int (*func)(const char *, struct perf_probe_event *);
	} cocci_id/* tools/perf/util/bpf-loader.c 186 */[];
	char cocci_id/* tools/perf/util/bpf-loader.c 1645 */[STRERR_BUFSIZE];
	const char *cocci_id/* tools/perf/util/bpf-loader.c 1616 */[NR_ERRNO];
	struct bpf_map_priv *cocci_id/* tools/perf/util/bpf-loader.c 1531 */;
	void cocci_id/* tools/perf/util/bpf-loader.c 1505 */;
	struct bpf_object *cocci_id/* tools/perf/util/bpf-loader.c 1492 */;
	unsigned int *cocci_id/* tools/perf/util/bpf-loader.c 1445 */;
	int *cocci_id/* tools/perf/util/bpf-loader.c 1413 */;
	bool cocci_id/* tools/perf/util/bpf-loader.c 1412 */;
	struct perf_event_attr *cocci_id/* tools/perf/util/bpf-loader.c 1410 */;
	struct xyarray *cocci_id/* tools/perf/util/bpf-loader.c 1409 */;
	void *cocci_id/* tools/perf/util/bpf-loader.c 1406 */;
	u32 cocci_id/* tools/perf/util/bpf-loader.c 1388 */;
	u16 cocci_id/* tools/perf/util/bpf-loader.c 1383 */;
	u8 cocci_id/* tools/perf/util/bpf-loader.c 1378 */;
	u64 cocci_id/* tools/perf/util/bpf-loader.c 1372 */;
	size_t cocci_id/* tools/perf/util/bpf-loader.c 1372 */;
	map_config_func_t cocci_id/* tools/perf/util/bpf-loader.c 1310 */;
	int (*cocci_id/* tools/perf/util/bpf-loader.c 1256 */)(const char *name,
							       int map_fd,
							       const struct bpf_map_def *pdef,
							       struct bpf_map_op *op,
							       void *pkey,
							       void *arg);
	struct bpf_obj_config__map_func *cocci_id/* tools/perf/util/bpf-loader.c 1214 */;
	char *cocci_id/* tools/perf/util/bpf-loader.c 1179 */;
	struct parse_events_array *cocci_id/* tools/perf/util/bpf-loader.c 1140 */;
	struct bpf_obj_config__map_func cocci_id/* tools/perf/util/bpf-loader.c 1130 */[];
	struct bpf_obj_config__map_func {
		const char *config_opt;
		int (*config_func)(struct bpf_map *,
				   struct parse_events_term *,
				   struct evlist *);
	} cocci_id/* tools/perf/util/bpf-loader.c 1124 */;
	const char *cocci_id/* tools/perf/util/bpf-loader.c 1072 */;
	struct bpf_map_op *cocci_id/* tools/perf/util/bpf-loader.c 1071 */;
	const struct bpf_map_def *cocci_id/* tools/perf/util/bpf-loader.c 1070 */;
	struct evsel *cocci_id/* tools/perf/util/bpf-loader.c 1069 */;
	struct evlist *cocci_id/* tools/perf/util/bpf-loader.c 1067 */;
	struct parse_events_term *cocci_id/* tools/perf/util/bpf-loader.c 1066 */;
	struct bpf_map *cocci_id/* tools/perf/util/bpf-loader.c 1065 */;
	int cocci_id/* tools/perf/util/bpf-loader.c 1064 */;
	unsigned int cocci_id/* tools/perf/util/bpf-loader.c 1023 */;
}
