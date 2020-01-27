cocci_test_suite() {
	const struct tokey *cocci_id/* lib/test_objagg.c 92 */;
	const struct hints_case *cocci_id/* lib/test_objagg.c 909 */;
	bool cocci_id/* lib/test_objagg.c 90 */;
	const void *cocci_id/* lib/test_objagg.c 90 */;
	void *cocci_id/* lib/test_objagg.c 90 */;
	struct objagg_hints *cocci_id/* lib/test_objagg.c 894 */;
	void cocci_id/* lib/test_objagg.c 860 */;
	const struct hints_case cocci_id/* lib/test_objagg.c 847 */;
	const unsigned int cocci_id/* lib/test_objagg.c 843 */[];
	struct hints_case {
		const unsigned int *key_ids;
		size_t key_ids_count;
		struct expect_stats expect_stats;
		struct expect_stats expect_stats_hints;
	} cocci_id/* lib/test_objagg.c 836 */;
	struct world cocci_id/* lib/test_objagg.c 809 */;
	const char *cocci_id/* lib/test_objagg.c 767 */;
	enum action cocci_id/* lib/test_objagg.c 765 */;
	struct objagg *cocci_id/* lib/test_objagg.c 740 */;
	const char **cocci_id/* lib/test_objagg.c 711 */;
	const struct expect_stats *cocci_id/* lib/test_objagg.c 710 */;
	const struct objagg_stats *cocci_id/* lib/test_objagg.c 709 */;
	int cocci_id/* lib/test_objagg.c 709 */;
	const struct expect_stats_info *cocci_id/* lib/test_objagg.c 667 */;
	const struct objagg_obj_stats_info *cocci_id/* lib/test_objagg.c 666 */;
	const struct delta *cocci_id/* lib/test_objagg.c 629 */;
	struct objagg_obj *cocci_id/* lib/test_objagg.c 626 */;
	unsigned int cocci_id/* lib/test_objagg.c 563 */;
	const struct action_item *cocci_id/* lib/test_objagg.c 562 */;
	struct world *cocci_id/* lib/test_objagg.c 561 */;
	const struct action_item cocci_id/* lib/test_objagg.c 431 */[];
	struct delta {
		unsigned int key_id_diff;
	} cocci_id/* lib/test_objagg.c 42 */;
	struct action_item {
		unsigned int key_id;
		enum action action;
		enum expect_delta expect_delta;
		enum expect_root expect_root;
		struct expect_stats expect_stats;
	} cocci_id/* lib/test_objagg.c 411 */;
	struct expect_stats {
		unsigned int info_count;
		struct expect_stats_info info[NUM_KEYS];
	} cocci_id/* lib/test_objagg.c 406 */;
	struct expect_stats_info {
		struct objagg_obj_stats stats;
		bool is_root;
		unsigned int key_id;
	} cocci_id/* lib/test_objagg.c 400 */;
	enum expect_root{EXPECT_ROOT_SAME, EXPECT_ROOT_INC, EXPECT_ROOT_DEC,} cocci_id/* lib/test_objagg.c 394 */;
	enum expect_delta{EXPECT_DELTA_SAME, EXPECT_DELTA_INC, EXPECT_DELTA_DEC,} cocci_id/* lib/test_objagg.c 388 */;
	enum action{ACTION_GET, ACTION_PUT,} cocci_id/* lib/test_objagg.c 383 */;
	struct tokey cocci_id/* lib/test_objagg.c 375 */;
	const struct objagg_ops cocci_id/* lib/test_objagg.c 374 */;
	struct root {
		struct tokey key;
		char buf[BUF_LEN];
	} cocci_id/* lib/test_objagg.c 37 */;
	struct world {
		unsigned int root_count;
		unsigned int delta_count;
		char next_root_buf[BUF_LEN];
		struct objagg_obj *objagg_objs[NUM_KEYS];
		unsigned int key_refs[NUM_KEYS];
	} cocci_id/* lib/test_objagg.c 29 */;
	const struct root *cocci_id/* lib/test_objagg.c 156 */;
	struct root *cocci_id/* lib/test_objagg.c 131 */;
	struct tokey {
		unsigned int id;
	} cocci_id/* lib/test_objagg.c 12 */;
	struct delta *cocci_id/* lib/test_objagg.c 105 */;
	void __exit cocci_id/* lib/test_objagg.c 1013 */;
	struct tokey *cocci_id/* lib/test_objagg.c 101 */;
	int __init cocci_id/* lib/test_objagg.c 1000 */;
}
