cocci_test_suite() {
	card_t **cocci_id/* drivers/net/wan/c101.c 80 */;
	struct card_s {
		struct net_device *dev;
		spinlock_t lock;
		u8 __iomem *win0base;
		u32 phy_winbase;
		sync_serial_settings settings;
		int rxpart;
		unsigned short encoding;
		unsigned short parity;
		u16 rx_ring_buffers;
		u16 tx_ring_buffers;
		u16 buff_offset;
		u16 rxin;
		u16 txin;
		u16 txlast;
		u8 rxs,txs,tmc;
		u8 irq;
		u8 page;
		struct card_s *next_card;
	} cocci_id/* drivers/net/wan/c101.c 55 */;
	char *cocci_id/* drivers/net/wan/c101.c 52 */;
	card_t *cocci_id/* drivers/net/wan/c101.c 431 */;
	void __exit cocci_id/* drivers/net/wan/c101.c 429 */;
	void cocci_id/* drivers/net/wan/c101.c 429 */;
	unsigned long cocci_id/* drivers/net/wan/c101.c 409 */;
	int __init cocci_id/* drivers/net/wan/c101.c 397 */;
	const char *cocci_id/* drivers/net/wan/c101.c 33 */;
	card_t cocci_id/* drivers/net/wan/c101.c 322 */;
	hdlc_device *cocci_id/* drivers/net/wan/c101.c 308 */;
	const struct net_device_ops cocci_id/* drivers/net/wan/c101.c 298 */;
	sync_serial_settings __user *cocci_id/* drivers/net/wan/c101.c 226 */;
	const size_t cocci_id/* drivers/net/wan/c101.c 224 */;
	sync_serial_settings cocci_id/* drivers/net/wan/c101.c 224 */;
	struct ifreq *cocci_id/* drivers/net/wan/c101.c 222 */;
	port_t *cocci_id/* drivers/net/wan/c101.c 212 */;
	struct net_device *cocci_id/* drivers/net/wan/c101.c 210 */;
	int cocci_id/* drivers/net/wan/c101.c 210 */;
	u8 cocci_id/* drivers/net/wan/c101.c 151 */;
	void cocci_id/* drivers/net/wan/c101.c 100 */(port_t *port);
}