cocci_test_suite() {
	struct rb_node **cocci_id/* drivers/base/regmap/regcache-rbtree.c 99 */;
	struct rb_root *cocci_id/* drivers/base/regmap/regcache-rbtree.c 96 */;
	struct regcache_ops cocci_id/* drivers/base/regmap/regcache-rbtree.c 542 */;
	unsigned int *cocci_id/* drivers/base/regmap/regcache-rbtree.c 42 */;
	struct regcache_rbtree_ctx {
		struct rb_root root;
		struct regcache_rbtree_node *cached_rbnode;
	} cocci_id/* drivers/base/regmap/regcache-rbtree.c 34 */;
	const struct regmap_range *cocci_id/* drivers/base/regmap/regcache-rbtree.c 321 */;
	u8 *cocci_id/* drivers/base/regmap/regcache-rbtree.c 272 */;
	unsigned long *cocci_id/* drivers/base/regmap/regcache-rbtree.c 271 */;
	struct regcache_rbtree_node {
		void *block;
		long *cache_present;
		unsigned int base_reg;
		unsigned int blklen;
		struct rb_node node;
	} cocci_id/* drivers/base/regmap/regcache-rbtree.c 21 */;
	int cocci_id/* drivers/base/regmap/regcache-rbtree.c 19 */(struct regmap *map);
	struct regmap *cocci_id/* drivers/base/regmap/regcache-rbtree.c 178 */;
	void cocci_id/* drivers/base/regmap/regcache-rbtree.c 178 */;
	int cocci_id/* drivers/base/regmap/regcache-rbtree.c 17 */(struct regmap *map,
								   unsigned int reg,
								   unsigned int value);
	long cocci_id/* drivers/base/regmap/regcache-rbtree.c 153 */;
	struct regcache_rbtree_node cocci_id/* drivers/base/regmap/regcache-rbtree.c 150 */;
	size_t cocci_id/* drivers/base/regmap/regcache-rbtree.c 139 */;
	unsigned int cocci_id/* drivers/base/regmap/regcache-rbtree.c 138 */;
	struct rb_node *cocci_id/* drivers/base/regmap/regcache-rbtree.c 137 */;
	struct regcache_rbtree_node *cocci_id/* drivers/base/regmap/regcache-rbtree.c 136 */;
	struct regcache_rbtree_ctx *cocci_id/* drivers/base/regmap/regcache-rbtree.c 135 */;
	struct seq_file *cocci_id/* drivers/base/regmap/regcache-rbtree.c 132 */;
	void *cocci_id/* drivers/base/regmap/regcache-rbtree.c 132 */;
	int cocci_id/* drivers/base/regmap/regcache-rbtree.c 132 */;
}
