cocci_test_suite() {
	struct port_s {
		struct net_device *dev;
		struct card_s *card;
		spinlock_t lock;
		sync_serial_settings settings;
		int valid;
		int rxpart;
		unsigned short encoding;
		unsigned short parity;
		u16 rxin;
		u16 txin;
		u16 txlast;
		u8 rxs,txs,tmc;
		u8 phy_node;
		u8 log_node;
	} cocci_id/* drivers/net/wan/n2.c 94 */;
	char *cocci_id/* drivers/net/wan/n2.c 56 */;
	void __exit cocci_id/* drivers/net/wan/n2.c 543 */;
	void cocci_id/* drivers/net/wan/n2.c 543 */;
	long cocci_id/* drivers/net/wan/n2.c 504 */[2];
	unsigned long cocci_id/* drivers/net/wan/n2.c 503 */;
	int __init cocci_id/* drivers/net/wan/n2.c 491 */;
	hdlc_device *cocci_id/* drivers/net/wan/n2.c 450 */;
	const char *cocci_id/* drivers/net/wan/n2.c 37 */;
	card_t cocci_id/* drivers/net/wan/n2.c 356 */;
	long cocci_id/* drivers/net/wan/n2.c 335 */;
	const struct net_device_ops cocci_id/* drivers/net/wan/n2.c 327 */;
	sync_serial_settings __user *cocci_id/* drivers/net/wan/n2.c 250 */;
	const size_t cocci_id/* drivers/net/wan/n2.c 248 */;
	sync_serial_settings cocci_id/* drivers/net/wan/n2.c 248 */;
	struct ifreq *cocci_id/* drivers/net/wan/n2.c 246 */;
	u8 cocci_id/* drivers/net/wan/n2.c 235 */;
	port_t *cocci_id/* drivers/net/wan/n2.c 233 */;
	struct net_device *cocci_id/* drivers/net/wan/n2.c 231 */;
	int cocci_id/* drivers/net/wan/n2.c 231 */;
	card_t **cocci_id/* drivers/net/wan/n2.c 129 */;
	card_t *cocci_id/* drivers/net/wan/n2.c 128 */;
	struct card_s {
		u8 __iomem *winbase;
		u32 phy_winbase;
		u32 ram_size;
		u16 io;
		u16 buff_offset;
		u16 rx_ring_buffers;
		u16 tx_ring_buffers;
		u8 irq;
		port_t ports[2];
		struct card_s *next_card;
	} cocci_id/* drivers/net/wan/n2.c 113 */;
}
