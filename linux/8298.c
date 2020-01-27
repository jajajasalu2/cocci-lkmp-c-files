cocci_test_suite() {
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/realtek/8139too.c 944 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/realtek/8139too.c 927 */;
	netdev_features_t cocci_id/* drivers/net/ethernet/realtek/8139too.c 900 */;
	const struct {
		unsigned long mask;
		char *type;
	} cocci_id/* drivers/net/ethernet/realtek/8139too.c 765 */[];
	struct device *cocci_id/* drivers/net/ethernet/realtek/8139too.c 756 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/realtek/8139too.c 721 */;
	struct rtl8139_private *cocci_id/* drivers/net/ethernet/realtek/8139too.c 720 */;
	struct net_device *cocci_id/* drivers/net/ethernet/realtek/8139too.c 718 */;
	void cocci_id/* drivers/net/ethernet/realtek/8139too.c 718 */;
	const unsigned int cocci_id/* drivers/net/ethernet/realtek/8139too.c 692 */;
	const u16 cocci_id/* drivers/net/ethernet/realtek/8139too.c 683 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/realtek/8139too.c 664 */;
	void cocci_id/* drivers/net/ethernet/realtek/8139too.c 662 */(struct work_struct *work);
	void cocci_id/* drivers/net/ethernet/realtek/8139too.c 660 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/realtek/8139too.c 657 */(struct net_device *dev,
								      struct rtnl_link_stats64 *stats);
	int cocci_id/* drivers/net/ethernet/realtek/8139too.c 656 */(struct net_device *dev,
								     struct ifreq *rq,
								     int cmd);
	int cocci_id/* drivers/net/ethernet/realtek/8139too.c 655 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/realtek/8139too.c 654 */(int irq,
									     void *dev_instance);
	int cocci_id/* drivers/net/ethernet/realtek/8139too.c 653 */(struct napi_struct *napi,
								     int budget);
	int cocci_id/* drivers/net/ethernet/realtek/8139too.c 652 */(struct net_device *dev,
								     void *p);
	netdev_tx_t cocci_id/* drivers/net/ethernet/realtek/8139too.c 647 */(struct sk_buff *skb,
									     struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/realtek/8139too.c 644 */(struct rtl8139_private *tp);
	void cocci_id/* drivers/net/ethernet/realtek/8139too.c 642 */(struct net_device *dev,
								      int phy_id,
								      int location,
								      int val);
	int cocci_id/* drivers/net/ethernet/realtek/8139too.c 641 */(struct net_device *dev,
								     int phy_id,
								     int location);
	int cocci_id/* drivers/net/ethernet/realtek/8139too.c 639 */(void __iomem *ioaddr,
								     int location,
								     int addr_len);
	bool cocci_id/* drivers/net/ethernet/realtek/8139too.c 628 */;
	struct rtl8139_private {
		void __iomem *mmio_addr;
		int drv_flags;
		struct pci_dev *pci_dev;
		u32 msg_enable;
		struct napi_struct napi;
		struct net_device *dev;
		unsigned char *rx_ring;
		unsigned int cur_rx;
		struct rtl8139_stats rx_stats;
		dma_addr_t rx_ring_dma;
		unsigned int tx_flag;
		unsigned long cur_tx;
		unsigned long dirty_tx;
		struct rtl8139_stats tx_stats;
		unsigned char *tx_buf[NUM_TX_DESC];
		unsigned char *tx_bufs;
		dma_addr_t tx_bufs_dma;
		signed char phys[4];
		char twistie,twist_row,twist_col;
		unsigned int watchdog_fired:1;
		unsigned int default_port:4;
		unsigned int have_thread:1;
		spinlock_t lock;
		spinlock_t rx_lock;
		chip_t chipset;
		u32 rx_config;
		struct rtl_extra_stats xstats;
		struct delayed_work thread;
		struct mii_if_info mii;
		unsigned int regs_len;
		unsigned long fifo_copy_timeout;
	} cocci_id/* drivers/net/ethernet/realtek/8139too.c 579 */;
	struct rtl8139_stats {
		u64 packets;
		u64 bytes;
		struct u64_stats_sync syncp;
	} cocci_id/* drivers/net/ethernet/realtek/8139too.c 573 */;
	struct rtl_extra_stats {
		unsigned long early_rx;
		unsigned long tx_buf_mapped;
		unsigned long tx_timeouts;
		unsigned long rx_lost_in_ring;
	} cocci_id/* drivers/net/ethernet/realtek/8139too.c 566 */;
	const struct {
		const char *name;
		u32 version;
		u32 flags;
	} cocci_id/* drivers/net/ethernet/realtek/8139too.c 509 */[];
	enum chip_flags{HasHltClk=(1 << 0), HasLWake=(1 << 1),} cocci_id/* drivers/net/ethernet/realtek/8139too.c 499 */;
	enum{CH_8139=0, CH_8139_K, CH_8139A, CH_8139A_G, CH_8139B, CH_8130, CH_8139C, CH_8100, CH_8100B_8139D, CH_8101,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 486 */;
	enum Cfg9346Bits{Cfg9346_Lock=0x00, Cfg9346_Unlock=0xC0,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 481 */;
	enum CSCRBits{CSCR_LinkOKBit=0x0400, CSCR_LinkChangeBit=0x0800, CSCR_LinkStatusBits=0x0f000, CSCR_LinkDownOffCmd=0x003c0, CSCR_LinkDownCmd=0x0f3c0,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 473 */;
	enum RxConfigBits{RxCfgFIFOShift=13, RxCfgFIFONone=(7 << RxCfgFIFOShift), RxCfgDMAShift=8, RxCfgDMAUnlimited=(7 << RxCfgDMAShift), RxCfgRcv8K=0, RxCfgRcv16K=(1 << 11), RxCfgRcv32K=(1 << 12), RxCfgRcv64K=(1 << 11) | (1 << 12), RxNoWrap=(1 << 7),} cocci_id/* drivers/net/ethernet/realtek/8139too.c 452 */;
	enum Config5Bits{Cfg5_PME_STS=(1 << 0), Cfg5_LANWake=(1 << 1), Cfg5_LDPS=(1 << 2), Cfg5_FIFOAddrPtr=(1 << 3), Cfg5_UWF=(1 << 4), Cfg5_MWF=(1 << 5), Cfg5_BWF=(1 << 6),} cocci_id/* drivers/net/ethernet/realtek/8139too.c 442 */;
	enum Config4Bits{LWPTN=(1 << 2),} cocci_id/* drivers/net/ethernet/realtek/8139too.c 437 */;
	enum Config3Bits{Cfg3_FBtBEn=(1 << 0), Cfg3_FuncRegEn=(1 << 1), Cfg3_CLKRUN_En=(1 << 2), Cfg3_CardB_En=(1 << 3), Cfg3_LinkUp=(1 << 4), Cfg3_Magic=(1 << 5), Cfg3_PARM_En=(1 << 6), Cfg3_GNTSel=(1 << 7),} cocci_id/* drivers/net/ethernet/realtek/8139too.c 425 */;
	enum Config1Bits{Cfg1_PM_Enable=0x01, Cfg1_VPD_Enable=0x02, Cfg1_PIO=0x04, Cfg1_MMIO=0x08, LWAKE=0x10, Cfg1_Driver_Load=0x20, Cfg1_LED0=0x40, Cfg1_LED1=0x80, SLEEP=(1 << 1), PWRDN=(1 << 0),} cocci_id/* drivers/net/ethernet/realtek/8139too.c 411 */;
	enum tx_config_bits{TxIFGShift=24, TxIFG84=(0 << TxIFGShift), TxIFG88=(1 << TxIFGShift), TxIFG92=(2 << TxIFGShift), TxIFG96=(3 << TxIFGShift), TxLoopBack=(1 << 18) | (1 << 17), TxCRC=(1 << 16), TxClearAbt=(1 << 0), TxDMAShift=8, TxRetryShift=4, TxVersionMask=0x7C800000,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 393 */;
	enum rx_mode_bits{AcceptErr=0x20, AcceptRunt=0x10, AcceptBroadcast=0x08, AcceptMulticast=0x04, AcceptMyPhys=0x02, AcceptAllPhys=0x01,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 383 */;
	enum RxStatusBits{RxMulticast=0x8000, RxPhysical=0x4000, RxBroadcast=0x2000, RxBadSymbol=0x0020, RxRunt=0x0010, RxTooLong=0x0008, RxCRCErr=0x0004, RxBadAlign=0x0002, RxStatusOK=0x0001,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 370 */;
	enum TxStatusBits{TxHostOwns=0x2000, TxUnderrun=0x4000, TxStatOK=0x8000, TxOutOfWindow=0x20000000, TxAborted=0x40000000, TxCarrierLost=0x80000000,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 362 */;
	enum IntrStatusBits{PCIErr=0x8000, PCSTimeout=0x4000, RxFIFOOver=0x40, RxUnderrun=0x20, RxOverflow=0x10, TxErr=0x08, TxOK=0x04, RxErr=0x02, RxOK=0x01, RxAckBits=RxFIFOOver | RxOverflow | RxOK,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 348 */;
	enum ChipCmdBits{CmdReset=0x10, CmdRxEnb=0x08, CmdTxEnb=0x04, RxBufEmpty=0x01,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 340 */;
	enum ClearBitMasks{MultiIntrClear=0xF000, ChipCmdClear=0xE2, Config1Clear=(1 << 7) | (1 << 6) | (1 << 3) | (1 << 2) | (1 << 1),} cocci_id/* drivers/net/ethernet/realtek/8139too.c 334 */;
	enum RTL8139_registers{MAC0=0, MAR0=8, TxStatus0=0x10, TxAddr0=0x20, RxBuf=0x30, ChipCmd=0x37, RxBufPtr=0x38, RxBufAddr=0x3A, IntrMask=0x3C, IntrStatus=0x3E, TxConfig=0x40, RxConfig=0x44, Timer=0x48, RxMissed=0x4C, Cfg9346=0x50, Config0=0x51, Config1=0x52, TimerInt=0x54, MediaStatus=0x58, Config3=0x59, Config4=0x5A, HltClk=0x5B, MultiIntr=0x5C, TxSummary=0x60, BasicModeCtrl=0x62, BasicModeStatus=0x64, NWayAdvert=0x66, NWayLPAR=0x68, NWayExpansion=0x6A, FIFOTMS=0x70, CSCR=0x74, PARA78=0x78, FlashReg=0xD4, PARA7c=0x7c, Config5=0xD8,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 295 */;
	struct {
		const char str[ETH_GSTRING_LEN];
	} cocci_id/* drivers/net/ethernet/realtek/8139too.c 283 */[];
	void __exit cocci_id/* drivers/net/ethernet/realtek/8139too.c 2682 */;
	int __init cocci_id/* drivers/net/ethernet/realtek/8139too.c 2669 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/realtek/8139too.c 2657 */;
	pm_message_t cocci_id/* drivers/net/ethernet/realtek/8139too.c 2608 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2572 */;
	u32 cocci_id/* drivers/net/ethernet/realtek/8139too.c 2555 */;
	int cocci_id/* drivers/net/ethernet/realtek/8139too.c 2554 */;
	u32 cocci_id/* drivers/net/ethernet/realtek/8139too.c 2553 */[2];
	void __iomem *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2552 */;
	unsigned int cocci_id/* drivers/net/ethernet/realtek/8139too.c 2522 */;
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2517 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2500 */;
	u8 *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2478 */;
	u64 *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2468 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2468 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2442 */;
	void *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2442 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/realtek/8139too.c 241 */[];
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2398 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2388 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2379 */;
	const struct {
		const char *name;
		u32 hw_flags;
	} cocci_id/* drivers/net/ethernet/realtek/8139too.c 232 */[];
	u8 cocci_id/* drivers/net/ethernet/realtek/8139too.c 2312 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2305 */;
	unsigned long cocci_id/* drivers/net/ethernet/realtek/8139too.c 2259 */;
	enum{RTL8139=0, RTL8129,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 225 */;
	u32 *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2246 */;
	struct sockaddr *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2236 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/realtek/8139too.c 2152 */;
	struct rtl8139_private cocci_id/* drivers/net/ethernet/realtek/8139too.c 2127 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/realtek/8139too.c 2125 */;
	enum{HAS_MII_XCVR=0x010000, HAS_CHIP_XCVR=0x020000, HAS_LNK_CHNG=0x040000,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 211 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/realtek/8139too.c 1964 */;
	unsigned char *cocci_id/* drivers/net/ethernet/realtek/8139too.c 1951 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/realtek/8139too.c 1915 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/realtek/8139too.c 1714 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/realtek/8139too.c 1608 */;
	int cocci_id/* drivers/net/ethernet/realtek/8139too.c 148 */[MAX_UNITS];
	const unsigned long cocci_id/* drivers/net/ethernet/realtek/8139too.c 1474 */[4][4];
	enum TwisterParamVals{PARA78_default=0x78fa8388, PARA7c_default=0xcb38de43, PARA7c_xxx=0xcb38de43,} cocci_id/* drivers/net/ethernet/realtek/8139too.c 1468 */;
	__le16 *cocci_id/* drivers/net/ethernet/realtek/8139too.c 1397 */;
	__le32 *cocci_id/* drivers/net/ethernet/realtek/8139too.c 1396 */;
	unsigned long long cocci_id/* drivers/net/ethernet/realtek/8139too.c 1360 */;
	const int cocci_id/* drivers/net/ethernet/realtek/8139too.c 1323 */;
	const char cocci_id/* drivers/net/ethernet/realtek/8139too.c 1206 */[8];
	unsigned cocci_id/* drivers/net/ethernet/realtek/8139too.c 1155 */;
	u16 cocci_id/* drivers/net/ethernet/realtek/8139too.c 1061 */;
}
