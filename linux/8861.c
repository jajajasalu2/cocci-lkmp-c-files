cocci_test_suite() {
	struct rhine_private cocci_id/* drivers/net/ethernet/via/via-rhine.c 917 */;
	const char *cocci_id/* drivers/net/ethernet/via/via-rhine.c 908 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/via/via-rhine.c 885 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/via/via-rhine.c 822 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/via/via-rhine.c 786 */;
	unsigned char cocci_id/* drivers/net/ethernet/via/via-rhine.c 688 */;
	const int cocci_id/* drivers/net/ethernet/via/via-rhine.c 67 */;
	u32 cocci_id/* drivers/net/ethernet/via/via-rhine.c 661 */;
	long cocci_id/* drivers/net/ethernet/via/via-rhine.c 661 */;
	u8 cocci_id/* drivers/net/ethernet/via/via-rhine.c 640 */;
	char *cocci_id/* drivers/net/ethernet/via/via-rhine.c 610 */;
	bool cocci_id/* drivers/net/ethernet/via/via-rhine.c 58 */;
	int cocci_id/* drivers/net/ethernet/via/via-rhine.c 521 */(struct net_device *dev,
								   __be16 proto,
								   u16 vid);
	int cocci_id/* drivers/net/ethernet/via/via-rhine.c 520 */(struct net_device *dev);
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/via/via-rhine.c 519 */;
	int cocci_id/* drivers/net/ethernet/via/via-rhine.c 518 */(struct net_device *dev,
								   struct ifreq *rq,
								   int cmd);
	void cocci_id/* drivers/net/ethernet/via/via-rhine.c 516 */(struct net_device *dev,
								    struct rtnl_link_stats64 *stats);
	int cocci_id/* drivers/net/ethernet/via/via-rhine.c 514 */(struct net_device *dev,
								   int limit);
	irqreturn_t cocci_id/* drivers/net/ethernet/via/via-rhine.c 512 */(int irq,
									   void *dev_instance);
	netdev_tx_t cocci_id/* drivers/net/ethernet/via/via-rhine.c 510 */(struct sk_buff *skb,
									   struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/via/via-rhine.c 507 */(struct work_struct *work);
	void cocci_id/* drivers/net/ethernet/via/via-rhine.c 505 */(struct net_device *dev,
								    int phy_id,
								    int location,
								    int value);
	int cocci_id/* drivers/net/ethernet/via/via-rhine.c 504 */(struct net_device *dev,
								   int phy_id,
								   int location);
	struct rhine_private {
		unsigned long active_vlans[BITS_TO_LONGS(VLAN_N_VID)];
		struct rx_desc *rx_ring;
		struct tx_desc *tx_ring;
		dma_addr_t rx_ring_dma;
		dma_addr_t tx_ring_dma;
		struct sk_buff *rx_skbuff[RX_RING_SIZE];
		dma_addr_t rx_skbuff_dma[RX_RING_SIZE];
		struct sk_buff *tx_skbuff[TX_RING_SIZE];
		dma_addr_t tx_skbuff_dma[TX_RING_SIZE];
		unsigned char *tx_buf[TX_RING_SIZE];
		unsigned char *tx_bufs;
		dma_addr_t tx_bufs_dma;
		int irq;
		long pioaddr;
		struct net_device *dev;
		struct napi_struct napi;
		spinlock_t lock;
		struct mutex task_lock;
		bool task_enable;
		struct work_struct slow_event_task;
		struct work_struct reset_task;
		u32 msg_enable;
		u32 quirks;
		unsigned int cur_rx;
		unsigned int cur_tx,dirty_tx;
		unsigned int rx_buf_sz;
		struct rhine_stats rx_stats;
		struct rhine_stats tx_stats;
		u8 wolopts;
		u8 tx_thresh,rx_thresh;
		struct mii_if_info mii_if;
		void __iomem *base;
	} cocci_id/* drivers/net/ethernet/via/via-rhine.c 437 */;
	struct rhine_stats {
		u64 packets;
		u64 bytes;
		struct u64_stats_sync syncp;
	} cocci_id/* drivers/net/ethernet/via/via-rhine.c 431 */;
	enum chip_cmd_bits{CmdInit=0x01, CmdStart=0x02, CmdStop=0x04, CmdRxOn=0x08, CmdTxOn=0x10, Cmd1TxDemand=0x20, CmdRxDemand=0x40, Cmd1EarlyRx=0x01, Cmd1EarlyTx=0x02, Cmd1FDuplex=0x04, Cmd1NoTxPoll=0x08, Cmd1Reset=0x80,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 424 */;
	enum desc_length_bits{DescTag=0x00010000,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 419 */;
	enum desc_status_bits{DescOwn=0x80000000,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 414 */;
	enum rx_status_bits{RxOK=0x8000, RxWholePkt=0x0300, RxErr=0x008F,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 409 */;
	struct tx_desc {
		__le32 tx_status;
		__le32 desc_length;
		__le32 addr;
		__le32 next_desc;
	} cocci_id/* drivers/net/ethernet/via/via-rhine.c 399 */;
	struct rx_desc {
		__le32 rx_status;
		__le32 desc_length;
		__le32 addr;
		__le32 next_desc;
	} cocci_id/* drivers/net/ethernet/via/via-rhine.c 393 */;
	enum wol_bits{WOLucast=0x10, WOLmagic=0x20, WOLbmcast=0x30, WOLlnkon=0x40, WOLlnkoff=0x80,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 384 */;
	enum intr_status_bits{IntrRxDone=0x0001, IntrTxDone=0x0002, IntrRxErr=0x0004, IntrTxError=0x0008, IntrRxEmpty=0x0020, IntrPCIErr=0x0040, IntrStatsMax=0x0080, IntrRxEarly=0x0100, IntrTxUnderrun=0x0210, IntrRxOverflow=0x0400, IntrRxDropped=0x0800, IntrRxNoBuf=0x1000, IntrTxAborted=0x2000, IntrLinkChange=0x4000, IntrRxWakeUp=0x8000, IntrTxDescRace=0x080000, IntrNormalSummary=IntrRxDone | IntrTxDone, IntrTxErrSummary=IntrTxDescRace | IntrTxAborted | IntrTxError | IntrTxUnderrun,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 361 */;
	const int cocci_id/* drivers/net/ethernet/via/via-rhine.c 355 */[];
	enum bcr1_bits{BCR1_POT0=0x01, BCR1_POT1=0x02, BCR1_POT2=0x04, BCR1_CTFT0=0x08, BCR1_CTFT1=0x10, BCR1_CTSF=0x20, BCR1_TXQNOBK=0x40, BCR1_VIDFR=0x80, BCR1_MED0=0x40, BCR1_MED1=0x80,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 341 */;
	enum camcon_bits{CAMC_CAMEN=0x01, CAMC_VCAMSL=0x02, CAMC_CAMWR=0x04, CAMC_CAMRD=0x08,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 333 */;
	enum tcr_bits{TCR_PQEN=0x01, TCR_LB0=0x02, TCR_LB1=0x04, TCR_OFSET=0x08, TCR_RTGOPT=0x10, TCR_RTFT0=0x20, TCR_RTFT1=0x40, TCR_RTSF=0x80,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 321 */;
	enum backoff_bits{BackOptional=0x01, BackModify=0x02, BackCaptureEffect=0x04, BackRandom=0x08,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 315 */;
	enum register_offsets{StationAddr=0x00, RxConfig=0x06, TxConfig=0x07, ChipCmd=0x08, ChipCmd1=0x09, TQWake=0x0A, IntrStatus=0x0C, IntrEnable=0x0E, MulticastFilter0=0x10, MulticastFilter1=0x14, RxRingPtr=0x18, TxRingPtr=0x1C, GFIFOTest=0x54, MIIPhyAddr=0x6C, MIIStatus=0x6D, PCIBusConfig=0x6E, PCIBusConfig1=0x6F, MIICmd=0x70, MIIRegAddr=0x71, MIIData=0x72, MACRegEEcsr=0x74, ConfigA=0x78, ConfigB=0x79, ConfigC=0x7A, ConfigD=0x7B, RxMissed=0x7C, RxCRCErrs=0x7E, MiscCmd=0x81, StickyHW=0x83, IntrStatus2=0x84, CamMask=0x88, CamCon=0x92, CamAddr=0x93, WOLcrSet=0xA0, PwcfgSet=0xA1, WOLcgSet=0xA3, WOLcrClr=0xA4, WOLcrClr1=0xA6, WOLcgClr=0xA7, PwrcsrSet=0xA8, PwrcsrSet1=0xA9, PwrcsrClr=0xAC, PwrcsrClr1=0xAD,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 297 */;
	const struct of_device_id cocci_id/* drivers/net/ethernet/via/via-rhine.c 290 */[];
	const struct pci_device_id cocci_id/* drivers/net/ethernet/via/via-rhine.c 277 */[];
	void __exit cocci_id/* drivers/net/ethernet/via/via-rhine.c 2639 */;
	int __init cocci_id/* drivers/net/ethernet/via/via-rhine.c 2614 */;
	const struct dmi_system_id cocci_id/* drivers/net/ethernet/via/via-rhine.c 2596 */[]__initconst;
	struct platform_driver cocci_id/* drivers/net/ethernet/via/via-rhine.c 2586 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/via/via-rhine.c 2577 */;
	enum rhine_quirks{rqWOL=0x0001, rqForceReset=0x0002, rq6patterns=0x0040, rqStatusWBRace=0x0080, rqRhineI=0x0100, rqIntPHY=0x0200, rqMgmt=0x0400, rqNeedEnMMIO=0x0800,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 255 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2400 */;
	enum rhine_revs{VT86C100A=0x00, VTunknown0=0x20, VT6102=0x40, VT8231=0x50, VT8233=0x60, VT8235=0x74, VT8237=0x78, VTunknown1=0x7C, VT6105=0x80, VT6105_B0=0x83, VT6105L=0x8A, VT6107=0x8C, VTunknown2=0x8E, VT6105M=0x90,} cocci_id/* drivers/net/ethernet/via/via-rhine.c 238 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2355 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2314 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2302 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2292 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2250 */;
	u32 cocci_id/* drivers/net/ethernet/via/via-rhine.c 2248 */[2];
	struct rtnl_link_stats64 *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2220 */;
	struct rx_desc *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2053 */;
	__be16 *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2025 */;
	u8 *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2024 */;
	u16 cocci_id/* drivers/net/ethernet/via/via-rhine.c 2022 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/via/via-rhine.c 2022 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/via/via-rhine.c 1896 */;
	unsigned long cocci_id/* drivers/net/ethernet/via/via-rhine.c 1801 */;
	unsigned cocci_id/* drivers/net/ethernet/via/via-rhine.c 1787 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/via/via-rhine.c 1781 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1729 */;
	void __iomem *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1564 */;
	__be16 cocci_id/* drivers/net/ethernet/via/via-rhine.c 1539 */;
	u16 *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1447 */;
	struct mii_if_info *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1381 */;
	unsigned int cocci_id/* drivers/net/ethernet/via/via-rhine.c 1361 */;
	void cocci_id/* drivers/net/ethernet/via/via-rhine.c 1315 */;
	struct rhine_skb_dma cocci_id/* drivers/net/ethernet/via/via-rhine.c 1279 */;
	struct rx_desc cocci_id/* drivers/net/ethernet/via/via-rhine.c 1270 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/via/via-rhine.c 1260 */;
	struct rhine_private *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1259 */;
	struct net_device *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1257 */;
	int cocci_id/* drivers/net/ethernet/via/via-rhine.c 1257 */;
	void cocci_id/* drivers/net/ethernet/via/via-rhine.c 1255 */(struct net_device *dev);
	struct rhine_skb_dma *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1215 */;
	const char cocci_id/* drivers/net/ethernet/via/via-rhine.c 121 */[];
	struct rhine_skb_dma {
		struct sk_buff *skb;
		dma_addr_t dma;
	} cocci_id/* drivers/net/ethernet/via/via-rhine.c 1209 */;
	struct tx_desc cocci_id/* drivers/net/ethernet/via/via-rhine.c 1161 */;
	void *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1156 */;
	struct device *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1155 */;
	const u32 *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1128 */;
	const struct of_device_id *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1127 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1125 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1035 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/via/via-rhine.c 1034 */;
}
