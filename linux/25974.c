cocci_test_suite() {
	char *cocci_id/* tools/testing/selftests/vm/gup_benchmark.c 37 */;
	unsigned long cocci_id/* tools/testing/selftests/vm/gup_benchmark.c 34 */;
	struct gup_benchmark cocci_id/* tools/testing/selftests/vm/gup_benchmark.c 33 */;
	char **cocci_id/* tools/testing/selftests/vm/gup_benchmark.c 31 */;
	int cocci_id/* tools/testing/selftests/vm/gup_benchmark.c 31 */;
	struct gup_benchmark {
		__u64 get_delta_usec;
		__u64 put_delta_usec;
		__u64 addr;
		__u64 size;
		__u32 nr_pages_per_call;
		__u32 flags;
		__u64 expansion[10];
	} cocci_id/* tools/testing/selftests/vm/gup_benchmark.c 21 */;
}
