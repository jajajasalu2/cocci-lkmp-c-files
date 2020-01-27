cocci_test_suite() {
	void cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 783 */;
	pthread_t cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 758 */[4];
	struct lpm_mt_test_info cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 756 */[4];
	__u32 cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 708 */;
	struct bpf_lpm_trie_key cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 708 */;
	struct bpf_lpm_trie_key *cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 706 */;
	struct lpm_mt_test_info *cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 705 */;
	int cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 704 */;
	void *cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 702 */;
	struct lpm_mt_test_info {
		int cmd;
		int iter;
		int map_fd;
		struct {
			__u32 prefixlen;
			__u32 data;
		} key[MAX_TEST_KEYS];
	} cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 692 */;
	__u64 cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 429 */;
	size_t cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 427 */;
	const uint8_t *cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 42 */;
	struct tlpm_node *cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 37 */(struct tlpm_node *list,
										      const uint8_t *key,
										      size_t n_bits);
	struct tlpm_node {
		struct tlpm_node *next;
		size_t n_bits;
		uint8_t key[];
	} cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 31 */;
	uint8_t *cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 214 */;
	uint8_t cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 144 */[];
	struct tlpm_node *cocci_id/* tools/testing/selftests/bpf/test_lpm_map.c 140 */;
}
