cocci_test_suite() {
	void __exit cocci_id/* drivers/base/swnode.c 825 */;
	int __init cocci_id/* drivers/base/swnode.c 816 */;
	struct device *cocci_id/* drivers/base/swnode.c 773 */;
	unsigned long cocci_id/* drivers/base/swnode.c 773 */;
	void cocci_id/* drivers/base/swnode.c 755 */;
	int cocci_id/* drivers/base/swnode.c 729 */;
	struct swnode *cocci_id/* drivers/base/swnode.c 728 */;
	struct software_node *cocci_id/* drivers/base/swnode.c 727 */;
	const struct fwnode_handle *cocci_id/* drivers/base/swnode.c 725 */;
	const struct property_entry *cocci_id/* drivers/base/swnode.c 724 */;
	struct fwnode_handle *cocci_id/* drivers/base/swnode.c 723 */;
	struct kobj_type cocci_id/* drivers/base/swnode.c 605 */;
	struct kobject *cocci_id/* drivers/base/swnode.c 555 */;
	const struct software_node *cocci_id/* drivers/base/swnode.c 551 */;
	const struct software_node_reference *cocci_id/* drivers/base/swnode.c 486 */;
	struct fwnode_reference_args *cocci_id/* drivers/base/swnode.c 483 */;
	struct swnode cocci_id/* drivers/base/swnode.c 456 */;
	typeof(__fwnode) cocci_id/* drivers/base/swnode.c 44 */;
	const struct swnode *cocci_id/* drivers/base/swnode.c 402 */;
	bool cocci_id/* drivers/base/swnode.c 36 */;
	const struct fwnode_operations cocci_id/* drivers/base/swnode.c 34 */;
	struct kset *cocci_id/* drivers/base/swnode.c 30 */;
	struct property_entry *cocci_id/* drivers/base/swnode.c 299 */;
	const void *cocci_id/* drivers/base/swnode.c 250 */;
	size_t cocci_id/* drivers/base/swnode.c 227 */;
	const char **cocci_id/* drivers/base/swnode.c 225 */;
	const char *const *cocci_id/* drivers/base/swnode.c 222 */;
	void *cocci_id/* drivers/base/swnode.c 149 */;
	unsigned int cocci_id/* drivers/base/swnode.c 149 */;
	struct swnode {
		int id;
		struct kobject kobj;
		struct fwnode_handle fwnode;
		const struct software_node *node;
		struct ida child_ids;
		struct list_head entry;
		struct list_head children;
		struct swnode *parent;
		unsigned int allocated:1;
	} cocci_id/* drivers/base/swnode.c 14 */;
	const char *cocci_id/* drivers/base/swnode.c 136 */;
}
