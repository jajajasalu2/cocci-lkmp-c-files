cocci_test_suite() {
	const u32 cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 992 */;
	unsigned long cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 968 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 962 */;
	const u32 *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 949 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 827 */;
	u32 cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 822 */;
	struct de_desc *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 724 */;
	struct net_device *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 718 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 666 */;
	u16 cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 665 */[32];
	u16 *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 662 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 603 */;
	char cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 56 */[];
	u16 cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 528 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 495 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 409 */;
	u16 cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 360 */[];
	const char *const cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 350 */[DE_MAX_MEDIA];
	const struct pci_device_id cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 341 */[];
	unsigned int cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 338 */(struct de_private *de,
										u32 new_media);
	void cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 336 */(struct timer_list *t);
	void cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 335 */(struct de_private *de,
									u32 status);
	void cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 334 */(struct de_private *de);
	void cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 332 */(struct net_device *dev);
	struct de_private {
		unsigned tx_head;
		unsigned tx_tail;
		unsigned rx_tail;
		void __iomem *regs;
		struct net_device *dev;
		spinlock_t lock;
		struct de_desc *rx_ring;
		struct de_desc *tx_ring;
		struct ring_info tx_skb[DE_TX_RING_SIZE];
		struct ring_info rx_skb[DE_RX_RING_SIZE];
		unsigned rx_buf_sz;
		dma_addr_t ring_dma;
		u32 msg_enable;
		struct pci_dev *pdev;
		u16 setup_frame[DE_SETUP_FRAME_WORDS];
		u32 media_type;
		u32 media_supported;
		u32 media_advertise;
		struct media_info media[DE_MAX_MEDIA];
		struct timer_list media_timer;
		u8 *ee_data;
		unsigned board_idx;
		unsigned de21040:1;
		unsigned media_lock:1;
	} cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 297 */;
	struct ring_info {
		struct sk_buff *skb;
		dma_addr_t mapping;
	} cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 292 */;
	struct media_info {
		u16 type;
		u16 csr13;
		u16 csr14;
		u16 csr15;
	} cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 285 */;
	struct de_srom_info_leaf {
		u16 default_media;
		u8 n_blocks;
		u8 unused;
	}__packed cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 269 */;
	struct de_srom_media_block {
		u8 opts;
		u16 csr13;
		u16 csr14;
		u16 csr15;
	}__packed cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 262 */;
	void __exit cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 2202 */;
	int __init cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 2194 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 2183 */;
	pm_message_t cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 2119 */;
	unsigned long long cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 2036 */;
	struct de_private cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1986 */;
	void __iomem *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1974 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1969 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1969 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1958 */;
	struct de_srom_media_block *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1861 */;
	struct de_srom_media_block cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1823 */;
	struct de_srom_info_leaf cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1823 */;
	__le16 *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1802 */;
	void *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1798 */;
	struct de_srom_info_leaf *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1797 */;
	u8 cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1795 */[DE_EEPROM_SIZE + 6];
	short cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1769 */;
	unsigned cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1710 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1695 */;
	struct ethtool_regs *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1683 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1652 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1598 */;
	u8 cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1527 */;
	unsigned int cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1526 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1523 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1487 */;
	struct de_private *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1486 */;
	void cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1486 */;
	u32 *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1476 */;
	int cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1475 */;
	u8 *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1473 */;
	enum{BusMode=0x00, TxPoll=0x08, RxPoll=0x10, RxRingAddr=0x18, TxRingAddr=0x20, MacStatus=0x28, MacMode=0x30, IntrMask=0x38, RxMissed=0x40, ROMCmd=0x48, CSR11=0x58, SIAStatus=0x60, CSR13=0x68, CSR14=0x70, CSR15=0x78, PCIPM=0x40, CmdReset=(1 << 0), CacheAlign16=0x00008000, BurstLen4=0x00000400, DescSkipLen=(DSL << 2), NormalTxPoll=(1 << 0), NormalRxPoll=(1 << 0), DescOwn=(1 << 31), RxError=(1 << 15), RxErrLong=(1 << 7), RxErrCRC=(1 << 1), RxErrFIFO=(1 << 0), RxErrRunt=(1 << 11), RxErrFrame=(1 << 14), RingEnd=(1 << 25), FirstFrag=(1 << 29), LastFrag=(1 << 30), TxError=(1 << 15), TxFIFOUnder=(1 << 1), TxLinkFail=(1 << 2) | (1 << 10) | (1 << 11), TxMaxCol=(1 << 8), TxOWC=(1 << 9), TxJabber=(1 << 14), SetupFrame=(1 << 27), TxSwInt=(1 << 31), IntrOK=(1 << 16), IntrErr=(1 << 15), RxIntr=(1 << 6), RxEmpty=(1 << 7), TxIntr=(1 << 0), TxEmpty=(1 << 2), PciErr=(1 << 13), TxState=(1 << 22) | (1 << 21) | (1 << 20), RxState=(1 << 19) | (1 << 18) | (1 << 17), LinkFail=(1 << 12), LinkPass=(1 << 4), RxStopped=(1 << 8), TxStopped=(1 << 1), TxEnable=(1 << 13), RxEnable=(1 << 1), RxTx=TxEnable | RxEnable, FullDuplex=(1 << 9), AcceptAllMulticast=(1 << 7), AcceptAllPhys=(1 << 6), BOCnt=(1 << 5), MacModeClear=(1 << 12) | (1 << 11) | (1 << 10) | (1 << 8) | (1 << 3) | RxTx | BOCnt | AcceptAllPhys | AcceptAllMulticast, EE_SHIFT_CLK=0x02, EE_CS=0x01, EE_DATA_WRITE=0x04, EE_WRITE_0=0x01, EE_WRITE_1=0x05, EE_DATA_READ=0x08, EE_ENB=(0x4800 | EE_CS), EE_READ_CMD=6, RxMissedOver=(1 << 16), RxMissedMask=0xffff, SROMC0InfoLeaf=27, MediaBlockMask=0x3f, MediaCustomCSRs=(1 << 6), PM_Sleep=(1 << 31), PM_Snooze=(1 << 30), PM_Mask=PM_Sleep | PM_Snooze, NWayState=(1 << 14) | (1 << 13) | (1 << 12), NWayRestart=(1 << 12), NonselPortActive=(1 << 9), SelPortActive=(1 << 8), LinkFailStatus=(1 << 2), NetCxnErr=(1 << 1),} cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 142 */;
	const int cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1378 */;
	struct ring_info cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1363 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1346 */;
	struct de_desc cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1330 */;
	const u32 cocci_id/* drivers/net/ethernet/dec/tulip/de2104x.c 1118 */[];
	struct de_desc {
		__le32 opts1;
		__le32 opts2;
		__le32 addr1;
		__le32 addr2;
#if DSL
		__le32 skip[DSL];
#endif
	} cocci_id/*  1 */;
}
