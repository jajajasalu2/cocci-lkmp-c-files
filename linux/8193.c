cocci_test_suite() {
	struct ethtool_link_ksettings cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 961 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 932 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 860 */;
	void *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 860 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 754 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 703 */;
	unsigned int cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 667 */;
	struct net_device *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 664 */;
	struct rx_desc cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 643 */;
	struct tx_desc cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 638 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 602 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 564 */;
	struct addr_table_entry *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 440 */;
	u32 cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 438 */;
	unsigned char *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 437 */;
	unsigned char cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 399 */[ETH_ALEN];
	u8 cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 360 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 354 */;
	int cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 285 */;
	struct pxa168_eth_private *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 283 */;
	void cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 283 */;
	int cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 270 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 268 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 266 */(struct pxa168_eth_private *pep);
	enum hash_table_entry{HASH_ENTRY_VALID=1, SKIP=2, HASH_ENTRY_RECEIVE_DISCARD=4, HASH_ENTRY_RECEIVE_DISCARD_BIT=2,} cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 259 */;
	struct addr_table_entry {
		__le32 lo;
		__le32 hi;
	} cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 253 */;
	struct pxa168_eth_private {
		struct platform_device *pdev;
		int port_num;
		int phy_addr;
		int phy_speed;
		int phy_duplex;
		phy_interface_t phy_intf;
		int rx_resource_err;
		int rx_curr_desc_q,rx_used_desc_q;
		int tx_curr_desc_q,tx_used_desc_q;
		struct rx_desc *p_rx_desc_area;
		dma_addr_t rx_desc_dma;
		int rx_desc_area_size;
		struct sk_buff **rx_skb;
		struct tx_desc *p_tx_desc_area;
		dma_addr_t tx_desc_dma;
		int tx_desc_area_size;
		struct sk_buff **tx_skb;
		struct work_struct tx_timeout_task;
		struct net_device *dev;
		struct napi_struct napi;
		u8 work_todo;
		int skb_size;
		int tx_ring_size;
		int tx_desc_count;
		int rx_ring_size;
		int rx_desc_count;
		struct timer_list timeout;
		struct mii_bus *smi_bus;
		struct clk *clk;
		struct pxa168_eth_platform_data *pd;
		void __iomem *base;
		void *htpr;
		dma_addr_t htpr_dma;
	} cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 191 */;
	struct tx_desc {
		u32 cmd_sts;
		u16 reserved;
		u16 byte_cnt;
		u32 buf_ptr;
		u32 next_desc_ptr;
	} cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 183 */;
	struct rx_desc {
		u32 cmd_sts;
		u16 byte_cnt;
		u16 buf_size;
		u32 buf_ptr;
		u32 next_desc_ptr;
	} cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 175 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1593 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1587 */[];
	pm_message_t cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1577 */;
	struct timer_list cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1502 */;
	struct pxa168_eth_private cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1417 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1405 */;
	struct device_node *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1404 */;
	struct clk *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1403 */;
	struct resource *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1402 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1398 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1383 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1374 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1366 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1347 */;
	u16 cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1327 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1302 */;
	struct tx_desc *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1257 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1256 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1253 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1252 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1226 */;
	struct rx_desc *cocci_id/* drivers/net/ethernet/marvell/pxa168_eth.c 1023 */;
}
