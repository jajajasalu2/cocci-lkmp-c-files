cocci_test_suite() {
	int cocci_id/* tools/perf/util/session.c 99 */(struct perf_session *session,
						       union perf_event *event,
						       struct perf_tool *tool,
						       u64 file_offset);
	perf_event__swap_op cocci_id/* tools/perf/util/session.c 917 */[];
	void (*cocci_id/* tools/perf/util/session.c 914 */)(union perf_event *event,
							    bool sample_id_all);
	struct perf_record_record_cpu_map *cocci_id/* tools/perf/util/session.c 855 */;
	struct cpu_map_entries *cocci_id/* tools/perf/util/session.c 854 */;
	struct perf_record_cpu_map_data *cocci_id/* tools/perf/util/session.c 853 */;
	u8 *cocci_id/* tools/perf/util/session.c 762 */;
	struct perf_event_attr *cocci_id/* tools/perf/util/session.c 725 */;
	struct perf_record_compressed cocci_id/* tools/perf/util/session.c 70 */;
	u8 cocci_id/* tools/perf/util/session.c 692 */;
	struct perf_ns_link_info *cocci_id/* tools/perf/util/session.c 682 */;
	struct perf_event_header *cocci_id/* tools/perf/util/session.c 550 */;
	struct decomp cocci_id/* tools/perf/util/session.c 53 */;
	char cocci_id/* tools/perf/util/session.c 371 */[4096];
	int cocci_id/* tools/perf/util/session.c 365 */(struct perf_tool *tool,
							union perf_event *event,
							struct ordered_events *oe);
	struct evlist **cocci_id/* tools/perf/util/session.c 319 */;
	struct id_index_entry *cocci_id/* tools/perf/util/session.c 2423 */;
	struct id_index_entry cocci_id/* tools/perf/util/session.c 2414 */;
	struct perf_record_id_index cocci_id/* tools/perf/util/session.c 2413 */;
	struct perf_record_id_index *cocci_id/* tools/perf/util/session.c 2410 */;
	struct perf_cpu_map *cocci_id/* tools/perf/util/session.c 2353 */;
	unsigned long *cocci_id/* tools/perf/util/session.c 2350 */;
	FILE *cocci_id/* tools/perf/util/session.c 2328 */;
	bool cocci_id/* tools/perf/util/session.c 2309 */(struct dso *dso,
							  int parm);
	struct ref_reloc_sym cocci_id/* tools/perf/util/session.c 2280 */;
	struct kmap *cocci_id/* tools/perf/util/session.c 2278 */;
	struct ref_reloc_sym *cocci_id/* tools/perf/util/session.c 2277 */;
	const char *cocci_id/* tools/perf/util/session.c 2274 */;
	struct map *cocci_id/* tools/perf/util/session.c 2274 */;
	struct ui_progress cocci_id/* tools/perf/util/session.c 2215 */;
	struct perf_tool *cocci_id/* tools/perf/util/session.c 2214 */;
	struct ordered_events *cocci_id/* tools/perf/util/session.c 2213 */;
	struct reader cocci_id/* tools/perf/util/session.c 2207 */;
	struct ui_progress *cocci_id/* tools/perf/util/session.c 2097 */;
	struct reader *cocci_id/* tools/perf/util/session.c 2096 */;
	struct reader {
		int fd;
		u64 data_size;
		u64 data_offset;
		reader_cb_t process;
	} cocci_id/* tools/perf/util/session.c 2088 */;
	s64 (*cocci_id/* tools/perf/util/session.c 2084 */)(struct perf_session *session,
							    union perf_event *event,
							    u64 file_offset);
	struct perf_event_header cocci_id/* tools/perf/util/session.c 2054 */;
	union perf_event *cocci_id/* tools/perf/util/session.c 2046 */;
	struct decomp *cocci_id/* tools/perf/util/session.c 2040 */;
	u64 cocci_id/* tools/perf/util/session.c 2039 */;
	s64 cocci_id/* tools/perf/util/session.c 2038 */;
	struct perf_session *cocci_id/* tools/perf/util/session.c 2036 */;
	int cocci_id/* tools/perf/util/session.c 2036 */;
	char *cocci_id/* tools/perf/util/session.c 2031 */;
	size_t cocci_id/* tools/perf/util/session.c 2031 */;
	union perf_event cocci_id/* tools/perf/util/session.c 1906 */;
	ssize_t cocci_id/* tools/perf/util/session.c 1900 */;
	void *cocci_id/* tools/perf/util/session.c 1897 */;
	uint32_t cocci_id/* tools/perf/util/session.c 1896 */;
	int cocci_id/* tools/perf/util/session.c 1888 */(struct perf_session *session);
	volatile int cocci_id/* tools/perf/util/session.c 1886 */;
	struct perf_data *cocci_id/* tools/perf/util/session.c 187 */;
	struct perf_session cocci_id/* tools/perf/util/session.c 180 */;
	double cocci_id/* tools/perf/util/session.c 1794 */;
	const struct events_stats *cocci_id/* tools/perf/util/session.c 1783 */;
	const struct perf_session *cocci_id/* tools/perf/util/session.c 1781 */;
	struct ordered_event *cocci_id/* tools/perf/util/session.c 178 */;
	const struct ordered_events *cocci_id/* tools/perf/util/session.c 1766 */;
	pid_t cocci_id/* tools/perf/util/session.c 1730 */;
	struct thread *cocci_id/* tools/perf/util/session.c 1730 */;
	char cocci_id/* tools/perf/util/session.c 1666 */[PERF_SAMPLE_MAX_SIZE];
	peek_events_cb_t cocci_id/* tools/perf/util/session.c 1663 */;
	union perf_event **cocci_id/* tools/perf/util/session.c 1609 */;
	off_t cocci_id/* tools/perf/util/session.c 1607 */;
	perf_event__swap_op cocci_id/* tools/perf/util/session.c 1600 */;
	struct perf_sample cocci_id/* tools/perf/util/session.c 1484 */;
	struct machines *cocci_id/* tools/perf/util/session.c 1400 */;
	u16 cocci_id/* tools/perf/util/session.c 139 */;
	struct machine *cocci_id/* tools/perf/util/session.c 1359 */;
	struct evlist *cocci_id/* tools/perf/util/session.c 1355 */;
	struct evsel cocci_id/* tools/perf/util/session.c 1351 */;
	struct perf_sample_id *cocci_id/* tools/perf/util/session.c 1330 */;
	struct sample_read_value *cocci_id/* tools/perf/util/session.c 1327 */;
	u32 cocci_id/* tools/perf/util/session.c 1306 */;
	struct perf_record_read *cocci_id/* tools/perf/util/session.c 1272 */;
	struct stack_dump *cocci_id/* tools/perf/util/session.c 1150 */;
	struct regs_dump *cocci_id/* tools/perf/util/session.c 1122 */;
	const char *cocci_id/* tools/perf/util/session.c 1108 */[];
	u64 *cocci_id/* tools/perf/util/session.c 1096 */;
	unsigned cocci_id/* tools/perf/util/session.c 1088 */;
	unsigned short cocci_id/* tools/perf/util/session.c 1083 */;
	struct branch_entry *cocci_id/* tools/perf/util/session.c 1078 */;
	uint64_t cocci_id/* tools/perf/util/session.c 1071 */;
	bool cocci_id/* tools/perf/util/session.c 1069 */;
	struct perf_sample *cocci_id/* tools/perf/util/session.c 1069 */;
	void cocci_id/* tools/perf/util/session.c 1069 */;
	struct evsel *cocci_id/* tools/perf/util/session.c 1053 */;
	unsigned int cocci_id/* tools/perf/util/session.c 1011 */;
	struct branch_stack *cocci_id/* tools/perf/util/session.c 1009 */;
	struct ip_callchain *cocci_id/* tools/perf/util/session.c 1008 */;
}
