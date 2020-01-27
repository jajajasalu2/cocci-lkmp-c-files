cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 98 */(struct net_device *dev,
								   int count,
								   const u_char *buf,
								   const int start_page);
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 96 */(struct net_device *dev,
								   int count,
								   struct sk_buff *skb,
								   int ring_offset);
	u8 cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 958 */[ETH_ZLEN];
	netdev_tx_t cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 951 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 951 */;
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 94 */(struct net_device *,
								   struct e8390_pkt_hdr *,
								   int);
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 92 */(unsigned int addr,
								   int phy_id,
								   int loc,
								   int value);
	int cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 91 */(unsigned int addr,
								  int phy_id,
								  int loc);
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 89 */(struct net_device *dev);
	unsigned long cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 885 */;
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 88 */(struct timer_list *t);
	struct net_device_stats *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 84 */(struct net_device *dev);
	netdev_tx_t cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 82 */(struct sk_buff *skb,
									  struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 817 */(struct net_device *dev,
								    unsigned int length,
								    int start_page);
	int cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 81 */(struct net_device *dev,
								  struct ifreq *rq,
								  int cmd);
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 78 */(struct pcmcia_device *link);
	int cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 77 */(struct pcmcia_device *link);
	struct pcmcia_driver cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 719 */;
	const struct pcmcia_device_id cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 686 */[];
	const int cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 668 */;
	const u_char *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 668 */;
	struct e8390_pkt_hdr *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 627 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 608 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 605 */;
	u_short cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 554 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 548 */;
	struct pcmcia_device *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 495 */;
	u_int cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 428 */;
	struct {
		u_char value,offset;
	} cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 193 */[];
	unsigned int cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1686 */;
	struct e8390_pkt_hdr cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1628 */;
	struct ei_device *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1624 */;
	long cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1623 */;
	struct axnet_dev *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1622 */;
	struct net_device *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1620 */;
	int cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1620 */;
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1620 */;
	u32 cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1542 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1541 */;
	u8 *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1539 */;
	struct net_device_stats *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1514 */;
	struct axnet_dev cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 148 */;
	unsigned short cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1337 */;
	unsigned char cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1336 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 128 */;
	struct ei_device cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 124 */;
	char *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 124 */;
	void *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 124 */;
	const char *cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1105 */;
	struct axnet_dev {
		struct pcmcia_device *p_dev;
		caddr_t base;
		struct timer_list watchdog;
		int stale,fast_poll;
		u_short link_status;
		u_char duplex_flag;
		int phy_id;
		int flags;
		int active_low;
	} cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 110 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 1085 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 106 */(int irq,
									   void *dev_id);
	int cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 105 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 103 */(struct net_device *dev,
								    int startp);
	void cocci_id/* drivers/net/ethernet/8390/axnet_cs.c 101 */(struct pcmcia_device *p_dev);
}
