cocci_test_suite() {
	char cocci_id/* drivers/net/ethernet/mscc/ocelot.c 967 */[ETH_ALEN];
	struct ocelot_mact_entry *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 964 */;
	struct nlmsghdr *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 926 */;
	struct ocelot_dump_ctx *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 923 */;
	struct ocelot_dump_ctx {
		struct net_device *dev;
		struct sk_buff *skb;
		struct netlink_callback *cb;
		int idx;
	} cocci_id/* drivers/net/ethernet/mscc/ocelot.c 913 */;
	enum macaccess_entry_type cocci_id/* drivers/net/ethernet/mscc/ocelot.c 91 */;
	struct nlattr *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 882 */[];
	struct ndmsg *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 882 */;
	u16 cocci_id/* drivers/net/ethernet/mscc/ocelot.c 860 */;
	bool cocci_id/* drivers/net/ethernet/mscc/ocelot.c 860 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 860 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 821 */;
	const struct sockaddr *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 808 */;
	char *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 790 */;
	size_t cocci_id/* drivers/net/ethernet/mscc/ocelot.c 790 */;
	struct timespec64 cocci_id/* drivers/net/ethernet/mscc/ocelot.c 702 */;
	struct skb_shared_hwtstamps cocci_id/* drivers/net/ethernet/mscc/ocelot.c 700 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 699 */;
	struct timespec64 *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 668 */;
	struct frame_info cocci_id/* drivers/net/ethernet/mscc/ocelot.c 603 */;
	struct skb_shared_info *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 581 */;
	u32 *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 568 */;
	struct frame_info *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 568 */;
	struct ocelot_mact_entry {
		u8 mac[ETH_ALEN];
		u16 vid;
		enum macaccess_entry_type type;
	} cocci_id/* drivers/net/ethernet/mscc/ocelot.c 44 */;
	struct ocelot_port *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 412 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 410 */;
	struct ocelot *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 409 */;
	int cocci_id/* drivers/net/ethernet/mscc/ocelot.c 409 */;
	void cocci_id/* drivers/net/ethernet/mscc/ocelot.c 409 */;
	enum macaccess_entry_type{ENTRYTYPE_NORMAL=0, ENTRYTYPE_LOCKED, ENTRYTYPE_MACv4, ENTRYTYPE_MACv6,} cocci_id/* drivers/net/ethernet/mscc/ocelot.c 37 */;
	u64 cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2366 */;
	char cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2347 */[32];
	enum ocelot_tag_prefix cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2296 */;
	struct ocelot_port_private cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2258 */;
	void __iomem *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2250 */;
	struct ptp_clock *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2152 */;
	struct ptp_clock_info cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2135 */;
	struct ptp_clock_info *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2090 */;
	long cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2090 */;
	s64 cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2049 */;
	const struct timespec64 *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 2019 */;
	time64_t cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1988 */;
	struct notifier_block cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1924 */;
	struct list_head *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1909 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1895 */;
	struct netdev_lag_upper_info *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1894 */;
	struct netdev_notifier_changeupper_info *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1885 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1882 */;
	const struct net_device *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1839 */;
	u8 cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1727 */[16];
	const struct switchdev_obj *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1636 */;
	unsigned char cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1560 */[ETH_ALEN];
	const struct switchdev_obj_port_mdb *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1554 */;
	struct ocelot_multicast *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1539 */;
	const struct switchdev_obj_port_vlan *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1506 */;
	struct switchdev_trans *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1475 */;
	const struct switchdev_attr *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1474 */;
	unsigned long cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1401 */;
	u32 cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1372 */;
	u8 cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1370 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1361 */;
	struct ethtool_ts_info *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1330 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1301 */;
	u64 *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1287 */;
	struct ocelot cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1278 */;
	struct delayed_work *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1277 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1275 */;
	u8 *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1224 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1205 */;
	struct hwtstamp_config cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1123 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1113 */;
	struct ocelot_port_private *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1104 */;
	struct netdev_phys_item_id *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1102 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1101 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1081 */;
	unsigned int cocci_id/* drivers/net/ethernet/mscc/ocelot.c 107 */;
	__be16 cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1068 */;
	const unsigned char cocci_id/* drivers/net/ethernet/mscc/ocelot.c 106 */[ETH_ALEN];
	struct ocelot_dump_ctx cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1052 */;
	int *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1048 */;
	struct netlink_callback *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1046 */;
	struct ocelot_mact_entry cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1020 */;
	dsa_fdb_dump_cb_t *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1011 */;
	void *cocci_id/* drivers/net/ethernet/mscc/ocelot.c 1011 */;
}
