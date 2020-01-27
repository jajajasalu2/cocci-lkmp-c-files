cocci_test_suite() {
	struct objagg_hints_node cocci_id/* lib/objagg.c 958 */;
	const struct objagg_opt_algo *cocci_id/* lib/objagg.c 943 */;
	enum objagg_opt_algo_type cocci_id/* lib/objagg.c 941 */;
	const char *cocci_id/* lib/objagg.c 916 */;
	struct objagg_hints cocci_id/* lib/objagg.c 914 */;
	struct rhashtable *cocci_id/* lib/objagg.c 912 */;
	const void *cocci_id/* lib/objagg.c 910 */;
	struct rhashtable_compare_arg *cocci_id/* lib/objagg.c 909 */;
	const struct objagg_opt_algo *cocci_id/* lib/objagg.c 905 */[];
	const struct objagg_opt_algo cocci_id/* lib/objagg.c 900 */;
	struct objagg_opt_algo {
		int (*fillup_hints)(struct objagg_hints *objagg_hints,
				    struct objagg *objagg);
	} cocci_id/* lib/objagg.c 895 */;
	struct objagg_tmp_node *cocci_id/* lib/objagg.c 847 */;
	struct objagg_tmp_graph *cocci_id/* lib/objagg.c 846 */;
	unsigned long cocci_id/* lib/objagg.c 797 */;
	struct objagg_tmp_graph {
		struct objagg_tmp_node *nodes;
		unsigned long nodes_count;
		unsigned long *edges;
	} cocci_id/* lib/objagg.c 704 */;
	struct objagg_tmp_node {
		struct objagg_obj *objagg_obj;
		bool crossed_out;
	} cocci_id/* lib/objagg.c 699 */;
	struct objagg_hints_node *cocci_id/* lib/objagg.c 689 */;
	unsigned int cocci_id/* lib/objagg.c 653 */;
	size_t cocci_id/* lib/objagg.c 650 */;
	const struct objagg_obj_stats_info *cocci_id/* lib/objagg.c 575 */;
	struct objagg_obj {
		struct rhash_head ht_node;
		struct list_head list;
		struct objagg_obj *parent;
		union {
			void *delta_priv;
			void *root_priv;
		};
		unsigned int root_id;
		unsigned int refcount;
		struct objagg_obj_stats stats;
		unsigned long obj[0];
	} cocci_id/* lib/objagg.c 54 */;
	struct objagg_obj cocci_id/* lib/objagg.c 537 */;
	int cocci_id/* lib/objagg.c 518 */;
	struct objagg_hints *cocci_id/* lib/objagg.c 515 */;
	const struct objagg_ops *cocci_id/* lib/objagg.c 514 */;
	void cocci_id/* lib/objagg.c 462 */;
	struct objagg {
		const struct objagg_ops *ops;
		void *priv;
		struct rhashtable obj_ht;
		struct rhashtable_params ht_params;
		struct list_head obj_list;
		unsigned int obj_count;
		struct ida root_ida;
		struct objagg_hints *hints;
	} cocci_id/* lib/objagg.c 43 */;
	struct objagg_obj *cocci_id/* lib/objagg.c 397 */;
	struct objagg *cocci_id/* lib/objagg.c 397 */;
	void *cocci_id/* lib/objagg.c 397 */;
	bool cocci_id/* lib/objagg.c 334 */;
	bool *cocci_id/* lib/objagg.c 297 */;
	struct objagg_obj *cocci_id/* lib/objagg.c 293 */(struct objagg *objagg,
							  void *obj);
	struct objagg_hints_node {
		struct rhash_head ht_node;
		struct list_head list;
		struct objagg_hints_node *parent;
		unsigned int root_id;
		struct objagg_obj_stats_info stats_info;
		unsigned long obj[0];
	} cocci_id/* lib/objagg.c 25 */;
	void cocci_id/* lib/objagg.c 208 */(struct objagg *objagg,
					    struct objagg_obj *objagg_obj);
	struct objagg_hints {
		struct rhashtable node_ht;
		struct rhashtable_params ht_params;
		struct list_head node_list;
		unsigned int node_count;
		unsigned int root_count;
		unsigned int refcount;
		const struct objagg_ops *ops;
	} cocci_id/* lib/objagg.c 15 */;
	const struct objagg_obj *cocci_id/* lib/objagg.c 136 */;
	struct objagg_obj_stats_info cocci_id/* lib/objagg.c 1045 */;
	struct objagg_stats *cocci_id/* lib/objagg.c 1024 */;
	const struct objagg_stats *cocci_id/* lib/objagg.c 1021 */;
}
