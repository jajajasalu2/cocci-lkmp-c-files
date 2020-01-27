cocci_test_suite() {
	union ib_gid *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 99 */;
	void __exit cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 913 */;
	int __init cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 894 */;
	struct notifier_block cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 890 */;
	struct sockaddr_in6 cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 871 */;
	struct in_ifaddr *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 859 */;
	struct sockaddr_in cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 857 */;
	enum gid_op_type cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 818 */;
	struct update_gid_event_work *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 817 */;
	struct sockaddr *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 815 */;
	struct notifier_block *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 814 */;
	int cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 814 */;
	struct update_gid_event_work cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 804 */;
	struct netdev_notifier_changeupper_info cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 782 */;
	struct netdev_event_work_cmd cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 752 */[ROCE_NETDEV_CALLBACK_SZ];
	const struct {
		bool (*is_supported)(const struct ib_device *device,
				     u8 port_num);
		enum ib_gid_type gid_type;
	} cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 72 */[];
	struct netdev_event_work_cmd *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 693 */;
	struct netdev_notifier_changeupper_info *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 692 */;
	struct netdev_event_work {
		struct work_struct work;
		struct netdev_event_work_cmd cmds[ROCE_NETDEV_CALLBACK_SZ];
	} cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 67 */;
	const struct netdev_event_work_cmd cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 660 */;
	unsigned int cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 620 */;
	struct netdev_event_work cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 619 */;
	struct netdev_event_work *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 618 */;
	struct work_struct *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 616 */;
	struct netdev_event_work_cmd {
		roce_netdev_callback cb;
		roce_netdev_filter filter;
		struct net_device *ndev;
		struct net_device *filter_ndev;
	} cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 60 */;
	struct upper_list *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 556 */;
	void (*cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 551 */)(struct ib_device *ib_dev,
									  u8 port,
									  struct net_device *ndev);
	struct list_head *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 537 */;
	struct upper_list {
		struct list_head list;
		struct net_device *upper;
	} cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 529 */;
	struct update_gid_event_work {
		struct work_struct work;
		union ib_gid gid;
		struct ib_gid_attr gid_attr;
		enum gid_op_type gid_op;
	} cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 52 */;
	struct net *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 477 */;
	enum gid_op_type{GID_DEL=0, GID_ADD,} cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 47 */;
	unsigned long cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 465 */;
	void *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 462 */;
	struct workqueue_struct *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 45 */;
	struct net_device *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 421 */;
	u8 cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 420 */;
	struct ib_device *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 420 */;
	void cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 420 */;
	union ib_gid cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 411 */;
	struct ib_gid_attr cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 385 */;
	struct sin6_list *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 383 */;
	struct sin6_list {
		struct list_head list;
		struct sockaddr_in6 sin6;
	} cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 379 */;
	struct inet6_dev *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 378 */;
	struct inet6_ifaddr *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 377 */;
	struct sin_list *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 339 */;
	struct sin_list {
		struct list_head list;
		struct sockaddr_in ip;
	} cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 335 */;
	struct in_device *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 334 */;
	const struct in_ifaddr *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 333 */;
	bool cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 170 */;
	enum bonding_slave_state cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 129 */;
	enum bonding_slave_state{BONDING_SLAVE_STATE_ACTIVE=1UL << 0, BONDING_SLAVE_STATE_INACTIVE=1UL << 1, BONDING_SLAVE_STATE_NA=1UL << 2,} cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 122 */;
	struct ib_gid_attr *cocci_id/* drivers/infiniband/core/roce_gid_mgmt.c 100 */;
}
