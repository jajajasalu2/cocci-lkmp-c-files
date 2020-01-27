cocci_test_suite() {
	char cocci_id/* drivers/net/ethernet/3com/3c509.c 95 */[];
	struct sk_buff *cocci_id/* drivers/net/ethernet/3com/3c509.c 939 */;
	unsigned long cocci_id/* drivers/net/ethernet/3com/3c509.c 869 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/3c509.c 865 */;
	void *cocci_id/* drivers/net/ethernet/3com/3c509.c 770 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c509.c 769 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/3c509.c 709 */;
	ushort cocci_id/* drivers/net/ethernet/3com/3c509.c 641 */;
	struct device *cocci_id/* drivers/net/ethernet/3com/3c509.c 618 */;
	struct el3_private cocci_id/* drivers/net/ethernet/3com/3c509.c 591 */;
	struct eisa_device *cocci_id/* drivers/net/ethernet/3com/3c509.c 570 */;
	__be16 cocci_id/* drivers/net/ethernet/3com/3c509.c 568 */[3];
	short cocci_id/* drivers/net/ethernet/3com/3c509.c 566 */;
	const char *cocci_id/* drivers/net/ethernet/3com/3c509.c 522 */[];
	const struct net_device_ops cocci_id/* drivers/net/ethernet/3com/3c509.c 504 */;
	struct eisa_driver cocci_id/* drivers/net/ethernet/3com/3c509.c 491 */;
	const struct eisa_device_id cocci_id/* drivers/net/ethernet/3com/3c509.c 477 */[];
	struct pnp_driver cocci_id/* drivers/net/ethernet/3com/3c509.c 463 */;
	const struct pnp_device_id *cocci_id/* drivers/net/ethernet/3com/3c509.c 407 */;
	struct pnp_dev *cocci_id/* drivers/net/ethernet/3com/3c509.c 407 */;
	const struct pnp_device_id cocci_id/* drivers/net/ethernet/3com/3c509.c 395 */[];
	struct isa_driver cocci_id/* drivers/net/ethernet/3com/3c509.c 381 */;
	pm_message_t cocci_id/* drivers/net/ethernet/3com/3c509.c 352 */;
	unsigned int cocci_id/* drivers/net/ethernet/3com/3c509.c 284 */;
	enum el3_cardtype cocci_id/* drivers/net/ethernet/3com/3c509.c 273 */;
	__be16 *cocci_id/* drivers/net/ethernet/3com/3c509.c 272 */;
	u8 *cocci_id/* drivers/net/ethernet/3com/3c509.c 255 */;
	int cocci_id/* drivers/net/ethernet/3com/3c509.c 213 */(struct device *device);
	int cocci_id/* drivers/net/ethernet/3com/3c509.c 205 */(struct device *);
	int cocci_id/* drivers/net/ethernet/3com/3c509.c 204 */(struct device *,
								pm_message_t);
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/3com/3c509.c 202 */;
	int cocci_id/* drivers/net/ethernet/3com/3c509.c 197 */(struct net_device *dev);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/3c509.c 195 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c509.c 193 */(int irq,
									void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/3c509.c 192 */(struct sk_buff *skb,
									struct net_device *dev);
	ushort cocci_id/* drivers/net/ethernet/3com/3c509.c 190 */(int ioaddr,
								   int index);
	ushort cocci_id/* drivers/net/ethernet/3com/3c509.c 189 */(int index);
	void cocci_id/* drivers/net/ethernet/3com/3c509.c 188 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/3com/3c509.c 180 */[];
	struct net_device *cocci_id/* drivers/net/ethernet/3com/3c509.c 176 */[EL3_MAX_CARDS];
	int cocci_id/* drivers/net/ethernet/3com/3c509.c 175 */;
	struct el3_private {
		spinlock_t lock;
		int head,size;
		struct sk_buff *queue[SKB_QUEUE_SIZE];
		enum el3_cardtype type;
	} cocci_id/* drivers/net/ethernet/3com/3c509.c 167 */;
	enum el3_cardtype{EL3_ISA, EL3_PNP, EL3_EISA,} cocci_id/* drivers/net/ethernet/3com/3c509.c 165 */;
	void __exit cocci_id/* drivers/net/ethernet/3com/3c509.c 1439 */;
	void cocci_id/* drivers/net/ethernet/3com/3c509.c 1439 */;
	enum RxFilter{RxStation=1, RxMulticast=2, RxBroadcast=4, RxProm=8,} cocci_id/* drivers/net/ethernet/3com/3c509.c 141 */;
	int __init cocci_id/* drivers/net/ethernet/3com/3c509.c 1386 */;
	enum c509status{IntLatch=0x0001, AdapterFailure=0x0002, TxComplete=0x0004, TxAvailable=0x0008, RxComplete=0x0010, RxEarly=0x0020, IntReq=0x0040, StatsFull=0x0080, CmdBusy=0x1000,} cocci_id/* drivers/net/ethernet/3com/3c509.c 135 */;
	enum c509cmd{TotalReset=0 << 11, SelectWindow=1 << 11, StartCoax=2 << 11, RxDisable=3 << 11, RxEnable=4 << 11, RxReset=5 << 11, RxDiscard=8 << 11, TxEnable=9 << 11, TxDisable=10 << 11, TxReset=11 << 11, FakeIntr=12 << 11, AckIntr=13 << 11, SetIntrEnb=14 << 11, SetStatusEnb=15 << 11, SetRxFilter=16 << 11, SetRxThreshold=17 << 11, SetTxThreshold=18 << 11, SetTxStart=19 << 11, StatsEnable=21 << 11, StatsDisable=22 << 11, StopCoax=23 << 11, PowerUp=27 << 11, PowerDown=28 << 11, PowerAuto=29 << 11,} cocci_id/* drivers/net/ethernet/3com/3c509.c 125 */;
	u32 cocci_id/* drivers/net/ethernet/3com/3c509.c 1172 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/3com/3c509.c 1150 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/3com/3c509.c 1143 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/3com/3c509.c 1089 */;
	u16 cocci_id/* drivers/net/ethernet/3com/3c509.c 1034 */;
	struct el3_private *cocci_id/* drivers/net/ethernet/3com/3c509.c 1010 */;
	struct net_device *cocci_id/* drivers/net/ethernet/3com/3c509.c 1007 */;
}
