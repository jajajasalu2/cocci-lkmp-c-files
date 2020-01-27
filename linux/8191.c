cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/marvell/skge.c 98 */(struct skge_port *skge,
								  u64 *data);
	int cocci_id/* drivers/net/ethernet/marvell/skge.c 97 */(struct skge_hw *hw,
								 int port,
								 u16 reg,
								 u16 val);
	unsigned int cocci_id/* drivers/net/ethernet/marvell/skge.c 967 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/marvell/skge.c 939 */;
	int cocci_id/* drivers/net/ethernet/marvell/skge.c 93 */(struct net_device *dev);
	struct skge_tx_desc *cocci_id/* drivers/net/ethernet/marvell/skge.c 911 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/marvell/skge.c 878 */;
	u8 *cocci_id/* drivers/net/ethernet/marvell/skge.c 821 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/marvell/skge.c 820 */;
	enum ethtool_phys_id_state cocci_id/* drivers/net/ethernet/marvell/skge.c 762 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/marvell/skge.c 73 */[];
	enum led_mode cocci_id/* drivers/net/ethernet/marvell/skge.c 681 */;
	enum led_mode{LED_MODE_OFF, LED_MODE_ON, LED_MODE_TST,} cocci_id/* drivers/net/ethernet/marvell/skge.c 680 */;
	const u32 cocci_id/* drivers/net/ethernet/marvell/skge.c 65 */;
	struct ethtool_coalesce *cocci_id/* drivers/net/ethernet/marvell/skge.c 618 */;
	struct ethtool_pauseparam cocci_id/* drivers/net/ethernet/marvell/skge.c 569 */;
	struct ethtool_pauseparam *cocci_id/* drivers/net/ethernet/marvell/skge.c 553 */;
	struct ethtool_ringparam *cocci_id/* drivers/net/ethernet/marvell/skge.c 495 */;
	u64 cocci_id/* drivers/net/ethernet/marvell/skge.c 463 */[ARRAY_SIZE(skge_stats)];
	struct net_device_stats *cocci_id/* drivers/net/ethernet/marvell/skge.c 460 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/marvell/skge.c 446 */;
	void __exit cocci_id/* drivers/net/ethernet/marvell/skge.c 4181 */;
	int __init cocci_id/* drivers/net/ethernet/marvell/skge.c 4173 */;
	const struct dmi_system_id cocci_id/* drivers/net/ethernet/marvell/skge.c 4148 */[];
	struct pci_driver cocci_id/* drivers/net/ethernet/marvell/skge.c 4139 */;
	struct device *cocci_id/* drivers/net/ethernet/marvell/skge.c 4082 */;
	const struct skge_stat {
		char name[ETH_GSTRING_LEN];
		u16 xmac_offset;
		u16 gma_offset;
	} cocci_id/* drivers/net/ethernet/marvell/skge.c 404 */[];
	unsigned long long cocci_id/* drivers/net/ethernet/marvell/skge.c 3947 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/marvell/skge.c 394 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/marvell/skge.c 3877 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/marvell/skge.c 3788 */;
	struct notifier_block cocci_id/* drivers/net/ethernet/marvell/skge.c 3762 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/marvell/skge.c 3729 */;
	const struct skge_rx_desc *cocci_id/* drivers/net/ethernet/marvell/skge.c 3711 */;
	const struct skge_tx_desc *cocci_id/* drivers/net/ethernet/marvell/skge.c 3703 */;
	const struct skge_element *cocci_id/* drivers/net/ethernet/marvell/skge.c 3693 */;
	const struct skge_port *cocci_id/* drivers/net/ethernet/marvell/skge.c 3691 */;
	struct seq_file *cocci_id/* drivers/net/ethernet/marvell/skge.c 3688 */;
	void *cocci_id/* drivers/net/ethernet/marvell/skge.c 3688 */;
	struct dentry *cocci_id/* drivers/net/ethernet/marvell/skge.c 3686 */;
	u8 cocci_id/* drivers/net/ethernet/marvell/skge.c 3520 */;
	char cocci_id/* drivers/net/ethernet/marvell/skge.c 3501 */[16];
	const char *cocci_id/* drivers/net/ethernet/marvell/skge.c 3498 */;
	const struct {
		u8 id;
		const char *name;
	} cocci_id/* drivers/net/ethernet/marvell/skge.c 3488 */[];
	const struct sockaddr *cocci_id/* drivers/net/ethernet/marvell/skge.c 3454 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/marvell/skge.c 3371 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/marvell/skge.c 3270 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/marvell/skge.c 322 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/marvell/skge.c 3207 */;
	struct skge_rx_desc *cocci_id/* drivers/net/ethernet/marvell/skge.c 3206 */;
	struct skge_element *cocci_id/* drivers/net/ethernet/marvell/skge.c 3198 */;
	struct skge_ring *cocci_id/* drivers/net/ethernet/marvell/skge.c 3197 */;
	struct skge_port cocci_id/* drivers/net/ethernet/marvell/skge.c 3194 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/marvell/skge.c 3192 */;
	struct skge_element cocci_id/* drivers/net/ethernet/marvell/skge.c 3085 */;
	u32 cocci_id/* drivers/net/ethernet/marvell/skge.c 3021 */;
	const struct skge_hw *cocci_id/* drivers/net/ethernet/marvell/skge.c 3021 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/marvell/skge.c 294 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/marvell/skge.c 2934 */;
	u8 cocci_id/* drivers/net/ethernet/marvell/skge.c 2920 */[8];
	const u8 *cocci_id/* drivers/net/ethernet/marvell/skge.c 2920 */;
	const u8 cocci_id/* drivers/net/ethernet/marvell/skge.c 2918 */[ETH_ALEN];
	const skb_frag_t *cocci_id/* drivers/net/ethernet/marvell/skge.c 2786 */;
	const int cocci_id/* drivers/net/ethernet/marvell/skge.c 2762 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/marvell/skge.c 2729 */;
	const struct skge_ring *cocci_id/* drivers/net/ethernet/marvell/skge.c 2722 */;
	struct skge_tx_desc cocci_id/* drivers/net/ethernet/marvell/skge.c 2547 */;
	struct skge_rx_desc cocci_id/* drivers/net/ethernet/marvell/skge.c 2546 */;
	size_t cocci_id/* drivers/net/ethernet/marvell/skge.c 2478 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/marvell/skge.c 2438 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/marvell/skge.c 2436 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/marvell/skge.c 235 */;
	u16 cocci_id/* drivers/net/ethernet/marvell/skge.c 1911 */;
	u16 *cocci_id/* drivers/net/ethernet/marvell/skge.c 1911 */;
	struct skge_hw *cocci_id/* drivers/net/ethernet/marvell/skge.c 1911 */;
	int cocci_id/* drivers/net/ethernet/marvell/skge.c 1911 */;
	u64 cocci_id/* drivers/net/ethernet/marvell/skge.c 1750 */;
	unsigned long cocci_id/* drivers/net/ethernet/marvell/skge.c 1736 */;
	u64 *cocci_id/* drivers/net/ethernet/marvell/skge.c 1731 */;
	unsigned cocci_id/* drivers/net/ethernet/marvell/skge.c 1687 */;
	const u8 cocci_id/* drivers/net/ethernet/marvell/skge.c 1532 */[6];
	struct timer_list *cocci_id/* drivers/net/ethernet/marvell/skge.c 1488 */;
	const void __iomem *cocci_id/* drivers/net/ethernet/marvell/skge.c 137 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/marvell/skge.c 133 */;
	const struct {
		u16 reg;
		u16 val;
	} cocci_id/* drivers/net/ethernet/marvell/skge.c 1283 */[];
	struct skge_port *cocci_id/* drivers/net/ethernet/marvell/skge.c 1212 */;
	struct net_device *cocci_id/* drivers/net/ethernet/marvell/skge.c 1211 */;
	void cocci_id/* drivers/net/ethernet/marvell/skge.c 1209 */;
	const u16 cocci_id/* drivers/net/ethernet/marvell/skge.c 1200 */[];
	const u8 cocci_id/* drivers/net/ethernet/marvell/skge.c 1167 */[8];
	bool cocci_id/* drivers/net/ethernet/marvell/skge.c 114 */;
	const u32 cocci_id/* drivers/net/ethernet/marvell/skge.c 111 */[];
	const int cocci_id/* drivers/net/ethernet/marvell/skge.c 108 */[];
	irqreturn_t cocci_id/* drivers/net/ethernet/marvell/skge.c 104 */(int irq,
									  void *dev_id);
	enum pause_status cocci_id/* drivers/net/ethernet/marvell/skge.c 1032 */;
	void cocci_id/* drivers/net/ethernet/marvell/skge.c 103 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/marvell/skge.c 102 */(struct skge_port *skge);
	void cocci_id/* drivers/net/ethernet/marvell/skge.c 101 */(struct skge_hw *hw,
								   int port);
}
