cocci_test_suite() {
	int cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 87 */[MAX_UNITS];
	u16 cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 855 */;
	struct hamachi_private cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 621 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 590 */;
	void *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 589 */;
	unsigned long cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 586 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 579 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 578 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 565 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 562 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 560 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 559 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 558 */(struct net_device *dev,
									    int intr_status);
	irqreturn_t cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 555 */(int irq,
										   void *dev_instance);
	netdev_tx_t cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 553 */(struct sk_buff *skb,
										   struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 552 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 549 */(struct net_device *dev,
									   struct ifreq *rq,
									   int cmd);
	void cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 547 */(struct net_device *dev,
									    int phy_id,
									    int location,
									    int value);
	int cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 546 */(struct net_device *dev,
									   int phy_id,
									   int location);
	int cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 545 */(void __iomem *ioaddr,
									   int location);
	struct hamachi_private {
		struct hamachi_desc *rx_ring;
		struct hamachi_desc *tx_ring;
		struct sk_buff *rx_skbuff[RX_RING_SIZE];
		struct sk_buff *tx_skbuff[TX_RING_SIZE];
		dma_addr_t tx_ring_dma;
		dma_addr_t rx_ring_dma;
		struct timer_list timer;
		spinlock_t lock;
		int chip_id;
		unsigned int cur_rx,dirty_rx;
		unsigned int cur_tx,dirty_tx;
		unsigned int rx_buf_sz;
		unsigned int tx_full:1;
		unsigned int duplex_lock:1;
		unsigned int default_port:4;
		int mii_cnt;
		struct mii_if_info mii_if;
		unsigned char phys[MII_CNT];
		u32 rx_int_var,tx_int_var;
		u32 option;
		struct pci_dev *pci_dev;
		void __iomem *base;
	} cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 481 */;
	enum desc_status_bits{DescOwn=0x80000000, DescEndPacket=0x40000000, DescEndRing=0x20000000, DescIntr=0x10000000,} cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 474 */;
	enum intr_status_bits{IntrRxDone=0x01, IntrRxPCIFault=0x02, IntrRxPCIErr=0x04, IntrTxDone=0x100, IntrTxPCIFault=0x200, IntrTxPCIErr=0x400, LinkChange=0x10000, NegotiationChange=0x20000, StatsMax=0x40000,} cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 457 */;
	enum MII_offsets{MII_Cmd=0xA6, MII_Addr=0xA8, MII_Wr_Data=0xAA, MII_Rd_Data=0xAC, MII_Status=0xAE,} cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 451 */;
	enum hamachi_offsets{TxDMACtrl=0x00, TxCmd=0x04, TxStatus=0x06, TxPtr=0x08, TxCurPtr=0x10, RxDMACtrl=0x20, RxCmd=0x24, RxStatus=0x26, RxPtr=0x28, RxCurPtr=0x30, PCIClkMeas=0x060, MiscStatus=0x066, ChipRev=0x68, ChipReset=0x06B, LEDCtrl=0x06C, VirtualJumpers=0x06D, GPIO=0x6E, TxChecksum=0x074, RxChecksum=0x076, TxIntrCtrl=0x078, RxIntrCtrl=0x07C, InterruptEnable=0x080, InterruptClear=0x084, IntrStatus=0x088, EventStatus=0x08C, MACCnfg=0x0A0, FrameGap0=0x0A2, FrameGap1=0x0A4, MACCnfg2=0x0B0, RxDepth=0x0B8, FlowCtrl=0x0BC, MaxFrameSize=0x0CE, AddrMode=0x0D0, StationAddr=0x0D2, ANCtrl=0x0E0, ANStatus=0x0E2, ANXchngCtrl=0x0E4, ANAdvertise=0x0E8, ANLinkPartnerAbility=0x0EA, EECmdStatus=0x0F0, EEData=0x0F1, EEAddr=0x0F2, FIFOcfg=0x0F8,} cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 430 */;
	const struct chip_info {
		u16 vendor_id,device_id,device_id_mask,pad;
		const char *name;
		void (*media_timer)(struct timer_list *t);
		int flags;
	} cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 419 */[];
	enum capability_flags{CanHaveMII=1,} cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 418 */;
	void cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 416 */(struct timer_list *t);
	void __exit cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1935 */;
	int __init cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1926 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1919 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1913 */[];
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1862 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1859 */;
	u32 cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1839 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1823 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1813 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1803 */;
	struct net_device *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1796 */;
	int cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1796 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1778 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1731 */;
	const char cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 169 */[];
	u16 *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1685 */;
	u8 *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1684 */;
	long cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1675 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1649 */;
	void __iomem *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1648 */;
	struct hamachi_private *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1647 */;
	void cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1611 */;
	struct iphdr *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1516 */;
	s32 *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1471 */;
	u32 *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1459 */;
	s32 cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1412 */;
	struct hamachi_desc *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1408 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1289 */;
	struct hamachi_desc cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 121 */;
	unsigned cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1208 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1204 */;
	unsigned int cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1192 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/packetengines/hamachi.c 1020 */;
	struct hamachi_desc {
		__le32 status_n_length;
#if ADDRLEN == 64
		u32 pad;
		__le64 addr;
#else
		__le32 addr;
#endif
	} cocci_id/*  1 */;
}
