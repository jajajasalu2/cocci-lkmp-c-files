cocci_test_suite() {
	struct vortex_chip_info *cocci_id/* drivers/net/ethernet/3com/3c59x.c 999 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/3com/3c59x.c 996 */;
	int __init cocci_id/* drivers/net/ethernet/3com/3c59x.c 964 */;
	struct eisa_driver cocci_id/* drivers/net/ethernet/3com/3c59x.c 952 */;
	struct device *cocci_id/* drivers/net/ethernet/3com/3c59x.c 903 */;
	const struct eisa_device_id cocci_id/* drivers/net/ethernet/3com/3c59x.c 896 */[];
	const struct dev_pm_ops cocci_id/* drivers/net/ethernet/3com/3c59x.c 878 */;
	int cocci_id/* drivers/net/ethernet/3com/3c59x.c 791 */[MAX_UNITS];
	void cocci_id/* drivers/net/ethernet/3com/3c59x.c 782 */(struct net_device *dev,
								 int enable);
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/3com/3c59x.c 781 */;
	void cocci_id/* drivers/net/ethernet/3com/3c59x.c 780 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/3com/3c59x.c 777 */(struct net_device *dev,
								struct ifreq *rq,
								int cmd);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/3c59x.c 774 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/3com/3c59x.c 773 */(void __iomem *ioaddr,
								 struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c59x.c 770 */(int irq,
									struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c59x.c 768 */(int irq,
									void *dev_id);
	int cocci_id/* drivers/net/ethernet/3com/3c59x.c 767 */(struct net_device *dev);
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/3c59x.c 764 */(struct sk_buff *skb,
									struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/3com/3c59x.c 761 */(struct timer_list *t);
	void cocci_id/* drivers/net/ethernet/3com/3c59x.c 760 */(struct net_device *vp,
								 int phy_id,
								 int location,
								 int value);
	int cocci_id/* drivers/net/ethernet/3com/3c59x.c 759 */(struct net_device *dev,
								int phy_id,
								int location);
	void cocci_id/* drivers/net/ethernet/3com/3c59x.c 758 */(struct vortex_private *vp,
								 int bits);
	void cocci_id/* drivers/net/ethernet/3com/3c59x.c 756 */(struct net_device *dev,
								 int final);
	int cocci_id/* drivers/net/ethernet/3com/3c59x.c 753 */(struct device *gendev,
								void __iomem *ioaddr,
								int irq,
								int chip_idx,
								int card_idx);
	struct {
		const char str[ETH_GSTRING_LEN];
	} cocci_id/* drivers/net/ethernet/3com/3c59x.c 740 */[];
	const struct media_table {
		char *name;
		unsigned int media_bits:16,mask:8,next:8;
		int wait;
	} cocci_id/* drivers/net/ethernet/3com/3c59x.c 720 */[];
	enum xcvr_types{XCVR_10baseT=0, XCVR_AUI, XCVR_10baseTOnly, XCVR_10base2, XCVR_100baseTx, XCVR_100baseFx, XCVR_MII=6, XCVR_NWAY=8, XCVR_ExtMII=9, XCVR_Default=10,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 715 */;
	struct eisa_device *cocci_id/* drivers/net/ethernet/3com/3c59x.c 710 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/3com/3c59x.c 701 */;
	struct vortex_private {
		struct boom_rx_desc *rx_ring;
		struct boom_tx_desc *tx_ring;
		dma_addr_t rx_ring_dma;
		dma_addr_t tx_ring_dma;
		struct sk_buff *rx_skbuff[RX_RING_SIZE];
		struct sk_buff *tx_skbuff[TX_RING_SIZE];
		unsigned int cur_rx,cur_tx;
		unsigned int dirty_tx;
		struct vortex_extra_stats xstats;
		struct sk_buff *tx_skb;
		dma_addr_t tx_skb_dma;
		struct device *gendev;
		void __iomem *ioaddr;
		void __iomem *cb_fn_base;
		int rx_nocopy,rx_copy,queued_packet,rx_csumhits;
		int card_idx;
		struct timer_list timer;
		int options;
		unsigned int media_override:4,default_media:4,full_duplex:1,autoselect:1,bus_master:1,full_bus_master_tx:1,full_bus_master_rx:2,flow_ctrl:1,partner_flow_ctrl:1,has_nway:1,enable_wol:1,pm_state_valid:1,open:1,medialock:1,large_frames:1,handling_irq:1;
		int drv_flags;
		u16 status_enable;
		u16 intr_enable;
		u16 available_media;
		u16 capabilities,info1,info2;
		u16 advertising;
		unsigned char phys[2];
		u16 deferred;
		u16 io_size;
		spinlock_t lock;
		spinlock_t mii_lock;
		struct mii_if_info mii;
		spinlock_t window_lock;
		int window;
	} cocci_id/* drivers/net/ethernet/3com/3c59x.c 595 */;
	struct vortex_extra_stats {
		unsigned long tx_deferred;
		unsigned long tx_max_collisions;
		unsigned long tx_multiple_collisions;
		unsigned long tx_single_collisions;
		unsigned long rx_bad_ssd;
	} cocci_id/* drivers/net/ethernet/3com/3c59x.c 587 */;
	enum ChipCaps{CapBusMaster=0x20, CapPwrMgmt=0x2000,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 585 */;
	enum tx_desc_status{CRCDisable=0x2000, TxDComplete=0x8000, AddIPChksum=0x02000000, AddTCPChksum=0x04000000, AddUDPChksum=0x08000000, TxIntrUploaded=0x80000000,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 578 */;
	enum rx_desc_status{RxDComplete=0x00008000, RxDError=0x4000, IPChksumErr=1 << 25, TCPChksumErr=1 << 26, UDPChksumErr=1 << 27, IPChksumValid=1 << 29, TCPChksumValid=1 << 30, UDPChksumValid=1 << 31,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 550 */;
	struct boom_rx_desc {
		__le32 next;
		__le32 status;
		__le32 addr;
		__le32 length;
	} cocci_id/* drivers/net/ethernet/3com/3c59x.c 543 */;
	enum MasterCtrl{PktStatus=0x20, DownListPtr=0x24, FragAddr=0x28, FragLen=0x2c, TxFreeThreshold=0x2f, UpPktStatus=0x30, UpListPtr=0x38,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 533 */;
	const int cocci_id/* drivers/net/ethernet/3com/3c59x.c 53 */;
	enum Window7{Wn7_MasterAddr=0, Wn7_VlanEtherType=4, Wn7_MasterLen=6, Wn7_MasterStatus=12,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 528 */;
	enum Win4_Media_bits{Media_SQE=0x0008, Media_10TP=0x00C0, Media_Lnk=0x0080, Media_LnkBeat=0x0800,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 522 */;
	enum Window4{Wn4_FIFODiag=4, Wn4_NetDiag=6, Wn4_PhysicalMgmt=8, Wn4_Media=10,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 519 */;
	enum Window3{Wn3_Config=0, Wn3_MaxPktSize=4, Wn3_MAC_Ctrl=6, Wn3_Options=8,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 500 */;
	enum Window2{Wn2_ResetOptions=12,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 497 */;
	enum eeprom_offset{PhysAddr01=0, PhysAddr23=1, PhysAddr45=2, ModelID=3, EtherLink3ID=7, IFXcvrIO=8, IRQLine=9, NodeAddr01=10, NodeAddr23=11, NodeAddr45=12, DriverTune=13, Checksum=15,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 491 */;
	enum Win0_EEPROM_bits{EEPROM_Read=0x80, EEPROM_WRITE=0x40, EEPROM_ERASE=0xC0, EEPROM_EWENB=0x30, EEPROM_EWDIS=0x00,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 485 */;
	enum Window0{Wn0EepromCmd=10, Wn0EepromData=12, IntrStatus=0x0E,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 480 */;
	enum Window1{TX_FIFO=0x10, RX_FIFO=0x10, RxErrors=0x14, RxStatus=0x18, Timer=0x1A, TxStatus=0x1B, TxFree=0x1C,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 475 */;
	enum vortex_status{IntLatch=0x0001, HostError=0x0002, TxComplete=0x0004, TxAvailable=0x0008, RxComplete=0x0010, RxEarly=0x0020, IntReq=0x0040, StatsFull=0x0080, DMADone=1 << 8, DownComplete=1 << 9, UpComplete=1 << 10, DMAInProgress=1 << 11, CmdInProgress=1 << 12,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 464 */;
	enum RxFilter{RxStation=1, RxMulticast=2, RxBroadcast=4, RxProm=8,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 460 */;
	enum vortex_cmd{TotalReset=0 << 11, SelectWindow=1 << 11, StartCoax=2 << 11, RxDisable=3 << 11, RxEnable=4 << 11, RxReset=5 << 11, UpStall=6 << 11, UpUnstall=(6 << 11) + 1, DownStall=(6 << 11) + 2, DownUnstall=(6 << 11) + 3, RxDiscard=8 << 11, TxEnable=9 << 11, TxDisable=10 << 11, TxReset=11 << 11, FakeIntr=12 << 11, AckIntr=13 << 11, SetIntrEnb=14 << 11, SetStatusEnb=15 << 11, SetRxFilter=16 << 11, SetRxThreshold=17 << 11, SetTxThreshold=18 << 11, SetTxStart=19 << 11, StartDMAUp=20 << 11, StartDMADown=(20 << 11) + 1, StatsEnable=21 << 11, StatsDisable=22 << 11, StopCoax=23 << 11, SetFilterBit=25 << 11,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 447 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/3com/3c59x.c 378 */[];
	void __exit cocci_id/* drivers/net/ethernet/3com/3c59x.c 3345 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/3com/3c59x.c 3293 */;
	void cocci_id/* drivers/net/ethernet/3com/3c59x.c 3224 */;
	pci_power_t cocci_id/* drivers/net/ethernet/3com/3c59x.c 3031 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/3com/3c59x.c 3027 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2974 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2956 */;
	u8 *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2943 */;
	u64 *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2925 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2925 */;
	u32 cocci_id/* drivers/net/ethernet/3com/3c59x.c 2904 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2897 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2887 */;
	u8 cocci_id/* drivers/net/ethernet/3com/3c59x.c 2873 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2822 */;
	struct vortex_chip_info {
		const char *name;
		int flags;
		int drv_flags;
		int io_size;
	} cocci_id/* drivers/net/ethernet/3com/3c59x.c 275 */[];
	dma_addr_t cocci_id/* drivers/net/ethernet/3com/3c59x.c 2617 */;
	unsigned char cocci_id/* drivers/net/ethernet/3com/3c59x.c 2604 */;
	short cocci_id/* drivers/net/ethernet/3com/3c59x.c 2525 */;
	void *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2501 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2431 */;
	struct boom_tx_desc cocci_id/* drivers/net/ethernet/3com/3c59x.c 2423 */;
	unsigned int cocci_id/* drivers/net/ethernet/3com/3c59x.c 2375 */;
	void __iomem *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2371 */;
	struct vortex_private *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2370 */;
	struct net_device *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2368 */;
	int cocci_id/* drivers/net/ethernet/3com/3c59x.c 2368 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/3com/3c59x.c 2367 */;
	enum vortex_chips{CH_3C590=0, CH_3C592, CH_3C597, CH_3C595_1, CH_3C595_2, CH_3C595_3, CH_3C900_1, CH_3C900_2, CH_3C900_3, CH_3C900_4, CH_3C900_5, CH_3C900B_FL, CH_3C905_1, CH_3C905_2, CH_3C905B_TX, CH_3C905B_1, CH_3C905B_2, CH_3C905B_FX, CH_3C905C, CH_3C9202, CH_3C980, CH_3C9805, CH_3CSOHO100_TX, CH_3C555, CH_3C556, CH_3C556B, CH_3C575, CH_3C575_1, CH_3CCFE575, CH_3CCFE575CT, CH_3CCFE656, CH_3CCFEM656, CH_3CCFEM656_1, CH_3C450, CH_3C920, CH_3C982A, CH_3C982B, CH_905BT4, CH_920B_EMB_WNM,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 221 */;
	skb_frag_t *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2172 */;
	enum{IS_VORTEX=1, IS_BOOMERANG=2, IS_CYCLONE=4, IS_TORNADO=8, EEPROM_8BIT=0x10, HAS_PWR_CTRL=0x20, HAS_MII=0x40, HAS_NWAY=0x80, HAS_CB_FNS=0x100, INVERT_MII_PWR=0x200, INVERT_LED_PWR=0x400, MAX_COLLISION_RESET=0x800, EEPROM_OFFSET=0x1000, HAS_HWCKSM=0x2000, WNO_XCVR_PWR=0x4000, EXTRA_PREAMBLE=0x8000, EEPROM_RESET=0x10000,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 214 */;
	unsigned long cocci_id/* drivers/net/ethernet/3com/3c59x.c 2117 */;
	struct boom_tx_desc *cocci_id/* drivers/net/ethernet/3com/3c59x.c 2116 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/3com/3c59x.c 2108 */;
	enum pci_flags_bit{PCI_USES_MASTER=4,} cocci_id/* drivers/net/ethernet/3com/3c59x.c 210 */;
	u16 cocci_id/* drivers/net/ethernet/3com/3c59x.c 2001 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/3com/3c59x.c 1782 */;
	struct boom_rx_desc cocci_id/* drivers/net/ethernet/3com/3c59x.c 1736 */;
	const char *constcocci_id/* drivers/net/ethernet/3com/3c59x.c 1354 */[];
	unsigned long long cocci_id/* drivers/net/ethernet/3com/3c59x.c 1327 */;
	unsigned short cocci_id/* drivers/net/ethernet/3com/3c59x.c 1316 */;
	__be16 *cocci_id/* drivers/net/ethernet/3com/3c59x.c 1287 */;
	char cocci_id/* drivers/net/ethernet/3com/3c59x.c 125 */;
	const char *cocci_id/* drivers/net/ethernet/3com/3c59x.c 1099 */;
	struct vortex_chip_info *constcocci_id/* drivers/net/ethernet/3com/3c59x.c 1098 */;
	unsigned int cocci_id/* drivers/net/ethernet/3com/3c59x.c 1093 */[0x40];
	const char cocci_id/* drivers/net/ethernet/3com/3c59x.c 105 */[];
	const struct net_device_ops cocci_id/* drivers/net/ethernet/3com/3c59x.c 1048 */;
	struct boom_tx_desc {
		__le32 next;
		__le32 status;
#if DO_ZEROCOPY
		struct {
			__le32 addr;
			__le32 length;
		} frag[1 + MAX_SKB_FRAGS];
#else
		__le32 addr;
		__le32 length;
#endif
	} cocci_id/*  1 */;
}
