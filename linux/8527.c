cocci_test_suite() {
	struct phy_device *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 850 */;
	unsigned char *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 789 */;
	unsigned long cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 606 */;
	bool cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 604 */;
	struct device_node *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 529 */;
	struct device *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 526 */;
	const u32 *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 474 */;
	u32 *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 471 */;
	u16 cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 445 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 416 */;
	void __iomem *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 376 */;
	u32 cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 374 */;
	unsigned int cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 374 */;
	void cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 374 */;
	enum ag71xx_type cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 347 */;
	struct ag71xx_desc *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 332 */;
	struct ag71xx {
		struct ag71xx_ring rx_ring ____cacheline_aligned;
		struct ag71xx_ring tx_ring ____cacheline_aligned;
		u16 rx_buf_size;
		u8 rx_buf_offset;
		struct net_device *ndev;
		struct platform_device *pdev;
		struct napi_struct napi;
		u32 msg_enable;
		const struct ag71xx_dcfg *dcfg;
		void __iomem *mac_base;
		struct ag71xx_desc *stop_desc;
		dma_addr_t stop_desc_dma;
		phy_interface_t phy_if_mode;
		struct delayed_work restart_work;
		struct timer_list oom_timer;
		struct reset_control *mac_reset;
		u32 fifodata[3];
		int mac_idx;
		struct reset_control *mdio_reset;
		struct mii_bus *mii_bus;
		struct clk *clk_mdio;
		struct clk *clk_eth;
	} cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 294 */;
	struct ag71xx_dcfg {
		u32 max_frame_len;
		const u32 *fifodata;
		u16 desc_pktlen_mask;
		bool tx_hang_workaround;
		enum ag71xx_type type;
	} cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 286 */;
	enum ag71xx_type{AR7100, AR7240, AR9130, AR9330, AR9340, QCA9530, QCA9550,} cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 276 */;
	struct ag71xx_ring {
		unsigned int curr;
		unsigned int dirty;
		struct ag71xx_buf *buf;
		u16 order;
		u16 desc_split;
		dma_addr_t descs_dma;
		u8 *descs_cpu;
	} cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 263 */;
	struct ag71xx_buf {
		union {
			struct {
				struct sk_buff *skb;
				unsigned int len;
			} tx;
			struct {
				dma_addr_t dma_addr;
				void *rx_buf;
			} rx;
		};
	} cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 250 */;
	struct ag71xx_desc {
		u32 data;
		u32 ctrl;
		u32 next;
		u32 pad;
	}__aligned(4) cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 240 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1892 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1878 */[];
	const struct ag71xx_dcfg cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1822 */;
	struct ag71xx_desc cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1728 */;
	const void *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1638 */;
	struct resource *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1637 */;
	const struct ag71xx_dcfg *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1635 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1632 */;
	const u32 cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1628 */[];
	const struct net_device_ops cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1617 */;
	struct net_device *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1606 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1574 */;
	struct ag71xx cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1519 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1517 */;
	struct list_head cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1442 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1421 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1405 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1397 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1334 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1327 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1327 */;
	struct ag71xx_ring *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1278 */;
	void *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1042 */;
	void *(*cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1038 */)(unsigned int size);
	struct ag71xx_buf *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1036 */;
	struct skb_shared_info cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1033 */;
	struct ag71xx *cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1030 */;
	int cocci_id/* drivers/net/ethernet/atheros/ag71xx.c 1030 */;
}
