cocci_test_suite() {
	struct nsim_bus_dev *cocci_id/* drivers/net/netdevsim/dev.c 893 */;
	char cocci_id/* drivers/net/netdevsim/dev.c 76 */[16];
	const struct file_operations cocci_id/* drivers/net/netdevsim/dev.c 68 */;
	void cocci_id/* drivers/net/netdevsim/dev.c 668 */;
	struct devlink_port *cocci_id/* drivers/net/netdevsim/dev.c 626 */;
	struct nsim_dev_port *cocci_id/* drivers/net/netdevsim/dev.c 625 */;
	unsigned int cocci_id/* drivers/net/netdevsim/dev.c 623 */;
	struct nsim_dev *cocci_id/* drivers/net/netdevsim/dev.c 622 */;
	int cocci_id/* drivers/net/netdevsim/dev.c 622 */;
	const struct devlink_ops cocci_id/* drivers/net/netdevsim/dev.c 610 */;
	struct nsim_trap_item *cocci_id/* drivers/net/netdevsim/dev.c 597 */;
	enum devlink_trap_action cocci_id/* drivers/net/netdevsim/dev.c 594 */;
	const struct devlink_trap *cocci_id/* drivers/net/netdevsim/dev.c 593 */;
	struct devlink *cocci_id/* drivers/net/netdevsim/dev.c 592 */;
	void *cocci_id/* drivers/net/netdevsim/dev.c 576 */;
	struct nsim_trap_data *cocci_id/* drivers/net/netdevsim/dev.c 563 */;
	u16 cocci_id/* drivers/net/netdevsim/dev.c 561 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/netdevsim/dev.c 526 */;
	const char *cocci_id/* drivers/net/netdevsim/dev.c 524 */;
	struct devlink_info_req *cocci_id/* drivers/net/netdevsim/dev.c 514 */;
	bool cocci_id/* drivers/net/netdevsim/dev.c 480 */;
	u32 cocci_id/* drivers/net/netdevsim/dev.c 48 */;
	void cocci_id/* drivers/net/netdevsim/dev.c 478 */(struct nsim_dev *nsim_dev);
	int cocci_id/* drivers/net/netdevsim/dev.c 476 */(struct nsim_dev *nsim_dev,
							  struct netlink_ext_ack *extack);
	struct nsim_trap_item cocci_id/* drivers/net/netdevsim/dev.c 431 */;
	loff_t *cocci_id/* drivers/net/netdevsim/dev.c 43 */;
	size_t cocci_id/* drivers/net/netdevsim/dev.c 43 */;
	const char __user *cocci_id/* drivers/net/netdevsim/dev.c 42 */;
	struct file *cocci_id/* drivers/net/netdevsim/dev.c 41 */;
	ssize_t cocci_id/* drivers/net/netdevsim/dev.c 41 */;
	struct nsim_trap_data cocci_id/* drivers/net/netdevsim/dev.c 400 */;
	struct work_struct *cocci_id/* drivers/net/netdevsim/dev.c 394 */;
	struct dentry *cocci_id/* drivers/net/netdevsim/dev.c 37 */;
	struct sk_buff *cocci_id/* drivers/net/netdevsim/dev.c 367 */;
	unsigned char *cocci_id/* drivers/net/netdevsim/dev.c 344 */;
	struct ethhdr cocci_id/* drivers/net/netdevsim/dev.c 327 */;
	struct udphdr cocci_id/* drivers/net/netdevsim/dev.c 324 */;
	struct iphdr cocci_id/* drivers/net/netdevsim/dev.c 324 */;
	struct iphdr *cocci_id/* drivers/net/netdevsim/dev.c 319 */;
	struct ethhdr *cocci_id/* drivers/net/netdevsim/dev.c 318 */;
	struct udphdr *cocci_id/* drivers/net/netdevsim/dev.c 317 */;
	const struct devlink_trap cocci_id/* drivers/net/netdevsim/dev.c 298 */[];
	enum{NSIM_TRAP_ID_BASE=DEVLINK_TRAP_GENERIC_ID_MAX, NSIM_TRAP_ID_FID_MISS,} cocci_id/* drivers/net/netdevsim/dev.c 275 */;
	struct nsim_trap_data {
		struct delayed_work trap_report_dw;
		struct nsim_trap_item *trap_items_arr;
		struct nsim_dev *nsim_dev;
		spinlock_t trap_lock;
	} cocci_id/* drivers/net/netdevsim/dev.c 265 */;
	struct nsim_trap_item {
		void *trap_ctx;
		enum devlink_trap_action action;
	} cocci_id/* drivers/net/netdevsim/dev.c 260 */;
	union devlink_param_value cocci_id/* drivers/net/netdevsim/dev.c 228 */;
	const struct devlink_param cocci_id/* drivers/net/netdevsim/dev.c 200 */[];
	enum nsim_devlink_param_id{NSIM_DEVLINK_PARAM_ID_BASE=DEVLINK_PARAM_GENERIC_ID_MAX, NSIM_DEVLINK_PARAM_ID_TEST1,} cocci_id/* drivers/net/netdevsim/dev.c 195 */;
	struct devlink_resource_size_params cocci_id/* drivers/net/netdevsim/dev.c 132 */;
	char cocci_id/* drivers/net/netdevsim/dev.c 110 */[32];
}