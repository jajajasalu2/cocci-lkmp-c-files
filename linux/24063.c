cocci_test_suite() {
	switchdev_deferred_func_t *cocci_id/* net/switchdev/switchdev.c 83 */;
	const void *cocci_id/* net/switchdev/switchdev.c 82 */;
	size_t cocci_id/* net/switchdev/switchdev.c 82 */;
	struct work_struct *cocci_id/* net/switchdev/switchdev.c 72 */;
	struct list_head *cocci_id/* net/switchdev/switchdev.c 562 */;
	int (*cocci_id/* net/switchdev/switchdev.c 557 */)(struct net_device *dev,
							   const struct switchdev_attr *attr,
							   struct switchdev_trans *trans);
	bool (*cocci_id/* net/switchdev/switchdev.c 556 */)(const struct net_device *dev);
	struct switchdev_notifier_port_attr_info *cocci_id/* net/switchdev/switchdev.c 555 */;
	struct net_device *cocci_id/* net/switchdev/switchdev.c 554 */;
	int cocci_id/* net/switchdev/switchdev.c 554 */;
	int (*cocci_id/* net/switchdev/switchdev.c 508 */)(struct net_device *dev,
							   const struct switchdev_obj *obj);
	struct netlink_ext_ack *cocci_id/* net/switchdev/switchdev.c 456 */;
	int (*cocci_id/* net/switchdev/switchdev.c 451 */)(struct net_device *dev,
							   const struct switchdev_obj *obj,
							   struct switchdev_trans *trans,
							   struct netlink_ext_ack *extack);
	struct switchdev_deferred_item cocci_id/* net/switchdev/switchdev.c 45 */;
	struct switchdev_notifier_port_obj_info *cocci_id/* net/switchdev/switchdev.c 449 */;
	struct switchdev_notifier_info *cocci_id/* net/switchdev/switchdev.c 438 */;
	unsigned long cocci_id/* net/switchdev/switchdev.c 437 */;
	struct blocking_notifier_head *cocci_id/* net/switchdev/switchdev.c 423 */;
	struct notifier_block *cocci_id/* net/switchdev/switchdev.c 421 */;
	struct switchdev_deferred_item *cocci_id/* net/switchdev/switchdev.c 35 */;
	void cocci_id/* net/switchdev/switchdev.c 35 */;
	struct switchdev_deferred_item {
		struct list_head list;
		struct net_device *dev;
		switchdev_deferred_func_t *func;
		unsigned long data[0];
	} cocci_id/* net/switchdev/switchdev.c 28 */;
	void cocci_id/* net/switchdev/switchdev.c 25 */(struct net_device *dev,
							const void *data);
	struct switchdev_notifier_port_obj_info cocci_id/* net/switchdev/switchdev.c 230 */;
	struct switchdev_obj_port_mdb cocci_id/* net/switchdev/switchdev.c 212 */;
	struct switchdev_obj_port_vlan cocci_id/* net/switchdev/switchdev.c 210 */;
	const struct switchdev_obj *cocci_id/* net/switchdev/switchdev.c 206 */;
	struct switchdev_trans cocci_id/* net/switchdev/switchdev.c 132 */;
	struct switchdev_notifier_port_attr_info cocci_id/* net/switchdev/switchdev.c 109 */;
	struct switchdev_trans *cocci_id/* net/switchdev/switchdev.c 104 */;
	const struct switchdev_attr *cocci_id/* net/switchdev/switchdev.c 103 */;
	enum switchdev_notifier_type cocci_id/* net/switchdev/switchdev.c 101 */;
}
