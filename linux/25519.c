cocci_test_suite() {
	struct perf_record_compressed cocci_id/* tools/perf/builtin-record.c 991 */;
	struct perf_record_compressed *cocci_id/* tools/perf/builtin-record.c 973 */;
	size_t cocci_id/* tools/perf/builtin-record.c 971 */;
	struct mmap *cocci_id/* tools/perf/builtin-record.c 961 */;
	struct perf_event_header cocci_id/* tools/perf/builtin-record.c 956 */;
	void *cocci_id/* tools/perf/builtin-record.c 927 */;
	struct record cocci_id/* tools/perf/builtin-record.c 883 */;
	struct evsel *cocci_id/* tools/perf/builtin-record.c 880 */;
	struct record {
		struct perf_tool tool;
		struct record_opts opts;
		u64 bytes_written;
		struct perf_data data;
		struct auxtrace_record *itr;
		struct evlist *evlist;
		struct perf_session *session;
		int realtime_prio;
		bool no_buildid;
		bool no_buildid_set;
		bool no_buildid_cache;
		bool no_buildid_cache_set;
		bool buildid_all;
		bool timestamp_filename;
		bool timestamp_boundary;
		struct switch_output switch_output;
		unsigned long long samples;
		cpu_set_t affinity_mask;
		unsigned long output_max_size;
	} cocci_id/* tools/perf/builtin-record.c 78 */;
	char cocci_id/* tools/perf/builtin-record.c 762 */[512];
	char cocci_id/* tools/perf/builtin-record.c 743 */[PATH_MAX];
	struct auxtrace_record *cocci_id/* tools/perf/builtin-record.c 707 */;
	struct switch_output {
		bool enabled;
		bool signal;
		unsigned long size;
		unsigned long time;
		const char *str;
		bool set;
		char **filenames;
		int num_files;
		int cur_file;
	} cocci_id/* tools/perf/builtin-record.c 66 */;
	u8 cocci_id/* tools/perf/builtin-record.c 556 */[8];
	unsigned int cocci_id/* tools/perf/builtin-record.c 471 */;
	struct record_aio cocci_id/* tools/perf/builtin-record.c 327 */;
	off_t *cocci_id/* tools/perf/builtin-record.c 323 */;
	struct record_aio *cocci_id/* tools/perf/builtin-record.c 280 */;
	struct record_aio {
		struct record *rec;
		void *data;
		size_t size;
	} cocci_id/* tools/perf/builtin-record.c 272 */;
	const struct aiocb **cocci_id/* tools/perf/builtin-record.c 265 */;
	void cocci_id/* tools/perf/builtin-record.c 2637 */;
	char *cocci_id/* tools/perf/builtin-record.c 2488 */;
	struct option *cocci_id/* tools/perf/builtin-record.c 2405 */;
	struct aiocb **cocci_id/* tools/perf/builtin-record.c 239 */;
	struct option cocci_id/* tools/perf/builtin-record.c 2240 */[];
	const char cocci_id/* tools/perf/builtin-record.c 2228 */[];
	struct perf_sample *cocci_id/* tools/perf/builtin-record.c 2169 */;
	const char *const *cocci_id/* tools/perf/builtin-record.c 2166 */;
	const char *const cocci_id/* tools/perf/builtin-record.c 2161 */[];
	struct switch_output *cocci_id/* tools/perf/builtin-record.c 2108 */;
	char cocci_id/* tools/perf/builtin-record.c 2097 */[100];
	struct parse_tag cocci_id/* tools/perf/builtin-record.c 2023 */[];
	unsigned long *cocci_id/* tools/perf/builtin-record.c 2022 */;
	ssize_t cocci_id/* tools/perf/builtin-record.c 197 */;
	const struct clockid_map *cocci_id/* tools/perf/builtin-record.c 1965 */;
	const struct option *cocci_id/* tools/perf/builtin-record.c 1962 */;
	struct timespec cocci_id/* tools/perf/builtin-record.c 1951 */;
	clockid_t cocci_id/* tools/perf/builtin-record.c 1949 */;
	u64 *cocci_id/* tools/perf/builtin-record.c 1949 */;
	off_t cocci_id/* tools/perf/builtin-record.c 194 */;
	const struct clockid_map cocci_id/* tools/perf/builtin-record.c 1930 */[];
	struct aiocb *cocci_id/* tools/perf/builtin-record.c 191 */;
	struct clockid_map {
		const char *name;
		int clockid;
	} cocci_id/* tools/perf/builtin-record.c 1906 */;
	const char *cocci_id/* tools/perf/builtin-record.c 1820 */[CALLCHAIN_MAX];
	struct callchain_param *cocci_id/* tools/perf/builtin-record.c 1818 */;
	char cocci_id/* tools/perf/builtin-record.c 1788 */[128];
	const char *cocci_id/* tools/perf/builtin-record.c 1731 */;
	char cocci_id/* tools/perf/builtin-record.c 1730 */[STRERR_BUFSIZE];
	unsigned long long cocci_id/* tools/perf/builtin-record.c 1626 */;
	size_t cocci_id/* tools/perf/builtin-record.c 162 */(struct perf_session *session,
							     void *dst,
							     size_t dst_size,
							     void *src,
							     size_t src_size);
	int cocci_id/* tools/perf/builtin-record.c 160 */(struct record *rec);
	struct perf_ns_link_info cocci_id/* tools/perf/builtin-record.c 1598 */;
	pid_t cocci_id/* tools/perf/builtin-record.c 1574 */;
	union perf_event *cocci_id/* tools/perf/builtin-record.c 1573 */;
	struct machine *cocci_id/* tools/perf/builtin-record.c 1572 */;
	struct sched_param cocci_id/* tools/perf/builtin-record.c 1550 */;
	char cocci_id/* tools/perf/builtin-record.c 1499 */[BUFSIZ];
	float cocci_id/* tools/perf/builtin-record.c 1414 */;
	struct evlist *cocci_id/* tools/perf/builtin-record.c 1412 */;
	bool cocci_id/* tools/perf/builtin-record.c 1411 */;
	struct perf_session *cocci_id/* tools/perf/builtin-record.c 1410 */;
	struct perf_data *cocci_id/* tools/perf/builtin-record.c 1409 */;
	struct record_opts *cocci_id/* tools/perf/builtin-record.c 1408 */;
	struct perf_tool *cocci_id/* tools/perf/builtin-record.c 1407 */;
	const bool cocci_id/* tools/perf/builtin-record.c 1406 */;
	unsigned long cocci_id/* tools/perf/builtin-record.c 1405 */;
	struct record *cocci_id/* tools/perf/builtin-record.c 1401 */;
	const char **cocci_id/* tools/perf/builtin-record.c 1401 */;
	int cocci_id/* tools/perf/builtin-record.c 1401 */;
	struct perf_data_file *cocci_id/* tools/perf/builtin-record.c 138 */;
	const struct perf_event_mmap_page *cocci_id/* tools/perf/builtin-record.c 1254 */;
	void cocci_id/* tools/perf/builtin-record.c 1252 */(int sig);
	siginfo_t *cocci_id/* tools/perf/builtin-record.c 1243 */;
	char cocci_id/* tools/perf/builtin-record.c 1173 */[];
	int cocci_id/* tools/perf/builtin-record.c 1163 */(struct record *rec,
							   bool tail);
	struct perf_thread_map *cocci_id/* tools/perf/builtin-record.c 1146 */;
	const char *cocci_id/* tools/perf/builtin-record.c 106 */[PERF_AFFINITY_MAX];
	volatile int cocci_id/* tools/perf/builtin-record.c 102 */;
	u64 cocci_id/* tools/perf/builtin-record.c 1005 */;
}
