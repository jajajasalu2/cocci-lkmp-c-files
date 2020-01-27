cocci_test_suite() {
	__be16 *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 971 */;
	struct starfire_rx_desc cocci_id/* drivers/net/ethernet/adaptec/starfire.c 902 */;
	rx_done_desc cocci_id/* drivers/net/ethernet/adaptec/starfire.c 900 */;
	struct tx_done_desc cocci_id/* drivers/net/ethernet/adaptec/starfire.c 899 */;
	size_t cocci_id/* drivers/net/ethernet/adaptec/starfire.c 881 */;
	const __be32 *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 876 */;
	const struct firmware *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 875 */;
	const int cocci_id/* drivers/net/ethernet/adaptec/starfire.c 85 */;
	long cocci_id/* drivers/net/ethernet/adaptec/starfire.c 652 */;
	struct device *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 648 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 646 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 645 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/adaptec/starfire.c 629 */;
	__be16 cocci_id/* drivers/net/ethernet/adaptec/starfire.c 598 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/adaptec/starfire.c 593 */;
	int cocci_id/* drivers/net/ethernet/adaptec/starfire.c 591 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/adaptec/starfire.c 590 */(struct net_device *dev,
								      struct ifreq *rq,
								      int cmd);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 589 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/adaptec/starfire.c 585 */(struct napi_struct *napi,
								      int budget);
	int cocci_id/* drivers/net/ethernet/adaptec/starfire.c 584 */(struct net_device *dev,
								      int *quota);
	void cocci_id/* drivers/net/ethernet/adaptec/starfire.c 583 */(struct net_device *dev,
								       int intr_status);
	irqreturn_t cocci_id/* drivers/net/ethernet/adaptec/starfire.c 582 */(int irq,
									      void *dev_instance);
	netdev_tx_t cocci_id/* drivers/net/ethernet/adaptec/starfire.c 581 */(struct sk_buff *skb,
									      struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/adaptec/starfire.c 578 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/adaptec/starfire.c 576 */(struct net_device *dev,
								       int phy_id,
								       int location,
								       int value);
	int cocci_id/* drivers/net/ethernet/adaptec/starfire.c 575 */(struct net_device *dev,
								      int phy_id,
								      int location);
	struct netdev_private {
		struct starfire_rx_desc *rx_ring;
		starfire_tx_desc *tx_ring;
		dma_addr_t rx_ring_dma;
		dma_addr_t tx_ring_dma;
		struct rx_ring_info rx_info[RX_RING_SIZE];
		struct tx_ring_info tx_info[TX_RING_SIZE];
		rx_done_desc *rx_done_q;
		dma_addr_t rx_done_q_dma;
		unsigned int rx_done;
		struct tx_done_desc *tx_done_q;
		dma_addr_t tx_done_q_dma;
		unsigned int tx_done;
		struct napi_struct napi;
		struct net_device *dev;
		struct pci_dev *pci_dev;
#ifdef VLAN_SUPPORT
		unsigned long active_vlans[BITS_TO_LONGS(VLAN_N_VID)];
#endif
		void *queue_mem;
		dma_addr_t queue_mem_dma;
		size_t queue_mem_size;
		spinlock_t lock;
		unsigned int cur_rx,dirty_rx;
		unsigned int cur_tx,dirty_tx,reap_tx;
		unsigned int rx_buf_sz;
		int speed100;
		u32 tx_mode;
		u32 intr_timer_ctrl;
		u8 tx_threshold;
		struct mii_if_info mii_if;
		int phy_cnt;
		unsigned char phys[PHY_CNT];
		void __iomem *base;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 531 */;
	struct tx_ring_info {
		struct sk_buff *skb;
		dma_addr_t mapping;
		unsigned int used_slots;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 524 */;
	struct rx_ring_info {
		struct sk_buff *skb;
		dma_addr_t mapping;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 520 */;
	struct tx_done_desc {
		__le32 status;

#if 0

	
__le32

intrstatus

;


#endif

	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 513 */;
	enum tx_desc_bits{TxDescID=0xB0000000, TxCRCEn=0x01000000, TxDescIntr=0x08000000, TxRingWrap=0x04000000, TxCalTCP=0x02000000,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 508 */;
	struct starfire_tx_desc_2 cocci_id/* drivers/net/ethernet/adaptec/starfire.c 500 */;
	struct starfire_tx_desc_2 {
		__le32 status;
		__le32 reserved;
		__le64 addr;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 493 */;
	struct starfire_tx_desc_1 {
		__le32 status;
		__le32 addr;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 487 */;
	enum rx_done_bits{RxOK=0x20000000, RxFIFOErr=0x10000000, RxBufQ2=0x08000000,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 482 */;
	struct full_rx_done_desc cocci_id/* drivers/net/ethernet/adaptec/starfire.c 475 */;
	struct full_rx_done_desc {
		__le32 status;
		__le16 status3;
		__le16 status2;
		__le16 vlanid;
		__le16 csum;
		__le32 timestamp;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 465 */;
	struct csum_rx_done_desc {
		__le32 status;
		__le16 csum;
		__le16 status2;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 460 */;
	struct basic_rx_done_desc {
		__le32 status;
		__le16 vlanid;
		__le16 status2;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 455 */;
	struct short_rx_done_desc {
		__le32 status;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 452 */;
	enum rx_desc_bits{RxDescValid=1, RxDescEndRing=2,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 447 */;
	struct starfire_rx_desc {
		netdrv_addr_t rxaddr;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 444 */;
	enum intr_ctrl_bits{Timer10X=0x800, EnableIntrMasking=0x60, SmallFrameBypass=0x100, SmallFrame64=0, SmallFrame128=0x200, SmallFrame256=0x400, SmallFrame512=0x600, IntrLatencyMask=0x1f,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 437 */;
	enum gen_ctrl_bits{RxEnable=0x05, TxEnable=0x0a, RxGFPEnable=0x10, TxGFPEnable=0x20,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 431 */;
	enum tx_compl_bits{TxComplQAddr64bit=0x80, TxComplQAddr32bit=0, TxComplProducerWrEn=0x40, TxComplIntrStatus=0x20, CommonQueueMode=0x10, TxComplThreshShift=0,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 422 */;
	enum rx_compl_bits{RxComplQAddr64bit=0x80, RxComplQAddr32bit=0, RxComplProducerWrEn=0x40, RxComplType0=0x00, RxComplType1=0x10, RxComplType2=0x20, RxComplType3=0x30, RxComplThreshShift=0,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 413 */;
	enum rx_dmactrl_bits{RxReportBadFrames=0x80000000, RxDMAShortFrames=0x40000000, RxDMABadFrames=0x20000000, RxDMACrcErrorFrames=0x10000000, RxDMAControlFrame=0x08000000, RxDMAPauseFrame=0x04000000, RxChecksumIgnore=0, RxChecksumRejectTCPUDP=0x02000000, RxChecksumRejectTCPOnly=0x01000000, RxCompletionQ2Enable=0x800000, RxDMAQ2Disable=0, RxDMAQ2FPOnly=0x100000, RxDMAQ2SmallPkt=0x200000, RxDMAQ2HighPrio=0x300000, RxDMAQ2NonIP=0x400000, RxUseBackupQueue=0x080000, RxDMACRC=0x040000, RxEarlyIntThreshShift=12, RxHighPrioThreshShift=8, RxBurstSizeShift=0,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 397 */;
	enum rx_ctrl_bits{RxBufferLenShift=16, RxMinDescrThreshShift=0, RxPrefetchMode=0x8000, RxVariableQ=0x2000, Rx2048QEntries=0x4000, Rx256QEntries=0, RxDescAddr64bit=0x1000, RxDescAddr32bit=0, RxDescQAddr64bit=0x0100, RxDescQAddr32bit=0, RxDescSpace4=0x000, RxDescSpace8=0x100, RxDescSpace16=0x200, RxDescSpace32=0x300, RxDescSpace64=0x400, RxDescSpace128=0x500, RxConsumerWrEn=0x80,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 384 */;
	enum tx_ctrl_bits{TxDescSpaceUnlim=0x00, TxDescSpace32=0x10, TxDescSpace64=0x20, TxDescSpace128=0x30, TxDescSpace256=0x40, TxDescType0=0x00, TxDescType1=0x01, TxDescType2=0x02, TxDescType3=0x03, TxDescType4=0x04, TxNoDMACompletion=0x08, TxDescQAddr64bit=0x80, TxDescQAddr32bit=0, TxHiPriFIFOThreshShift=24, TxPadLenShift=16, TxDMABurstSizeShift=8,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 372 */;
	enum tx_mode_bits{MiiSoftReset=0x8000, MIILoopback=0x4000, TxFlowEnable=0x0800, RxFlowEnable=0x0400, PadEnable=0x04, FullDuplex=0x02, HugeFrame=0x01,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 365 */;
	enum rx_mode_bits{AcceptBroadcast=0x04, AcceptAllMulticast=0x02, AcceptAll=0x01, AcceptMulticast=0x10, PerfectFilter=0x40, HashFilter=0x30, PerfectFilterVlan=0x80, MinVLANPrio=0xE000, VlanMode=0x0200, WakeupOnGFP=0x0800,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 357 */;
	enum intr_status_bits{IntrLinkChange=0xf0000000, IntrStatsMax=0x08000000, IntrAbnormalSummary=0x02000000, IntrGeneralTimer=0x01000000, IntrSoftware=0x800000, IntrRxComplQ1Low=0x400000, IntrTxComplQLow=0x200000, IntrPCI=0x100000, IntrDMAErr=0x080000, IntrTxDataLow=0x040000, IntrRxComplQ2Low=0x020000, IntrRxDescQ1Low=0x010000, IntrNormalSummary=0x8000, IntrTxDone=0x4000, IntrTxDMADone=0x2000, IntrTxEmpty=0x1000, IntrEarlyRxQ2=0x0800, IntrEarlyRxQ1=0x0400, IntrRxQ2Done=0x0200, IntrRxQ1Done=0x0100, IntrRxGFPDead=0x80, IntrRxDescQ2Low=0x40, IntrNoTxCsum=0x20, IntrTxBadID=0x10, IntrHiPriTxBadID=0x08, IntrRxGfp=0x04, IntrTxGfp=0x02, IntrPCIPad=0x01, IntrRxDone=IntrRxQ2Done | IntrRxQ1Done, IntrRxEmpty=IntrRxDescQ1Low | IntrRxDescQ2Low, IntrNormalMask=0xff00, IntrAbnormalMask=0x3ff00fe,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 335 */;
	enum register_offsets{PCIDeviceConfig=0x50040, GenCtrl=0x50070, IntrTimerCtrl=0x50074, IntrClear=0x50080, IntrStatus=0x50084, IntrEnable=0x50088, MIICtrl=0x52000, TxStationAddr=0x50120, EEPROMCtrl=0x51000, GPIOCtrl=0x5008C, TxDescCtrl=0x50090, TxRingPtr=0x50098, HiPriTxRingPtr=0x50094, TxRingHiAddr=0x5009C, TxProducerIdx=0x500A0, TxConsumerIdx=0x500A4, TxThreshold=0x500B0, CompletionHiAddr=0x500B4, TxCompletionAddr=0x500B8, RxCompletionAddr=0x500BC, RxCompletionQ2Addr=0x500C0, CompletionQConsumerIdx=0x500C4, RxDMACtrl=0x500D0, RxDescQCtrl=0x500D4, RxDescQHiAddr=0x500DC, RxDescQAddr=0x500E0, RxDescQIdx=0x500E8, RxDMAStatus=0x500F0, RxFilterMode=0x500F4, TxMode=0x55000, VlanType=0x55064, PerfFilterTable=0x56000, HashTable=0x56100, TxGfpMem=0x58000, RxGfpMem=0x5a000,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 311 */;
	const struct chip_info {
		const char *name;
		int drv_flags;
	} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 295 */[];
	const struct pci_device_id cocci_id/* drivers/net/ethernet/adaptec/starfire.c 288 */[];
	enum chipset{CH_6915=0,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 284 */;
	enum chip_capability_flags{CanHaveMII=1,} cocci_id/* drivers/net/ethernet/adaptec/starfire.c 282 */;
	void __exit cocci_id/* drivers/net/ethernet/adaptec/starfire.c 2087 */;
	netdrv_addr_t cocci_id/* drivers/net/ethernet/adaptec/starfire.c 2081 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/adaptec/starfire.c 2081 */;
	int __init cocci_id/* drivers/net/ethernet/adaptec/starfire.c 2072 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/adaptec/starfire.c 2060 */;
	pm_message_t cocci_id/* drivers/net/ethernet/adaptec/starfire.c 2004 */;
	long long cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1961 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1918 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1915 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1871 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1861 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1852 */;
	__le32 *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1826 */;
	__le16 cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1819 */[32]__attribute__((aligned(sizeof(long))));
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1784 */;
	void __iomem *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1729 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1726 */;
	const char cocci_id/* drivers/net/ethernet/adaptec/starfire.c 169 */[];
	struct netdev_private cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1562 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1560 */;
	__le32 cocci_id/* drivers/net/ethernet/adaptec/starfire.c 151 */;
	rx_done_desc *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1449 */;
	u16 cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1447 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1446 */;
	u32 cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1441 */;
	struct netdev_private *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1440 */;
	struct net_device *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1438 */;
	int *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1438 */;
	int cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1438 */;
	__le64 cocci_id/* drivers/net/ethernet/adaptec/starfire.c 142 */;
	starfire_tx_desc cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1371 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1311 */;
	void *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1311 */;
	const skb_frag_t *cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1237 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1187 */;
	unsigned int cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1165 */;
	void cocci_id/* drivers/net/ethernet/adaptec/starfire.c 1073 */;
}
