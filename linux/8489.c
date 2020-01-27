cocci_test_suite() {
	struct lance_init_block {
		unsigned short mode;
		unsigned char phys_addr[6];
		unsigned filter[2];
		unsigned short rx_ptr;
		unsigned short rx_len;
		unsigned short tx_ptr;
		unsigned short tx_len;
		struct lance_rx_desc brx_ring[RX_RING_SIZE];
		struct lance_tx_desc btx_ring[TX_RING_SIZE];
		char rx_buf[RX_RING_SIZE][RX_BUFF_SIZE];
		char tx_buf[TX_RING_SIZE][TX_BUFF_SIZE];
	} cocci_id/* drivers/net/ethernet/amd/a2065.c 84 */;
	void __exit cocci_id/* drivers/net/ethernet/amd/a2065.c 779 */;
	void cocci_id/* drivers/net/ethernet/amd/a2065.c 779 */;
	int __init cocci_id/* drivers/net/ethernet/amd/a2065.c 774 */;
	struct lance_init_block *cocci_id/* drivers/net/ethernet/amd/a2065.c 730 */;
	volatile struct lance_regs *cocci_id/* drivers/net/ethernet/amd/a2065.c 729 */;
	struct lance_private cocci_id/* drivers/net/ethernet/amd/a2065.c 701 */;
	struct lance_regs cocci_id/* drivers/net/ethernet/amd/a2065.c 691 */;
	u32 cocci_id/* drivers/net/ethernet/amd/a2065.c 688 */;
	struct resource *cocci_id/* drivers/net/ethernet/amd/a2065.c 687 */;
	unsigned long cocci_id/* drivers/net/ethernet/amd/a2065.c 684 */;
	struct lance_private *cocci_id/* drivers/net/ethernet/amd/a2065.c 683 */;
	struct net_device *cocci_id/* drivers/net/ethernet/amd/a2065.c 682 */;
	const struct zorro_device_id *cocci_id/* drivers/net/ethernet/amd/a2065.c 680 */;
	struct zorro_dev *cocci_id/* drivers/net/ethernet/amd/a2065.c 679 */;
	int cocci_id/* drivers/net/ethernet/amd/a2065.c 679 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/amd/a2065.c 669 */;
	struct zorro_driver cocci_id/* drivers/net/ethernet/amd/a2065.c 662 */;
	const struct zorro_device_id cocci_id/* drivers/net/ethernet/amd/a2065.c 654 */[];
	void cocci_id/* drivers/net/ethernet/amd/a2065.c 651 */(struct zorro_dev *z);
	int cocci_id/* drivers/net/ethernet/amd/a2065.c 649 */(struct zorro_dev *z,
							       const struct zorro_device_id *ent);
	struct timer_list *cocci_id/* drivers/net/ethernet/amd/a2065.c 642 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/amd/a2065.c 589 */;
	volatile u16 *cocci_id/* drivers/net/ethernet/amd/a2065.c 588 */;
	u16 *cocci_id/* drivers/net/ethernet/amd/a2065.c 588 */;
	unsigned cocci_id/* drivers/net/ethernet/amd/a2065.c 547 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/a2065.c 535 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/a2065.c 414 */;
	void *cocci_id/* drivers/net/ethernet/amd/a2065.c 414 */;
	volatile struct lance_tx_desc *cocci_id/* drivers/net/ethernet/amd/a2065.c 329 */;
	unsigned char *cocci_id/* drivers/net/ethernet/amd/a2065.c 308 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/amd/a2065.c 295 */;
	char cocci_id/* drivers/net/ethernet/amd/a2065.c 258 */;
	char cocci_id/* drivers/net/ethernet/amd/a2065.c 255 */[RX_RING_SIZE + 1];
	unsigned char cocci_id/* drivers/net/ethernet/amd/a2065.c 251 */;
	volatile struct lance_rx_desc *cocci_id/* drivers/net/ethernet/amd/a2065.c 250 */;
	volatile struct lance_init_block *cocci_id/* drivers/net/ethernet/amd/a2065.c 153 */;
	struct lance_private {
		char *name;
		volatile struct lance_regs *ll;
		volatile struct lance_init_block *init_block;
		volatile struct lance_init_block *lance_init_block;
		int rx_new,tx_new;
		int rx_old,tx_old;
		int lance_log_rx_bufs,lance_log_tx_bufs;
		int rx_ring_mod_mask,tx_ring_mod_mask;
		int tpe;
		int auto_select;
		unsigned short busmaster_regval;
#ifdef CONFIG_SUNLANCE
		struct Linux_SBus_DMA *ledma;
		int burst_sizes;
#endif
		struct timer_list multicast_timer;
		struct net_device *dev;
	} cocci_id/* drivers/net/ethernet/amd/a2065.c 105 */;
}
