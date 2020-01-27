cocci_test_suite() {
	struct netconsole_target {
		struct list_head list;
#ifdef	CONFIG_NETCONSOLE_DYNAMIC
		struct config_item item;
#endif
		bool enabled;
		bool extended;
		struct netpoll np;
	} cocci_id/* drivers/net/netconsole.c 96 */;
	void __exit cocci_id/* drivers/net/netconsole.c 943 */;
	void cocci_id/* drivers/net/netconsole.c 943 */;
	struct console cocci_id/* drivers/net/netconsole.c 875 */;
	unsigned int cocci_id/* drivers/net/netconsole.c 820 */;
	struct console *cocci_id/* drivers/net/netconsole.c 819 */;
	char cocci_id/* drivers/net/netconsole.c 772 */[MAX_PRINT_CHUNK];
	struct notifier_block cocci_id/* drivers/net/netconsole.c 755 */;
	void *cocci_id/* drivers/net/netconsole.c 692 */;
	struct notifier_block *cocci_id/* drivers/net/netconsole.c 691 */;
	const struct config_item_type cocci_id/* drivers/net/netconsole.c 673 */;
	struct configfs_group_operations cocci_id/* drivers/net/netconsole.c 668 */;
	unsigned long cocci_id/* drivers/net/netconsole.c 651 */;
	struct config_group *cocci_id/* drivers/net/netconsole.c 648 */;
	struct configfs_item_operations cocci_id/* drivers/net/netconsole.c 603 */;
	struct configfs_attribute *cocci_id/* drivers/net/netconsole.c 581 */[];
	u8 cocci_id/* drivers/net/netconsole.c 549 */[ETH_ALEN];
	char cocci_id/* drivers/net/netconsole.c 47 */[MAX_PARAM_LENGTH];
	size_t cocci_id/* drivers/net/netconsole.c 403 */;
	const char *cocci_id/* drivers/net/netconsole.c 402 */;
	bool cocci_id/* drivers/net/netconsole.c 327 */;
	const u8 cocci_id/* drivers/net/netconsole.c 294 */[ETH_ALEN];
	struct net_device *cocci_id/* drivers/net/netconsole.c 293 */;
	struct config_item *cocci_id/* drivers/net/netconsole.c 256 */;
	ssize_t cocci_id/* drivers/net/netconsole.c 256 */;
	struct netconsole_target cocci_id/* drivers/net/netconsole.c 238 */;
	int cocci_id/* drivers/net/netconsole.c 168 */;
	struct netconsole_target *cocci_id/* drivers/net/netconsole.c 166 */;
	char *cocci_id/* drivers/net/netconsole.c 166 */;
	int __init cocci_id/* drivers/net/netconsole.c 111 */;
	struct configfs_subsystem cocci_id/* drivers/net/netconsole.c 108 */;
}
