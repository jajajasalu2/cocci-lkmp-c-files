cocci_test_suite() {
	size_t cocci_id/* lib/assoc_array.c 483 */;
	struct assoc_array_walk_result *cocci_id/* lib/assoc_array.c 477 */;
	const struct assoc_array_ptr *cocci_id/* lib/assoc_array.c 310 */;
	const struct assoc_array_node *cocci_id/* lib/assoc_array.c 309 */;
	const struct assoc_array *cocci_id/* lib/assoc_array.c 304 */;
	const struct assoc_array_shortcut *cocci_id/* lib/assoc_array.c 25 */;
	int (*cocci_id/* lib/assoc_array.c 21 */)(const void *leaf,
						  void *iterator_data);
	enum assoc_array_walk_status cocci_id/* lib/assoc_array.c 169 */;
	struct assoc_array_walk_result {
		struct {
			struct assoc_array_node *node;
			int level;
			int slot;
		} terminal_node;
		struct {
			struct assoc_array_shortcut *shortcut;
			int level;
			int sc_level;
			unsigned long sc_segments;
			unsigned long dissimilarity;
		} wrong_shortcut;
	} cocci_id/* lib/assoc_array.c 151 */;
	struct assoc_array_shortcut cocci_id/* lib/assoc_array.c 1493 */;
	unsigned long cocci_id/* lib/assoc_array.c 1464 */;
	bool (*cocci_id/* lib/assoc_array.c 1456 */)(void *object,
						     void *iterator_data);
	enum assoc_array_walk_status{assoc_array_walk_tree_empty, assoc_array_walk_found_terminal_node, assoc_array_walk_found_wrong_shortcut,} cocci_id/* lib/assoc_array.c 145 */;
	int cocci_id/* lib/assoc_array.c 1351 */;
	struct assoc_array_ptr *cocci_id/* lib/assoc_array.c 1350 */;
	struct assoc_array_node *cocci_id/* lib/assoc_array.c 1349 */;
	struct assoc_array_shortcut *cocci_id/* lib/assoc_array.c 1348 */;
	struct assoc_array_edit *cocci_id/* lib/assoc_array.c 1346 */;
	void cocci_id/* lib/assoc_array.c 1346 */;
	int (*cocci_id/* lib/assoc_array.c 134 */)(const void *object,
						   void *iterator_data);
	struct rcu_head *cocci_id/* lib/assoc_array.c 1301 */;
	struct assoc_array_edit cocci_id/* lib/assoc_array.c 1285 */;
	const struct assoc_array_ops *cocci_id/* lib/assoc_array.c 1276 */;
	struct assoc_array *cocci_id/* lib/assoc_array.c 1275 */;
	struct assoc_array_node cocci_id/* lib/assoc_array.c 1210 */;
	bool cocci_id/* lib/assoc_array.c 1088 */;
	struct assoc_array_walk_result cocci_id/* lib/assoc_array.c 1084 */;
	struct assoc_array_delete_collapse_context cocci_id/* lib/assoc_array.c 1083 */;
	const void *cocci_id/* lib/assoc_array.c 1081 */;
	struct assoc_array_delete_collapse_context *cocci_id/* lib/assoc_array.c 1049 */;
	void *cocci_id/* lib/assoc_array.c 1047 */;
	struct assoc_array_delete_collapse_context {
		struct assoc_array_node *node;
		const void *skip_leaf;
		int slot;
	} cocci_id/* lib/assoc_array.c 1037 */;
}
