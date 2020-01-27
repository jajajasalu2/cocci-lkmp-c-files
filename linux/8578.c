cocci_test_suite() {
	uint64_t cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 891 */;
	struct sbdmadscr *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 775 */;
	struct net_device *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 774 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 772 */;
	struct sbmacdma *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 771 */;
	struct sbmac_softc *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 771 */;
	unsigned char *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 747 */;
	unsigned int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 745 */;
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 744 */;
	unsigned long cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 634 */;
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 52 */;
	u16 cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 515 */;
	struct mii_bus *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 421 */;
	char cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 320 */[];
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 310 */(struct mii_bus *bus,
									 int phyaddr,
									 int regidx,
									 u16 val);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 309 */(struct mii_bus *bus,
									 int phyaddr,
									 int regidx);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 307 */(void __iomem *sbm_mdio,
									  unsigned int data,
									  int bitcnt);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 306 */(void __iomem *sbm_mdio);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 303 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 301 */(struct napi_struct *napi,
									 int budget);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 300 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 299 */(struct net_device *dev,
									 struct ifreq *rq,
									 int cmd);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 293 */(struct sbmac_softc *s,
									 enum sbmac_duplex duplex,
									 enum sbmac_fc fc);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 292 */(struct sbmac_softc *s,
									 enum sbmac_speed speed);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 291 */(struct platform_device *pldev,
									 long long base);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 290 */(struct sbmac_softc *sc);
	netdev_tx_t cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 289 */(struct sk_buff *skb,
										 struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 288 */(int irq,
										 void *dev_instance);
	uint64_t cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 287 */(unsigned char *ptr);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 286 */(struct sbmac_softc *sc,
									  int onoff);
	enum sbmac_state cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 284 */(struct sbmac_softc *,
										      enum sbmac_state);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 282 */(struct sbmac_softc *s);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 281 */(struct sbmac_softc *s);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 279 */(struct sbmac_softc *sc,
									  struct sbmacdma *d,
									  int poll);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 277 */(struct sbmac_softc *sc,
									 struct sbmacdma *d,
									 int work_to_do,
									 int poll);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 276 */(struct sbmac_softc *sc,
									  struct sbmacdma *d);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 275 */(struct sbmacdma *d);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 274 */(struct sbmacdma *d,
									 struct sk_buff *m);
	int cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 272 */(struct sbmac_softc *sc,
									 struct sbmacdma *d,
									 struct sk_buff *m);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 271 */(struct sbmacdma *d,
									  int rxtx);
	void cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 269 */(struct sbmacdma *d,
									  struct sbmac_softc *s,
									  int chan,
									  int txrx,
									  int maxdescr);
	struct platform_driver cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2608 */;
	u64 cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2535 */;
	struct resource *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2534 */;
	struct sbmac_softc cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2506 */;
	struct napi_struct *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2504 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2469 */;
	enum sbmac_fc cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2363 */;
	struct phy_device *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2361 */;
	struct sbmac_softc {
		struct net_device *sbm_dev;
		struct napi_struct napi;
		struct phy_device *phy_dev;
		struct mii_bus *mii_bus;
		spinlock_t sbm_lock;
		int sbm_devflags;
		void __iomem *sbm_base;
		enum sbmac_state sbm_state;
		void __iomem *sbm_macenable;
		void __iomem *sbm_maccfg;
		void __iomem *sbm_fifocfg;
		void __iomem *sbm_framecfg;
		void __iomem *sbm_rxfilter;
		void __iomem *sbm_isr;
		void __iomem *sbm_imr;
		void __iomem *sbm_mdio;
		enum sbmac_speed sbm_speed;
		enum sbmac_duplex sbm_duplex;
		enum sbmac_fc sbm_fc;
		int sbm_pause;
		int sbm_link;
		unsigned char sbm_hwaddr[ETH_ALEN];
		struct sbmacdma sbm_txdma;
		struct sbmacdma sbm_rxdma;
		int rx_hw_checksum;
		int sbe_idx;
	} cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 219 */;
	uint8_t cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2182 */;
	struct platform_device *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2159 */;
	long long cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2159 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2133 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2063 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 2018 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 1965 */;
	void *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 1965 */;
	enum sbmac_duplex cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 1873 */;
	enum sbmac_speed cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 1785 */;
	struct sbmacdma {
		struct sbmac_softc *sbdma_eth;
		int sbdma_channel;
		int sbdma_txdir;
		int sbdma_maxdescr;
#ifdef CONFIG_SBMAC_COALESCE
		int sbdma_int_pktcnt;
		int sbdma_int_timeout;
#endif
		void __iomem *sbdma_config0;
		void __iomem *sbdma_config1;
		void __iomem *sbdma_dscrbase;
		void __iomem *sbdma_dscrcnt;
		void __iomem *sbdma_curdscr;
		void __iomem *sbdma_oodpktlost;
		void *sbdma_dscrtable_unaligned;
		struct sbdmadscr *sbdma_dscrtable;
		struct sbdmadscr *sbdma_dscrtable_end;
		struct sk_buff **sbdma_ctxtable;
		dma_addr_t sbdma_dscrtable_phys;
		struct sbdmadscr *sbdma_addptr;
		struct sbdmadscr *sbdma_remptr;
	} cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 167 */;
	enum sbmac_state cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 1640 */;
	struct sbdmadscr {
		uint64_t dscr_a;
		uint64_t dscr_b;
	} cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 158 */;
	void __iomem *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 1387 */;
	enum sbmac_state{sbmac_state_uninit, sbmac_state_off, sbmac_state_on, sbmac_state_broken,} cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 129 */;
	enum sbmac_fc{sbmac_fc_none, sbmac_fc_disabled, sbmac_fc_frame, sbmac_fc_collision, sbmac_fc_carrier,} cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 121 */;
	const void *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 1158 */;
	char *cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 1158 */;
	enum sbmac_duplex{sbmac_duplex_none=-1, sbmac_duplex_half=DUPLEX_HALF, sbmac_duplex_full=DUPLEX_FULL,} cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 115 */;
	enum sbmac_speed{sbmac_speed_none=0, sbmac_speed_10=SPEED_10, sbmac_speed_100=SPEED_100, sbmac_speed_1000=SPEED_1000,} cocci_id/* drivers/net/ethernet/broadcom/sb1250-mac.c 108 */;
}
