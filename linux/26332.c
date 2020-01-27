cocci_test_suite() {
	struct hmap_elem {
		volatile int cnt;
		struct bpf_spin_lock lock;
		int test_padding;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 7 */;
	struct cls_elem *cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 55 */;
	struct bpf_vqueue *cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 54 */;
	unsigned long long cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 53 */;
	struct hmap_elem cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 52 */;
	volatile int cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 51 */;
	struct __sk_buff *cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 49 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 49 */;
	vqueue cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 44 */(".maps");
	struct bpf_vqueue {
		struct bpf_spin_lock lock;
		unsigned long long lasttime;
		int credit;
		unsigned int rate;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 31 */;
	cls_map cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 29 */(".maps");
	struct cls_elem {
		struct bpf_spin_lock lock;
		volatile int cnt;
	} cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 20 */;
	hmap cocci_id/* tools/testing/selftests/bpf/progs/test_spin_lock.c 18 */(".maps");
}
