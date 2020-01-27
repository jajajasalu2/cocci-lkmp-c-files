cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/smsc/epic100.c 942 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/smsc/epic100.c 937 */;
	struct epic_tx_desc cocci_id/* drivers/net/ethernet/smsc/epic100.c 932 */;
	char cocci_id/* drivers/net/ethernet/smsc/epic100.c 93 */[];
	unsigned int cocci_id/* drivers/net/ethernet/smsc/epic100.c 924 */;
	struct epic_rx_desc cocci_id/* drivers/net/ethernet/smsc/epic100.c 907 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/smsc/epic100.c 844 */;
	int cocci_id/* drivers/net/ethernet/smsc/epic100.c 827 */;
	struct epic_private *cocci_id/* drivers/net/ethernet/smsc/epic100.c 825 */;
	struct net_device *cocci_id/* drivers/net/ethernet/smsc/epic100.c 823 */;
	const int cocci_id/* drivers/net/ethernet/smsc/epic100.c 644 */;
	void __iomem *cocci_id/* drivers/net/ethernet/smsc/epic100.c 539 */;
	void cocci_id/* drivers/net/ethernet/smsc/epic100.c 539 */;
	long cocci_id/* drivers/net/ethernet/smsc/epic100.c 488 */;
	__le16 *cocci_id/* drivers/net/ethernet/smsc/epic100.c 416 */;
	int cocci_id/* drivers/net/ethernet/smsc/epic100.c 40 */[MAX_UNITS];
	dma_addr_t cocci_id/* drivers/net/ethernet/smsc/epic100.c 328 */;
	void *cocci_id/* drivers/net/ethernet/smsc/epic100.c 327 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/smsc/epic100.c 319 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/smsc/epic100.c 307 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/smsc/epic100.c 304 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/smsc/epic100.c 303 */(struct net_device *dev);
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/smsc/epic100.c 302 */;
	int cocci_id/* drivers/net/ethernet/smsc/epic100.c 301 */(struct net_device *dev,
								  struct ifreq *rq,
								  int cmd);
	irqreturn_t cocci_id/* drivers/net/ethernet/smsc/epic100.c 300 */(int irq,
									  void *dev_instance);
	int cocci_id/* drivers/net/ethernet/smsc/epic100.c 299 */(struct napi_struct *napi,
								  int budget);
	int cocci_id/* drivers/net/ethernet/smsc/epic100.c 298 */(struct net_device *dev,
								  int budget);
	netdev_tx_t cocci_id/* drivers/net/ethernet/smsc/epic100.c 296 */(struct sk_buff *skb,
									  struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/smsc/epic100.c 295 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/smsc/epic100.c 293 */(struct timer_list *t);
	void cocci_id/* drivers/net/ethernet/smsc/epic100.c 291 */(struct net_device *dev,
								   int phy_id,
								   int loc,
								   int val);
	int cocci_id/* drivers/net/ethernet/smsc/epic100.c 290 */(struct net_device *dev,
								  int phy_id,
								  int location);
	int cocci_id/* drivers/net/ethernet/smsc/epic100.c 289 */(struct epic_private *,
								  int);
	struct epic_private {
		struct epic_rx_desc *rx_ring;
		struct epic_tx_desc *tx_ring;
		struct sk_buff *tx_skbuff[TX_RING_SIZE];
		struct sk_buff *rx_skbuff[RX_RING_SIZE];
		dma_addr_t tx_ring_dma;
		dma_addr_t rx_ring_dma;
		spinlock_t lock;
		spinlock_t napi_lock;
		struct napi_struct napi;
		unsigned int cur_tx,dirty_tx;
		unsigned int cur_rx,dirty_rx;
		u32 irq_mask;
		unsigned int rx_buf_sz;
		void __iomem *ioaddr;
		struct pci_dev *pci_dev;
		int chip_id,chip_flags;
		struct timer_list timer;
		int tx_threshold;
		unsigned char mc_filter[8];
		signed char phys[4];
		u16 advertising;
		int mii_phy_cnt;
		struct mii_if_info mii;
		unsigned int tx_full:1;
		unsigned int default_port:4;
	} cocci_id/* drivers/net/ethernet/smsc/epic100.c 252 */;
	enum desc_status_bits{DescOwn=0x8000,} cocci_id/* drivers/net/ethernet/smsc/epic100.c 247 */;
	struct epic_rx_desc {
		u32 rxstatus;
		u32 bufaddr;
		u32 buflength;
		u32 next;
	} cocci_id/* drivers/net/ethernet/smsc/epic100.c 240 */;
	struct epic_tx_desc {
		u32 txstatus;
		u32 bufaddr;
		u32 buflength;
		u32 next;
	} cocci_id/* drivers/net/ethernet/smsc/epic100.c 233 */;
	const u16 cocci_id/* drivers/net/ethernet/smsc/epic100.c 222 */[16];
	enum CommandBits{StopRx=1, StartRx=2, TxQueued=4, RxQueued=8, StopTxDMA=0x20, StopRxDMA=0x40, RestartTx=0x80,} cocci_id/* drivers/net/ethernet/smsc/epic100.c 211 */;
	enum IntrStatus{TxIdle=0x40000, RxIdle=0x20000, IntrSummary=0x010000, PCIBusErr170=0x7000, PCIBusErr175=0x1000, PhyEvent175=0x8000, RxStarted=0x0800, RxEarlyWarn=0x0400, CntFull=0x0200, TxUnderrun=0x0100, TxEmpty=0x0080, TxDone=0x0020, RxError=0x0010, RxOverflow=0x0008, RxFull=0x0004, RxHeader=0x0002, RxDone=0x0001,} cocci_id/* drivers/net/ethernet/smsc/epic100.c 204 */;
	enum epic_registers{COMMAND=0, INTSTAT=4, INTMASK=8, GENCTL=0x0C, NVCTL=0x10, EECTL=0x14, PCIBurstCnt=0x18, TEST1=0x1C, CRCCNT=0x20, ALICNT=0x24, MPCNT=0x28, MIICtrl=0x30, MIIData=0x34, MIICfg=0x38, LAN0=64, MC0=80, RxCtrl=96, TxCtrl=112, TxSTAT=0x74, PRxCDAR=0x84, RxSTAT=0xA4, EarlyRx=0xB0, PTxCDAR=0xC4, TxThresh=0xDC,} cocci_id/* drivers/net/ethernet/smsc/epic100.c 192 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/smsc/epic100.c 176 */[];
	const struct epic_chip_info cocci_id/* drivers/net/ethernet/smsc/epic100.c 169 */[];
	struct epic_chip_info {
		const char *name;
		int drv_flags;
	} cocci_id/* drivers/net/ethernet/smsc/epic100.c 162 */;
	void __exit cocci_id/* drivers/net/ethernet/smsc/epic100.c 1568 */;
	int __init cocci_id/* drivers/net/ethernet/smsc/epic100.c 1557 */;
	enum{SMSC_83C170_0, SMSC_83C170, SMSC_83C175,} cocci_id/* drivers/net/ethernet/smsc/epic100.c 155 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/smsc/epic100.c 1545 */;
	pm_message_t cocci_id/* drivers/net/ethernet/smsc/epic100.c 1515 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1474 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1470 */;
	enum chip_capability_flags{MII_PWRDWN=1, TYPE2_INTR=2, NO_MII=4,} cocci_id/* drivers/net/ethernet/smsc/epic100.c 144 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1399 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1387 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1377 */;
	u16 *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1372 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1360 */;
	unsigned char cocci_id/* drivers/net/ethernet/smsc/epic100.c 1343 */[8];
	struct net_device_stats *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1318 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1271 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1269 */;
	unsigned long cocci_id/* drivers/net/ethernet/smsc/epic100.c 1254 */;
	struct epic_private cocci_id/* drivers/net/ethernet/smsc/epic100.c 1242 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/smsc/epic100.c 1240 */;
	short cocci_id/* drivers/net/ethernet/smsc/epic100.c 1167 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/smsc/epic100.c 1061 */;
}
