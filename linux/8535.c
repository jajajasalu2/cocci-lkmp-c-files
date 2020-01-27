cocci_test_suite() {
	struct ifreq *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 984 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 951 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 932 */;
	struct atl2_hw *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 911 */;
	struct net_device *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 908 */;
	struct tx_pkt_header cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 848 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 826 */;
	u32 cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 818 */;
	struct atl2_adapter *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 816 */;
	int cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 816 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 671 */;
	void cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 62 */(struct atl2_adapter *adapter);
	irqreturn_t cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 589 */;
	u16 cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 556 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 55 */[];
	struct tx_pkt_header *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 474 */;
	struct tx_pkt_status *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 473 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 45 */;
	const char cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 43 */[];
	struct sk_buff *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 410 */;
	struct rx_desc *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 409 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 349 */;
	u32 *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 349 */;
	void cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 349 */;
	u8 cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 3045 */;
	struct atl2_option cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2958 */;
	struct atl2_opt_list *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2902 */;
	struct atl2_option *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2899 */;
	int *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2899 */;
	struct atl2_option {
		enum{enable_option, range_option, list_option,} type;
		char *name;
		char *err;
		int def;
		union {
			struct {
				int min;
				int max;
			} r;
			struct {
				int nr;
				struct atl2_opt_list {
					int i;
					char *str;
				} *p;
			} l;
		} arg;
	} cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2882 */;
	bool cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2744 */;
	s16 cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2563 */;
	s32 cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2453 */;
	u16 *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2453 */;
	u8 cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2210 */[ETH_ALEN];
	u32 cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2207 */[2];
	struct atl2_spi_flash_dev cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2151 */[];
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2022 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 2009 */;
	u8 *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1907 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1907 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1839 */;
	void *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1839 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1765 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1723 */;
	void __exit cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1704 */;
	int __init cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1689 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1670 */;
	pm_message_t cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1493 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1319 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1291 */;
	struct atl2_adapter cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1250 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 125 */;
	unsigned long cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1248 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1245 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/atheros/atlx/atl2.c 1041 */;
}
