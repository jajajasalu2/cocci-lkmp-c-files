cocci_test_suite() {
	unsigned cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 939 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 886 */;
	unsigned long cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 820 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 804 */;
	struct yellowfin_desc cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 77 */;
	struct tx_status_words cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 76 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 738 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 646 */;
	int cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 62 */[MAX_UNITS];
	void cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 550 */;
	void __iomem *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 538 */;
	const int cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 48 */;
	int cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 41 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 381 */;
	void *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 380 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 370 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 369 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 358 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 356 */;
	void cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 355 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 354 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 353 */(struct net_device *dev,
									      int intr_status);
	irqreturn_t cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 351 */(int irq,
										     void *dev_instance);
	netdev_tx_t cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 349 */(struct sk_buff *skb,
										     struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 346 */(struct timer_list *t);
	int cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 344 */(struct net_device *dev,
									     struct ifreq *rq,
									     int cmd);
	void cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 343 */(void __iomem *ioaddr,
									      int phy_id,
									      int location,
									      int value);
	int cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 342 */(void __iomem *ioaddr,
									     int phy_id,
									     int location);
	int cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 341 */(void __iomem *ioaddr,
									     int location);
	struct yellowfin_private {
		struct yellowfin_desc *rx_ring;
		struct yellowfin_desc *tx_ring;
		struct sk_buff *rx_skbuff[RX_RING_SIZE];
		struct sk_buff *tx_skbuff[TX_RING_SIZE];
		dma_addr_t rx_ring_dma;
		dma_addr_t tx_ring_dma;
		struct tx_status_words *tx_status;
		dma_addr_t tx_status_dma;
		struct timer_list timer;
		int chip_id,drv_flags;
		struct pci_dev *pci_dev;
		unsigned int cur_rx,dirty_rx;
		unsigned int rx_buf_sz;
		struct tx_status_words *tx_tail_desc;
		unsigned int cur_tx,dirty_tx;
		int tx_threshold;
		unsigned int tx_full:1;
		unsigned int full_duplex:1;
		unsigned int duplex_lock:1;
		unsigned int medialock:1;
		unsigned int default_port:4;
		int mii_cnt;
		u16 advertising;
		unsigned char phys[MII_CNT];
		spinlock_t lock;
		void __iomem *base;
	} cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 306 */;
	enum intr_status_bits{IntrRxDone=0x01, IntrRxInvalid=0x02, IntrRxPCIFault=0x04, IntrRxPCIErr=0x08, IntrTxDone=0x10, IntrTxInvalid=0x20, IntrTxPCIFault=0x40, IntrTxPCIErr=0x80, IntrEarlyRx=0x100, IntrWakeup=0x200,} cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 299 */;
	enum desc_status_bits{RX_EOP=0x0040,} cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 296 */;
	enum desc_cmd_bits{CMD_TX_PKT=0x10000000, CMD_RX_BUF=0x20000000, CMD_TXSTATUS=0x30000000, CMD_NOP=0x60000000, CMD_STOP=0x70000000, BRANCH_ALWAYS=0x0C0000, INTR_ALWAYS=0x300000, WAIT_ALWAYS=0x030000, BRANCH_IFTRUE=0x040000,} cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 288 */;
	struct tx_status_words {
#ifdef __BIG_ENDIAN
		u16 tx_errs;
		u16 tx_cnt;
		u16 paused;
		u16 total_tx_cnt;
#else
		u16 tx_cnt;
		u16 tx_errs;
		u16 total_tx_cnt;
		u16 paused;
#endif
	} cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 273 */;
	struct yellowfin_desc {
		__le32 dbdma_cmd;
		__le32 addr;
		__le32 branch_addr;
		__le32 result_status;
	} cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 266 */;
	enum yellowfin_offsets{TxCtrl=0x00, TxStatus=0x04, TxPtr=0x0C, TxIntrSel=0x10, TxBranchSel=0x14, TxWaitSel=0x18, RxCtrl=0x40, RxStatus=0x44, RxPtr=0x4C, RxIntrSel=0x50, RxBranchSel=0x54, RxWaitSel=0x58, EventStatus=0x80, IntrEnb=0x82, IntrClear=0x84, IntrStatus=0x86, ChipRev=0x8C, DMACtrl=0x90, TxThreshold=0x94, Cnfg=0xA0, FrameGap0=0xA2, FrameGap1=0xA4, MII_Cmd=0xA6, MII_Addr=0xA8, MII_Wr_Data=0xAA, MII_Rd_Data=0xAC, MII_Status=0xAE, RxDepth=0xB8, FlowCtrl=0xBC, AddrMode=0xD0, StnAddr=0xD2, HashTbl=0xD8, FIFOcfg=0xF8, EEStatus=0xF0, EECtrl=0xF1, EEAddr=0xF2, EERead=0xF3, EEWrite=0xF4, EEFeature=0xF5,} cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 248 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 239 */[];
	const struct pci_id_info cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 231 */[];
	struct pci_id_info {
		const char *name;
		struct match_info {
			int pci,pci_mask,subsystem,subsystem_mask;
			int revision,revision_mask;
		} id;
		int drv_flags;
	} cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 222 */;
	enum{YELLOWFIN_SIZE=0x100,} cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 218 */;
	enum capability_flags{HasMII=1, FullTxStatus=2, IsGigabit=4, HasMulticastBug=8, FullRxStatus=16, HasMACAddrBug=32, DontUseEeprom=64,} cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 211 */;
	void __exit cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1414 */;
	int __init cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1404 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1396 */;
	u16 cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1354 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1341 */;
	struct yellowfin_private *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1339 */;
	struct net_device *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1337 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1337 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1324 */;
	unsigned int cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1298 */;
	u16 cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1293 */[4];
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1292 */;
	u16 *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1241 */;
	u8 *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1235 */;
	long cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1218 */;
	unsigned long long cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1215 */;
	u8 cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1090 */;
	const char cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 109 */[];
	s16 cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1051 */;
	struct yellowfin_desc *cocci_id/* drivers/net/ethernet/packetengines/yellowfin.c 1049 */;
}
