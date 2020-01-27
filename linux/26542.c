cocci_test_suite() {
	struct event_pipe_ctx *cocci_id/* tools/bpf/bpftool/map_perf_ring.c 74 */;
	struct perf_event_lost cocci_id/* tools/bpf/bpftool/map_perf_ring.c 72 */;
	struct perf_event_lost *cocci_id/* tools/bpf/bpftool/map_perf_ring.c 71 */;
	struct perf_event_sample cocci_id/* tools/bpf/bpftool/map_perf_ring.c 69 */;
	struct perf_event_sample *cocci_id/* tools/bpf/bpftool/map_perf_ring.c 68 */;
	struct perf_event_header *cocci_id/* tools/bpf/bpftool/map_perf_ring.c 66 */;
	void *cocci_id/* tools/bpf/bpftool/map_perf_ring.c 66 */;
	enum bpf_perf_event_ret cocci_id/* tools/bpf/bpftool/map_perf_ring.c 65 */;
	struct event_pipe_ctx {
		bool all_cpus;
		int cpu;
		int idx;
	} cocci_id/* tools/bpf/bpftool/map_perf_ring.c 59 */;
	void cocci_id/* tools/bpf/bpftool/map_perf_ring.c 53 */;
	struct perf_event_lost {
		struct perf_event_header header;
		__u64 id;
		__u64 lost;
	} cocci_id/* tools/bpf/bpftool/map_perf_ring.c 47 */;
	struct perf_event_sample {
		struct perf_event_header header;
		u64 time;
		__u32 size;
		unsigned char data[];
	} cocci_id/* tools/bpf/bpftool/map_perf_ring.c 40 */;
	struct event_ring_info {
		int fd;
		int key;
		unsigned int cpu;
		void *mem;
	} cocci_id/* tools/bpf/bpftool/map_perf_ring.c 33 */;
	volatile bool cocci_id/* tools/bpf/bpftool/map_perf_ring.c 31 */;
	char *cocci_id/* tools/bpf/bpftool/map_perf_ring.c 155 */;
	__u32 cocci_id/* tools/bpf/bpftool/map_perf_ring.c 135 */;
	struct perf_buffer *cocci_id/* tools/bpf/bpftool/map_perf_ring.c 134 */;
	struct event_pipe_ctx cocci_id/* tools/bpf/bpftool/map_perf_ring.c 129 */;
	struct perf_buffer_raw_opts cocci_id/* tools/bpf/bpftool/map_perf_ring.c 128 */;
	struct bpf_map_info cocci_id/* tools/bpf/bpftool/map_perf_ring.c 127 */;
	struct perf_event_attr cocci_id/* tools/bpf/bpftool/map_perf_ring.c 120 */;
	char **cocci_id/* tools/bpf/bpftool/map_perf_ring.c 118 */;
	int cocci_id/* tools/bpf/bpftool/map_perf_ring.c 118 */;
}
