cocci_test_suite() {
	unsigned long long cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 960 */;
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 93 */[MAX_UNITS];
	unsigned long cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 809 */;
	resource_size_t cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 808 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 802 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 802 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 786 */;
	const int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 78 */;
	const char *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 679 */;
	size_t cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 679 */;
	struct device_attribute *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 678 */;
	struct device *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 677 */;
	ssize_t cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 677 */;
	char *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 670 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 651 */;
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 650 */(struct net_device *dev,
								     u8 *buf);
	void cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 647 */(struct net_device *dev,
								      int enable_intr);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 645 */(struct net_device *dev,
								     const struct ethtool_link_ksettings *ecmd);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 643 */(struct net_device *dev,
								     struct ethtool_link_ksettings *ecmd);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 642 */(struct net_device *dev,
								     u8 *data);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 641 */(struct net_device *dev,
								     u8 *newval);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 640 */(struct net_device *dev,
								     u32 *supported,
								     u32 *cur);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 639 */(struct net_device *dev,
								     u32 newval);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 638 */(struct net_device *dev,
								     struct ifreq *rq,
								     int cmd);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 637 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 636 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 630 */(struct net_device *dev,
								     int new_mtu);
	void cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 628 */(struct net_device *dev,
								      int *work_done,
								      int work_to_do);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 627 */(struct napi_struct *napi,
								     int budget);
	void cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 626 */(struct net_device *dev,
								      int intr_status);
	irqreturn_t cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 625 */(int irq,
									     void *dev_instance);
	netdev_tx_t cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 624 */(struct sk_buff *skb,
									     struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 616 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 613 */(struct timer_list *t);
	void cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 604 */(struct net_device *dev,
								      int phy_id,
								      int reg,
								      u16 data);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 603 */(struct net_device *dev,
								     int phy_id,
								     int reg);
	void cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 601 */(struct net_device *dev,
								      int reg,
								      u16 data);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 600 */(struct net_device *dev,
								     int reg);
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 599 */(void __iomem *ioaddr,
								     int location);
	void cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 598 */(struct net_device *dev,
								      int addr);
	struct netdev_private {
		dma_addr_t ring_dma;
		struct netdev_desc *rx_ring;
		struct netdev_desc *tx_ring;
		struct sk_buff *rx_skbuff[RX_RING_SIZE];
		dma_addr_t rx_dma[RX_RING_SIZE];
		struct sk_buff *tx_skbuff[TX_RING_SIZE];
		dma_addr_t tx_dma[TX_RING_SIZE];
		struct net_device *dev;
		void __iomem *ioaddr;
		struct napi_struct napi;
		struct timer_list timer;
		struct pci_dev *pci_dev;
		struct netdev_desc *rx_head_desc;
		unsigned int cur_rx,dirty_rx;
		unsigned int cur_tx,dirty_tx;
		unsigned int rx_buf_sz;
		int oom;
		u32 intr_status;
		int hands_off;
		int ignore_phy;
		int mii;
		int phy_addr_external;
		unsigned int full_duplex;
		u32 cur_rx_mode;
		u32 rx_filter[16];
		u32 tx_config,rx_config;
		u32 SavedClkRun;
		u32 srr;
		u16 dspcfg;
		int dspcfg_workaround;
		u16 speed;
		u8 duplex;
		u8 autoneg;
		u16 advertising;
		unsigned int iosize;
		spinlock_t lock;
		u32 msg_enable;
		int eeprom_size;
	} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 538 */;
	enum desc_status_bits{DescOwn=0x80000000, DescMore=0x40000000, DescIntr=0x20000000, DescNoCRC=0x10000000, DescPktOK=0x08000000, DescSizeMask=0xfff, DescTxAbort=0x04000000, DescTxFIFO=0x02000000, DescTxCarrier=0x01000000, DescTxDefer=0x00800000, DescTxExcDefer=0x00400000, DescTxOOWCol=0x00200000, DescTxExcColl=0x00100000, DescTxCollCount=0x000f0000, DescRxAbort=0x04000000, DescRxOver=0x02000000, DescRxDest=0x01800000, DescRxLong=0x00400000, DescRxRunt=0x00200000, DescRxInvalid=0x00100000, DescRxCRC=0x00080000, DescRxAlign=0x00040000, DescRxLoop=0x00020000, DesRxColl=0x00010000,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 521 */;
	struct netdev_desc {
		__le32 next_desc;
		__le32 cmd_status;
		__le32 addr;
		__le32 software_use;
	} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 513 */;
	enum PhyCtrl_bits{PhyAddrMask=0x1f,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 497 */;
	enum MIntrCtrl_bits{MICRIntEn=0x2,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 493 */;
	enum StatsCtrl_bits{StatsWarn=0x1, StatsFreeze=0x2, StatsClear=0x4, StatsStrobe=0x8,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 486 */;
	enum RxFilterAddr_bits{RFCRAddressMask=0x3ff, AcceptMulticast=0x00200000, AcceptMyPhys=0x08000000, AcceptAllPhys=0x10000000, AcceptAllMulticast=0x20000000, AcceptBroadcast=0x40000000, RxFilterEnable=0x80000000,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 476 */;
	enum WolCmd_bits{WakePhy=0x1, WakeUnicast=0x2, WakeMulticast=0x4, WakeBroadcast=0x8, WakeArp=0x10, WakePMatch0=0x20, WakePMatch1=0x40, WakePMatch2=0x80, WakePMatch3=0x100, WakeMagic=0x200, WakeMagicSecure=0x400, SecureHack=0x100000, WokePhy=0x400000, WokeUnicast=0x800000, WokeMulticast=0x1000000, WokeBroadcast=0x2000000, WokeArp=0x4000000, WokePMatch0=0x8000000, WokePMatch1=0x10000000, WokePMatch2=0x20000000, WokePMatch3=0x40000000, WokeMagic=0x80000000, WakeOptsSummary=0x7ff,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 450 */;
	enum ClkRun_bits{PMEEnable=0x100, PMEStatus=0x8000,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 445 */;
	enum RxConfig_bits{RxDrthMask=0x3e, RxMxdmaMask=0x700000, RxMxdma_512=0x0, RxMxdma_4=0x100000, RxMxdma_8=0x200000, RxMxdma_16=0x300000, RxMxdma_32=0x400000, RxMxdma_64=0x500000, RxMxdma_128=0x600000, RxMxdma_256=0x700000, RxAcceptLong=0x8000000, RxAcceptTx=0x10000000, RxAcceptRunt=0x40000000, RxAcceptErr=0x80000000,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 427 */;
	enum TxConfig_bits{TxDrthMask=0x3f, TxFlthMask=0x3f00, TxMxdmaMask=0x700000, TxMxdma_512=0x0, TxMxdma_4=0x100000, TxMxdma_8=0x200000, TxMxdma_16=0x300000, TxMxdma_32=0x400000, TxMxdma_64=0x500000, TxMxdma_128=0x600000, TxMxdma_256=0x700000, TxCollRetry=0x800000, TxAutoPad=0x10000000, TxMacLoop=0x20000000, TxHeartIgn=0x40000000, TxCarrierIgn=0x80000000,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 392 */;
	enum IntrStatus_bits{IntrRxDone=0x0001, IntrRxIntr=0x0002, IntrRxErr=0x0004, IntrRxEarly=0x0008, IntrRxIdle=0x0010, IntrRxOverrun=0x0020, IntrTxDone=0x0040, IntrTxIntr=0x0080, IntrTxErr=0x0100, IntrTxIdle=0x0200, IntrTxUnderrun=0x0400, StatsMax=0x0800, SWInt=0x1000, WOLPkt=0x2000, LinkChange=0x4000, IntrHighBits=0x8000, RxStatusFIFOOver=0x10000, IntrPCIErr=0xf00000, RxResetDone=0x1000000, TxResetDone=0x2000000, IntrAbnormalSummary=0xCD20,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 357 */;
	enum PCIBusCfg_bits{EepromReload=0x4,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 352 */;
	enum EECtrl_bits{EE_ShiftClk=0x04, EE_DataIn=0x01, EE_ChipSelect=0x08, EE_DataOut=0x02, MII_Data=0x10, MII_Write=0x20, MII_ShiftClk=0x40,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 342 */;
	void __exit cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 3393 */;
	int __init cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 3383 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 3372 */;
	enum ChipConfig_bits{CfgPhyDis=0x200, CfgPhyRst=0x400, CfgExtPhy=0x1000, CfgAnegEnable=0x2000, CfgAneg100=0x4000, CfgAnegFull=0x8000, CfgAnegDone=0x8000000, CfgFullDuplex=0x20000000, CfgSpeed100=0x40000000, CfgLink=0x80000000,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 329 */;
	pm_message_t cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 3278 */;
	enum ChipCmd_bits{ChipReset=0x100, RxReset=0x20, TxReset=0x10, RxOff=0x08, RxOn=0x04, TxOff=0x02, TxOn=0x01,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 319 */;
	enum pci_register_offsets{PCIPM=0x44,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 315 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 3078 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 3076 */;
	u16 *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 3061 */;
	u32 *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 3011 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2917 */;
	u8 *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2670 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2670 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2628 */;
	void *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2628 */;
	enum register_offsets{ChipCmd=0x00, ChipConfig=0x04, EECtrl=0x08, PCIBusCfg=0x0C, IntrStatus=0x10, IntrMask=0x14, IntrEnable=0x18, IntrHoldoff=0x1C, TxRingPtr=0x20, TxConfig=0x24, RxRingPtr=0x30, RxConfig=0x34, ClkRun=0x3C, WOLCmd=0x40, PauseCmd=0x44, RxFilterAddr=0x48, RxFilterData=0x4C, BootRomAddr=0x50, BootRomData=0x54, SiliconRev=0x58, StatsCtrl=0x5C, StatsData=0x60, RxPktErrs=0x60, RxMissed=0x68, RxCRCErrs=0x64, BasicControl=0x80, BasicStatus=0x84, AnegAdv=0x90, AnegPeer=0x94, PhyStatus=0xC0, MIntrCtrl=0xC4, MIntrStatus=0xC8, PhyCtrl=0xE4, PGSEL=0xCC, PMDCSR=0xE4, TSTDAT=0xFC, DSPCFG=0xF4, SDCFG=0xF8,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 262 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2608 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2588 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2568 */;
	int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2512 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2511 */;
	u32 cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2501 */;
	u8 cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2500 */[64];
	const struct pci_device_id cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 250 */[];
	struct netdev_private *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2499 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2470 */;
	void __iomem *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2463 */;
	struct net_device *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2461 */;
	void cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2461 */;
	struct {
		const char *name;
		unsigned long flags;
		unsigned int eeprom_size;
	} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 241 */[];
	enum{NATSEMI_FLAG_IGNORE_PHY=0x1,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 236 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2354 */;
	enum{MII_MCTRL=0x15, MII_FX_SEL=0x0001, MII_EN_SCRM=0x0004,} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 230 */;
	s32 cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2287 */;
	int *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2282 */;
	struct netdev_private cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2231 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2229 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2188 */;
	unsigned cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2094 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2090 */;
	unsigned int cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 2029 */;
	struct netdev_desc cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 1920 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 1790 */;
	u16 cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 1650 */;
	u16 cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 1393 */[3];
	const char cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 130 */[];
	short cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 1017 */;
	enum EEPROM_Cmds{EE_WriteCmd=(5 << 6), EE_ReadCmd=(6 << 6), EE_EraseCmd=(7 << 6),} cocci_id/* drivers/net/ethernet/natsemi/natsemi.c 1002 */;
}
