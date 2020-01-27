cocci_test_suite() {
	enum c509status{IntLatch=0x0001, AdapterFailure=0x0002, TxComplete=0x0004, TxAvailable=0x0008, RxComplete=0x0010, RxEarly=0x0020, IntReq=0x0040, StatsFull=0x0080, CmdBusy=0x1000,} cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 98 */;
	struct pcmcia_driver cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 958 */;
	const struct pcmcia_device_id cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 947 */[];
	struct pcmcia_device *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 908 */;
	struct el3_private *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 907 */;
	int cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 905 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 855 */;
	short cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 823 */;
	unsigned long cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 769 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 766 */;
	enum c509cmd{TotalReset=0 << 11, SelectWindow=1 << 11, StartCoax=2 << 11, RxDisable=3 << 11, RxEnable=4 << 11, RxReset=5 << 11, RxDiscard=8 << 11, TxEnable=9 << 11, TxDisable=10 << 11, TxReset=11 << 11, FakeIntr=12 << 11, AckIntr=13 << 11, SetIntrEnb=14 << 11, SetStatusEnb=15 << 11, SetRxFilter=16 << 11, SetRxThreshold=17 << 11, SetTxThreshold=18 << 11, SetTxStart=19 << 11, StatsEnable=21 << 11, StatsDisable=22 << 11, StopCoax=23 << 11,} cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 74 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 679 */;
	u16 cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 642 */;
	__u16 cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 604 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 599 */;
	void *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 599 */;
	long cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 573 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 565 */;
	u_char cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 550 */;
	struct ifmap *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 494 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 482 */;
	unsigned int cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 428 */;
	struct net_device *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 426 */;
	void cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 426 */;
	size_t cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 246 */;
	u8 *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 245 */;
	const char *constcocci_id/* drivers/net/ethernet/3com/3c589_cs.c 244 */[];
	__be16 *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 241 */;
	struct el3_private cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 203 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 183 */;
	void cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 181 */(struct pcmcia_device *p_dev);
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 179 */;
	void cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 176 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 175 */(struct net_device *dev);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 173 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 171 */(int irq,
									   void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 169 */(struct sk_buff *skb,
									   struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 167 */(struct net_device *dev,
								   struct ifmap *map);
	void cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 166 */(struct timer_list *t);
	u16 cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 164 */(unsigned int ioaddr,
								   int index);
	void cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 162 */(struct pcmcia_device *link);
	int cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 161 */(struct pcmcia_device *link);
	const char *cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 143 */[];
	struct el3_private {
		struct pcmcia_device *p_dev;
		struct timer_list media;
		u16 media_status;
		u16 fast_poll;
		unsigned long last_irq;
		spinlock_t lock;
	} cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 133 */;
	enum RxFilter{RxStation=1, RxMulticast=2, RxBroadcast=4, RxProm=8,} cocci_id/* drivers/net/ethernet/3com/3c589_cs.c 111 */;
}
