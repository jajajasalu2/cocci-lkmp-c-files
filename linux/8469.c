cocci_test_suite() {
	unsigned char cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 963 */;
	const char *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 932 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 915 */;
	void *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 915 */;
	long cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 865 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 856 */;
	struct ethtool_drvinfo *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 817 */;
	struct pcmcia_device *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 803 */;
	mace_private *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 802 */;
	unsigned int cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 801 */;
	struct net_device *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 799 */;
	struct ifmap *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 760 */;
	u8 cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 724 */;
	char cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 645 */[2];
	size_t cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 612 */;
	u8 *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 611 */;
	char *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 534 */;
	unsigned long cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 487 */;
	mace_private cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 441 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 421 */;
	void cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 419 */(struct pcmcia_device *p_dev);
	const struct ethtool_ops cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 416 */;
	int cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 413 */(struct net_device *dev,
								   unsigned char RxCnt);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 412 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 411 */(int irq,
									   void *dev_id);
	void cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 410 */(struct net_device *dev);
	netdev_tx_t cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 408 */(struct sk_buff *skb,
									   struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 407 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 405 */(struct net_device *dev,
								   struct ifmap *map);
	void cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 402 */(struct pcmcia_device *link);
	int cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 401 */(struct pcmcia_device *link);
	const char *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 378 */[];
	struct _mace_private {
		struct pcmcia_device *p_dev;
		mace_statistics mace_stats;
		int multicast_ladrf[MACE_LADRF_LEN];
		int multicast_num_addrs;
		char tx_free_frames;
		char tx_irq_disabled;
		spinlock_t bank_lock;
	} cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 360 */;
	struct _mace_statistics {
		int xmtsv;
		int uflo;
		int lcol;
		int more;
		int one;
		int defer;
		int lcar;
		int rtry;
		int exdef;
		int xmtrc;
		int oflo;
		int clsn;
		int fram;
		int fcs;
		int rfs_rntpc;
		int rfs_rcvcc;
		int jab;
		int babl;
		int cerr;
		int rcvcco;
		int rntpco;
		int mpco;
		int mpc;
		int rntpc;
		int rcvcc;
	} cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 315 */;
	struct pcmcia_driver cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1501 */;
	const struct pcmcia_device_id cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1494 */[];
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1421 */;
	int cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1420 */[ETH_ALEN];
	int cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1325 */;
	int cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1323 */[33];
	int *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1321 */;
	void cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1321 */;
	const int cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1291 */[];
	struct net_device_stats *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1269 */;
	mace_statistics *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1165 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1095 */;
	short cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1093 */;
	unsigned short cocci_id/* drivers/net/ethernet/amd/nmclan_cs.c 1066 */;
}
