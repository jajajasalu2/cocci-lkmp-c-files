cocci_test_suite() {
	struct evsel *cocci_id/* tools/perf/builtin-timechart.c 943 */;
	struct per_pid {
		struct per_pid *next;
		int pid;
		int ppid;
		u64 start_time;
		u64 end_time;
		u64 total_time;
		u64 total_bytes;
		int display;
		struct per_pidcomm *all;
		struct per_pidcomm *current;
	} cocci_id/* tools/perf/builtin-timechart.c 89 */;
	struct io_sample cocci_id/* tools/perf/builtin-timechart.c 77 */;
	long cocci_id/* tools/perf/builtin-timechart.c 764 */;
	struct cpu_sample cocci_id/* tools/perf/builtin-timechart.c 76 */;
	struct per_pidcomm cocci_id/* tools/perf/builtin-timechart.c 75 */;
	u32 cocci_id/* tools/perf/builtin-timechart.c 598 */;
	tracepoint_handler cocci_id/* tools/perf/builtin-timechart.c 568 */;
	int (*cocci_id/* tools/perf/builtin-timechart.c 547 */)(struct timechart *tchart,
								struct evsel *evsel,
								struct perf_sample *sample,
								const char *backtrace);
	s64 cocci_id/* tools/perf/builtin-timechart.c 521 */;
	struct timechart {
		struct perf_tool tool;
		struct per_pid *all_data;
		struct power_event *power_events;
		struct wake_event *wake_events;
		int proc_num;
		unsigned int numcpus;
		u64 min_freq,max_freq,turbo_frequency,first_time,last_time;
		bool power_only,tasks_only,with_backtrace,topology;
		bool force;
		bool io_only,skip_eagain;
		u64 io_events;
		u64 min_time,merge_dist;
	} cocci_id/* tools/perf/builtin-timechart.c 51 */;
	struct wake_event cocci_id/* tools/perf/builtin-timechart.c 49 */;
	FILE *cocci_id/* tools/perf/builtin-timechart.c 484 */;
	struct ip_callchain *cocci_id/* tools/perf/builtin-timechart.c 483 */;
	u8 cocci_id/* tools/perf/builtin-timechart.c 481 */;
	size_t cocci_id/* tools/perf/builtin-timechart.c 480 */;
	struct power_event cocci_id/* tools/perf/builtin-timechart.c 48 */;
	char *cocci_id/* tools/perf/builtin-timechart.c 479 */;
	unsigned int cocci_id/* tools/perf/builtin-timechart.c 478 */;
	struct addr_location cocci_id/* tools/perf/builtin-timechart.c 477 */;
	struct machine *cocci_id/* tools/perf/builtin-timechart.c 475 */;
	struct perf_sample *cocci_id/* tools/perf/builtin-timechart.c 474 */;
	union perf_event *cocci_id/* tools/perf/builtin-timechart.c 473 */;
	struct per_pid cocci_id/* tools/perf/builtin-timechart.c 47 */;
	FILE *cocci_id/* tools/perf/builtin-timechart.c 41 */(char **ptr,
							      size_t *sizeloc);
	struct power_event *cocci_id/* tools/perf/builtin-timechart.c 355 */;
	u64 cocci_id/* tools/perf/builtin-timechart.c 353 */;
	struct perf_tool *cocci_id/* tools/perf/builtin-timechart.c 313 */;
	int cocci_id/* tools/perf/builtin-timechart.c 309 */[MAX_CPUS];
	u64 cocci_id/* tools/perf/builtin-timechart.c 308 */[MAX_CPUS];
	const char *cocci_id/* tools/perf/builtin-timechart.c 1965 */[];
	const char *const cocci_id/* tools/perf/builtin-timechart.c 1964 */[];
	const struct option cocci_id/* tools/perf/builtin-timechart.c 1931 */[];
	struct timechart cocci_id/* tools/perf/builtin-timechart.c 1918 */;
	const char **cocci_id/* tools/perf/builtin-timechart.c 1916 */;
	struct process_filter {
		char *name;
		int pid;
		struct process_filter *next;
	} cocci_id/* tools/perf/builtin-timechart.c 190 */;
	u64 *cocci_id/* tools/perf/builtin-timechart.c 1896 */;
	char cocci_id/* tools/perf/builtin-timechart.c 1895 */;
	unsigned long cocci_id/* tools/perf/builtin-timechart.c 1879 */;
	int __maybe_unused cocci_id/* tools/perf/builtin-timechart.c 1877 */;
	const struct option *cocci_id/* tools/perf/builtin-timechart.c 1876 */;
	struct wake_event {
		struct wake_event *next;
		int waker;
		int wakee;
		u64 time;
		const char *backtrace;
	} cocci_id/* tools/perf/builtin-timechart.c 182 */;
	struct power_event {
		struct power_event *next;
		int type;
		int state;
		u64 start_time;
		u64 end_time;
		int cpu;
	} cocci_id/* tools/perf/builtin-timechart.c 173 */;
	double cocci_id/* tools/perf/builtin-timechart.c 1635 */;
	void cocci_id/* tools/perf/builtin-timechart.c 1610 */;
	struct perf_session *cocci_id/* tools/perf/builtin-timechart.c 1601 */;
	struct perf_data cocci_id/* tools/perf/builtin-timechart.c 1595 */;
	struct io_sample {
		struct io_sample *next;
		u64 start_time;
		u64 end_time;
		u64 bytes;
		int type;
		int fd;
		int err;
		int merges;
	} cocci_id/* tools/perf/builtin-timechart.c 158 */;
	const struct evsel_str_handler cocci_id/* tools/perf/builtin-timechart.c 1534 */[];
	const char *cocci_id/* tools/perf/builtin-timechart.c 1532 */;
	struct timechart *cocci_id/* tools/perf/builtin-timechart.c 1532 */;
	int cocci_id/* tools/perf/builtin-timechart.c 1532 */;
	void *cocci_id/* tools/perf/builtin-timechart.c 1508 */;
	struct perf_header *cocci_id/* tools/perf/builtin-timechart.c 1505 */;
	struct perf_file_section *cocci_id/* tools/perf/builtin-timechart.c 1504 */;
	enum{IOTYPE_READ, IOTYPE_WRITE, IOTYPE_SYNC, IOTYPE_TX, IOTYPE_RX, IOTYPE_POLL,} cocci_id/* tools/perf/builtin-timechart.c 149 */;
	struct per_pidcomm *cocci_id/* tools/perf/builtin-timechart.c 1419 */;
	struct per_pid *cocci_id/* tools/perf/builtin-timechart.c 1418 */;
	struct cpu_sample {
		struct cpu_sample *next;
		u64 start_time;
		u64 end_time;
		int type;
		int cpu;
		const char *backtrace;
	} cocci_id/* tools/perf/builtin-timechart.c 139 */;
	struct process_filter *cocci_id/* tools/perf/builtin-timechart.c 1306 */;
	struct sample_wrapper {
		struct sample_wrapper *next;
		u64 timestamp;
		unsigned char data[0];
	} cocci_id/* tools/perf/builtin-timechart.c 127 */;
	struct io_sample *cocci_id/* tools/perf/builtin-timechart.c 1138 */;
	char cocci_id/* tools/perf/builtin-timechart.c 1135 */[256];
	struct cpu_sample *cocci_id/* tools/perf/builtin-timechart.c 1107 */;
	struct per_pidcomm {
		struct per_pidcomm *next;
		u64 start_time;
		u64 end_time;
		u64 total_time;
		u64 max_bytes;
		u64 total_bytes;
		int Y;
		int display;
		long state;
		u64 state_since;
		char *comm;
		struct cpu_sample *samples;
		struct io_sample *io_samples;
	} cocci_id/* tools/perf/builtin-timechart.c 106 */;
	struct wake_event *cocci_id/* tools/perf/builtin-timechart.c 1037 */;
}
