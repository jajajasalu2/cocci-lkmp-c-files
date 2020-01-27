cocci_test_suite() {
	struct sk_buff *cocci_id/* drivers/net/ifb.c 66 */;
	struct netdev_queue *cocci_id/* drivers/net/ifb.c 65 */;
	int cocci_id/* drivers/net/ifb.c 60 */(struct net_device *dev);
	netdev_tx_t cocci_id/* drivers/net/ifb.c 58 */(struct sk_buff *skb,
						       struct net_device *dev);
	struct ifb_dev_private {
		struct ifb_q_private *tx_private;
	} cocci_id/* drivers/net/ifb.c 54 */;
	struct ifb_q_private {
		struct net_device *dev;
		struct tasklet_struct ifb_tasklet;
		int tasklet_pending;
		int txqnum;
		struct sk_buff_head rq;
		u64 rx_packets;
		u64 rx_bytes;
		struct u64_stats_sync rsync;
		struct u64_stats_sync tsync;
		u64 tx_packets;
		u64 tx_bytes;
		struct sk_buff_head tq;
	}____cacheline_aligned_in_smp cocci_id/* drivers/net/ifb.c 38 */;
	void __exit cocci_id/* drivers/net/ifb.c 350 */;
	void cocci_id/* drivers/net/ifb.c 350 */;
	int __init cocci_id/* drivers/net/ifb.c 326 */;
	struct ifb_dev_private cocci_id/* drivers/net/ifb.c 308 */;
	struct rtnl_link_ops cocci_id/* drivers/net/ifb.c 288 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ifb.c 277 */;
	struct nlattr *cocci_id/* drivers/net/ifb.c 276 */[];
	struct net_device *cocci_id/* drivers/net/ifb.c 264 */;
	int cocci_id/* drivers/net/ifb.c 264 */;
	netdev_tx_t cocci_id/* drivers/net/ifb.c 236 */;
	struct ifb_q_private *cocci_id/* drivers/net/ifb.c 198 */;
	struct ifb_dev_private *cocci_id/* drivers/net/ifb.c 197 */;
	const struct net_device_ops cocci_id/* drivers/net/ifb.c 180 */;
	unsigned long cocci_id/* drivers/net/ifb.c 174 */;
	u64 cocci_id/* drivers/net/ifb.c 132 */;
	unsigned int cocci_id/* drivers/net/ifb.c 131 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ifb.c 127 */;
}
