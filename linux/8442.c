cocci_test_suite() {
	short cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 988 */;
	u8 cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 954 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 934 */;
	unsigned short cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 866 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 860 */;
	u16 cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 816 */;
	unsigned cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 771 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 766 */;
	void *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 766 */;
	long cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 738 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 730 */;
	u_char cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 714 */;
	unsigned int cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 474 */;
	struct net_device *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 472 */;
	void cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 472 */;
	size_t cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 313 */;
	u8 *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 312 */;
	__u32 cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 311 */;
	char *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 310 */;
	__be16 *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 309 */;
	const char *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 301 */[];
	struct el3_private cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 269 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 249 */;
	void cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 242 */(struct pcmcia_device *p_dev);
	int cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 238 */(struct net_device *dev,
								   struct ifreq *rq,
								   int cmd);
	void cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 237 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 236 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 235 */(struct net_device *dev,
								   int worklimit);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 234 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 232 */(int irq,
									   void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 230 */(struct sk_buff *skb,
									   struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 228 */(struct timer_list *t);
	void cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 225 */(struct net_device *dev,
								    int cmd);
	unsigned short cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 224 */(unsigned int ioaddr,
									      int index);
	void cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 222 */(unsigned int ioaddr,
								    int phy_id,
								    int location,
								    int value);
	int cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 221 */(unsigned int ioaddr,
								   int phy_id,
								   int location);
	void cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 220 */(unsigned int ioaddr,
								    int bits);
	void cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 218 */(struct pcmcia_device *link);
	int cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 217 */(struct pcmcia_device *link);
	char cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 213 */;
	struct el3_private {
		struct pcmcia_device *p_dev;
		u16 advertising,partner;
		unsigned char phys;
		unsigned int autoselect:1,default_media:3;
		struct timer_list media;
		unsigned short media_status;
		unsigned short fast_poll;
		unsigned long last_irq;
		spinlock_t window_lock;
	} cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 197 */;
	enum Window4{Wn4_FIFODiag=4, Wn4_NetDiag=6, Wn4_PhysicalMgmt=8, Wn4_Media=10,} cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 191 */;
	enum wn3_config{Ram_size=7, Ram_width=8, Ram_speed=0x30, Rom_size=0xc0, Ram_split_shift=16, Ram_split=3 << Ram_split_shift, Xcvr_shift=20, Xcvr=7 << Xcvr_shift, Autoselect=0x1000000,} cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 179 */;
	enum Window3{Wn3_Config=0, Wn3_MAC_Ctrl=6, Wn3_Options=8,} cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 176 */;
	enum Window1{TX_FIFO=0x10, RX_FIFO=0x10, RxErrors=0x14, RxStatus=0x18, Timer=0x1A, TxStatus=0x1B, TxFree=0x0C, RunnerRdCtrl=0x16, RunnerWrCtrl=0x1c,} cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 169 */;
	enum Win0_EEPROM_cmds{EEPROM_Read=0x200, EEPROM_WRITE=0x100, EEPROM_ERASE=0x300, EEPROM_EWENB=0x30, EEPROM_EWDIS=0x00,} cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 160 */;
	enum Window0{Wn0EepromCmd=10, Wn0EepromData=12, IntrStatus=0x0E,} cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 155 */;
	enum RxFilter{RxStation=1, RxMulticast=2, RxBroadcast=4, RxProm=8,} cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 151 */;
	enum elxl_status{IntLatch=0x0001, AdapterFailure=0x0002, TxComplete=0x0004, TxAvailable=0x0008, RxComplete=0x0010, RxEarly=0x0020, IntReq=0x0040, StatsFull=0x0080, CmdBusy=0x1000,} cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 145 */;
	enum el3_cmds{TotalReset=0 << 11, SelectWindow=1 << 11, StartCoax=2 << 11, RxDisable=3 << 11, RxEnable=4 << 11, RxReset=5 << 11, RxDiscard=8 << 11, TxEnable=9 << 11, TxDisable=10 << 11, TxReset=11 << 11, FakeIntr=12 << 11, AckIntr=13 << 11, SetIntrEnb=14 << 11, SetStatusEnb=15 << 11, SetRxFilter=16 << 11, SetRxThreshold=17 << 11, SetTxThreshold=18 << 11, SetTxStart=19 << 11, StatsEnable=21 << 11, StatsDisable=22 << 11, StopCoax=23 << 11,} cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 135 */;
	struct pcmcia_driver cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 1156 */;
	const struct pcmcia_device_id cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 1149 */[];
	unsigned long cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 1123 */;
	struct pcmcia_device *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 1118 */;
	struct el3_private *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 1117 */;
	int cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 1114 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 1039 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 1035 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/3com/3c574_cs.c 1008 */;
}
