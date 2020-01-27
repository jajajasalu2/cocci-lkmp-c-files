cocci_test_suite() {
	struct cpmac_desc cocci_id/* drivers/net/ethernet/ti/cpmac.c 937 */;
	struct resource *cocci_id/* drivers/net/ethernet/ti/cpmac.c 913 */;
	int cocci_id/* drivers/net/ethernet/ti/cpmac.c 877 */;
	struct cpmac_priv *cocci_id/* drivers/net/ethernet/ti/cpmac.c 876 */;
	struct net_device *cocci_id/* drivers/net/ethernet/ti/cpmac.c 874 */;
	void cocci_id/* drivers/net/ethernet/ti/cpmac.c 874 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/ti/cpmac.c 865 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/ti/cpmac.c 858 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/ti/cpmac.c 830 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/ti/cpmac.c 819 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/ti/cpmac.c 767 */;
	void *cocci_id/* drivers/net/ethernet/ti/cpmac.c 767 */;
	u32 cocci_id/* drivers/net/ethernet/ti/cpmac.c 736 */;
	struct cpmac_priv cocci_id/* drivers/net/ethernet/ti/cpmac.c 718 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/ti/cpmac.c 715 */;
	struct cpmac_desc *cocci_id/* drivers/net/ethernet/ti/cpmac.c 678 */;
	struct plat_cpmac_data *cocci_id/* drivers/net/ethernet/ti/cpmac.c 638 */;
	unsigned int cocci_id/* drivers/net/ethernet/ti/cpmac.c 538 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/ti/cpmac.c 401 */;
	u8 cocci_id/* drivers/net/ethernet/ti/cpmac.c 311 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/ti/cpmac.c 310 */;
	struct clk *cocci_id/* drivers/net/ethernet/ti/cpmac.c 292 */;
	u16 cocci_id/* drivers/net/ethernet/ti/cpmac.c 280 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/ti/cpmac.c 265 */;
	u8 *cocci_id/* drivers/net/ethernet/ti/cpmac.c 260 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/ti/cpmac.c 249 */;
	u32 *cocci_id/* drivers/net/ethernet/ti/cpmac.c 234 */;
	int cocci_id/* drivers/net/ethernet/ti/cpmac.c 210 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/ti/cpmac.c 207 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/ti/cpmac.c 206 */(int,
								      void *);
	struct cpmac_priv {
		spinlock_t lock;
		spinlock_t rx_lock;
		struct cpmac_desc *rx_head;
		int ring_size;
		struct cpmac_desc *desc_ring;
		dma_addr_t dma_ring;
		void __iomem *regs;
		struct mii_bus *mii_bus;
		char phy_name[MII_BUS_ID_SIZE + 3];
		int oldlink,oldspeed,oldduplex;
		u32 msg_enable;
		struct net_device *dev;
		struct work_struct reset_work;
		struct platform_device *pdev;
		struct napi_struct napi;
		atomic_t reset_pending;
	} cocci_id/* drivers/net/ethernet/ti/cpmac.c 187 */;
	struct cpmac_desc {
		u32 hw_next;
		u32 hw_data;
		u16 buflen;
		u16 bufflags;
		u16 datalen;
		u16 dataflags;
#define CPMAC_SOP 0x8000
#define CPMAC_EOP 0x4000
#define CPMAC_OWN 0x2000
#define CPMAC_EOQ 0x1000
		struct sk_buff *skb;
		struct cpmac_desc *next;
		struct cpmac_desc *prev;
		dma_addr_t mapping;
		dma_addr_t data_mapping;
	} cocci_id/* drivers/net/ethernet/ti/cpmac.c 169 */;
	void __iomem *cocci_id/* drivers/net/ethernet/ti/cpmac.c 143 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/ti/cpmac.c 1170 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/ti/cpmac.c 1072 */;
	char cocci_id/* drivers/net/ethernet/ti/cpmac.c 1067 */[MII_BUS_ID_SIZE];
	struct platform_device *cocci_id/* drivers/net/ethernet/ti/cpmac.c 1064 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/ti/cpmac.c 1051 */;
}
