cocci_test_suite() {
	char cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 89 */[]__initdata;
	irqreturn_t cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 712 */;
	void *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 712 */;
	char cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 513 */[];
	unsigned long cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 490 */;
	unsigned int cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 489 */;
	struct net_device *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 486 */;
	int cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 486 */;
	unsigned char *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 422 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 420 */;
	long cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 334 */;
	int *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 276 */;
	u16 cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 223 */;
	u8 cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 205 */;
	u8 *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 199 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1900 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1893 */[];
	struct net_local cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1846 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1844 */;
	int __init cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1844 */;
	struct net_local *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1833 */;
	void cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1831 */;
	void __exit cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1830 */;
	char *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 171 */;
	char cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1699 */[8];
	unsigned *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1649 */;
	struct net_device *__initcocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1646 */;
	void __iomem *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1590 */;
	int __init cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1585 */;
	int cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1536 */[IRQ_MAP_LEN / 2];
	int cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1316 */[CHKSUM_LEN];
	unsigned cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1315 */;
	void __init cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1271 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1257 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1225 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1142 */;
	unsigned int cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 112 */[];
	struct net_device_stats *cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 1116 */;
	unsigned int cocci_id/* drivers/net/ethernet/cirrus/cs89x0.c 108 */[]__used __initdata;
	struct net_local {
		int chip_type;
		char chip_revision;
		int send_cmd;
		int auto_neg_cnf;
		int adapter_cnf;
		int isa_config;
		int irq_map;
		int rx_mode;
		int curr_rx_cfg;
		int linectl;
		int send_underrun;
		int force;
		spinlock_t lock;
		void __iomem *virt_addr;
#if ALLOW_DMA
		int use_dma;
		int dma;
		int dmasize;
		unsigned char *dma_buff;
		unsigned char *end_dma_buff;
		unsigned char *rx_dma_ptr;
#endif
	} cocci_id/*  1 */;
}
