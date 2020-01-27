cocci_test_suite() {
	u8 cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 971 */;
	struct xircom_private {
		__le32 *rx_buffer;
		__le32 *tx_buffer;
		dma_addr_t rx_dma_handle;
		dma_addr_t tx_dma_handle;
		struct sk_buff *tx_skb[4];
		void __iomem *ioaddr;
		int open;
		int transmit_used;
		spinlock_t lock;
		struct pci_dev *pdev;
		struct net_device *dev;
	} cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 76 */;
	int cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 73 */[NUMDESCRIPTORS];
	int cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 700 */;
	unsigned int cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 699 */;
	void __iomem *cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 698 */;
	struct xircom_private *cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 696 */;
	void cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 696 */;
	u32 cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 501 */;
	unsigned long cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 500 */;
	const int cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 441 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 375 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 324 */;
	void *cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 324 */;
	struct xircom_private cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 227 */;
	unsigned short cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 197 */;
	struct device *cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 193 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 191 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 191 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 173 */;
	char cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 158 */[64];
	struct pci_driver cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 146 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 140 */[];
	int cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 136 */(struct xircom_private *card);
	void cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 128 */(struct xircom_private *card);
	void cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 118 */(struct net_device *dev,
									  struct xircom_private *card,
									  int descnr,
									  unsigned int bufferoffset);
	void cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 115 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 112 */(struct net_device *dev);
	struct sk_buff *cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 1109 */;
	short cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 1107 */;
	struct net_device *cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 1096 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 109 */(struct sk_buff *skb,
										 struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 108 */(int irq,
										 void *dev_instance);
	void cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 107 */(struct pci_dev *pdev);
	int cocci_id/* drivers/net/ethernet/dec/tulip/xircom_cb.c 106 */(struct pci_dev *pdev,
									 const struct pci_device_id *id);
}
