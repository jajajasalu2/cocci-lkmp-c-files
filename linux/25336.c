cocci_test_suite() {
	void cocci_id/* tools/perf/tests/mmap-thread-lookup.c 99 */;
	ssize_t cocci_id/* tools/perf/tests/mmap-thread-lookup.c 90 */;
	void *cocci_id/* tools/perf/tests/mmap-thread-lookup.c 54 */;
	struct thread_data cocci_id/* tools/perf/tests/mmap-thread-lookup.c 32 */[THREADS];
	struct thread_data {
		pthread_t pt;
		pid_t tid;
		void *map;
		int ready[2];
	} cocci_id/* tools/perf/tests/mmap-thread-lookup.c 25 */;
	int cocci_id/* tools/perf/tests/mmap-thread-lookup.c 23 */;
	struct test *cocci_id/* tools/perf/tests/mmap-thread-lookup.c 227 */;
	unsigned long cocci_id/* tools/perf/tests/mmap-thread-lookup.c 195 */;
	struct thread *cocci_id/* tools/perf/tests/mmap-thread-lookup.c 188 */;
	struct addr_location cocci_id/* tools/perf/tests/mmap-thread-lookup.c 187 */;
	struct thread_data *cocci_id/* tools/perf/tests/mmap-thread-lookup.c 186 */;
	struct machine *cocci_id/* tools/perf/tests/mmap-thread-lookup.c 158 */;
	synth_cb cocci_id/* tools/perf/tests/mmap-thread-lookup.c 156 */;
	struct perf_thread_map *cocci_id/* tools/perf/tests/mmap-thread-lookup.c 143 */;
	int (*cocci_id/* tools/perf/tests/mmap-thread-lookup.c 132 */)(struct machine *machine);
}
