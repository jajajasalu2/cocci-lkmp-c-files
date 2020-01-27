cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/apple/macmace.c 95 */(struct net_device *dev,
								   void *addr);
	irqreturn_t cocci_id/* drivers/net/ethernet/apple/macmace.c 93 */(int irq,
									  void *dev_id);
	void cocci_id/* drivers/net/ethernet/apple/macmace.c 91 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/apple/macmace.c 90 */(struct net_device *dev,
								  void *addr);
	netdev_tx_t cocci_id/* drivers/net/ethernet/apple/macmace.c 88 */(struct sk_buff *skb,
									  struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/apple/macmace.c 87 */(struct net_device *dev);
	struct mace_data cocci_id/* drivers/net/ethernet/apple/macmace.c 84 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/apple/macmace.c 758 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/apple/macmace.c 738 */;
	struct mace_frame *cocci_id/* drivers/net/ethernet/apple/macmace.c 702 */;
	struct mace_frame {
		u8 rcvcnt;
		u8 pad1;
		u8 rcvsts;
		u8 pad2;
		u8 rntpc;
		u8 pad3;
		u8 rcvcc;
		u8 pad4;
		u32 pad5;
		u32 pad6;
		u8 data[1];
	} cocci_id/* drivers/net/ethernet/apple/macmace.c 69 */;
	u32 cocci_id/* drivers/net/ethernet/apple/macmace.c 678 */;
	u16 cocci_id/* drivers/net/ethernet/apple/macmace.c 677 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/apple/macmace.c 672 */;
	unsigned int cocci_id/* drivers/net/ethernet/apple/macmace.c 638 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/apple/macmace.c 637 */;
	struct mace_data {
		volatile struct mace *mace;
		unsigned char *tx_ring;
		dma_addr_t tx_ring_phys;
		unsigned char *rx_ring;
		dma_addr_t rx_ring_phys;
		int dma_intr;
		int rx_slot,rx_tail;
		int tx_slot,tx_sloti,tx_count;
		int chipid;
		struct device *device;
	} cocci_id/* drivers/net/ethernet/apple/macmace.c 56 */;
	unsigned long cocci_id/* drivers/net/ethernet/apple/macmace.c 558 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/apple/macmace.c 496 */;
	unsigned char cocci_id/* drivers/net/ethernet/apple/macmace.c 495 */[8];
	netdev_tx_t cocci_id/* drivers/net/ethernet/apple/macmace.c 443 */;
	char cocci_id/* drivers/net/ethernet/apple/macmace.c 37 */[];
	int cocci_id/* drivers/net/ethernet/apple/macmace.c 323 */;
	unsigned char *cocci_id/* drivers/net/ethernet/apple/macmace.c 322 */;
	volatile struct mace *cocci_id/* drivers/net/ethernet/apple/macmace.c 321 */;
	struct mace_data *cocci_id/* drivers/net/ethernet/apple/macmace.c 320 */;
	struct net_device *cocci_id/* drivers/net/ethernet/apple/macmace.c 318 */;
	void *cocci_id/* drivers/net/ethernet/apple/macmace.c 318 */;
	void cocci_id/* drivers/net/ethernet/apple/macmace.c 318 */;
	u8 cocci_id/* drivers/net/ethernet/apple/macmace.c 230 */;
	unsigned char cocci_id/* drivers/net/ethernet/apple/macmace.c 199 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/apple/macmace.c 178 */;
}
