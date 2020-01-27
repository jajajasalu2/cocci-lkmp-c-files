cocci_test_suite() {
	struct net_device *cocci_id/* drivers/net/ethernet/sgi/meth.c 99 */;
	void cocci_id/* drivers/net/ethernet/sgi/meth.c 99 */;
	char cocci_id/* drivers/net/ethernet/sgi/meth.c 97 */[8];
	irqreturn_t cocci_id/* drivers/net/ethernet/sgi/meth.c 94 */(int irq,
								     void *dev_id);
	void cocci_id/* drivers/net/ethernet/sgi/meth.c 93 */(struct net_device *dev);
	struct platform_driver cocci_id/* drivers/net/ethernet/sgi/meth.c 867 */;
	unsigned int cocci_id/* drivers/net/ethernet/sgi/meth.c 853 */;
	struct meth_private cocci_id/* drivers/net/ethernet/sgi/meth.c 831 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/sgi/meth.c 825 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/sgi/meth.c 811 */;
	volatile unsigned long *cocci_id/* drivers/net/ethernet/sgi/meth.c 799 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/sgi/meth.c 794 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/sgi/meth.c 765 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/sgi/meth.c 699 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/sgi/meth.c 676 */;
	struct meth_private {
		struct platform_device *pdev;
		u64 mac_ctrl;
		unsigned long dma_ctrl;
		unsigned long phy_addr;
		tx_packet *tx_ring;
		dma_addr_t tx_ring_dma;
		struct sk_buff *tx_skbs[TX_RING_ENTRIES];
		dma_addr_t tx_skb_dmas[TX_RING_ENTRIES];
		unsigned long tx_read,tx_write,tx_count;
		rx_packet *rx_ring[RX_RING_ENTRIES];
		dma_addr_t rx_ring_dmas[RX_RING_ENTRIES];
		struct sk_buff *rx_skbs[RX_RING_ENTRIES];
		unsigned long rx_write;
		u64 mcast_filter;
		spinlock_t meth_lock;
	} cocci_id/* drivers/net/ethernet/sgi/meth.c 66 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/sgi/meth.c 627 */;
	tx_packet *cocci_id/* drivers/net/ethernet/sgi/meth.c 623 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/sgi/meth.c 573 */;
	void *cocci_id/* drivers/net/ethernet/sgi/meth.c 573 */;
	unsigned cocci_id/* drivers/net/ethernet/sgi/meth.c 539 */;
	const char *cocci_id/* drivers/net/ethernet/sgi/meth.c 48 */;
	rx_packet *cocci_id/* drivers/net/ethernet/sgi/meth.c 234 */;
	unsigned long cocci_id/* drivers/net/ethernet/sgi/meth.c 135 */;
	struct meth_private *cocci_id/* drivers/net/ethernet/sgi/meth.c 132 */;
	u64 cocci_id/* drivers/net/ethernet/sgi/meth.c 102 */;
	int cocci_id/* drivers/net/ethernet/sgi/meth.c 101 */;
}
