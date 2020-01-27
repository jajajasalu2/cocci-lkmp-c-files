cocci_test_suite() {
	unsigned cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 999 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 996 */;
	void cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 987 */;
	struct w840_tx_desc cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 979 */;
	struct w840_rx_desc cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 978 */;
	int cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 86 */[MAX_UNITS];
	unsigned int cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 823 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 811 */;
	struct w840_tx_desc *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 798 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 775 */;
	const int cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 632 */;
	char cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 546 */;
	short cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 512 */;
	enum EEPROM_Cmds{EE_WriteCmd=(5 << 6), EE_ReadCmd=(6 << 6), EE_EraseCmd=(7 << 6),} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 498 */;
	enum EEPROM_Ctrl_Bits{EE_ShiftClk=0x02, EE_Write0=0x801, EE_Write1=0x805, EE_ChipSelect=0x801, EE_DataIn=0x08,} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 492 */;
	__le16 *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 395 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 360 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 360 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 348 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 345 */;
	int cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 344 */(struct net_device *dev,
									   struct ifreq *rq,
									   int cmd);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 343 */(struct net_device *dev);
	u32 cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 341 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 339 */(struct net_device *dev,
									    int intr_status);
	irqreturn_t cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 338 */(int irq,
										   void *dev_instance);
	netdev_tx_t cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 337 */(struct sk_buff *skb,
										   struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 336 */(struct netdev_private *np);
	int cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 335 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 333 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 330 */(struct timer_list *t);
	void cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 327 */(struct net_device *dev,
									    int phy_id,
									    int location,
									    int value);
	int cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 326 */(struct net_device *dev,
									   int phy_id,
									   int location);
	int cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 325 */(void __iomem *ioaddr,
									   int location);
	struct netdev_private {
		struct w840_rx_desc *rx_ring;
		dma_addr_t rx_addr[RX_RING_SIZE];
		struct w840_tx_desc *tx_ring;
		dma_addr_t tx_addr[TX_RING_SIZE];
		dma_addr_t ring_dma_addr;
		struct sk_buff *rx_skbuff[RX_RING_SIZE];
		struct sk_buff *tx_skbuff[TX_RING_SIZE];
		struct net_device_stats stats;
		struct timer_list timer;
		spinlock_t lock;
		int chip_id,drv_flags;
		struct pci_dev *pci_dev;
		int csr6;
		struct w840_rx_desc *rx_head_desc;
		unsigned int cur_rx,dirty_rx;
		unsigned int rx_buf_sz;
		unsigned int cur_tx,dirty_tx;
		unsigned int tx_q_bytes;
		unsigned int tx_full;
		int mii_cnt;
		unsigned char phys[MII_CNT];
		u32 mii;
		struct mii_if_info mii_if;
		void __iomem *base_addr;
	} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 294 */;
	struct w840_tx_desc {
		s32 status;
		s32 length;
		u32 buffer1,buffer2;
	} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 287 */;
	struct w840_rx_desc {
		s32 status;
		s32 length;
		u32 buffer1;
		u32 buffer2;
	} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 280 */;
	enum mii_reg_bits{MDIO_ShiftClk=0x10000, MDIO_DataIn=0x80000, MDIO_DataOut=0x20000, MDIO_EnbOutput=0x40000, MDIO_EnbIn=0x00000,} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 274 */;
	enum rx_mode_bits{AcceptErr=0x80, RxAcceptBroadcast=0x20, AcceptMulticast=0x10, RxAcceptAllPhys=0x08, AcceptMyPhys=0x02,} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 268 */;
	enum w840_offsets{PCIBusCfg=0x00, TxStartDemand=0x04, RxStartDemand=0x08, RxRingPtr=0x0C, TxRingPtr=0x10, IntrStatus=0x14, NetworkConfig=0x18, IntrEnable=0x1C, RxMissed=0x20, EECtrl=0x24, MIICtrl=0x24, BootRom=0x28, GPTimer=0x2C, CurRxDescAddr=0x30, CurRxBufAddr=0x34, MulticastFilter0=0x38, MulticastFilter1=0x3C, StationAddr=0x40, CurTxDescAddr=0x4C, CurTxBufAddr=0x50,} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 257 */;
	const struct pci_id_info cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 239 */[];
	struct pci_id_info {
		const char *name;
		int drv_flags;
	} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 234 */;
	enum{netdev_res_size=128,} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 230 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 222 */[];
	enum chip_capability_flags{CanHaveMII=1, HasBrokenTx=2, AlwaysFDX=4, FDXOnNoMII=8,} cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 218 */;
	void __exit cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1657 */;
	int __init cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1651 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1640 */;
	pm_message_t cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1569 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1451 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1449 */;
	const char cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 143 */[]__initconst;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1405 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1393 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1383 */;
	int cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1361 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1357 */;
	u32 cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1344 */[2];
	void __iomem *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1343 */;
	struct netdev_private *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1342 */;
	u32 cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1340 */;
	struct net_device *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1340 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1325 */;
	s32 cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1189 */;
	struct w840_rx_desc *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1188 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1110 */;
	void *cocci_id/* drivers/net/ethernet/dec/tulip/winbond-840.c 1110 */;
}
