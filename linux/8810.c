cocci_test_suite() {
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 990 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 972 */;
	const u8 cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 934 */[];
	u8 cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 932 */[ETH_ALEN];
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 931 */;
	struct desc cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 805 */;
	u32 *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 755 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 690 */;
	unsigned int cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 682 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 678 */;
	void *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 666 */;
	u32 cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 608 */;
	struct desc *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 608 */;
	u8 *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 590 */;
	int cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 590 */;
	const char *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 589 */;
	struct net_device *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 589 */;
	unsigned long cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 491 */;
	u16 cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 439 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 438 */;
	struct hwtstamp_config cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 414 */;
	struct ixp46x_ts_regs __iomem *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 382 */;
	struct ixp46x_ts_regs *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 371 */;
	struct skb_shared_info *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 326 */;
	struct skb_shared_hwtstamps cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 324 */;
	u64 cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 284 */;
	struct skb_shared_hwtstamps *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 282 */;
	u16 *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 259 */;
	struct dma_pool *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 253 */;
	struct port *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 252 */[MAX_NPES];
	spinlock_t cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 248 */;
	struct desc {
		u32 next;
#ifdef __ARMEB__
		u16 buf_len;
		u16 pkt_len;
		u32 data;
		u8 dest_id;
		u8 src_id;
		u16 flags;
		u8 qos;
		u8 padlen;
		u16 vlan_tci;
#else
		u16 pkt_len;
		u16 buf_len;
		u32 data;
		u16 flags;
		u8 src_id;
		u8 dest_id;
		u16 vlan_tci;
		u8 padlen;
		u8 qos;
#endif
#ifdef __ARMEB__
		u8 dst_mac_0,dst_mac_1,dst_mac_2,dst_mac_3;
		u8 dst_mac_4,dst_mac_5,src_mac_0,src_mac_1;
		u8 src_mac_2,src_mac_3,src_mac_4,src_mac_5;
#else
		u8 dst_mac_3,dst_mac_2,dst_mac_1,dst_mac_0;
		u8 src_mac_1,src_mac_0,dst_mac_5,dst_mac_4;
		u8 src_mac_5,src_mac_4,src_mac_3,src_mac_2;
#endif
	} cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 194 */;
	struct msg {
#ifdef __ARMEB__
		u8 cmd,eth_id,byte2,byte3;
		u8 byte4,byte5,byte6,byte7;
#else
		u8 byte3,byte2,eth_id,cmd;
		u8 byte7,byte6,byte5,byte4;
#endif
	} cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 183 */;
	struct port {
		struct resource *mem_res;
		struct eth_regs __iomem *regs;
		struct npe *npe;
		struct net_device *netdev;
		struct napi_struct napi;
		struct eth_plat_info *plat;
		buffer_t *rx_buff_tab[RX_DESCS],*tx_buff_tab[TX_DESCS];
		struct desc *desc_tab;
		u32 desc_tab_phys;
		int id;
		int speed,duplex;
		u8 firmware[4];
		int hwts_tx_en;
		int hwts_rx_en;
	} cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 165 */;
	void __exit cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1511 */;
	int __init cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1494 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1488 */;
	struct eth_regs {
		u32 tx_control[2],__res1[2];
		u32 rx_control[2],__res2[2];
		u32 random_seed,__res3[3];
		u32 partial_empty_threshold,__res4;
		u32 partial_full_threshold,__res5;
		u32 tx_start_bytes,__res6[3];
		u32 tx_deferral,rx_deferral,__res7[2];
		u32 tx_2part_deferral[2],__res8[2];
		u32 slot_time,__res9[3];
		u32 mdio_command[4];
		u32 mdio_status[4];
		u32 mcast_mask[6],__res10[2];
		u32 mcast_addr[6],__res11[2];
		u32 int_clock_threshold,__res12[3];
		u32 hw_addr[6],__res13[61];
		u32 core_control;
	} cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 146 */;
	void cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 141 */;
	struct eth_regs __iomem *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1397 */;
	struct port cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1387 */;
	char cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1384 */[MII_BUS_ID_SIZE + 3];
	struct phy_device *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1382 */;
	struct eth_plat_info *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1381 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1377 */;
	struct sk_buff cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 137 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1367 */;
	struct msg cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1285 */;
	struct npe *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1179 */;
	buffer_t *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1150 */;
	struct port *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1143 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1030 */;
	struct ethtool_ts_info *cocci_id/* drivers/net/ethernet/xscale/ixp4xx_eth.c 1005 */;
}
