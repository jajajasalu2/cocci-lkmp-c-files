cocci_test_suite() {
	const char cocci_id/* drivers/net/ethernet/fealnx.c 95 */[];
	unsigned short *cocci_id/* drivers/net/ethernet/fealnx.c 840 */;
	const int cocci_id/* drivers/net/ethernet/fealnx.c 830 */;
	ulong cocci_id/* drivers/net/ethernet/fealnx.c 706 */;
	struct netdev_private cocci_id/* drivers/net/ethernet/fealnx.c 533 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/fealnx.c 491 */;
	void *cocci_id/* drivers/net/ethernet/fealnx.c 490 */;
	unsigned long cocci_id/* drivers/net/ethernet/fealnx.c 487 */;
	char cocci_id/* drivers/net/ethernet/fealnx.c 485 */[12];
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/fealnx.c 480 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/fealnx.c 479 */;
	int cocci_id/* drivers/net/ethernet/fealnx.c 47 */[MAX_UNITS];
	const struct net_device_ops cocci_id/* drivers/net/ethernet/fealnx.c 467 */;
	int cocci_id/* drivers/net/ethernet/fealnx.c 441 */(struct net_device *dev);
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/fealnx.c 440 */;
	int cocci_id/* drivers/net/ethernet/fealnx.c 439 */(struct net_device *dev,
							    struct ifreq *rq,
							    int cmd);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/fealnx.c 438 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/fealnx.c 437 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/fealnx.c 434 */(int irq,
								    void *dev_instance);
	netdev_tx_t cocci_id/* drivers/net/ethernet/fealnx.c 433 */(struct sk_buff *skb,
								    struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/fealnx.c 429 */(struct timer_list *t);
	void cocci_id/* drivers/net/ethernet/fealnx.c 425 */(struct net_device *dev,
							     int phy_id,
							     int location,
							     int value);
	int cocci_id/* drivers/net/ethernet/fealnx.c 424 */(struct net_device *dev,
							    int phy_id,
							    int location);
	struct netdev_private {
		struct fealnx_desc *rx_ring;
		struct fealnx_desc *tx_ring;
		dma_addr_t rx_ring_dma;
		dma_addr_t tx_ring_dma;
		spinlock_t lock;
		struct timer_list timer;
		struct timer_list reset_timer;
		int reset_timer_armed;
		unsigned long crvalue_sv;
		unsigned long imrvalue_sv;
		int flags;
		struct pci_dev *pci_dev;
		unsigned long crvalue;
		unsigned long bcrvalue;
		unsigned long imrvalue;
		struct fealnx_desc *cur_rx;
		struct fealnx_desc *lack_rxbuf;
		int really_rx_count;
		struct fealnx_desc *cur_tx;
		struct fealnx_desc *cur_tx_copy;
		int really_tx_count;
		int free_tx_count;
		unsigned int rx_buf_sz;
		unsigned int linkok;
		unsigned int line_speed;
		unsigned int duplexmode;
		unsigned int default_port:4;
		unsigned int PHYType;
		int mii_cnt;
		unsigned char phys[2];
		struct mii_if_info mii;
		void __iomem *mem;
	} cocci_id/* drivers/net/ethernet/fealnx.c 375 */;
	int cocci_id/* drivers/net/ethernet/fealnx.c 31 */;
	enum tx_desc_control_bits{TXIC=0x80000000, ETIControl=0x40000000, TXLD=0x20000000, TXFD=0x10000000, CRCEnable=0x08000000, PADEnable=0x04000000, RetryTxLC=0x02000000, PKTSMask=0x3ff800, PKTSShift=11, TBSMask=0x000007ff, TBSShift=0,} cocci_id/* drivers/net/ethernet/fealnx.c 285 */;
	enum tx_desc_status_bits{TXOWN=0x80000000, JABTO=0x00004000, CSL=0x00002000, LC=0x00001000, EC=0x00000800, UDF=0x00000400, DFR=0x00000200, HF=0x00000100, NCRMask=0x000000ff, NCRShift=0,} cocci_id/* drivers/net/ethernet/fealnx.c 272 */;
	enum rx_desc_control_bits{RXIC=0x00800000, RBSShift=0,} cocci_id/* drivers/net/ethernet/fealnx.c 267 */;
	enum rx_desc_status_bits{RXOWN=0x80000000, FLNGMASK=0x0fff0000, FLNGShift=16, MARSTATUS=0x00004000, BARSTATUS=0x00002000, PHYSTATUS=0x00001000, RXFSD=0x00000800, RXLSD=0x00000400, ErrorSummary=0x80, RUNTPKT=0x40, LONGPKT=0x20, FAE=0x10, CRC=0x08, RXER=0x04,} cocci_id/* drivers/net/ethernet/fealnx.c 250 */;
	struct fealnx_desc {
		s32 status;
		s32 control;
		u32 buffer;
		u32 next_desc;
		struct fealnx_desc *next_desc_logical;
		struct sk_buff *skbuff;
		u32 reserved1;
		u32 reserved2;
	} cocci_id/* drivers/net/ethernet/fealnx.c 238 */;
	enum rx_mode_bits{CR_W_ENH=0x02000000, CR_W_FD=0x00100000, CR_W_PS10=0x00080000, CR_W_TXEN=0x00040000, CR_W_PS1000=0x00010000, CR_W_RXMODEMASK=0x000000e0, CR_W_PROM=0x00000080, CR_W_AB=0x00000040, CR_W_AM=0x00000020, CR_W_ARP=0x00000008, CR_W_ALP=0x00000004, CR_W_SEP=0x00000002, CR_W_RXEN=0x00000001, CR_R_TXSTOP=0x04000000, CR_R_FD=0x00100000, CR_R_PS10=0x00080000, CR_R_RXSTOP=0x00008000,} cocci_id/* drivers/net/ethernet/fealnx.c 215 */;
	void __exit cocci_id/* drivers/net/ethernet/fealnx.c 1961 */;
	int __init cocci_id/* drivers/net/ethernet/fealnx.c 1951 */;
	struct pci_driver cocci_id/* drivers/net/ethernet/fealnx.c 1944 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/fealnx.c 1935 */[];
	enum intr_status_bits{RFCON=0x00020000, RFCOFF=0x00010000, LSCStatus=0x00008000, ANCStatus=0x00004000, FBE=0x00002000, FBEMask=0x00001800, ParityErr=0x00000000, TargetErr=0x00001000, MasterErr=0x00000800, TUNF=0x00000400, ROVF=0x00000200, ETI=0x00000100, ERI=0x00000080, CNTOVF=0x00000040, RBU=0x00000020, TBU=0x00000010, TI=0x00000008, RI=0x00000004, RxErr=0x00000002,} cocci_id/* drivers/net/ethernet/fealnx.c 190 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/fealnx.c 1873 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/fealnx.c 1829 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/fealnx.c 1817 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/fealnx.c 1807 */;
	unsigned int cocci_id/* drivers/net/ethernet/fealnx.c 1791 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/fealnx.c 1787 */;
	u32 cocci_id/* drivers/net/ethernet/fealnx.c 1776 */;
	u32 cocci_id/* drivers/net/ethernet/fealnx.c 1775 */[2];
	void __iomem *cocci_id/* drivers/net/ethernet/fealnx.c 1774 */;
	struct netdev_private *cocci_id/* drivers/net/ethernet/fealnx.c 1773 */;
	struct net_device *cocci_id/* drivers/net/ethernet/fealnx.c 1771 */;
	void cocci_id/* drivers/net/ethernet/fealnx.c 1771 */;
	spinlock_t *cocci_id/* drivers/net/ethernet/fealnx.c 1762 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/fealnx.c 1742 */;
	short cocci_id/* drivers/net/ethernet/fealnx.c 1686 */;
	s32 cocci_id/* drivers/net/ethernet/fealnx.c 1614 */;
	enum fealnx_offsets{PAR0=0x0, PAR1=0x04, MAR0=0x08, MAR1=0x0C, FAR0=0x10, FAR1=0x14, TCRRCR=0x18, BCR=0x1C, TXPDR=0x20, RXPDR=0x24, RXCWP=0x28, TXLBA=0x2C, RXLBA=0x30, ISR=0x34, IMR=0x38, FTH=0x3C, MANAGEMENT=0x40, TALLY=0x44, TSR=0x48, BMCRSR=0x4c, PHYIDENTIFIER=0x50, ANARANLPAR=0x54, ANEROCR=0x58, BPREMRPSR=0x5c,} cocci_id/* drivers/net/ethernet/fealnx.c 160 */;
	const struct chip_info cocci_id/* drivers/net/ethernet/fealnx.c 153 */[];
	struct fealnx_desc *cocci_id/* drivers/net/ethernet/fealnx.c 1493 */;
	struct chip_info {
		char *chip_name;
		int flags;
	} cocci_id/* drivers/net/ethernet/fealnx.c 148 */;
	long cocci_id/* drivers/net/ethernet/fealnx.c 1433 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/fealnx.c 1428 */;
	enum phy_type_flags{MysonPHY=1, AhdocPHY=2, SeeqPHY=3, MarvellPHY=4, Myson981=5, LevelOnePHY=6, OtherPHY=10,} cocci_id/* drivers/net/ethernet/fealnx.c 138 */;
	enum chip_capability_flags{HAS_MII_XCVR, HAS_CHIP_XCVR,} cocci_id/* drivers/net/ethernet/fealnx.c 131 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/fealnx.c 1295 */;
	enum{MIN_REGION_SIZE=136,} cocci_id/* drivers/net/ethernet/fealnx.c 126 */;
	struct fealnx_desc cocci_id/* drivers/net/ethernet/fealnx.c 1248 */;
	char *cocci_id/* drivers/net/ethernet/fealnx.c 1152 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/fealnx.c 1081 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/fealnx.c 1063 */;
}
