cocci_test_suite() {
	struct seq_file *cocci_id/* drivers/base/component.c 90 */;
	struct dentry *cocci_id/* drivers/base/component.c 88 */;
	struct component {
		struct list_head node;
		struct master *master;
		bool bound;
		const struct component_ops *ops;
		int subcomponent;
		struct device *dev;
	} cocci_id/* drivers/base/component.c 72 */;
	struct component *cocci_id/* drivers/base/component.c 667 */;
	const struct component_ops *cocci_id/* drivers/base/component.c 664 */;
	struct device *cocci_id/* drivers/base/component.c 664 */;
	int cocci_id/* drivers/base/component.c 664 */;
	struct master {
		struct list_head node;
		bool bound;
		const struct component_master_ops *ops;
		struct device *dev;
		struct component_match *match;
		struct dentry *dentry;
	} cocci_id/* drivers/base/component.c 62 */;
	struct component_match {
		size_t alloc;
		size_t num;
		struct component_match_array *compare;
	} cocci_id/* drivers/base/component.c 56 */;
	struct component_match_array {
		void *data;
		int (*compare)(struct device *, void *);
		int (*compare_typed)(struct device *, int, void *);
		void (*release)(struct device *, void *);
		struct component *component;
		bool duplicate;
	} cocci_id/* drivers/base/component.c 47 */;
	struct component cocci_id/* drivers/base/component.c 45 */;
	size_t cocci_id/* drivers/base/component.c 362 */;
	struct component_match *cocci_id/* drivers/base/component.c 343 */;
	void *cocci_id/* drivers/base/component.c 341 */;
	int (*cocci_id/* drivers/base/component.c 340 */)(struct device *,
							  int, void *);
	int (*cocci_id/* drivers/base/component.c 339 */)(struct device *,
							  void *);
	void (*cocci_id/* drivers/base/component.c 338 */)(struct device *,
							   void *);
	struct component_match **cocci_id/* drivers/base/component.c 337 */;
	void cocci_id/* drivers/base/component.c 336 */;
	struct component_match_array *cocci_id/* drivers/base/component.c 316 */;
	unsigned int cocci_id/* drivers/base/component.c 296 */;
	const struct component_master_ops *cocci_id/* drivers/base/component.c 151 */;
	struct master *cocci_id/* drivers/base/component.c 150 */;
	int __init cocci_id/* drivers/base/component.c 118 */;
}
