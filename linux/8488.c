cocci_test_suite() {
	void *cocci_id/* drivers/net/ethernet/amd/sunlance.c 975 */;
	struct ethhdr *cocci_id/* drivers/net/ethernet/amd/sunlance.c 901 */;
	u16 *cocci_id/* drivers/net/ethernet/amd/sunlance.c 900 */;
	struct lance_init_block *cocci_id/* drivers/net/ethernet/amd/sunlance.c 899 */;
	u16 cocci_id/* drivers/net/ethernet/amd/sunlance.c 889 */;
	struct ethhdr __iomem *cocci_id/* drivers/net/ethernet/amd/sunlance.c 888 */;
	u16 __iomem *cocci_id/* drivers/net/ethernet/amd/sunlance.c 887 */;
	struct lance_init_block __iomem *cocci_id/* drivers/net/ethernet/amd/sunlance.c 886 */;
	int cocci_id/* drivers/net/ethernet/amd/sunlance.c 882 */;
	struct net_device *cocci_id/* drivers/net/ethernet/amd/sunlance.c 881 */;
	struct lance_private *cocci_id/* drivers/net/ethernet/amd/sunlance.c 879 */;
	void cocci_id/* drivers/net/ethernet/amd/sunlance.c 879 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/sunlance.c 815 */;
	struct lance_tx_desc __iomem *cocci_id/* drivers/net/ethernet/amd/sunlance.c 745 */;
	char cocci_id/* drivers/net/ethernet/amd/sunlance.c 73 */[];
	unsigned char cocci_id/* drivers/net/ethernet/amd/sunlance.c 682 */;
	struct lance_rx_desc __iomem *cocci_id/* drivers/net/ethernet/amd/sunlance.c 681 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/amd/sunlance.c 647 */;
	struct lance_tx_desc *cocci_id/* drivers/net/ethernet/amd/sunlance.c 577 */;
	u8 cocci_id/* drivers/net/ethernet/amd/sunlance.c 513 */;
	struct lance_rx_desc *cocci_id/* drivers/net/ethernet/amd/sunlance.c 512 */;
	u32 cocci_id/* drivers/net/ethernet/amd/sunlance.c 499 */;
	__u32 cocci_id/* drivers/net/ethernet/amd/sunlance.c 326 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/amd/sunlance.c 325 */;
	long cocci_id/* drivers/net/ethernet/amd/sunlance.c 297 */;
	struct lance_private {
		void __iomem *lregs;
		void __iomem *dregs;
		struct lance_init_block __iomem *init_block_iomem;
		struct lance_init_block *init_block_mem;
		spinlock_t lock;
		int rx_new,tx_new;
		int rx_old,tx_old;
		struct platform_device *ledma;
		char tpe;
		char auto_select;
		char burst_sizes;
		char pio_buffer;
		unsigned short busmaster_regval;
		void (*init_ring)(struct net_device *);
		void (*rx)(struct net_device *);
		void (*tx)(struct net_device *);
		char *name;
		dma_addr_t init_block_dvma;
		struct net_device *dev;
		struct platform_device *op;
		struct platform_device *lebuffer;
		struct timer_list multicast_timer;
	} cocci_id/* drivers/net/ethernet/amd/sunlance.c 241 */;
	struct lance_init_block {
		u16 mode;
		u8 phys_addr[6];
		u32 filter[2];
		u16 rx_ptr;
		u16 rx_len;
		u16 tx_ptr;
		u16 tx_len;
		struct lance_rx_desc brx_ring[RX_RING_SIZE];
		struct lance_tx_desc btx_ring[TX_RING_SIZE];
		u8 tx_buf[TX_RING_SIZE][TX_BUFF_SIZE];
		u8 pad[2];
		u8 rx_buf[RX_RING_SIZE][RX_BUFF_SIZE];
	} cocci_id/* drivers/net/ethernet/amd/sunlance.c 215 */;
	struct lance_tx_desc {
		u16 tmd0;
		u8 tmd1_bits;
		u8 tmd1_hadr;
		s16 length;
		u16 misc;
	} cocci_id/* drivers/net/ethernet/amd/sunlance.c 205 */;
	struct lance_rx_desc {
		u16 rmd0;
		u8 rmd1_bits;
		u8 rmd1_hadr;
		s16 length;
		u16 mblength;
	} cocci_id/* drivers/net/ethernet/amd/sunlance.c 195 */;
	struct platform_driver cocci_id/* drivers/net/ethernet/amd/sunlance.c 1525 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/amd/sunlance.c 1516 */[];
	const char *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1396 */;
	unsigned int cocci_id/* drivers/net/ethernet/amd/sunlance.c 1395 */;
	struct lance_private cocci_id/* drivers/net/ethernet/amd/sunlance.c 1313 */;
	unsigned cocci_id/* drivers/net/ethernet/amd/sunlance.c 1308 */;
	struct device_node *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1307 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/amd/sunlance.c 1293 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/amd/sunlance.c 1288 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1282 */;
	struct lance_init_block cocci_id/* drivers/net/ethernet/amd/sunlance.c 1272 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1265 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1252 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1167 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/sunlance.c 1110 */;
	char *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1022 */;
	unsigned long cocci_id/* drivers/net/ethernet/amd/sunlance.c 1013 */;
	u8 *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1011 */;
	u32 *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1009 */;
	unsigned char *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1006 */;
	void __iomem *cocci_id/* drivers/net/ethernet/amd/sunlance.c 1006 */;
}
