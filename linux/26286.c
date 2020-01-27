cocci_test_suite() {
	struct s1 {
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 9 */;
	struct root_struct *cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 60 */;
	int cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 60 */;
	struct root_struct {
		struct s4 s4;
		struct list_head l;
		struct hlist_node n;
		struct hlist_head h;
		struct callback_head cb;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 50 */;
	struct callback_head {
		struct callback_head *next;
		void (*func)(struct callback_head *);
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 45 */;
	struct hlist_head {
		struct hlist_node *first;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 41 */;
	struct hlist_node {
		struct hlist_node *next;
		struct hlist_node **pprev;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 36 */;
	struct list_head {
		struct list_head *next;
		struct list_head *prev;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 31 */;
	struct s4 {
		struct s1 s1;
		struct s3 s3;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 26 */;
	struct s3 {
		struct s1 s1;
		struct s2 s2;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 21 */;
	struct s2 {
		struct s2 *s2;
		struct s3 *s3;
		struct s4 *s4;
	} cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 15 */;
	struct s4 cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 13 */;
	struct s3 cocci_id/* tools/testing/selftests/bpf/progs/btf_dump_test_case_ordering.c 11 */;
}
