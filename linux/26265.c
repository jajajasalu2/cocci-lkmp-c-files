cocci_test_suite() {
	struct hmap_elem {
		struct bpf_spin_lock lock;
		int var[VAR_NUM];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_map_lock.c 9 */;
	struct array_elem *cocci_id/* tools/testing/selftests/bpf/progs/test_map_lock.c 39 */;
	struct hmap_elem cocci_id/* tools/testing/selftests/bpf/progs/test_map_lock.c 36 */;
	struct __sk_buff *cocci_id/* tools/testing/selftests/bpf/progs/test_map_lock.c 34 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_map_lock.c 34 */;
	array_map cocci_id/* tools/testing/selftests/bpf/progs/test_map_lock.c 31 */(".maps");
	struct array_elem {
		struct bpf_spin_lock lock;
		int var[VAR_NUM];
	} cocci_id/* tools/testing/selftests/bpf/progs/test_map_lock.c 21 */;
	hash_map cocci_id/* tools/testing/selftests/bpf/progs/test_map_lock.c 19 */(".maps");
}
