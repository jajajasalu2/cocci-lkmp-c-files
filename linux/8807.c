cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 93 */;
	bool cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 877 */;
	struct ftmac100 cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 874 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 872 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 856 */;
	void *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 856 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 845 */;
	u32 cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 839 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 827 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 817 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 809 */;
	unsigned int cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 755 */;
	struct ftmac100_rxdes *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 734 */;
	struct ftmac100_descs cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 725 */;
	struct ftmac100 *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 720 */;
	int cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 720 */;
	int cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 72 */(struct ftmac100 *priv,
								     struct ftmac100_rxdes *rxdes,
								     gfp_t gfp);
	struct sk_buff *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 706 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 664 */;
	struct page *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 663 */;
	struct net_device *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 662 */;
	gfp_t cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 660 */;
	struct ftmac100_txdes *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 568 */;
	struct ftmac100 {
		struct resource *res;
		void __iomem *base;
		int irq;
		struct ftmac100_descs *descs;
		dma_addr_t descs_dma_addr;
		unsigned int rx_pointer;
		unsigned int tx_clean_pointer;
		unsigned int tx_pointer;
		unsigned int tx_pending;
		spinlock_t tx_lock;
		struct net_device *netdev;
		struct device *dev;
		struct napi_struct napi;
		struct mii_if_info mii;
	} cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 50 */;
	struct ftmac100_descs {
		struct ftmac100_rxdes rxdes[RX_QUEUE_ENTRIES];
		struct ftmac100_txdes txdes[TX_QUEUE_ENTRIES];
	} cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 45 */;
	int *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 385 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 142 */;
	void __exit cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 1191 */;
	int __init cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 1185 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 1173 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 1168 */[];
	struct resource *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 1056 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 1054 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 1042 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 1037 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 1034 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/faraday/ftmac100.c 1004 */;
}
