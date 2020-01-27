cocci_test_suite() {
	u8 *cocci_id/* drivers/net/rionet.c 90 */;
	struct rionet_net cocci_id/* drivers/net/rionet.c 79 */[RIONET_MAX_NETS];
	void __exit cocci_id/* drivers/net/rionet.c 738 */;
	int __init cocci_id/* drivers/net/rionet.c 717 */;
	struct class_interface cocci_id/* drivers/net/rionet.c 711 */;
	struct rionet_net {
		struct net_device *ndev;
		struct list_head peers;
		spinlock_t lock;
		struct rio_dev **active;
		int nact;
	} cocci_id/* drivers/net/rionet.c 71 */;
	struct notifier_block cocci_id/* drivers/net/rionet.c 706 */;
	struct subsys_interface cocci_id/* drivers/net/rionet.c 699 */;
	struct rio_device_id cocci_id/* drivers/net/rionet.c 691 */[];
	struct class_interface *cocci_id/* drivers/net/rionet.c 663 */;
	struct rionet_peer {
		struct list_head node;
		struct rio_dev *rdev;
		struct resource *res;
	} cocci_id/* drivers/net/rionet.c 65 */;
	struct notifier_block *cocci_id/* drivers/net/rionet.c 635 */;
	unsigned long cocci_id/* drivers/net/rionet.c 599 */;
	struct rionet_private *cocci_id/* drivers/net/rionet.c 598 */;
	struct rionet_private cocci_id/* drivers/net/rionet.c 573 */;
	unsigned char cocci_id/* drivers/net/rionet.c 550 */;
	struct rio_dev *cocci_id/* drivers/net/rionet.c 549 */;
	struct net_device *cocci_id/* drivers/net/rionet.c 548 */;
	struct rionet_peer *cocci_id/* drivers/net/rionet.c 547 */;
	u32 cocci_id/* drivers/net/rionet.c 546 */;
	struct subsys_interface *cocci_id/* drivers/net/rionet.c 543 */;
	struct device *cocci_id/* drivers/net/rionet.c 543 */;
	int cocci_id/* drivers/net/rionet.c 543 */;
	struct rionet_private {
		struct rio_mport *mport;
		struct sk_buff *rx_skb[RIONET_RX_RING_SIZE];
		struct sk_buff *tx_skb[RIONET_TX_RING_SIZE];
		int rx_slot;
		int tx_slot;
		int tx_cnt;
		int ack_slot;
		spinlock_t lock;
		spinlock_t tx_lock;
		u32 msg_enable;
		bool open;
	} cocci_id/* drivers/net/rionet.c 51 */;
	struct rio_dev **cocci_id/* drivers/net/rionet.c 488 */;
	const size_t cocci_id/* drivers/net/rionet.c 485 */;
	const struct net_device_ops cocci_id/* drivers/net/rionet.c 472 */;
	const struct ethtool_ops cocci_id/* drivers/net/rionet.c 465 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/rionet.c 441 */;
	u16 cocci_id/* drivers/net/rionet.c 226 */;
	struct rio_mport *cocci_id/* drivers/net/rionet.c 226 */;
	void *cocci_id/* drivers/net/rionet.c 226 */;
	void cocci_id/* drivers/net/rionet.c 226 */;
	struct ethhdr *cocci_id/* drivers/net/rionet.c 173 */;
	struct sk_buff *cocci_id/* drivers/net/rionet.c 145 */;
}
