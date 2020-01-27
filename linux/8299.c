cocci_test_suite() {
	struct net_local *cocci_id/* drivers/net/ethernet/realtek/atp.c 874 */;
	struct net_device *cocci_id/* drivers/net/ethernet/realtek/atp.c 871 */;
	void __exit cocci_id/* drivers/net/ethernet/realtek/atp.c 870 */;
	void cocci_id/* drivers/net/ethernet/realtek/atp.c 870 */;
	unsigned char *cocci_id/* drivers/net/ethernet/realtek/atp.c 762 */;
	struct rx_header cocci_id/* drivers/net/ethernet/realtek/atp.c 758 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/realtek/atp.c 716 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/realtek/atp.c 592 */;
	void *cocci_id/* drivers/net/ethernet/realtek/atp.c 592 */;
	unsigned long cocci_id/* drivers/net/ethernet/realtek/atp.c 557 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/realtek/atp.c 551 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/realtek/atp.c 551 */;
	unsigned char cocci_id/* drivers/net/ethernet/realtek/atp.c 516 */;
	int cocci_id/* drivers/net/ethernet/realtek/atp.c 48 */[NUM_UNITS];
	char cocci_id/* drivers/net/ethernet/realtek/atp.c 406 */;
	unsigned cocci_id/* drivers/net/ethernet/realtek/atp.c 402 */;
	u32 cocci_id/* drivers/net/ethernet/realtek/atp.c 400 */;
	unsigned short __init cocci_id/* drivers/net/ethernet/realtek/atp.c 400 */;
	__be16 *cocci_id/* drivers/net/ethernet/realtek/atp.c 382 */;
	void __init cocci_id/* drivers/net/ethernet/realtek/atp.c 368 */;
	const char cocci_id/* drivers/net/ethernet/realtek/atp.c 34 */[];
	struct net_local cocci_id/* drivers/net/ethernet/realtek/atp.c 305 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/realtek/atp.c 243 */;
	long cocci_id/* drivers/net/ethernet/realtek/atp.c 232 */;
	int cocci_id/* drivers/net/ethernet/realtek/atp.c 224 */;
	int *cocci_id/* drivers/net/ethernet/realtek/atp.c 223 */;
	int __init cocci_id/* drivers/net/ethernet/realtek/atp.c 221 */;
	int cocci_id/* drivers/net/ethernet/realtek/atp.c 205 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/realtek/atp.c 204 */(long ioaddr,
								  int length,
								  unsigned char *buffer,
								  int data_mode);
	irqreturn_t cocci_id/* drivers/net/ethernet/realtek/atp.c 202 */(int irq,
									 void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/ethernet/realtek/atp.c 200 */(struct sk_buff *skb,
									 struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/realtek/atp.c 199 */(long ioaddr,
								  int length);
	void cocci_id/* drivers/net/ethernet/realtek/atp.c 198 */(long ioaddr,
								  int length,
								  unsigned char *packet,
								  int pad,
								  int mode);
	unsigned short cocci_id/* drivers/net/ethernet/realtek/atp.c 195 */(long ioaddr,
									    unsigned int cmd);
	void cocci_id/* drivers/net/ethernet/realtek/atp.c 194 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/realtek/atp.c 193 */(long ioaddr);
	void cocci_id/* drivers/net/ethernet/realtek/atp.c 188 */(struct timer_list *t);
	struct net_local {
		spinlock_t lock;
		struct net_device *next_module;
		struct timer_list timer;
		struct net_device *dev;
		unsigned long last_rx_time;
		int saved_tx_size;
		unsigned int tx_unit_busy:1;
		unsigned char re_tx,addr_mode,pac_cnt_in_tx_buf;
	} cocci_id/* drivers/net/ethernet/realtek/atp.c 169 */;
	char cocci_id/* drivers/net/ethernet/realtek/atp.c 167 */[];
}
