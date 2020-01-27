cocci_test_suite() {
	size_t cocci_id/* tools/perf/util/data-convert-bt.c 939 */;
	char *cocci_id/* tools/perf/util/data-convert-bt.c 936 */;
	struct convert {
		struct perf_tool tool;
		struct ctf_writer writer;
		u64 events_size;
		u64 events_count;
		u64 non_sample_count;
		u64 queue_size;
	} cocci_id/* tools/perf/util/data-convert-bt.c 83 */;
	struct machine *cocci_id/* tools/perf/util/data-convert-bt.c 790 */;
	union perf_event *cocci_id/* tools/perf/util/data-convert-bt.c 787 */;
	struct perf_tool *cocci_id/* tools/perf/util/data-convert-bt.c 786 */;
	struct ctf_stream *cocci_id/* tools/perf/util/data-convert-bt.c 744 */;
	struct bt_ctf_stream *cocci_id/* tools/perf/util/data-convert-bt.c 686 */;
	u64 *cocci_id/* tools/perf/util/data-convert-bt.c 562 */;
	struct ctf_writer {
		struct bt_ctf_writer *writer;
		struct ctf_stream **stream;
		int stream_cnt;
		struct bt_ctf_stream_class *stream_class;
		struct bt_ctf_clock *clock;
		union {
			struct {
				struct bt_ctf_field_type *s64;
				struct bt_ctf_field_type *u64;
				struct bt_ctf_field_type *s32;
				struct bt_ctf_field_type *u32;
				struct bt_ctf_field_type *string;
				struct bt_ctf_field_type *u32_hex;
				struct bt_ctf_field_type *u64_hex;
			};
			struct bt_ctf_field_type *array[6];
		} data;
		struct bt_ctf_event_class *comm_class;
		struct bt_ctf_event_class *exit_class;
		struct bt_ctf_event_class *fork_class;
		struct bt_ctf_event_class *mmap_class;
		struct bt_ctf_event_class *mmap2_class;
	} cocci_id/* tools/perf/util/data-convert-bt.c 55 */;
	struct ip_callchain *cocci_id/* tools/perf/util/data-convert-bt.c 514 */;
	struct ctf_stream {
		struct bt_ctf_stream *stream;
		int cpu;
		u32 count;
	} cocci_id/* tools/perf/util/data-convert-bt.c 49 */;
	u32 *cocci_id/* tools/perf/util/data-convert-bt.c 487 */;
	u32 cocci_id/* tools/perf/util/data-convert-bt.c 441 */;
	unsigned int cocci_id/* tools/perf/util/data-convert-bt.c 440 */;
	struct bt_ctf_field *cocci_id/* tools/perf/util/data-convert-bt.c 439 */;
	struct perf_sample *cocci_id/* tools/perf/util/data-convert-bt.c 436 */;
	struct bt_ctf_event *cocci_id/* tools/perf/util/data-convert-bt.c 435 */;
	struct evsel_priv {
		struct bt_ctf_event_class *event_class;
	} cocci_id/* tools/perf/util/data-convert-bt.c 43 */;
	unsigned long long cocci_id/* tools/perf/util/data-convert-bt.c 311 */;
	unsigned long cocci_id/* tools/perf/util/data-convert-bt.c 297 */;
	void *cocci_id/* tools/perf/util/data-convert-bt.c 296 */;
	struct tep_format_field *cocci_id/* tools/perf/util/data-convert-bt.c 290 */;
	char cocci_id/* tools/perf/util/data-convert-bt.c 260 */[5];
	double cocci_id/* tools/perf/util/data-convert-bt.c 1659 */;
	struct convert cocci_id/* tools/perf/util/data-convert-bt.c 1585 */;
	struct perf_data cocci_id/* tools/perf/util/data-convert-bt.c 1580 */;
	struct perf_session *cocci_id/* tools/perf/util/data-convert-bt.c 1579 */;
	struct perf_data_convert_opts *cocci_id/* tools/perf/util/data-convert-bt.c 1577 */;
	struct convert *cocci_id/* tools/perf/util/data-convert-bt.c 1568 */;
	int cocci_id/* tools/perf/util/data-convert-bt.c 154 */(struct bt_ctf_field *field,
								const char *string);
	struct bt_ctf_clock *cocci_id/* tools/perf/util/data-convert-bt.c 1488 */;
	struct bt_ctf_stream_class *cocci_id/* tools/perf/util/data-convert-bt.c 1487 */;
	struct bt_ctf_writer *cocci_id/* tools/perf/util/data-convert-bt.c 1486 */;
	bool cocci_id/* tools/perf/util/data-convert-bt.c 1406 */;
	_val_type cocci_id/* tools/perf/util/data-convert-bt.c 140 */;
	struct perf_header *cocci_id/* tools/perf/util/data-convert-bt.c 1363 */;
	struct ctf_stream **cocci_id/* tools/perf/util/data-convert-bt.c 1329 */;
	struct evlist *cocci_id/* tools/perf/util/data-convert-bt.c 1312 */;
	void cocci_id/* tools/perf/util/data-convert-bt.c 1310 */;
	const char *cocci_id/* tools/perf/util/data-convert-bt.c 1158 */;
	struct evsel_priv *cocci_id/* tools/perf/util/data-convert-bt.c 1157 */;
	struct evsel *cocci_id/* tools/perf/util/data-convert-bt.c 1154 */;
	u64 cocci_id/* tools/perf/util/data-convert-bt.c 1091 */;
	struct bt_ctf_field_type *cocci_id/* tools/perf/util/data-convert-bt.c 1072 */;
	struct bt_ctf_event_class *cocci_id/* tools/perf/util/data-convert-bt.c 1070 */;
	struct ctf_writer *cocci_id/* tools/perf/util/data-convert-bt.c 1069 */;
	int cocci_id/* tools/perf/util/data-convert-bt.c 1069 */;
}
