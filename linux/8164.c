cocci_test_suite() {
	unsigned long long cocci_id/* drivers/net/ethernet/dlink/sundance.c 990 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/dlink/sundance.c 954 */;
	void __iomem *cocci_id/* drivers/net/ethernet/dlink/sundance.c 929 */;
	void cocci_id/* drivers/net/ethernet/dlink/sundance.c 926 */;
	enum mii_reg_bits{MDIO_ShiftClk=0x0001, MDIO_Data=0x0002, MDIO_EnbOutput=0x0004,} cocci_id/* drivers/net/ethernet/dlink/sundance.c 750 */;
	struct netdev_desc cocci_id/* drivers/net/ethernet/dlink/sundance.c 72 */;
	char *cocci_id/* drivers/net/ethernet/dlink/sundance.c 57 */[MAX_UNITS];
	__le16 *cocci_id/* drivers/net/ethernet/dlink/sundance.c 545 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/dlink/sundance.c 511 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/dlink/sundance.c 500 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/dlink/sundance.c 499 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/dlink/sundance.c 483 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/dlink/sundance.c 451 */;
	int cocci_id/* drivers/net/ethernet/dlink/sundance.c 449 */(struct net_device *dev,
								    struct ifreq *rq,
								    int cmd);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/dlink/sundance.c 448 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/dlink/sundance.c 447 */(struct net_device *dev,
								    void *data);
	int cocci_id/* drivers/net/ethernet/dlink/sundance.c 446 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/dlink/sundance.c 443 */(struct net_device *dev,
								     int intr_status);
	void cocci_id/* drivers/net/ethernet/dlink/sundance.c 440 */(unsigned long data);
	irqreturn_t cocci_id/* drivers/net/ethernet/dlink/sundance.c 439 */(int irq,
									    void *dev_instance);
	netdev_tx_t cocci_id/* drivers/net/ethernet/dlink/sundance.c 437 */(struct sk_buff *skb,
									    struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/dlink/sundance.c 434 */(struct timer_list *t);
	void cocci_id/* drivers/net/ethernet/dlink/sundance.c 433 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/dlink/sundance.c 431 */(struct net_device *dev,
								    int wait);
	void cocci_id/* drivers/net/ethernet/dlink/sundance.c 430 */(struct net_device *dev,
								     int phy_id,
								     int location,
								     int value);
	int cocci_id/* drivers/net/ethernet/dlink/sundance.c 429 */(struct net_device *dev,
								    int phy_id,
								    int location);
	int cocci_id/* drivers/net/ethernet/dlink/sundance.c 428 */(void __iomem *ioaddr,
								    int location);
	int cocci_id/* drivers/net/ethernet/dlink/sundance.c 427 */(struct net_device *dev,
								    int new_mtu);
	struct netdev_private {
		struct netdev_desc *rx_ring;
		struct netdev_desc *tx_ring;
		struct sk_buff *rx_skbuff[RX_RING_SIZE];
		struct sk_buff *tx_skbuff[TX_RING_SIZE];
		dma_addr_t tx_ring_dma;
		dma_addr_t rx_ring_dma;
		struct timer_list timer;
		struct {
			u64 tx_multiple_collisions;
			u64 tx_single_collisions;
			u64 tx_late_collisions;
			u64 tx_deferred;
			u64 tx_deferred_excessive;
			u64 tx_aborted;
			u64 tx_bcasts;
			u64 rx_bcasts;
			u64 tx_mcasts;
			u64 rx_mcasts;
		} xstats;
		spinlock_t lock;
		int msg_enable;
		int chip_id;
		unsigned int cur_rx,dirty_rx;
		unsigned int rx_buf_sz;
		struct netdev_desc *last_tx;
		unsigned int cur_tx,dirty_tx;
		unsigned int flowctrl:1;
		unsigned int default_port:4;
		unsigned int an_enable:1;
		unsigned int speed;
		unsigned int wol_enabled:1;
		struct tasklet_struct rx_tasklet;
		struct tasklet_struct tx_tasklet;
		int budget;
		int cur_task;
		spinlock_t mcastlock;
		u16 mcast_filter[4];
		struct mii_if_info mii_if;
		int mii_preamble_required;
		unsigned char phys[MII_CNT];
		struct pci_dev *pci_dev;
		void __iomem *base;
		spinlock_t statlock;
	} cocci_id/* drivers/net/ethernet/dlink/sundance.c 369 */;
	enum desc_status_bits{DescOwn=0x8000, DescEndPacket=0x4000, DescEndRing=0x2000, LastFrag=0x80000000, DescIntrOnTx=0x8000, DescIntrOnDMADone=0x80000000, DisableAlign=0x00000001,} cocci_id/* drivers/net/ethernet/dlink/sundance.c 355 */;
	const int cocci_id/* drivers/net/ethernet/dlink/sundance.c 35 */;
	struct netdev_desc {
		__le32 next_desc;
		__le32 status;
		struct desc_frag {
			__le32 addr,length;
		} frag[1];
	} cocci_id/* drivers/net/ethernet/dlink/sundance.c 348 */;
	enum wake_event_bits{WakePktEnable=0x01, MagicPktEnable=0x02, LinkEventEnable=0x04, WolEnable=0x80,} cocci_id/* drivers/net/ethernet/dlink/sundance.c 338 */;
	enum mac_ctrl1_bits{StatsEnable=0x0020, StatsDisable=0x0040, StatsEnabled=0x0080, TxEnable=0x0100, TxDisable=0x0200, TxEnabled=0x0400, RxEnable=0x0800, RxDisable=0x1000, RxEnabled=0x2000,} cocci_id/* drivers/net/ethernet/dlink/sundance.c 331 */;
	enum mac_ctrl0_bits{EnbFullDuplex=0x20, EnbRcvLargeFrame=0x40, EnbFlowCtrl=0x100, EnbPassRxCRC=0x200,} cocci_id/* drivers/net/ethernet/dlink/sundance.c 327 */;
	enum rx_mode_bits{AcceptAllIPMulti=0x20, AcceptMultiHash=0x10, AcceptAll=0x08, AcceptBroadcast=0x04, AcceptMulticast=0x02, AcceptMyPhys=0x01,} cocci_id/* drivers/net/ethernet/dlink/sundance.c 322 */;
	enum intr_status_bits{IntrSummary=0x0001, IntrPCIErr=0x0002, IntrMACCtrl=0x0008, IntrTxDone=0x0004, IntrRxDone=0x0010, IntrRxStart=0x0020, IntrDrvRqst=0x0040, StatsMax=0x0080, LinkChange=0x0100, IntrTxDMADone=0x0200, IntrRxDMADone=0x0400,} cocci_id/* drivers/net/ethernet/dlink/sundance.c 313 */;
	enum ASICCtrl_HiWord_bit{GlobalReset=0x0001, RxReset=0x0002, TxReset=0x0004, DMAReset=0x0008, FIFOReset=0x0010, NetworkReset=0x0020, HostReset=0x0040, ResetBusy=0x0400,} cocci_id/* drivers/net/ethernet/dlink/sundance.c 301 */;
	enum alta_offsets{DMACtrl=0x00, TxListPtr=0x04, TxDMABurstThresh=0x08, TxDMAUrgentThresh=0x09, TxDMAPollPeriod=0x0a, RxDMAStatus=0x0c, RxListPtr=0x10, DebugCtrl0=0x1a, DebugCtrl1=0x1c, RxDMABurstThresh=0x14, RxDMAUrgentThresh=0x15, RxDMAPollPeriod=0x16, LEDCtrl=0x1a, ASICCtrl=0x30, EEData=0x34, EECtrl=0x36, FlashAddr=0x40, FlashData=0x44, WakeEvent=0x45, TxStatus=0x46, TxFrameId=0x47, DownCounter=0x18, IntrClear=0x4a, IntrEnable=0x4c, IntrStatus=0x4e, MACCtrl0=0x50, MACCtrl1=0x52, StationAddr=0x54, MaxFrameSize=0x5A, RxMode=0x5c, MIICtrl=0x5e, MulticastFilter0=0x60, MulticastFilter1=0x64, RxOctetsLow=0x68, RxOctetsHigh=0x6a, TxOctetsLow=0x6c, TxOctetsHigh=0x6e, TxFramesOK=0x70, RxFramesOK=0x72, StatsCarrierError=0x74, StatsLateColl=0x75, StatsMultiColl=0x76, StatsOneColl=0x77, StatsTxDefer=0x78, RxMissed=0x79, StatsTxXSDefer=0x7a, StatsTxAbort=0x7b, StatsBcastTx=0x7c, StatsBcastRx=0x7d, StatsMcastTx=0x7e, StatsMcastRx=0x7f, RxStatus=0x0c,} cocci_id/* drivers/net/ethernet/dlink/sundance.c 243 */;
	const struct pci_id_info cocci_id/* drivers/net/ethernet/dlink/sundance.c 221 */[];
	struct pci_id_info {
		const char *name;
	} cocci_id/* drivers/net/ethernet/dlink/sundance.c 218 */;
	enum{netdev_io_size=128,} cocci_id/* drivers/net/ethernet/dlink/sundance.c 214 */;
	void __exit cocci_id/* drivers/net/ethernet/dlink/sundance.c 2020 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/dlink/sundance.c 202 */[];
	int __init cocci_id/* drivers/net/ethernet/dlink/sundance.c 2011 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/dlink/sundance.c 2000 */;
	pm_message_t cocci_id/* drivers/net/ethernet/dlink/sundance.c 1949 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1815 */;
	struct ethtool_wolinfo *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1748 */;
	u64 *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1727 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1727 */;
	u8 *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1710 */;
	u32 cocci_id/* drivers/net/ethernet/dlink/sundance.c 1691 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1675 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1665 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1656 */;
	const struct {
		const char name[ETH_GSTRING_LEN];
	} cocci_id/* drivers/net/ethernet/dlink/sundance.c 1634 */[];
	const struct sockaddr *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1624 */;
	u16 cocci_id/* drivers/net/ethernet/dlink/sundance.c 1610 */;
	struct netdev_private *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1609 */;
	struct net_device *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1607 */;
	int cocci_id/* drivers/net/ethernet/dlink/sundance.c 1607 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1583 */;
	u16 cocci_id/* drivers/net/ethernet/dlink/sundance.c 1570 */[4];
	u8 cocci_id/* drivers/net/ethernet/dlink/sundance.c 1529 */;
	unsigned long cocci_id/* drivers/net/ethernet/dlink/sundance.c 1528 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1524 */;
	struct netdev_desc *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1341 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/dlink/sundance.c 1185 */;
	void *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1185 */;
	unsigned cocci_id/* drivers/net/ethernet/dlink/sundance.c 1103 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/dlink/sundance.c 1098 */;
	unsigned int cocci_id/* drivers/net/ethernet/dlink/sundance.c 1064 */;
	const char cocci_id/* drivers/net/ethernet/dlink/sundance.c 105 */[];
	struct sk_buff *cocci_id/* drivers/net/ethernet/dlink/sundance.c 1047 */;
}
