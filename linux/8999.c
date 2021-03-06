cocci_test_suite() {
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/ni/nixge.c 997 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/ni/nixge.c 990 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/ni/nixge.c 980 */;
	s32 cocci_id/* drivers/net/ethernet/ni/nixge.c 953 */;
	struct net_device *cocci_id/* drivers/net/ethernet/ni/nixge.c 953 */;
	struct nixge_tx_skb *cocci_id/* drivers/net/ethernet/ni/nixge.c 793 */;
	unsigned long cocci_id/* drivers/net/ethernet/ni/nixge.c 789 */;
	u64 cocci_id/* drivers/net/ethernet/ni/nixge.c 768 */;
	unsigned int cocci_id/* drivers/net/ethernet/ni/nixge.c 744 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/ni/nixge.c 740 */;
	struct nixge_priv cocci_id/* drivers/net/ethernet/ni/nixge.c 670 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/ni/nixge.c 668 */;
	skb_frag_t *cocci_id/* drivers/net/ethernet/ni/nixge.c 511 */;
	struct nixge_hw_dma_bd *cocci_id/* drivers/net/ethernet/ni/nixge.c 497 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/ni/nixge.c 428 */;
	int cocci_id/* drivers/net/ethernet/ni/nixge.c 396 */;
	u32 cocci_id/* drivers/net/ethernet/ni/nixge.c 395 */;
	off_t cocci_id/* drivers/net/ethernet/ni/nixge.c 393 */;
	struct nixge_priv *cocci_id/* drivers/net/ethernet/ni/nixge.c 393 */;
	void cocci_id/* drivers/net/ethernet/ni/nixge.c 393 */;
	uintptr_t cocci_id/* drivers/net/ethernet/ni/nixge.c 332 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/ni/nixge.c 285 */;
	const struct nixge_priv *cocci_id/* drivers/net/ethernet/ni/nixge.c 222 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/ni/nixge.c 214 */;
	struct nixge_priv {
		struct net_device *ndev;
		struct napi_struct napi;
		struct device *dev;
		struct device_node *phy_node;
		phy_interface_t phy_mode;
		int link;
		unsigned int speed;
		unsigned int duplex;
		struct mii_bus *mii_bus;
		void __iomem *ctrl_regs;
		void __iomem *dma_regs;
		struct tasklet_struct dma_err_tasklet;
		int tx_irq;
		int rx_irq;
		struct nixge_hw_dma_bd *tx_bd_v;
		struct nixge_tx_skb *tx_skb;
		dma_addr_t tx_bd_p;
		struct nixge_hw_dma_bd *rx_bd_v;
		dma_addr_t rx_bd_p;
		u32 tx_bd_ci;
		u32 tx_bd_tail;
		u32 rx_bd_ci;
		u32 coalesce_count_rx;
		u32 coalesce_count_tx;
	} cocci_id/* drivers/net/ethernet/ni/nixge.c 168 */;
	struct nixge_tx_skb {
		struct sk_buff *skb;
		dma_addr_t mapping;
		size_t size;
		bool mapped_as_page;
	} cocci_id/* drivers/net/ethernet/ni/nixge.c 161 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/ni/nixge.c 1408 */;
	const u8 *cocci_id/* drivers/net/ethernet/ni/nixge.c 1288 */;
	struct resource *cocci_id/* drivers/net/ethernet/ni/nixge.c 1246 */;
	enum nixge_version cocci_id/* drivers/net/ethernet/ni/nixge.c 1245 */;
	const struct of_device_id *cocci_id/* drivers/net/ethernet/ni/nixge.c 1244 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/ni/nixge.c 1242 */;
	void *cocci_id/* drivers/net/ethernet/ni/nixge.c 1236 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/ni/nixge.c 1235 */[];
	char *cocci_id/* drivers/net/ethernet/ni/nixge.c 1222 */;
	size_t cocci_id/* drivers/net/ethernet/ni/nixge.c 1221 */;
	struct nvmem_cell *cocci_id/* drivers/net/ethernet/ni/nixge.c 1220 */;
	struct device *cocci_id/* drivers/net/ethernet/ni/nixge.c 1218 */;
	struct device_node *cocci_id/* drivers/net/ethernet/ni/nixge.c 1198 */;
	struct nixge_hw_dma_bd {
		u32 next_lo;
		u32 next_hi;
		u32 phys_lo;
		u32 phys_hi;
		u32 reserved3;
		u32 reserved4;
		u32 cntrl;
		u32 status;
		u32 app0;
		u32 app1;
		u32 app2;
		u32 app3;
		u32 app4;
		u32 sw_id_offset_lo;
		u32 sw_id_offset_hi;
		u32 reserved6;
	} cocci_id/* drivers/net/ethernet/ni/nixge.c 114 */;
	u16 cocci_id/* drivers/net/ethernet/ni/nixge.c 1100 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/ni/nixge.c 1095 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/ni/nixge.c 1085 */;
	enum nixge_version{NIXGE_V2, NIXGE_V3, NIXGE_VERSION_COUNT,} cocci_id/* drivers/net/ethernet/ni/nixge.c 108 */;
	enum ethtool_phys_id_state cocci_id/* drivers/net/ethernet/ni/nixge.c 1052 */;
}
