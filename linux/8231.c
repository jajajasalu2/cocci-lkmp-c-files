cocci_test_suite() {
	const char cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 89 */[];
	irqreturn_t cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 839 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 740 */;
	u8 cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 569 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 483 */;
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 391 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 376 */;
	char *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 353 */[16];
	struct emac_priv {
		u32 msg_enable;
		struct net_device *ndev;
		struct platform_device *pdev;
		struct napi_struct napi;
		char mac_addr[6];
		void __iomem *remap_addr;
		u32 emac_base_phys;
		void __iomem *emac_base;
		void __iomem *ctrl_base;
		struct cpdma_ctlr *dma;
		struct cpdma_chan *txchan;
		struct cpdma_chan *rxchan;
		u32 link;
		u32 speed;
		u32 duplex;
		u32 rx_buf_size;
		u32 isr_count;
		u32 coal_intvl;
		u32 bus_freq_mhz;
		u8 rmii_en;
		u8 version;
		u32 mac_hash1;
		u32 mac_hash2;
		u32 multicast_hash_cnt[EMAC_NUM_MULTICAST_BITS];
		u32 rx_addr_type;
		const char *phy_id;
		struct device_node *phy_node;
		spinlock_t lock;
		void (*int_enable)(void);
		void (*int_disable)(void);
	} cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 309 */;
	void __exit cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 2060 */;
	void cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 2060 */;
	int __init cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 2048 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 2032 */;
	const struct emac_platform_data cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 2014 */;
	const struct dev_pm_ops cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 2009 */;
	struct device *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1999 */;
	u32 __force cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1845 */;
	u32 cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1817 */;
	struct emac_priv cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1789 */;
	struct clk *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1774 */;
	struct cpdma_params cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1773 */;
	unsigned long cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1771 */;
	struct net_device *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1769 */;
	struct resource *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1768 */;
	int cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1764 */;
	u8 *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1748 */;
	const u8 *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1689 */;
	const struct emac_platform_data *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1687 */;
	const struct of_device_id *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1686 */;
	struct device_node *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1685 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1683 */;
	struct emac_priv *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1683 */;
	struct emac_platform_data *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1682 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1680 */[];
	const struct net_device_ops cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1666 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1605 */;
	struct ethtool_coalesce cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1461 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1426 */;
	const void *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1374 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1361 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1312 */;
	unsigned int cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1224 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1222 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1118 */;
	void *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1114 */;
	char *cocci_id/* drivers/net/ethernet/ti/davinci_emac.c 1011 */;
}
