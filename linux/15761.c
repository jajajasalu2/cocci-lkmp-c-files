cocci_test_suite() {
	u_long cocci_id/* drivers/staging/hp/hp100.c 615 */;
	void __iomem *cocci_id/* drivers/staging/hp/hp100.c 444 */;
	short cocci_id/* drivers/staging/hp/hp100.c 442 */;
	u_char cocci_id/* drivers/staging/hp/hp100.c 432 */;
	const struct net_device_ops cocci_id/* drivers/staging/hp/hp100.c 412 */;
	struct net_device *__initcocci_id/* drivers/staging/hp/hp100.c 383 */;
	const char *cocci_id/* drivers/staging/hp/hp100.c 325 */;
	void __exit cocci_id/* drivers/staging/hp/hp100.c 3029 */;
	unsigned short cocci_id/* drivers/staging/hp/hp100.c 300 */;
	unsigned char cocci_id/* drivers/staging/hp/hp100.c 299 */[4];
	char cocci_id/* drivers/staging/hp/hp100.c 298 */[HP100_SIG_LEN];
	int __init cocci_id/* drivers/staging/hp/hp100.c 2962 */;
	struct net_device *cocci_id/* drivers/staging/hp/hp100.c 2960 */[HP100_DEVICES];
	int cocci_id/* drivers/staging/hp/hp100.c 2956 */[HP100_DEVICES];
	struct pci_driver cocci_id/* drivers/staging/hp/hp100.c 2931 */;
	const struct pci_device_id *cocci_id/* drivers/staging/hp/hp100.c 2870 */;
	struct pci_dev *cocci_id/* drivers/staging/hp/hp100.c 2869 */;
	struct eisa_driver cocci_id/* drivers/staging/hp/hp100.c 2860 */;
	struct eisa_device *cocci_id/* drivers/staging/hp/hp100.c 2830 */;
	struct hp100_private cocci_id/* drivers/staging/hp/hp100.c 2829 */;
	struct device *cocci_id/* drivers/staging/hp/hp100.c 2827 */;
	struct hp100_private *cocci_id/* drivers/staging/hp/hp100.c 2812 */;
	struct net_device *cocci_id/* drivers/staging/hp/hp100.c 2810 */;
	void cocci_id/* drivers/staging/hp/hp100.c 2810 */;
	u_short cocci_id/* drivers/staging/hp/hp100.c 2748 */;
	long cocci_id/* drivers/staging/hp/hp100.c 2483 */;
	int cocci_id/* drivers/staging/hp/hp100.c 248 */(struct net_device *dev,
							 register hp100_ring_t *ringptr,
							 register u_int *pdlptr);
	void cocci_id/* drivers/staging/hp/hp100.c 245 */(struct net_device *dev);
	void cocci_id/* drivers/staging/hp/hp100.c 244 */(struct net_device *dev,
							  u_short enable);
	int cocci_id/* drivers/staging/hp/hp100.c 241 */(struct net_device *dev,
							 u_short force_relogin);
	void cocci_id/* drivers/staging/hp/hp100.c 239 */(struct net_device *dev,
							  u_short ioaddr);
	irqreturn_t cocci_id/* drivers/staging/hp/hp100.c 236 */(int irq,
								 void *dev_id);
	void cocci_id/* drivers/staging/hp/hp100.c 234 */(struct hp100_private *lp,
							  int ioaddr);
	struct net_device_stats *cocci_id/* drivers/staging/hp/hp100.c 231 */(struct net_device *dev);
	netdev_tx_t cocci_id/* drivers/staging/hp/hp100.c 226 */(struct sk_buff *skb,
								 struct net_device *dev);
	int cocci_id/* drivers/staging/hp/hp100.c 225 */(struct net_device *dev);
	int cocci_id/* drivers/staging/hp/hp100.c 220 */(struct net_device *dev,
							 int ioaddr,
							 u_char bus,
							 struct pci_dev *pci_dev);
	irqreturn_t cocci_id/* drivers/staging/hp/hp100.c 2180 */;
	void *cocci_id/* drivers/staging/hp/hp100.c 2180 */;
	u_char cocci_id/* drivers/staging/hp/hp100.c 2141 */[8];
	struct netdev_hw_addr *cocci_id/* drivers/staging/hp/hp100.c 2081 */;
	struct net_device_stats *cocci_id/* drivers/staging/hp/hp100.c 1965 */;
	const struct pci_device_id cocci_id/* drivers/staging/hp/hp100.c 196 */[];
	u32 cocci_id/* drivers/staging/hp/hp100.c 1955 */;
	const struct eisa_device_id cocci_id/* drivers/staging/hp/hp100.c 185 */[];
	u_char *cocci_id/* drivers/staging/hp/hp100.c 1813 */;
	const char *cocci_id/* drivers/staging/hp/hp100.c 179 */[];
	struct sk_buff *cocci_id/* drivers/staging/hp/hp100.c 1763 */;
	netdev_tx_t cocci_id/* drivers/staging/hp/hp100.c 1623 */;
	dma_addr_t cocci_id/* drivers/staging/hp/hp100.c 1614 */;
	struct hp100_private {
		spinlock_t lock;
		char id[HP100_SIG_LEN];
		u_short chip;
		u_short soft_model;
		u_int memory_size;
		u_int virt_memory_size;
		u_short rx_ratio;
		u_short priority_tx;
		u_short mode;
		u_char bus;
		struct pci_dev *pci_dev;
		short mem_mapped;
		void __iomem *mem_ptr_virt;
		unsigned long mem_ptr_phys;
		short lan_type;
		int hub_status;
		u_char mac1_mode;
		u_char mac2_mode;
		u_char hash_bytes[8];
		hp100_ring_t *rxrhead;
		hp100_ring_t *rxrtail;
		hp100_ring_t *txrhead;
		hp100_ring_t *txrtail;
		hp100_ring_t rxring[MAX_RX_PDL];
		hp100_ring_t txring[MAX_TX_PDL];
		u_int *page_vaddr_algn;
		u_long whatever_offset;
		int rxrcommit;
		int txrcommit;
	} cocci_id/* drivers/staging/hp/hp100.c 139 */;
	unsigned long cocci_id/* drivers/staging/hp/hp100.c 1371 */;
	int cocci_id/* drivers/staging/hp/hp100.c 1369 */;
	unsigned int cocci_id/* drivers/staging/hp/hp100.c 1285 */;
	u_int cocci_id/* drivers/staging/hp/hp100.c 1283 */;
	u_int *cocci_id/* drivers/staging/hp/hp100.c 1250 */;
	hp100_ring_t *cocci_id/* drivers/staging/hp/hp100.c 1243 */;
	u32 *cocci_id/* drivers/staging/hp/hp100.c 1195 */;
}
