cocci_test_suite() {
	struct sk_buff *cocci_id/* drivers/net/ethernet/amd/atarilance.c 991 */;
	short cocci_id/* drivers/net/ethernet/amd/atarilance.c 990 */;
	struct lance_rx_head *cocci_id/* drivers/net/ethernet/amd/atarilance.c 973 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/atarilance.c 850 */;
	void *cocci_id/* drivers/net/ethernet/amd/atarilance.c 850 */;
	struct lance_tx_head *cocci_id/* drivers/net/ethernet/amd/atarilance.c 779 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/atarilance.c 773 */;
	struct lance_memory cocci_id/* drivers/net/ethernet/amd/atarilance.c 692 */;
	unsigned cocci_id/* drivers/net/ethernet/amd/atarilance.c 686 */;
	unsigned int cocci_id/* drivers/net/ethernet/amd/atarilance.c 565 */;
	unsigned short *cocci_id/* drivers/net/ethernet/amd/atarilance.c 554 */;
	struct lance_memory *cocci_id/* drivers/net/ethernet/amd/atarilance.c 533 */;
	long cocci_id/* drivers/net/ethernet/amd/atarilance.c 480 */;
	unsigned short cocci_id/* drivers/net/ethernet/amd/atarilance.c 477 */;
	volatile unsigned short *cocci_id/* drivers/net/ethernet/amd/atarilance.c 469 */;
	struct lance_addr *cocci_id/* drivers/net/ethernet/amd/atarilance.c 467 */;
	unsigned long __init cocci_id/* drivers/net/ethernet/amd/atarilance.c 466 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/amd/atarilance.c 456 */;
	const char cocci_id/* drivers/net/ethernet/amd/atarilance.c 45 */[];
	long *cocci_id/* drivers/net/ethernet/amd/atarilance.c 412 */;
	unsigned long cocci_id/* drivers/net/ethernet/amd/atarilance.c 411 */;
	volatile void *cocci_id/* drivers/net/ethernet/amd/atarilance.c 407 */;
	int __init cocci_id/* drivers/net/ethernet/amd/atarilance.c 407 */;
	int cocci_id/* drivers/net/ethernet/amd/atarilance.c 407 */;
	struct lance_private cocci_id/* drivers/net/ethernet/amd/atarilance.c 382 */;
	struct net_device *__init cocci_id/* drivers/net/ethernet/amd/atarilance.c 370 */;
	const char *cocci_id/* drivers/net/ethernet/amd/atarilance.c 360 */;
	char *cocci_id/* drivers/net/ethernet/amd/atarilance.c 359 */;
	const void *cocci_id/* drivers/net/ethernet/amd/atarilance.c 357 */;
	size_t cocci_id/* drivers/net/ethernet/amd/atarilance.c 357 */;
	int cocci_id/* drivers/net/ethernet/amd/atarilance.c 348 */(struct net_device *dev,
								    void *addr);
	int cocci_id/* drivers/net/ethernet/amd/atarilance.c 346 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/atarilance.c 344 */(int irq,
									    void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/atarilance.c 342 */(struct sk_buff *skb,
									    struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/amd/atarilance.c 341 */(struct net_device *dev);
	unsigned long cocci_id/* drivers/net/ethernet/amd/atarilance.c 338 */(struct net_device *dev,
									      struct lance_addr *init_rec);
	struct lance_addr {
		unsigned long memaddr;
		unsigned long ioaddr;
		int slow_flag;
	} cocci_id/* drivers/net/ethernet/amd/atarilance.c 245 */[];
	struct lance_private {
		enum lance_type cardtype;
		struct lance_ioreg *iobase;
		struct lance_memory *mem;
		int cur_rx,cur_tx;
		int dirty_tx;
		void *(*memcpy_f)(void *, const void *, size_t);
		long tx_full;
		spinlock_t devlock;
	} cocci_id/* drivers/net/ethernet/amd/atarilance.c 218 */;
	char *cocci_id/* drivers/net/ethernet/amd/atarilance.c 210 */[];
	enum lance_type{OLD_RIEBL, NEW_RIEBL, PAM_CARD,} cocci_id/* drivers/net/ethernet/amd/atarilance.c 204 */;
	struct lance_ioreg {
		volatile unsigned short data;
		volatile unsigned short addr;
		unsigned char _dummy1[3];
		volatile unsigned char ivec;
		unsigned char _dummy2[5];
		volatile unsigned char eeprom;
		unsigned char _dummy3;
		volatile unsigned char mem;
	} cocci_id/* drivers/net/ethernet/amd/atarilance.c 191 */;
	unsigned char cocci_id/* drivers/net/ethernet/amd/atarilance.c 184 */[6];
	unsigned char *cocci_id/* drivers/net/ethernet/amd/atarilance.c 176 */;
	unsigned long *cocci_id/* drivers/net/ethernet/amd/atarilance.c 175 */;
	struct lance_memory {
		struct lance_init_block init;
		struct lance_tx_head tx_head[TX_RING_SIZE];
		struct lance_rx_head rx_head[RX_RING_SIZE];
		char packet_area[0];
	} cocci_id/* drivers/net/ethernet/amd/atarilance.c 155 */;
	struct lance_init_block {
		unsigned short mode;
		unsigned char hwaddr[6];
		unsigned filter[2];
		struct ringdesc rx_ring;
		struct ringdesc tx_ring;
	} cocci_id/* drivers/net/ethernet/amd/atarilance.c 145 */;
	struct ringdesc {
		unsigned short adr_lo;
		unsigned char len;
		unsigned char adr_hi;
	} cocci_id/* drivers/net/ethernet/amd/atarilance.c 138 */;
	struct lance_tx_head {
		unsigned short base;
		volatile unsigned char flag;
		unsigned char base_hi;
		short length;
		volatile short misc;
	} cocci_id/* drivers/net/ethernet/amd/atarilance.c 130 */;
	struct lance_rx_head {
		unsigned short base;
		volatile unsigned char flag;
		unsigned char base_hi;
		short buf_length;
		volatile short msg_length;
	} cocci_id/* drivers/net/ethernet/amd/atarilance.c 122 */;
	void __exit cocci_id/* drivers/net/ethernet/amd/atarilance.c 1150 */;
	void cocci_id/* drivers/net/ethernet/amd/atarilance.c 1150 */;
	struct net_device *cocci_id/* drivers/net/ethernet/amd/atarilance.c 1142 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/amd/atarilance.c 1117 */;
	short cocci_id/* drivers/net/ethernet/amd/atarilance.c 1089 */[4];
	struct lance_ioreg *cocci_id/* drivers/net/ethernet/amd/atarilance.c 1048 */;
	struct lance_private *cocci_id/* drivers/net/ethernet/amd/atarilance.c 1047 */;
	u_short *cocci_id/* drivers/net/ethernet/amd/atarilance.c 1018 */;
	u_char *cocci_id/* drivers/net/ethernet/amd/atarilance.c 1014 */;
}
