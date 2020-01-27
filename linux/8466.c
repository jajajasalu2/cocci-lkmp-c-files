cocci_test_suite() {
	void __iomem *cocci_id/* drivers/net/ethernet/amd/sun3lance.c 952 */;
	void __exit cocci_id/* drivers/net/ethernet/amd/sun3lance.c 948 */;
	void cocci_id/* drivers/net/ethernet/amd/sun3lance.c 948 */;
	int __init cocci_id/* drivers/net/ethernet/amd/sun3lance.c 942 */;
	short cocci_id/* drivers/net/ethernet/amd/sun3lance.c 915 */[4];
	struct lance_private *cocci_id/* drivers/net/ethernet/amd/sun3lance.c 875 */;
	struct net_device *cocci_id/* drivers/net/ethernet/amd/sun3lance.c 873 */;
	int cocci_id/* drivers/net/ethernet/amd/sun3lance.c 873 */;
	u_short *cocci_id/* drivers/net/ethernet/amd/sun3lance.c 841 */;
	u_char *cocci_id/* drivers/net/ethernet/amd/sun3lance.c 840 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/amd/sun3lance.c 808 */;
	short cocci_id/* drivers/net/ethernet/amd/sun3lance.c 807 */;
	struct lance_rx_head *cocci_id/* drivers/net/ethernet/amd/sun3lance.c 789 */;
	struct lance_tx_head *cocci_id/* drivers/net/ethernet/amd/sun3lance.c 702 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/sun3lance.c 655 */;
	void *cocci_id/* drivers/net/ethernet/amd/sun3lance.c 655 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/sun3lance.c 515 */;
	struct lance_memory cocci_id/* drivers/net/ethernet/amd/sun3lance.c 348 */;
	unsigned short cocci_id/* drivers/net/ethernet/amd/sun3lance.c 315 */;
	volatile unsigned short *cocci_id/* drivers/net/ethernet/amd/sun3lance.c 314 */;
	unsigned long cocci_id/* drivers/net/ethernet/amd/sun3lance.c 309 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/amd/sun3lance.c 298 */;
	struct lance_private cocci_id/* drivers/net/ethernet/amd/sun3lance.c 272 */;
	struct net_device *__init cocci_id/* drivers/net/ethernet/amd/sun3lance.c 248 */;
	int cocci_id/* drivers/net/ethernet/amd/sun3lance.c 243 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/sun3lance.c 241 */(int irq,
									   void *dev_id);
	const char cocci_id/* drivers/net/ethernet/amd/sun3lance.c 24 */[];
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/sun3lance.c 239 */(struct sk_buff *skb,
									   struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/amd/sun3lance.c 238 */(struct net_device *dev);
	struct lance_private {
		volatile unsigned short *iobase;
		struct lance_memory *mem;
		int new_rx,new_tx;
		int old_tx,old_rx;
		long tx_full;
		long lock;
	} cocci_id/* drivers/net/ethernet/amd/sun3lance.c 150 */;
	struct lance_memory {
		struct lance_init_block init;
		struct lance_tx_head tx_head[TX_RING_SIZE];
		struct lance_rx_head rx_head[RX_RING_SIZE];
		char rx_data[RX_RING_SIZE][PKT_BUF_SZ];
		char tx_data[TX_RING_SIZE][PKT_BUF_SZ];
	} cocci_id/* drivers/net/ethernet/amd/sun3lance.c 140 */;
	struct lance_init_block {
		unsigned short mode;
		unsigned char hwaddr[6];
		unsigned int filter[2];
		unsigned short rdra;
		unsigned short rlen;
		unsigned short tdra;
		unsigned short tlen;
		unsigned short pad[4];
	} cocci_id/* drivers/net/ethernet/amd/sun3lance.c 127 */;
	struct lance_tx_head {
		unsigned short base;
		volatile unsigned char flag;
		unsigned char base_hi;
		short length;
		volatile short misc;
	} cocci_id/* drivers/net/ethernet/amd/sun3lance.c 118 */;
	struct lance_rx_head {
		unsigned short base;
		volatile unsigned char flag;
		unsigned char base_hi;
		short buf_length;
		volatile short msg_length;
	} cocci_id/* drivers/net/ethernet/amd/sun3lance.c 110 */;
}
