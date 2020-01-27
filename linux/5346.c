cocci_test_suite() {
	const struct attribute_group *cocci_id/* drivers/base/node.c 995 */[];
	struct attribute_group cocci_id/* drivers/base/node.c 991 */;
	struct node_attr cocci_id/* drivers/base/node.c 968 */[];
	struct node_attr cocci_id/* drivers/base/node.c 961 */;
	struct node_attr *cocci_id/* drivers/base/node.c 961 */;
	struct node_attr {
		struct device_attribute attr;
		enum node_states state;
	} cocci_id/* drivers/base/node.c 953 */;
	enum node_states cocci_id/* drivers/base/node.c 942 */;
	struct node cocci_id/* drivers/base/node.c 909 */;
	int cocci_id/* drivers/base/node.c 904 */;
	const struct attribute_group cocci_id/* drivers/base/node.c 89 */;
	struct memory_notify *cocci_id/* drivers/base/node.c 865 */;
	struct notifier_block *cocci_id/* drivers/base/node.c 862 */;
	struct work_struct *cocci_id/* drivers/base/node.c 841 */;
	void *cocci_id/* drivers/base/node.c 832 */;
	struct node_access_nodes cocci_id/* drivers/base/node.c 79 */;
	int *cocci_id/* drivers/base/node.c 765 */;
	struct memory_block *cocci_id/* drivers/base/node.c 759 */;
	unsigned long cocci_id/* drivers/base/node.c 747 */;
	int __ref cocci_id/* drivers/base/node.c 747 */;
	struct node_access_nodes {
		struct device dev;
		struct list_head list_node;
		unsigned access;
#ifdef CONFIG_HMEM_REPORTING
		struct node_hmem_attrs hmem_attrs;
#endif
	} cocci_id/* drivers/base/node.c 71 */;
	struct node *cocci_id/* drivers/base/node.c 649 */[MAX_NUMNODES];
	void cocci_id/* drivers/base/node.c 584 */;
	bool cocci_id/* drivers/base/node.c 561 */;
	struct node *cocci_id/* drivers/base/node.c 561 */;
	node_registration_func_t cocci_id/* drivers/base/node.c 558 */;
	struct device_attribute *cocci_id/* drivers/base/node.c 55 */;
	char *cocci_id/* drivers/base/node.c 55 */;
	ssize_t cocci_id/* drivers/base/node.c 54 */;
	struct sysinfo cocci_id/* drivers/base/node.c 367 */;
	struct pglist_data *cocci_id/* drivers/base/node.c 366 */;
	cpumask_var_t cocci_id/* drivers/base/node.c 33 */;
	struct node_cache_info *cocci_id/* drivers/base/node.c 289 */;
	struct node_cache_attrs *cocci_id/* drivers/base/node.c 287 */;
	unsigned int cocci_id/* drivers/base/node.c 287 */;
	struct bus_type cocci_id/* drivers/base/node.c 24 */;
	struct node_cache_info cocci_id/* drivers/base/node.c 221 */;
	struct node_cache_info {
		struct device dev;
		struct list_head node;
		struct node_cache_attrs cache_attrs;
	} cocci_id/* drivers/base/node.c 216 */;
	struct node_hmem_attrs *cocci_id/* drivers/base/node.c 184 */;
	struct attribute *cocci_id/* drivers/base/node.c 170 */[];
	unsigned cocci_id/* drivers/base/node.c 121 */;
	struct node_access_nodes *cocci_id/* drivers/base/node.c 120 */;
	struct device *cocci_id/* drivers/base/node.c 115 */;
	struct notifier_block cocci_id/* drivers/base/node.c 1010 */;
	int __init cocci_id/* drivers/base/node.c 1001 */;
}
