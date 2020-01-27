cocci_test_suite() {
	dma_addr_t cocci_id/* drivers/net/wan/wanxl.c 99 */;
	struct pci_dev *cocci_id/* drivers/net/wan/wanxl.c 99 */;
	void *cocci_id/* drivers/net/wan/wanxl.c 99 */;
	port_status_t *cocci_id/* drivers/net/wan/wanxl.c 92 */;
	struct port *cocci_id/* drivers/net/wan/wanxl.c 86 */;
	struct net_device *cocci_id/* drivers/net/wan/wanxl.c 86 */;
	void __exit cocci_id/* drivers/net/wan/wanxl.c 833 */;
	int __init cocci_id/* drivers/net/wan/wanxl.c 825 */;
	struct pci_driver cocci_id/* drivers/net/wan/wanxl.c 817 */;
	const struct pci_device_id cocci_id/* drivers/net/wan/wanxl.c 806 */[];
	hdlc_device *cocci_id/* drivers/net/wan/wanxl.c 764 */;
	__be32 *cocci_id/* drivers/net/wan/wanxl.c 715 */;
	struct card {
		int n_ports;
		u8 irq;
		u8 __iomem *plx;
		struct pci_dev *pdev;
		int rx_in;
		struct sk_buff *rx_skbs[RX_QUEUE_LENGTH];
		struct card_status *status;
		dma_addr_t status_address;
		struct port ports[0];
	} cocci_id/* drivers/net/wan/wanxl.c 71 */;
	struct sk_buff *cocci_id/* drivers/net/wan/wanxl.c 698 */;
	struct card_status {
		desc_t rx_descs[RX_QUEUE_LENGTH];
		port_status_t port_status[4];
	} cocci_id/* drivers/net/wan/wanxl.c 65 */;
	struct card_status cocci_id/* drivers/net/wan/wanxl.c 612 */;
	const struct pci_device_id *cocci_id/* drivers/net/wan/wanxl.c 557 */;
	const struct net_device_ops cocci_id/* drivers/net/wan/wanxl.c 548 */;
	struct port {
		struct net_device *dev;
		struct card *card;
		spinlock_t lock;
		int node;
		unsigned int clock_type;
		int tx_in,tx_out;
		struct sk_buff *tx_skbs[TX_BUFFERS];
	} cocci_id/* drivers/net/wan/wanxl.c 54 */;
	struct net_device_stats *cocci_id/* drivers/net/wan/wanxl.c 465 */;
	desc_t *cocci_id/* drivers/net/wan/wanxl.c 450 */;
	unsigned long cocci_id/* drivers/net/wan/wanxl.c 430 */;
	u8 __iomem *cocci_id/* drivers/net/wan/wanxl.c 394 */;
	const char *cocci_id/* drivers/net/wan/wanxl.c 35 */;
	const size_t cocci_id/* drivers/net/wan/wanxl.c 341 */;
	sync_serial_settings cocci_id/* drivers/net/wan/wanxl.c 341 */;
	struct ifreq *cocci_id/* drivers/net/wan/wanxl.c 339 */;
	unsigned short cocci_id/* drivers/net/wan/wanxl.c 316 */;
	netdev_tx_t cocci_id/* drivers/net/wan/wanxl.c 270 */;
	struct card *cocci_id/* drivers/net/wan/wanxl.c 245 */;
	irqreturn_t cocci_id/* drivers/net/wan/wanxl.c 243 */;
	u32 cocci_id/* drivers/net/wan/wanxl.c 117 */;
	void cocci_id/* drivers/net/wan/wanxl.c 115 */;
	unsigned long long cocci_id/* drivers/net/wan/wanxl.c 105 */;
	int cocci_id/* drivers/net/wan/wanxl.c 100 */;
	size_t cocci_id/* drivers/net/wan/wanxl.c 100 */;
}
