cocci_test_suite() {
	struct hip04_priv cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 911 */;
	struct of_phandle_args cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 905 */;
	struct device_node *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 904 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 901 */;
	struct skb_shared_info cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 874 */;
	struct tx_desc cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 868 */;
	struct device *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 862 */;
	int cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 862 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 853 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 847 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 841 */;
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 799 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 789 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 735 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 715 */;
	struct hip04_priv *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 714 */;
	struct net_device *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 712 */;
	void cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 712 */;
	enum hrtimer_restart cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 696 */;
	struct hrtimer *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 696 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 665 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 661 */;
	void *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 661 */;
	__be32 cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 606 */;
	__be16 cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 605 */;
	u16 cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 586 */;
	bool cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 582 */;
	unsigned char *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 581 */;
	struct rx_desc *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 579 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 574 */;
	struct tx_desc *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 511 */;
	unsigned int cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 510 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 506 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 505 */;
	unsigned long cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 498 */;
	unsigned cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 450 */;
	u32 cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 314 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 1057 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/hisilicon/hip04_eth.c 1050 */[];
	struct tx_desc {
#if defined(CONFIG_HI13X1_GMAC)
		u32 reserved1[2];
		u32 send_addr;
		u16 send_size;
		u16 data_offset;
		u32 reserved2[7];
		u32 cfg;
		u32 wb_addr;
		u32 reserved3[3];
#else
		u32 send_addr;
		u32 send_size;
		u32 next_addr;
		u32 cfg;
		u32 wb_addr;
#endif
	}__aligned(64) cocci_id/*  1 */;
	struct rx_desc {
#if defined(CONFIG_HI13X1_GMAC)
		u32 reserved1[3];
		u16 pkt_len;
		u16 reserved_16;
		u32 reserved2[6];
		u32 pkt_err;
		u32 reserved3[5];
#else
		u16 reserved_16;
		u16 pkt_len;
		u32 reserve1[3];
		u32 pkt_err;
		u32 reserve2[4];
#endif
	} cocci_id/*  1 */;
	struct hip04_priv {
		void __iomem *base;
#if defined(CONFIG_HI13X1_GMAC)
		void __iomem *sysctrl_base;
#endif
		phy_interface_t phy_mode;
		int chan;
		unsigned int port;
		unsigned int group;
		unsigned int speed;
		unsigned int duplex;
		unsigned int reg_inten;
		struct napi_struct napi;
		struct device *dev;
		struct net_device *ndev;
		struct tx_desc *tx_desc;
		dma_addr_t tx_desc_dma;
		struct sk_buff *tx_skb[TX_DESC_NUM];
		dma_addr_t tx_phys[TX_DESC_NUM];
		unsigned int tx_head;
		int tx_coalesce_frames;
		int tx_coalesce_usecs;
		struct hrtimer tx_coalesce_timer;
		unsigned char *rx_buf[RX_DESC_NUM];
		dma_addr_t rx_phys[RX_DESC_NUM];
		unsigned int rx_head;
		unsigned int rx_buf_size;
		unsigned int rx_cnt_remaining;
		struct device_node *phy_node;
		struct phy_device *phy;
		struct regmap *map;
		struct work_struct tx_timeout_task;
		unsigned int tx_tail ____cacheline_aligned_in_smp;
	} cocci_id/*  1 */;
}
