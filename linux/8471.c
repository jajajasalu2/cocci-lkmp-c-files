cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/amd/declance.c 948 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/amd/declance.c 947 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/declance.c 898 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/declance.c 726 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/amd/declance.c 563 */;
	struct lance_init_block cocci_id/* drivers/net/ethernet/amd/declance.c 474 */;
	uint cocci_id/* drivers/net/ethernet/amd/declance.c 454 */;
	volatile u16 *cocci_id/* drivers/net/ethernet/amd/declance.c 453 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/amd/declance.c 393 */;
	unsigned char *cocci_id/* drivers/net/ethernet/amd/declance.c 392 */;
	unsigned short cocci_id/* drivers/net/ethernet/amd/declance.c 391 */;
	const unsigned short *cocci_id/* drivers/net/ethernet/amd/declance.c 390 */;
	unsigned short *cocci_id/* drivers/net/ethernet/amd/declance.c 389 */;
	const int cocci_id/* drivers/net/ethernet/amd/declance.c 387 */;
	const void *cocci_id/* drivers/net/ethernet/amd/declance.c 387 */;
	void *cocci_id/* drivers/net/ethernet/amd/declance.c 387 */;
	int cocci_id/* drivers/net/ethernet/amd/declance.c 387 */;
	void cocci_id/* drivers/net/ethernet/amd/declance.c 387 */;
	volatile unsigned short *cocci_id/* drivers/net/ethernet/amd/declance.c 296 */;
	short cocci_id/* drivers/net/ethernet/amd/declance.c 296 */;
	struct tc_driver cocci_id/* drivers/net/ethernet/amd/declance.c 293 */;
	struct lance_regs {
		volatile unsigned short rdp;
		unsigned short pad;
		volatile unsigned short rap;
	} cocci_id/* drivers/net/ethernet/amd/declance.c 285 */;
	struct lance_private {
		struct net_device *next;
		int type;
		int dma_irq;
		volatile struct lance_regs *ll;
		spinlock_t lock;
		int rx_new,tx_new;
		int rx_old,tx_old;
		unsigned short busmaster_regval;
		struct timer_list multicast_timer;
		struct net_device *dev;
		char *rx_buf_ptr_cpu[RX_RING_SIZE];
		char *tx_buf_ptr_cpu[TX_RING_SIZE];
		uint rx_buf_ptr_lnc[RX_RING_SIZE];
		uint tx_buf_ptr_lnc[TX_RING_SIZE];
	} cocci_id/* drivers/net/ethernet/amd/declance.c 250 */;
	struct lance_tx_desc cocci_id/* drivers/net/ethernet/amd/declance.c 245 */;
	struct lance_rx_desc cocci_id/* drivers/net/ethernet/amd/declance.c 239 */;
	u8 *cocci_id/* drivers/net/ethernet/amd/declance.c 236 */;
	struct lance_init_block {
		unsigned short mode;
		unsigned short phys_addr[3];
		unsigned short filter[4];
		unsigned short rx_ptr;
		unsigned short rx_len;
		unsigned short tx_ptr;
		unsigned short tx_len;
		short gap[4];
		struct lance_rx_desc brx_ring[RX_RING_SIZE];
		struct lance_tx_desc btx_ring[TX_RING_SIZE];
	} cocci_id/* drivers/net/ethernet/amd/declance.c 207 */;
	struct lance_tx_desc {
		unsigned short tmd0;
		unsigned short tmd1;
		short length;
		unsigned short misc;
	} cocci_id/* drivers/net/ethernet/amd/declance.c 196 */;
	struct lance_rx_desc {
		unsigned short rmd0;
		unsigned short rmd1;
		short length;
		unsigned short mblength;
	} cocci_id/* drivers/net/ethernet/amd/declance.c 187 */;
	void __exit cocci_id/* drivers/net/ethernet/amd/declance.c 1372 */;
	int __init cocci_id/* drivers/net/ethernet/amd/declance.c 1362 */;
	const struct tc_device_id cocci_id/* drivers/net/ethernet/amd/declance.c 1318 */[];
	int cocci_id/* drivers/net/ethernet/amd/declance.c 1315 */(struct device *dev);
	struct lance_private *cocci_id/* drivers/net/ethernet/amd/declance.c 1306 */;
	struct net_device *cocci_id/* drivers/net/ethernet/amd/declance.c 1305 */;
	struct lance_regs *cocci_id/* drivers/net/ethernet/amd/declance.c 1190 */;
	char *cocci_id/* drivers/net/ethernet/amd/declance.c 1089 */;
	struct lance_private cocci_id/* drivers/net/ethernet/amd/declance.c 1053 */;
	const char *cocci_id/* drivers/net/ethernet/amd/declance.c 1035 */;
	unsigned long cocci_id/* drivers/net/ethernet/amd/declance.c 1033 */;
	resource_size_t cocci_id/* drivers/net/ethernet/amd/declance.c 1031 */;
	volatile struct lance_regs *cocci_id/* drivers/net/ethernet/amd/declance.c 1030 */;
	char cocci_id/* drivers/net/ethernet/amd/declance.c 1027 */[10];
	const char cocci_id/* drivers/net/ethernet/amd/declance.c 1026 */[];
	unsigned cocci_id/* drivers/net/ethernet/amd/declance.c 1025 */;
	struct device *cocci_id/* drivers/net/ethernet/amd/declance.c 1023 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/amd/declance.c 1013 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/amd/declance.c 1005 */;
}
