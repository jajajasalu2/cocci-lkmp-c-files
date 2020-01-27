cocci_test_suite() {
	struct timer_list *cocci_id/* drivers/net/ethernet/3com/3c515.c 872 */;
	__u32 cocci_id/* drivers/net/ethernet/3com/3c515.c 713 */;
	bool cocci_id/* drivers/net/ethernet/3com/3c515.c 712 */;
	const char *constcocci_id/* drivers/net/ethernet/3com/3c515.c 666 */[];
	__be16 *cocci_id/* drivers/net/ethernet/3com/3c515.c 635 */;
	unsigned int cocci_id/* drivers/net/ethernet/3com/3c515.c 582 */[0x40];
	const struct net_device_ops cocci_id/* drivers/net/ethernet/3com/3c515.c 566 */;
	char *cocci_id/* drivers/net/ethernet/3com/3c515.c 534 */;
	struct pnp_dev *cocci_id/* drivers/net/ethernet/3com/3c515.c 508 */;
	void cocci_id/* drivers/net/ethernet/3com/3c515.c 472 */;
	unsigned cocci_id/* drivers/net/ethernet/3com/3c515.c 446 */;
	const int cocci_id/* drivers/net/ethernet/3com/3c515.c 40 */;
	int cocci_id/* drivers/net/ethernet/3com/3c515.c 398 */[MAX_UNITS];
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/3com/3c515.c 381 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/3c515.c 379 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/3com/3c515.c 378 */(int addr,
								 struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c515.c 376 */(int irq,
									void *dev_id);
	int cocci_id/* drivers/net/ethernet/3com/3c515.c 375 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/3com/3c515.c 374 */(struct net_device *dev);
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/3c515.c 371 */(struct sk_buff *skb,
									struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/3com/3c515.c 370 */(struct timer_list *t);
	int cocci_id/* drivers/net/ethernet/3com/3c515.c 367 */(struct net_device *dev,
								int ioaddr,
								struct pnp_dev *idev,
								int card_number);
	struct net_device *cocci_id/* drivers/net/ethernet/3com/3c515.c 366 */(int unit);
	long cocci_id/* drivers/net/ethernet/3com/3c515.c 357 */;
	struct isapnp_device_id cocci_id/* drivers/net/ethernet/3com/3c515.c 354 */[];
	struct media_table {
		char *name;
		unsigned int media_bits:16,mask:8,next:8;
		short wait;
	} cocci_id/* drivers/net/ethernet/3com/3c515.c 335 */[];
	enum xcvr_types{XCVR_10baseT=0, XCVR_AUI, XCVR_10baseTOnly, XCVR_10base2, XCVR_100baseTx, XCVR_100baseFx, XCVR_MII=6, XCVR_Default=8,} cocci_id/* drivers/net/ethernet/3com/3c515.c 330 */;
	struct corkscrew_private {
		const char *product_name;
		struct list_head list;
		struct net_device *our_dev;
		struct boom_rx_desc rx_ring[RX_RING_SIZE];
		struct boom_tx_desc tx_ring[TX_RING_SIZE];
		struct sk_buff *rx_skbuff[RX_RING_SIZE];
		struct sk_buff *tx_skbuff[TX_RING_SIZE];
		unsigned int cur_rx,cur_tx;
		unsigned int dirty_rx,dirty_tx;
		struct sk_buff *tx_skb;
		struct timer_list timer;
		int capabilities;
		int options;
		int last_rx_packets;
		unsigned int available_media:8,media_override:3,default_media:3,full_duplex:1,autoselect:1,bus_master:1,full_bus_master_tx:1,full_bus_master_rx:1,tx_full:1;
		spinlock_t lock;
		struct device *dev;
	} cocci_id/* drivers/net/ethernet/3com/3c515.c 300 */;
	struct boom_tx_desc {
		u32 next;
		s32 status;
		u32 addr;
		s32 length;
	} cocci_id/* drivers/net/ethernet/3com/3c515.c 293 */;
	enum rx_desc_status{RxDComplete=0x00008000, RxDError=0x4000,} cocci_id/* drivers/net/ethernet/3com/3c515.c 288 */;
	struct boom_rx_desc {
		u32 next;
		s32 status;
		u32 addr;
		s32 length;
	} cocci_id/* drivers/net/ethernet/3com/3c515.c 280 */;
	enum MasterCtrl{PktStatus=0x400, DownListPtr=0x404, FragAddr=0x408, FragLen=0x40c, TxFreeThreshold=0x40f, UpPktStatus=0x410, UpListPtr=0x418,} cocci_id/* drivers/net/ethernet/3com/3c515.c 271 */;
	enum Window7{Wn7_MasterAddr=0, Wn7_MasterLen=6, Wn7_MasterStatus=12,} cocci_id/* drivers/net/ethernet/3com/3c515.c 266 */;
	enum Win4_Media_bits{Media_SQE=0x0008, Media_10TP=0x00C0, Media_Lnk=0x0080, Media_LnkBeat=0x0800,} cocci_id/* drivers/net/ethernet/3com/3c515.c 260 */;
	enum Window4{Wn4_NetDiag=6, Wn4_Media=10,} cocci_id/* drivers/net/ethernet/3com/3c515.c 257 */;
	enum wn3_config{Ram_size=7, Ram_width=8, Ram_speed=0x30, Rom_size=0xc0, Ram_split_shift=16, Ram_split=3 << Ram_split_shift, Xcvr_shift=20, Xcvr=7 << Xcvr_shift, Autoselect=0x1000000,} cocci_id/* drivers/net/ethernet/3com/3c515.c 245 */;
	enum Window3{Wn3_Config=0, Wn3_MAC_Ctrl=6, Wn3_Options=8,} cocci_id/* drivers/net/ethernet/3com/3c515.c 242 */;
	enum eeprom_offset{PhysAddr01=0, PhysAddr23=1, PhysAddr45=2, ModelID=3, EtherLink3ID=7,} cocci_id/* drivers/net/ethernet/3com/3c515.c 237 */;
	enum Win0_EEPROM_bits{EEPROM_Read=0x80, EEPROM_WRITE=0x40, EEPROM_ERASE=0xC0, EEPROM_EWENB=0x30, EEPROM_EWDIS=0x00,} cocci_id/* drivers/net/ethernet/3com/3c515.c 230 */;
	enum Window0{Wn0IRQ=0x08,

#if defined(CORKSCREW)
 Wn0EepromCmd=0x200A, Wn0EepromData=0x200C,

#else

	Wn0EepromCmd=10,
	Wn0EepromData=12,

#endif
} cocci_id/* drivers/net/ethernet/3com/3c515.c 220 */;
	enum Window1{TX_FIFO=0x10, RX_FIFO=0x10, RxErrors=0x14, RxStatus=0x18, Timer=0x1A, TxStatus=0x1B, TxFree=0x1C,} cocci_id/* drivers/net/ethernet/3com/3c515.c 215 */;
	enum corkscrew_status{IntLatch=0x0001, AdapterFailure=0x0002, TxComplete=0x0004, TxAvailable=0x0008, RxComplete=0x0010, RxEarly=0x0020, IntReq=0x0040, StatsFull=0x0080, DMADone=1 << 8, DownComplete=1 << 9, UpComplete=1 << 10, DMAInProgress=1 << 11, CmdInProgress=1 << 12,} cocci_id/* drivers/net/ethernet/3com/3c515.c 204 */;
	enum RxFilter{RxStation=1, RxMulticast=2, RxBroadcast=4, RxProm=8,} cocci_id/* drivers/net/ethernet/3com/3c515.c 199 */;
	enum corkscrew_cmd{TotalReset=0 << 11, SelectWindow=1 << 11, StartCoax=2 << 11, RxDisable=3 << 11, RxEnable=4 << 11, RxReset=5 << 11, UpStall=6 << 11, UpUnstall=(6 << 11) + 1, DownStall=(6 << 11) + 2, DownUnstall=(6 << 11) + 3, RxDiscard=8 << 11, TxEnable=9 << 11, TxDisable=10 << 11, TxReset=11 << 11, FakeIntr=12 << 11, AckIntr=13 << 11, SetIntrEnb=14 << 11, SetStatusEnb=15 << 11, SetRxFilter=16 << 11, SetRxThreshold=17 << 11, SetTxThreshold=18 << 11, SetTxStart=19 << 11, StartDMAUp=20 << 11, StartDMADown=(20 << 11) + 1, StatsEnable=21 << 11, StatsDisable=22 << 11, StopCoax=23 << 11,} cocci_id/* drivers/net/ethernet/3com/3c515.c 185 */;
	struct corkscrew_private cocci_id/* drivers/net/ethernet/3com/3c515.c 1573 */;
	u32 cocci_id/* drivers/net/ethernet/3com/3c515.c 1548 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/3com/3c515.c 1540 */;
	unsigned short cocci_id/* drivers/net/ethernet/3com/3c515.c 1524 */;
	unsigned long cocci_id/* drivers/net/ethernet/3com/3c515.c 1471 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/3c515.c 1468 */;
	void *cocci_id/* drivers/net/ethernet/3com/3c515.c 1378 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/3com/3c515.c 1360 */;
	short cocci_id/* drivers/net/ethernet/3com/3c515.c 1359 */;
	unsigned char cocci_id/* drivers/net/ethernet/3com/3c515.c 1342 */;
	struct corkscrew_private *cocci_id/* drivers/net/ethernet/3com/3c515.c 1332 */;
	struct net_device *cocci_id/* drivers/net/ethernet/3com/3c515.c 1330 */;
	int cocci_id/* drivers/net/ethernet/3com/3c515.c 1330 */;
	unsigned int cocci_id/* drivers/net/ethernet/3com/3c515.c 1173 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c515.c 1126 */;
	struct boom_tx_desc *cocci_id/* drivers/net/ethernet/3com/3c515.c 1014 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/3c515.c 1001 */;
}
