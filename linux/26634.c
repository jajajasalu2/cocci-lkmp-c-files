cocci_test_suite() {
	struct pfect_lru {
		struct list_head list;
		struct pfect_lru_node *free_nodes;
		unsigned int cur_size;
		unsigned int lru_size;
		unsigned int nr_unique;
		unsigned int nr_misses;
		unsigned int total;
		int map_fd;
	} cocci_id/* samples/bpf/test_lru_dist.c 94 */;
	struct pfect_lru_node {
		struct list_head list;
		unsigned long long key;
	} cocci_id/* samples/bpf/test_lru_dist.c 89 */;
	const char *cocci_id/* samples/bpf/test_lru_dist.c 494 */;
	int cocci_id/* samples/bpf/test_lru_dist.c 493 */[];
	struct rlimit cocci_id/* samples/bpf/test_lru_dist.c 492 */;
	char **cocci_id/* samples/bpf/test_lru_dist.c 490 */;
	const struct list_head *cocci_id/* samples/bpf/test_lru_dist.c 46 */;
	int *cocci_id/* samples/bpf/test_lru_dist.c 427 */;
	const unsigned int cocci_id/* samples/bpf/test_lru_dist.c 424 */;
	struct list_head *cocci_id/* samples/bpf/test_lru_dist.c 40 */;
	void cocci_id/* samples/bpf/test_lru_dist.c 40 */;
	struct list_head {
		struct list_head *next,*prev;
	} cocci_id/* samples/bpf/test_lru_dist.c 36 */;
	unsigned long long *cocci_id/* samples/bpf/test_lru_dist.c 33 */;
	int cocci_id/* samples/bpf/test_lru_dist.c 313 */[2];
	type cocci_id/* samples/bpf/test_lru_dist.c 30 */;
	type *cocci_id/* samples/bpf/test_lru_dist.c 30 */;
	const typeof(((type *)0)->member) *cocci_id/* samples/bpf/test_lru_dist.c 29 */;
	unsigned int *cocci_id/* samples/bpf/test_lru_dist.c 276 */;
	struct pfect_lru cocci_id/* samples/bpf/test_lru_dist.c 272 */;
	void *cocci_id/* samples/bpf/test_lru_dist.c 269 */;
	TYPE *cocci_id/* samples/bpf/test_lru_dist.c 26 */;
	size_t cocci_id/* samples/bpf/test_lru_dist.c 26 */;
	pid_t cocci_id/* samples/bpf/test_lru_dist.c 242 */[tasks];
	void (*cocci_id/* samples/bpf/test_lru_dist.c 238 */)(int i,
							      void *data);
	cpu_set_t cocci_id/* samples/bpf/test_lru_dist.c 223 */;
	unsigned long long cocci_id/* samples/bpf/test_lru_dist.c 212 */;
	unsigned int cocci_id/* samples/bpf/test_lru_dist.c 208 */;
	int cocci_id/* samples/bpf/test_lru_dist.c 208 */;
	char *cocci_id/* samples/bpf/test_lru_dist.c 177 */;
	struct stat cocci_id/* samples/bpf/test_lru_dist.c 173 */;
	unsigned long long **cocci_id/* samples/bpf/test_lru_dist.c 171 */;
	struct pfect_lru *cocci_id/* samples/bpf/test_lru_dist.c 123 */;
	struct pfect_lru_node cocci_id/* samples/bpf/test_lru_dist.c 114 */;
	struct pfect_lru_node *cocci_id/* samples/bpf/test_lru_dist.c 110 */;
}
