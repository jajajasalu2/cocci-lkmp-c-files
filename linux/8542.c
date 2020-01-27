cocci_test_suite() {
	struct ep93xx_rstat {
		u32 rstat0;
		u32 rstat1;
	} cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 95 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 865 */;
	struct ep93xx_rdesc {
		u32 buf_addr;
		u32 rdesc1;
	} cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 85 */;
	struct resource *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 796 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 791 */;
	struct ep93xx_priv cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 747 */;
	struct ep93xx_eth_data *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 743 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 734 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 726 */;
	u32 cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 720 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 708 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 698 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 691 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 686 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 683 */;
	struct net_device *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 668 */;
	struct ep93xx_tstat cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 578 */;
	struct ep93xx_tdesc cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 572 */;
	struct ep93xx_rstat cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 566 */;
	struct ep93xx_rdesc cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 560 */;
	unsigned long cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 535 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 490 */;
	void *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 489 */;
	struct ep93xx_descs cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 483 */;
	struct device *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 480 */;
	struct ep93xx_priv *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 478 */;
	int cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 478 */;
	void cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 445 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 420 */;
	struct ep93xx_tstat *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 377 */;
	struct ep93xx_tdesc *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 334 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 331 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 310 */;
	struct ep93xx_rdesc *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 283 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 238 */;
	struct ep93xx_rstat *cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 234 */;
	struct ep93xx_priv {
		struct resource *res;
		void __iomem *base_addr;
		int irq;
		struct ep93xx_descs *descs;
		dma_addr_t descs_dma_addr;
		void *rx_buf[RX_QUEUE_ENTRIES];
		void *tx_buf[TX_QUEUE_ENTRIES];
		spinlock_t rx_lock;
		unsigned int rx_pointer;
		unsigned int tx_clean_pointer;
		unsigned int tx_pointer;
		spinlock_t tx_pending_lock;
		unsigned int tx_pending;
		struct net_device *dev;
		struct napi_struct napi;
		struct mii_if_info mii;
		u8 mdc_divisor;
	} cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 152 */;
	struct ep93xx_descs {
		struct ep93xx_rdesc rdesc[RX_QUEUE_ENTRIES];
		struct ep93xx_tdesc tdesc[TX_QUEUE_ENTRIES];
		struct ep93xx_rstat rstat[RX_QUEUE_ENTRIES];
		struct ep93xx_tstat tstat[TX_QUEUE_ENTRIES];
	} cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 144 */;
	struct ep93xx_tstat {
		u32 tstat0;
	} cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 129 */;
	struct ep93xx_tdesc {
		u32 buf_addr;
		u32 tdesc1;
	} cocci_id/* drivers/net/ethernet/cirrus/ep93xx_eth.c 118 */;
}
