cocci_test_suite() {
	struct gmac_txq {
		struct gmac_txdesc *ring;
		struct sk_buff **skb;
		unsigned int cptr;
		unsigned int noirq_packets;
	} cocci_id/* drivers/net/ethernet/cortina/gemini.c 95 */;
	union dma_skb_size cocci_id/* drivers/net/ethernet/cortina/gemini.c 936 */;
	union queue_threshold cocci_id/* drivers/net/ethernet/cortina/gemini.c 935 */;
	struct gmac_queue_page {
		struct page *page;
		dma_addr_t mapping;
	} cocci_id/* drivers/net/ethernet/cortina/gemini.c 90 */;
	struct page *cocci_id/* drivers/net/ethernet/cortina/gemini.c 896 */;
	union dma_rwptr cocci_id/* drivers/net/ethernet/cortina/gemini.c 880 */;
	bool cocci_id/* drivers/net/ethernet/cortina/gemini.c 874 */;
	struct gmac_rxdesc *cocci_id/* drivers/net/ethernet/cortina/gemini.c 810 */;
	void __iomem *cocci_id/* drivers/net/ethernet/cortina/gemini.c 764 */;
	struct nontoe_qhdr __iomem *cocci_id/* drivers/net/ethernet/cortina/gemini.c 763 */;
	unsigned short cocci_id/* drivers/net/ethernet/cortina/gemini.c 619 */;
	struct gmac_txdesc *cocci_id/* drivers/net/ethernet/cortina/gemini.c 618 */;
	union gmac_txdesc_1 cocci_id/* drivers/net/ethernet/cortina/gemini.c 615 */;
	union gmac_txdesc_0 cocci_id/* drivers/net/ethernet/cortina/gemini.c 614 */;
	struct gmac_txq *cocci_id/* drivers/net/ethernet/cortina/gemini.c 607 */;
	struct sk_buff **cocci_id/* drivers/net/ethernet/cortina/gemini.c 558 */;
	size_t cocci_id/* drivers/net/ethernet/cortina/gemini.c 554 */;
	union gmac_config3 cocci_id/* drivers/net/ethernet/cortina/gemini.c 508 */;
	union gmac_config2 cocci_id/* drivers/net/ethernet/cortina/gemini.c 504 */;
	union gmac_config1 cocci_id/* drivers/net/ethernet/cortina/gemini.c 500 */;
	int cocci_id/* drivers/net/ethernet/cortina/gemini.c 50 */;
	union gmac_tx_wcr1 cocci_id/* drivers/net/ethernet/cortina/gemini.c 492 */;
	union gmac_tx_wcr0 cocci_id/* drivers/net/ethernet/cortina/gemini.c 486 */;
	union gmac_ahb_weight cocci_id/* drivers/net/ethernet/cortina/gemini.c 479 */;
	const struct gmac_max_framelen *cocci_id/* drivers/net/ethernet/cortina/gemini.c 447 */;
	const struct gmac_max_framelen cocci_id/* drivers/net/ethernet/cortina/gemini.c 418 */[];
	struct gmac_max_framelen {
		unsigned int max_l3_len;
		u8 val;
	} cocci_id/* drivers/net/ethernet/cortina/gemini.c 413 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/cortina/gemini.c 366 */;
	union gmac_status cocci_id/* drivers/net/ethernet/cortina/gemini.c 364 */;
	u8 cocci_id/* drivers/net/ethernet/cortina/gemini.c 334 */;
	u16 cocci_id/* drivers/net/ethernet/cortina/gemini.c 332 */;
	void __exit cocci_id/* drivers/net/ethernet/cortina/gemini.c 2638 */;
	int __init cocci_id/* drivers/net/ethernet/cortina/gemini.c 2620 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/cortina/gemini.c 2611 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/cortina/gemini.c 2603 */[];
	u32 cocci_id/* drivers/net/ethernet/cortina/gemini.c 2556 */;
	void *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2485 */;
	unsigned int cocci_id/* drivers/net/ethernet/cortina/gemini.c 2375 */;
	struct resource *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2372 */;
	struct net_device *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2371 */;
	struct device *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2369 */;
	struct gemini_ethernet_port *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2368 */;
	char *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2367 */[2];
	struct platform_device *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2365 */;
	struct gemini_ethernet *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2303 */;
	void cocci_id/* drivers/net/ethernet/cortina/gemini.c 2303 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/cortina/gemini.c 2266 */;
	unsigned long cocci_id/* drivers/net/ethernet/cortina/gemini.c 2246 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/cortina/gemini.c 2226 */;
	void cocci_id/* drivers/net/ethernet/cortina/gemini.c 222 */(struct net_device *netdev);
	const struct net_device_ops cocci_id/* drivers/net/ethernet/cortina/gemini.c 2211 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2204 */;
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2162 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2122 */;
	union gmac_config0 cocci_id/* drivers/net/ethernet/cortina/gemini.c 2112 */;
	struct ethtool_pauseparam *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2109 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2094 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2084 */;
	u64 *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2034 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2034 */;
	u8 *cocci_id/* drivers/net/ethernet/cortina/gemini.c 2025 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/cortina/gemini.c 1993 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1925 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1904 */;
	__le32 cocci_id/* drivers/net/ethernet/cortina/gemini.c 1892 */[3];
	u32 cocci_id/* drivers/net/ethernet/cortina/gemini.c 1864 */[2];
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1862 */;
	union gmac_rx_fltr cocci_id/* drivers/net/ethernet/cortina/gemini.c 1857 */;
	union gmac_dma_ctrl cocci_id/* drivers/net/ethernet/cortina/gemini.c 1737 */;
	ktime_t cocci_id/* drivers/net/ethernet/cortina/gemini.c 1706 */;
	const char cocci_id/* drivers/net/ethernet/cortina/gemini.c 170 */[GMAC_STATS_NUM][ETH_GSTRING_LEN];
	struct gemini_ethernet_port cocci_id/* drivers/net/ethernet/cortina/gemini.c 1664 */;
	enum hrtimer_restart cocci_id/* drivers/net/ethernet/cortina/gemini.c 1661 */;
	struct hrtimer *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1661 */;
	u32 cocci_id/* drivers/net/ethernet/cortina/gemini.c 1541 */[5];
	struct napi_struct *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1508 */;
	struct gemini_ethernet {
		struct device *dev;
		void __iomem *base;
		struct gemini_ethernet_port *port0;
		struct gemini_ethernet_port *port1;
		bool initialized;
		spinlock_t irq_lock;
		unsigned int freeq_order;
		unsigned int freeq_frag_order;
		struct gmac_rxdesc *freeq_ring;
		dma_addr_t freeq_dma_base;
		struct gmac_queue_page *freeq_pages;
		unsigned int num_freeq_pages;
		spinlock_t freeq_lock;
	} cocci_id/* drivers/net/ethernet/cortina/gemini.c 149 */;
	union gmac_rxdesc_3 cocci_id/* drivers/net/ethernet/cortina/gemini.c 1407 */;
	union gmac_rxdesc_1 cocci_id/* drivers/net/ethernet/cortina/gemini.c 1406 */;
	union gmac_rxdesc_0 cocci_id/* drivers/net/ethernet/cortina/gemini.c 1405 */;
	struct netdev_queue *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1232 */;
	skb_frag_t *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1148 */;
	short cocci_id/* drivers/net/ethernet/cortina/gemini.c 1143 */;
	struct skb_shared_info *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1141 */;
	unsigned short *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1138 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1137 */;
	struct gemini_ethernet_port {
		u8 id;
		struct gemini_ethernet *geth;
		struct net_device *netdev;
		struct device *dev;
		void __iomem *dma_base;
		void __iomem *gmac_base;
		struct clk *pclk;
		struct reset_control *reset;
		int irq;
		__le32 mac_addr[3];
		void __iomem *rxq_rwptr;
		struct gmac_rxdesc *rxq_ring;
		unsigned int rxq_order;
		struct napi_struct napi;
		struct hrtimer rx_coalesce_timer;
		unsigned int rx_coalesce_nsecs;
		unsigned int freeq_refill;
		struct gmac_txq txq[TX_QUEUE_NUM];
		unsigned int txq_order;
		unsigned int irq_every_tx_packets;
		dma_addr_t rxq_dma_base;
		dma_addr_t txq_dma_base;
		unsigned int msg_enable;
		spinlock_t config_lock;
		struct u64_stats_sync tx_stats_syncp;
		struct u64_stats_sync rx_stats_syncp;
		struct u64_stats_sync ir_stats_syncp;
		struct rtnl_link_stats64 stats;
		u64 hw_stats[RX_STATS_NUM];
		u64 rx_stats[RX_STATUS_NUM];
		u64 rx_csum_stats[RX_CHKSUM_NUM];
		u64 rx_napi_exits;
		u64 tx_frag_stats[TX_MAX_FRAGS];
		u64 tx_frags_linearized;
		u64 tx_hw_csummed;
	} cocci_id/* drivers/net/ethernet/cortina/gemini.c 104 */;
	struct gemini_ethernet cocci_id/* drivers/net/ethernet/cortina/gemini.c 102 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/cortina/gemini.c 1016 */;
	struct gmac_queue_page *cocci_id/* drivers/net/ethernet/cortina/gemini.c 1015 */;
}
