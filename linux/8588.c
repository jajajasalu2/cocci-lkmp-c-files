cocci_test_suite() {
	struct macio_driver cocci_id/* drivers/net/ethernet/apple/mace.c 994 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/apple/mace.c 985 */[];
	void cocci_id/* drivers/net/ethernet/apple/mace.c 93 */(struct net_device *dev,
								void *addr);
	unsigned short *cocci_id/* drivers/net/ethernet/apple/mace.c 925 */;
	void cocci_id/* drivers/net/ethernet/apple/mace.c 92 */(struct mace_data *mp);
	void cocci_id/* drivers/net/ethernet/apple/mace.c 91 */(volatile struct dbdma_regs __iomem *dma);
	void cocci_id/* drivers/net/ethernet/apple/mace.c 90 */(struct timer_list *t);
	unsigned cocci_id/* drivers/net/ethernet/apple/mace.c 882 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/apple/mace.c 86 */(int irq,
								       void *dev_id);
	int cocci_id/* drivers/net/ethernet/apple/mace.c 85 */(struct net_device *dev,
							       void *addr);
	void cocci_id/* drivers/net/ethernet/apple/mace.c 84 */(struct net_device *dev);
	netdev_tx_t cocci_id/* drivers/net/ethernet/apple/mace.c 82 */(struct sk_buff *skb,
								       struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/apple/mace.c 81 */(struct net_device *dev);
	struct timer_list *cocci_id/* drivers/net/ethernet/apple/mace.c 803 */;
	struct mace_data cocci_id/* drivers/net/ethernet/apple/mace.c 77 */;
	unsigned long cocci_id/* drivers/net/ethernet/apple/mace.c 666 */;
	volatile struct dbdma_cmd *cocci_id/* drivers/net/ethernet/apple/mace.c 663 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/apple/mace.c 657 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/apple/mace.c 598 */;
	unsigned char cocci_id/* drivers/net/ethernet/apple/mace.c 597 */[8];
	u32 cocci_id/* drivers/net/ethernet/apple/mace.c 589 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/apple/mace.c 529 */;
	struct mace_data {
		volatile struct mace __iomem *mace;
		volatile struct dbdma_regs __iomem *tx_dma;
		int tx_dma_intr;
		volatile struct dbdma_regs __iomem *rx_dma;
		int rx_dma_intr;
		volatile struct dbdma_cmd *tx_cmds;
		volatile struct dbdma_cmd *rx_cmds;
		struct sk_buff *rx_bufs[N_RX_RING];
		int rx_fill;
		int rx_empty;
		struct sk_buff *tx_bufs[N_TX_RING];
		int tx_fill;
		int tx_empty;
		unsigned char maccc;
		unsigned char tx_fullup;
		unsigned char tx_active;
		unsigned char tx_bad_runt;
		struct timer_list tx_timeout;
		int timeout_active;
		int port_aaui;
		int chipid;
		struct macio_dev *mdev;
		spinlock_t lock;
	} cocci_id/* drivers/net/ethernet/apple/mace.c 45 */;
	struct dbdma_cmd cocci_id/* drivers/net/ethernet/apple/mace.c 444 */;
	char *cocci_id/* drivers/net/ethernet/apple/mace.c 444 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/apple/mace.c 436 */;
	int cocci_id/* drivers/net/ethernet/apple/mace.c 377 */;
	unsigned char *cocci_id/* drivers/net/ethernet/apple/mace.c 376 */;
	volatile struct mace __iomem *cocci_id/* drivers/net/ethernet/apple/mace.c 375 */;
	struct mace_data *cocci_id/* drivers/net/ethernet/apple/mace.c 374 */;
	struct net_device *cocci_id/* drivers/net/ethernet/apple/mace.c 372 */;
	void *cocci_id/* drivers/net/ethernet/apple/mace.c 372 */;
	void cocci_id/* drivers/net/ethernet/apple/mace.c 372 */;
	volatile struct dbdma_regs __iomem *cocci_id/* drivers/net/ethernet/apple/mace.c 302 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/apple/mace.c 114 */;
	struct device_node *cocci_id/* drivers/net/ethernet/apple/mace.c 111 */;
	const struct of_device_id *cocci_id/* drivers/net/ethernet/apple/mace.c 109 */;
	struct macio_dev *cocci_id/* drivers/net/ethernet/apple/mace.c 109 */;
	void __exit cocci_id/* drivers/net/ethernet/apple/mace.c 1011 */;
	int __init cocci_id/* drivers/net/ethernet/apple/mace.c 1006 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/apple/mace.c 100 */;
}
