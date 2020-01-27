cocci_test_suite() {
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/lance.c 950 */;
	unsigned int cocci_id/* drivers/net/ethernet/amd/lance.c 902 */;
	u32 cocci_id/* drivers/net/ethernet/amd/lance.c 882 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/amd/lance.c 870 */;
	gfp_t cocci_id/* drivers/net/ethernet/amd/lance.c 861 */;
	struct card {
		char id_offset14;
		char id_offset15;
	} cocci_id/* drivers/net/ethernet/amd/lance.c 71 */[];
	int __init cocci_id/* drivers/net/ethernet/amd/lance.c 68 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/amd/lance.c 67 */(struct net_device *dev,
							      int ioaddr,
							      int irq,
							      int options);
	const char cocci_id/* drivers/net/ethernet/amd/lance.c 660 */[];
	unsigned int cocci_id/* drivers/net/ethernet/amd/lance.c 66 */[]__initdata;
	const char cocci_id/* drivers/net/ethernet/amd/lance.c 598 */[8];
	const char cocci_id/* drivers/net/ethernet/amd/lance.c 590 */[4];
	const short cocci_id/* drivers/net/ethernet/amd/lance.c 491 */[];
	void __iomem *cocci_id/* drivers/net/ethernet/amd/lance.c 480 */;
	const char *cocci_id/* drivers/net/ethernet/amd/lance.c 473 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/amd/lance.c 457 */;
	struct net_device *__init cocci_id/* drivers/net/ethernet/amd/lance.c 436 */;
	char cocci_id/* drivers/net/ethernet/amd/lance.c 407 */;
	struct resource *cocci_id/* drivers/net/ethernet/amd/lance.c 402 */;
	unsigned int *cocci_id/* drivers/net/ethernet/amd/lance.c 394 */;
	int __init cocci_id/* drivers/net/ethernet/amd/lance.c 392 */;
	int cocci_id/* drivers/net/ethernet/amd/lance.c 373 */;
	void __exit cocci_id/* drivers/net/ethernet/amd/lance.c 371 */;
	void *cocci_id/* drivers/net/ethernet/amd/lance.c 367 */;
	struct lance_private *cocci_id/* drivers/net/ethernet/amd/lance.c 362 */;
	struct net_device *cocci_id/* drivers/net/ethernet/amd/lance.c 360 */;
	void cocci_id/* drivers/net/ethernet/amd/lance.c 360 */;
	int cocci_id/* drivers/net/ethernet/amd/lance.c 318 */[MAX_CARDS];
	struct net_device *cocci_id/* drivers/net/ethernet/amd/lance.c 316 */[MAX_CARDS];
	void cocci_id/* drivers/net/ethernet/amd/lance.c 309 */(struct net_device *dev);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/amd/lance.c 307 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/amd/lance.c 306 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/lance.c 305 */(int irq,
								       void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/lance.c 302 */(struct sk_buff *skb,
								       struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/amd/lance.c 301 */(struct net_device *dev,
								gfp_t mode);
	unsigned char cocci_id/* drivers/net/ethernet/amd/lance.c 298 */;
	enum{OLD_LANCE=0, PCNET_ISA=1, PCNET_ISAP=2, PCNET_PCI=3, PCNET_VLB=4, PCNET_PCI_II=5, LANCE_UNKNOWN=6,} cocci_id/* drivers/net/ethernet/amd/lance.c 293 */;
	struct lance_chip_type {
		int id_number;
		const char *name;
		int flags;
	} cocci_id/* drivers/net/ethernet/amd/lance.c 264 */[];
	struct lance_private {
		struct lance_rx_head rx_ring[RX_RING_SIZE];
		struct lance_tx_head tx_ring[TX_RING_SIZE];
		struct lance_init_block init_block;
		const char *name;
		struct sk_buff *tx_skbuff[TX_RING_SIZE];
		struct sk_buff *rx_skbuff[RX_RING_SIZE];
		unsigned long rx_buffs;
		char *tx_bounce_buffs[PKT_BUF_SZ];
		int cur_rx,cur_tx;
		int dirty_rx,dirty_tx;
		int dma;
		unsigned char chip_version;
		spinlock_t devlock;
	} cocci_id/* drivers/net/ethernet/amd/lance.c 235 */;
	struct lance_init_block {
		u16 mode;
		u8 phys_addr[6];
		u32 filter[2];
		u32 rx_ring;
		u32 tx_ring;
	} cocci_id/* drivers/net/ethernet/amd/lance.c 226 */;
	struct lance_tx_head {
		s32 base;
		s16 length;
		s16 misc;
	} cocci_id/* drivers/net/ethernet/amd/lance.c 219 */;
	struct lance_rx_head {
		s32 base;
		s16 buf_length;
		s16 msg_length;
	} cocci_id/* drivers/net/ethernet/amd/lance.c 213 */;
	short cocci_id/* drivers/net/ethernet/amd/lance.c 1293 */[4];
	short cocci_id/* drivers/net/ethernet/amd/lance.c 1264 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/amd/lance.c 1259 */;
	unsigned long cocci_id/* drivers/net/ethernet/amd/lance.c 1248 */;
	unsigned char *cocci_id/* drivers/net/ethernet/amd/lance.c 1203 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/lance.c 1020 */;
}
