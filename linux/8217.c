cocci_test_suite() {
	u_int cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 988 */;
	struct smc_private {
		struct pcmcia_device *p_dev;
		spinlock_t lock;
		u_short manfid;
		u_short cardid;
		struct sk_buff *saved_skb;
		int packets_waiting;
		void __iomem *base;
		u_short cfg;
		struct timer_list media;
		int watchdog,tx_err;
		u_short media_status;
		u_short fast_poll;
		u_short link_status;
		struct mii_if_info mii_if;
		int duplex;
		int rx_ovrn;
		unsigned long last_rx;
	} cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 98 */;
	void cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 976 */;
	u_long cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 812 */;
	u_short cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 767 */;
	unsigned int cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 765 */;
	struct pcmcia_device *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 762 */;
	const struct firmware *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 646 */;
	const unsigned int cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 616 */[4];
	const char *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 59 */[];
	u8 *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 480 */;
	size_t cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 479 */;
	cisparse_t cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 462 */;
	tuple_t *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 458 */;
	void *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 400 */;
	u_char cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 382 */;
	char *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 348 */;
	struct smc_private cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 310 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 290 */;
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 288 */;
	void cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 286 */(struct net_device *dev,
								       int phy_id,
								       int loc,
								       int value);
	int cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 285 */(struct net_device *dev,
								      int phy_id,
								      int loc);
	void cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 284 */(unsigned int addr);
	void cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 283 */(struct timer_list *t);
	void cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 281 */(struct net_device *dev,
								       int if_port);
	int cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 280 */(struct net_device *dev,
								      struct ifmap *map);
	void cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 279 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 277 */(int irq,
									      void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 275 */(struct sk_buff *skb,
									      struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 273 */(struct net_device *dev,
								      struct ifreq *rq,
								      int cmd);
	int cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 272 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 269 */(struct pcmcia_device *link);
	int cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 268 */(struct pcmcia_device *link);
	void cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 267 */(struct pcmcia_device *p_dev);
	enum RxCfg{RxAllMulti=0x0004, RxPromisc=0x0002, RxEnable=0x0100, RxStripCRC=0x0200,} cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 226 */;
	struct pcmcia_driver cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 2047 */;
	const struct pcmcia_device_id cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 2015 */[];
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1997 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1994 */;
	u16 cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1956 */;
	u32 cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1952 */;
	struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1914 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1907 */;
	struct net_device *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1900 */;
	int cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1900 */;
	const struct ethtool_link_ksettings *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1871 */;
	unsigned long cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1718 */;
	struct smc_private *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1713 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1711 */;
	struct ifmap *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1587 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1560 */;
	unsigned char cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1547 */[8];
	char cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1348 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1341 */;
	short cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1201 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1195 */;
	u_char *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1151 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/smsc/smc91c92_cs.c 1121 */;
}
