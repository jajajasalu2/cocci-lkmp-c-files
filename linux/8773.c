cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 981 */;
	struct RxFD cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 916 */;
	struct TxFD cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 877 */;
	struct BDesc cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 875 */;
	struct FDesc cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 874 */;
	struct tc35815_regs {
		__u32 DMA_Ctl;
		__u32 TxFrmPtr;
		__u32 TxThrsh;
		__u32 TxPollCtr;
		__u32 BLFrmPtr;
		__u32 RxFragSize;
		__u32 Int_En;
		__u32 FDA_Bas;
		__u32 FDA_Lim;
		__u32 Int_Src;
		__u32 unused0[2];
		__u32 PauseCnt;
		__u32 RemPauCnt;
		__u32 TxCtlFrmStat;
		__u32 unused1;
		__u32 MAC_Ctl;
		__u32 CAM_Ctl;
		__u32 Tx_Ctl;
		__u32 Tx_Stat;
		__u32 Rx_Ctl;
		__u32 Rx_Stat;
		__u32 MD_Data;
		__u32 MD_CA;
		__u32 CAM_Adr;
		__u32 CAM_Data;
		__u32 CAM_Ena;
		__u32 PROM_Ctl;
		__u32 PROM_Data;
		__u32 Algn_Cnt;
		__u32 CRC_Cnt;
		__u32 Miss_Cnt;
	} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 85 */;
	struct tc35815_options {
		int speed;
		int duplex;
	} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 77 */;
	void __iomem *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 765 */;
	const struct pci_device_id *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 763 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 747 */;
	unsigned short cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 734 */;
	unsigned int cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 701 */;
	const struct pci_dev *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 700 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 699 */;
	const void *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 697 */;
	struct device *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 697 */;
	const struct pci_device_id cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 68 */[];
	const struct {
		const char *name;
	} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 60 */[];
	struct phy_device *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 542 */;
	enum tc35815_chiptype{TC35815CF=0, TC35815_NWU, TC35815_TX4939,} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 53 */;
	u16 cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 520 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 503 */;
	void cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 501 */(struct work_struct *work);
	void cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 498 */(struct net_device *dev);
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 491 */;
	int cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 487 */(struct net_device *dev,
								     struct ifreq *rq,
								     int cmd);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 484 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 483 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 481 */(struct napi_struct *napi,
								     int budget);
	int cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 480 */(struct net_device *dev,
								     int limit);
	irqreturn_t cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 479 */(int irq,
									     void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 477 */(struct sk_buff *skb,
									     struct net_device *dev);
	dma_addr_t *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 451 */;
	struct pci_dev *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 450 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 449 */;
	struct net_device *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 449 */;
	u8 *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 446 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 444 */;
	struct tc35815_local *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 444 */;
	void *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 444 */;
	struct tc35815_local {
		struct pci_dev *pci_dev;
		struct net_device *dev;
		struct napi_struct napi;
		struct {
			int max_tx_qlen;
			int tx_ints;
			int rx_ints;
			int tx_underrun;
		} lstats;
		spinlock_t lock;
		spinlock_t rx_lock;
		struct mii_bus *mii_bus;
		int duplex;
		int speed;
		int link;
		struct work_struct restart_work;
		void *fd_buf;
		dma_addr_t fd_buf_dma;
		struct TxFD *tfd_base;
		unsigned int tfd_start;
		unsigned int tfd_end;
		struct RxFD *rfd_base;
		struct RxFD *rfd_limit;
		struct RxFD *rfd_cur;
		struct FrFD *fbl_ptr;
		unsigned int fbl_count;
		struct {
			struct sk_buff *skb;
			dma_addr_t skb_dma;
		} tx_skbs[TX_FD_NUM],rx_skbs[RX_BUF_NUM];
		u32 msg_enable;
		enum tc35815_chiptype chiptype;
	} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 385 */;
	struct FrFD {
		struct FDesc fd;
		struct BDesc bd[RX_BUF_NUM];
	} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 373 */;
	struct RxFD {
		struct FDesc fd;
		struct BDesc bd[0];
	} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 368 */;
	struct TxFD {
		struct FDesc fd;
		struct BDesc bd;
		struct BDesc unused;
	} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 362 */;
	struct BDesc {
		volatile __u32 BuffData;
		volatile __u32 BDCtl;
	} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 292 */;
	struct FDesc {
		volatile __u32 FDNext;
		volatile __u32 FDSystem;
		volatile __u32 FDStat;
		volatile __u32 FDCtl;
	} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 284 */;
	const char cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 26 */[];
	struct pci_driver cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 2145 */;
	pm_message_t cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 2109 */;
	unsigned long cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 2068 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 2012 */;
	struct {
		const char str[ETH_GSTRING_LEN];
	} cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1986 */[];
	u64 *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1977 */;
	struct ethtool_stats *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1977 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1944 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1923 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1844 */;
	struct tc35815_regs __iomem *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1693 */;
	const char *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1661 */;
	struct tc35815_local cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1617 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1615 */;
	struct BDesc *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1557 */;
	unsigned char cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1541 */;
	unsigned char *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1479 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1422 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1257 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1168 */;
	const u8 *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1131 */;
	int cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1095 */;
	struct FrFD *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1093 */;
	void cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1092 */;
	struct RxFD *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1070 */;
	struct TxFD *cocci_id/* drivers/net/ethernet/toshiba/tc35815.c 1055 */;
}
