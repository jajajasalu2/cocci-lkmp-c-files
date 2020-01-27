cocci_test_suite() {
	off_t cocci_id/* tools/perf/util/s390-cpumsf.c 970 */;
	struct auxtrace_buffer *cocci_id/* tools/perf/util/s390-cpumsf.c 969 */;
	union perf_event *cocci_id/* tools/perf/util/s390-cpumsf.c 961 */;
	struct s390_cpumsf_synth {
		struct perf_tool cpumsf_tool;
		struct perf_session *session;
	} cocci_id/* tools/perf/util/s390-cpumsf.c 954 */;
	struct evsel *cocci_id/* tools/perf/util/s390-cpumsf.c 920 */;
	u64 cocci_id/* tools/perf/util/s390-cpumsf.c 919 */;
	char cocci_id/* tools/perf/util/s390-cpumsf.c 888 */[MAX_AUXTRACE_ERROR_MSG];
	pid_t cocci_id/* tools/perf/util/s390-cpumsf.c 886 */;
	struct s390_cpumsf_queue cocci_id/* tools/perf/util/s390-cpumsf.c 771 */;
	unsigned int cocci_id/* tools/perf/util/s390-cpumsf.c 767 */;
	u64 *cocci_id/* tools/perf/util/s390-cpumsf.c 693 */;
	s64 cocci_id/* tools/perf/util/s390-cpumsf.c 624 */;
	struct hws_trailer_entry *cocci_id/* tools/perf/util/s390-cpumsf.c 548 */;
	const unsigned char *cocci_id/* tools/perf/util/s390-cpumsf.c 546 */;
	unsigned long long cocci_id/* tools/perf/util/s390-cpumsf.c 546 */;
	struct perf_event_header cocci_id/* tools/perf/util/s390-cpumsf.c 533 */;
	union perf_event cocci_id/* tools/perf/util/s390-cpumsf.c 514 */;
	struct perf_sample cocci_id/* tools/perf/util/s390-cpumsf.c 506 */;
	struct hws_trailer_entry cocci_id/* tools/perf/util/s390-cpumsf.c 474 */;
	unsigned short cocci_id/* tools/perf/util/s390-cpumsf.c 438 */;
	unsigned char *cocci_id/* tools/perf/util/s390-cpumsf.c 433 */;
	void cocci_id/* tools/perf/util/s390-cpumsf.c 432 */;
	unsigned short *cocci_id/* tools/perf/util/s390-cpumsf.c 372 */;
	const unsigned long long cocci_id/* tools/perf/util/s390-cpumsf.c 327 */;
	struct hws_diag_entry cocci_id/* tools/perf/util/s390-cpumsf.c 292 */;
	struct hws_diag_entry *cocci_id/* tools/perf/util/s390-cpumsf.c 288 */;
	unsigned long long *cocci_id/* tools/perf/util/s390-cpumsf.c 249 */;
	struct hws_basic_entry cocci_id/* tools/perf/util/s390-cpumsf.c 248 */;
	struct hws_basic_entry *cocci_id/* tools/perf/util/s390-cpumsf.c 244 */;
	size_t cocci_id/* tools/perf/util/s390-cpumsf.c 229 */;
	char *cocci_id/* tools/perf/util/s390-cpumsf.c 211 */;
	struct auxtrace_queue *cocci_id/* tools/perf/util/s390-cpumsf.c 199 */;
	struct s390_cpumsf_queue *cocci_id/* tools/perf/util/s390-cpumsf.c 198 */;
	struct perf_sample *cocci_id/* tools/perf/util/s390-cpumsf.c 196 */;
	struct s390_cpumsf *cocci_id/* tools/perf/util/s390-cpumsf.c 195 */;
	int cocci_id/* tools/perf/util/s390-cpumsf.c 195 */;
	struct s390_cpumsf_queue {
		struct s390_cpumsf *sf;
		unsigned int queue_nr;
		struct auxtrace_buffer *buffer;
		int cpu;
		FILE *logfile;
		FILE *logfile_ctr;
	} cocci_id/* tools/perf/util/s390-cpumsf.c 181 */;
	struct s390_cpumsf {
		struct auxtrace auxtrace;
		struct auxtrace_queues queues;
		struct auxtrace_heap heap;
		struct perf_session *session;
		struct machine *machine;
		u32 auxtrace_type;
		u32 pmu_type;
		u16 machine_type;
		bool data_queued;
		bool use_logfile;
		char *logdir;
	} cocci_id/* tools/perf/util/s390-cpumsf.c 167 */;
	struct perf_record_auxtrace_info cocci_id/* tools/perf/util/s390-cpumsf.c 1115 */;
	struct perf_record_auxtrace_info *cocci_id/* tools/perf/util/s390-cpumsf.c 1111 */;
	struct stat cocci_id/* tools/perf/util/s390-cpumsf.c 1088 */;
	const char *cocci_id/* tools/perf/util/s390-cpumsf.c 1085 */;
	void *cocci_id/* tools/perf/util/s390-cpumsf.c 1085 */;
	bool cocci_id/* tools/perf/util/s390-cpumsf.c 1063 */;
	struct itrace_synth_opts *cocci_id/* tools/perf/util/s390-cpumsf.c 1063 */;
	struct s390_cpumsf cocci_id/* tools/perf/util/s390-cpumsf.c 1040 */;
	struct auxtrace_queues *cocci_id/* tools/perf/util/s390-cpumsf.c 1015 */;
	struct perf_tool *cocci_id/* tools/perf/util/s390-cpumsf.c 1005 */;
	struct perf_session *cocci_id/* tools/perf/util/s390-cpumsf.c 1004 */;
}