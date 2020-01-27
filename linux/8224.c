cocci_test_suite() {
	struct hme_tx_logent {
		unsigned int tstamp;
		int tx_new,tx_old;
		unsigned int action;
#define TXLOG_ACTION_IRQ 0x01
#define TXLOG_ACTION_TXMIT 0x02
#define TXLOG_ACTION_TBUSY 0x04
#define TXLOG_ACTION_NBUFS 0x08
		unsigned int status;
	} cocci_id/* drivers/net/ethernet/sun/sunhme.c 98 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/sun/sunhme.c 937 */;
	int cocci_id/* drivers/net/ethernet/sun/sunhme.c 77 */[6];
	char cocci_id/* drivers/net/ethernet/sun/sunhme.c 69 */[];
	struct timer_list *cocci_id/* drivers/net/ethernet/sun/sunhme.c 689 */;
	int cocci_id/* drivers/net/ethernet/sun/sunhme.c 672 */(struct happy_meal *hp);
	unsigned short cocci_id/* drivers/net/ethernet/sun/sunhme.c 412 */;
	u32 cocci_id/* drivers/net/ethernet/sun/sunhme.c 346 */;
	struct happy_meal *cocci_id/* drivers/net/ethernet/sun/sunhme.c 346 */;
	void __iomem *cocci_id/* drivers/net/ethernet/sun/sunhme.c 346 */;
	int cocci_id/* drivers/net/ethernet/sun/sunhme.c 346 */;
	void __exit cocci_id/* drivers/net/ethernet/sun/sunhme.c 3384 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/sun/sunhme.c 3327 */;
	const char *cocci_id/* drivers/net/ethernet/sun/sunhme.c 3272 */;
	const struct of_device_id *cocci_id/* drivers/net/ethernet/sun/sunhme.c 3270 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/sun/sunhme.c 3267 */[];
	struct quattro *cocci_id/* drivers/net/ethernet/sun/sunhme.c 3255 */;
	int __init cocci_id/* drivers/net/ethernet/sun/sunhme.c 3245 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/sun/sunhme.c 3238 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/sun/sunhme.c 3231 */[];
	void cocci_id/* drivers/net/ethernet/sun/sunhme.c 322 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/sun/sunhme.c 3076 */;
	__le32 *cocci_id/* drivers/net/ethernet/sun/sunhme.c 307 */;
	hme32 *cocci_id/* drivers/net/ethernet/sun/sunhme.c 305 */;
	struct happy_meal cocci_id/* drivers/net/ethernet/sun/sunhme.c 3027 */;
	char cocci_id/* drivers/net/ethernet/sun/sunhme.c 2996 */[64];
	unsigned long cocci_id/* drivers/net/ethernet/sun/sunhme.c 2994 */;
	struct device_node *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2989 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2985 */;
	size_t cocci_id/* drivers/net/ethernet/sun/sunhme.c 2958 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2956 */;
	unsigned char *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2926 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/sun/sunhme.c 2670 */;
	struct quattro cocci_id/* drivers/net/ethernet/sun/sunhme.c 2652 */;
	struct device *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2561 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/sun/sunhme.c 2544 */;
	const struct linux_prom_registers *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2522 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2510 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2438 */;
	const skb_frag_t *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2344 */;
	const u32 cocci_id/* drivers/net/ethernet/sun/sunhme.c 2295 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/sun/sunhme.c 2286 */;
	hme32 cocci_id/* drivers/net/ethernet/sun/sunhme.c 228 */;
	struct net_device *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2220 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/sun/sunhme.c 2098 */;
	void *cocci_id/* drivers/net/ethernet/sun/sunhme.c 2098 */;
	__sum16 cocci_id/* drivers/net/ethernet/sun/sunhme.c 2079 */;
	u16 cocci_id/* drivers/net/ethernet/sun/sunhme.c 2003 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/sun/sunhme.c 1592 */;
	__u32 cocci_id/* drivers/net/ethernet/sun/sunhme.c 1552 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/sun/sunhme.c 1530 */;
	u16 cocci_id/* drivers/net/ethernet/sun/sunhme.c 1529 */[4];
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/sun/sunhme.c 1301 */;
	struct hmeal_init_block *cocci_id/* drivers/net/ethernet/sun/sunhme.c 1252 */;
	struct happy_meal_txd *cocci_id/* drivers/net/ethernet/sun/sunhme.c 1220 */;
	struct happy_meal_rxd *cocci_id/* drivers/net/ethernet/sun/sunhme.c 1205 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/sun/sunhme.c 1204 */;
	struct hme_tx_logent *cocci_id/* drivers/net/ethernet/sun/sunhme.c 113 */;
	unsigned int cocci_id/* drivers/net/ethernet/sun/sunhme.c 111 */;
	struct hme_tx_logent cocci_id/* drivers/net/ethernet/sun/sunhme.c 109 */[TX_LOG_LEN];
}
