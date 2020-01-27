cocci_test_suite() {
	u16 cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 960 */;
	void __iomem *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 935 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 911 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 903 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 887 */;
	struct hix5hd2_desc *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 795 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 735 */;
	skb_frag_t *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 721 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 668 */;
	void *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 668 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 640 */;
	unsigned int cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 592 */;
	int cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 572 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 570 */;
	struct sg_desc *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 569 */;
	u32 cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 567 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 567 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 456 */;
	struct hix5hd2_priv *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 455 */;
	struct net_device *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 453 */;
	void cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 453 */;
	unsigned char *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 432 */;
	struct hix5hd2_priv {
		struct hix5hd2_desc_sw pool[QUEUE_NUMS];
#define rx_fq pool[0]
#define rx_bq pool[1]
#define tx_bq pool[2]
#define tx_rq pool[3]
		struct hix5hd2_sg_desc_ring tx_ring;
		void __iomem *base;
		void __iomem *ctrl_base;
		struct sk_buff *tx_skb[TX_DESC_NUM];
		struct sk_buff *rx_skb[RX_DESC_NUM];
		struct device *dev;
		struct net_device *netdev;
		struct device_node *phy_node;
		phy_interface_t phy_mode;
		unsigned long hw_cap;
		unsigned int speed;
		unsigned int duplex;
		struct clk *mac_core_clk;
		struct clk *mac_ifc_clk;
		struct reset_control *mac_core_rst;
		struct reset_control *mac_ifc_rst;
		struct reset_control *phy_rst;
		u32 phy_reset_delays[DELAYS_NUM];
		struct mii_bus *bus;
		struct napi_struct napi;
		struct work_struct tx_timeout_task;
	} cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 240 */;
	struct sg_desc {
		__le32 total_len;
		__le32 resvd0;
		__le32 linear_addr;
		__le32 linear_len;
		struct frags_info frags[SG_MAX_SKB_FRAGS + 1];
	} cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 230 */;
	struct frags_info {
		__le32 addr;
		__le32 size;
	} cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 223 */;
	struct hix5hd2_sg_desc_ring {
		struct sg_desc *desc;
		dma_addr_t phys_addr;
	} cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 218 */;
	struct hix5hd2_desc_sw {
		struct hix5hd2_desc *desc;
		dma_addr_t phys_addr;
		unsigned int count;
		unsigned int size;
	} cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 211 */;
	struct hix5hd2_desc {
		__le32 buff_addr;
		__le32 cmd;
	}__aligned(32) cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 206 */;
	enum phy_reset_delays{PRE_DELAY, PULSE, POST_DELAY, DELAYS_NUM,} cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 199 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1320 */;
	unsigned long cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1119 */;
	struct hix5hd2_priv cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1104 */;
	const char *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1101 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1100 */;
	const struct of_device_id *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1097 */;
	struct device_node *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1096 */;
	struct device *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1095 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1093 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1091 */[];
	struct sg_desc cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1043 */;
	struct hix5hd2_desc cocci_id/* drivers/net/ethernet/hisilicon/hix5hd2_gmac.c 1004 */;
}
