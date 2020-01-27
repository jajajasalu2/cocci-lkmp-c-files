cocci_test_suite() {
	struct net_dm_hw_entries *cocci_id/* net/core/drop_monitor.c 990 */;
	const struct net_dm_alert_ops *cocci_id/* net/core/drop_monitor.c 973 */;
	const struct net_dm_alert_ops *cocci_id/* net/core/drop_monitor.c 951 */[];
	struct genl_family cocci_id/* net/core/drop_monitor.c 95 */;
	const struct net_dm_alert_ops cocci_id/* net/core/drop_monitor.c 943 */;
	ktime_t cocci_id/* net/core/drop_monitor.c 901 */;
	struct per_cpu_dm_data cocci_id/* net/core/drop_monitor.c 884 */;
	struct sk_buff_head cocci_id/* net/core/drop_monitor.c 880 */;
	struct work_struct *cocci_id/* net/core/drop_monitor.c 877 */;
	struct dm_hw_stat_delta {
		struct net_device *dev;
		unsigned long last_rx;
		struct list_head list;
		struct rcu_head rcu;
		unsigned long last_drop_val;
	} cocci_id/* net/core/drop_monitor.c 87 */;
	size_t cocci_id/* net/core/drop_monitor.c 846 */;
	const char *cocci_id/* net/core/drop_monitor.c 798 */;
	const struct net_dm_hw_metadata *cocci_id/* net/core/drop_monitor.c 795 */;
	struct net_dm_hw_metadata *cocci_id/* net/core/drop_monitor.c 794 */;
	struct per_cpu_dm_data {
		spinlock_t lock;
		union {
			struct sk_buff *skb;
			struct net_dm_hw_entries *hw_entries;
		};
		struct sk_buff_head drop_queue;
		struct work_struct dm_alert_work;
		struct timer_list send_timer;
		struct net_dm_stats stats;
	} cocci_id/* net/core/drop_monitor.c 73 */;
	u32 cocci_id/* net/core/drop_monitor.c 723 */;
	u64 cocci_id/* net/core/drop_monitor.c 721 */;
	struct net_dm_hw_entries {
		u32 num_entries;
		struct net_dm_hw_entry entries[0];
	} cocci_id/* net/core/drop_monitor.c 68 */;
	struct net_dm_hw_entry {
		char trap_name[NET_DM_MAX_HW_TRAP_NAME_LEN];
		u32 count;
	} cocci_id/* net/core/drop_monitor.c 63 */;
	char cocci_id/* net/core/drop_monitor.c 596 */[NET_DM_MAX_SYMBOL_LEN];
	uintptr_t cocci_id/* net/core/drop_monitor.c 595 */;
	struct net_dm_stats {
		u64 dropped;
		struct u64_stats_sync syncp;
	} cocci_id/* net/core/drop_monitor.c 56 */;
	struct napi_struct *cocci_id/* net/core/drop_monitor.c 525 */;
	bool cocci_id/* net/core/drop_monitor.c 47 */;
	struct net_dm_hw_entry *cocci_id/* net/core/drop_monitor.c 435 */;
	struct net_dm_alert_msg cocci_id/* net/core/drop_monitor.c 373 */;
	struct nlattr *cocci_id/* net/core/drop_monitor.c 345 */;
	const struct net_dm_hw_entries *cocci_id/* net/core/drop_monitor.c 343 */;
	const struct net_dm_hw_entry *cocci_id/* net/core/drop_monitor.c 319 */;
	struct timer_list *cocci_id/* net/core/drop_monitor.c 205 */;
	const struct genl_multicast_group cocci_id/* net/core/drop_monitor.c 182 */[];
	struct genlmsghdr *cocci_id/* net/core/drop_monitor.c 174 */;
	struct nlmsghdr *cocci_id/* net/core/drop_monitor.c 173 */;
	int __init cocci_id/* net/core/drop_monitor.c 1628 */;
	struct per_cpu_dm_data *cocci_id/* net/core/drop_monitor.c 1586 */;
	void cocci_id/* net/core/drop_monitor.c 1586 */;
	struct notifier_block cocci_id/* net/core/drop_monitor.c 1575 */;
	const struct genl_ops *cocci_id/* net/core/drop_monitor.c 1554 */;
	const struct genl_ops cocci_id/* net/core/drop_monitor.c 1519 */[];
	const struct nla_policy cocci_id/* net/core/drop_monitor.c 1510 */[NET_DM_ATTR_MAX + 1];
	struct dm_hw_stat_delta cocci_id/* net/core/drop_monitor.c 1480 */;
	struct dm_hw_stat_delta *cocci_id/* net/core/drop_monitor.c 1475 */;
	struct net_device *cocci_id/* net/core/drop_monitor.c 1474 */;
	void *cocci_id/* net/core/drop_monitor.c 1472 */;
	struct notifier_block *cocci_id/* net/core/drop_monitor.c 1471 */;
	struct net_dm_stats cocci_id/* net/core/drop_monitor.c 1402 */;
	struct nlattr cocci_id/* net/core/drop_monitor.c 140 */;
	struct net_dm_drop_point cocci_id/* net/core/drop_monitor.c 139 */;
	unsigned int cocci_id/* net/core/drop_monitor.c 1388 */;
	struct net_dm_stats *cocci_id/* net/core/drop_monitor.c 1380 */;
	struct net_dm_alert_msg *cocci_id/* net/core/drop_monitor.c 132 */;
	struct net_dm_skb_cb *cocci_id/* net/core/drop_monitor.c 127 */;
	struct sk_buff *cocci_id/* net/core/drop_monitor.c 1207 */;
	struct net_dm_skb_cb {
		union {
			struct net_dm_hw_metadata *hw_metadata;
			void *pc;
		};
	} cocci_id/* net/core/drop_monitor.c 120 */;
	struct netlink_ext_ack *cocci_id/* net/core/drop_monitor.c 1173 */;
	u8 cocci_id/* net/core/drop_monitor.c 1155 */;
	enum net_dm_alert_mode *cocci_id/* net/core/drop_monitor.c 1153 */;
	struct genl_info *cocci_id/* net/core/drop_monitor.c 1152 */;
	struct net_dm_alert_ops {
		void (*kfree_skb_probe)(void *ignore, struct sk_buff *skb,
					void *location);
		void (*napi_poll_probe)(void *ignore,
					struct napi_struct *napi, int work,
					int budget);
		void (*work_item_func)(struct work_struct *work);
		void (*hw_work_item_func)(struct work_struct *work);
		void (*hw_probe)(struct sk_buff *skb,
				 const struct net_dm_hw_metadata *hw_metadata);
	} cocci_id/* net/core/drop_monitor.c 109 */;
	enum net_dm_alert_mode cocci_id/* net/core/drop_monitor.c 105 */;
	unsigned long cocci_id/* net/core/drop_monitor.c 102 */;
	int cocci_id/* net/core/drop_monitor.c 101 */;
	__typeof__(struct per_cpu_dm_data) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
