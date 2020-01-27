cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 972 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 963 */[];
	enum phy_reset_delays{PRE_DELAY, PULSE, POST_DELAY, DELAYS_NUM,} cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 93 */;
	pm_message_t cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 927 */;
	unsigned long cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 854 */;
	const char *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 787 */;
	struct device_node *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 783 */;
	struct device *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 782 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 780 */;
	int cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 780 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 696 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 690 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 679 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 625 */;
	unsigned char *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 580 */;
	bool cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 567 */;
	unsigned int cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 567 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 553 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 499 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 390 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 389 */;
	struct hisi_femac_queue *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 387 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 329 */;
	void *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 329 */;
	struct hisi_femac_priv cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 302 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 299 */;
	u32 cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 193 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 192 */;
	struct hisi_femac_priv *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 191 */;
	struct net_device *cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 189 */;
	void cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 189 */;
	struct hisi_femac_priv {
		void __iomem *port_base;
		void __iomem *glb_base;
		struct clk *clk;
		struct reset_control *mac_rst;
		struct reset_control *phy_rst;
		u32 phy_reset_delays[DELAYS_NUM];
		u32 link_status;
		struct device *dev;
		struct net_device *ndev;
		struct hisi_femac_queue txq;
		struct hisi_femac_queue rxq;
		u32 tx_fifo_used_cnt;
		struct napi_struct napi;
	} cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 108 */;
	struct hisi_femac_queue {
		struct sk_buff **skb;
		dma_addr_t *dma_phys;
		int num;
		unsigned int head;
		unsigned int tail;
	} cocci_id/* drivers/net/ethernet/hisilicon/hisi_femac.c 100 */;
}