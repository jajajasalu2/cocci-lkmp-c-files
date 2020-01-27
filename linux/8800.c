cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 997 */;
	int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 99 */(struct net_device *dev,
								  struct ifreq *rq,
								  int cmd);
	struct ifmap *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 980 */;
	int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 98 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 96 */(struct pcmcia_device *link);
	int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 95 */(struct pcmcia_device *link);
	void cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 94 */(struct net_device *dev);
	int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 89 */[6];
	short cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 770 */;
	u_int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 708 */;
	const char *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 68 */[];
	int *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 479 */;
	struct pcmcia_device *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 399 */;
	struct hw_info *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 399 */;
	u_char cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 381 */;
	struct {
		u_char value,offset;
	} cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 331 */[];
	u_char cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 327 */[32];
	u_char __iomem *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 280 */;
	struct pcnet_dev cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 244 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 220 */;
	struct ei_device cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 217 */;
	char *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 216 */;
	struct pcnet_dev *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 214 */;
	struct net_device *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 214 */;
	struct pcnet_dev {
		struct pcmcia_device *p_dev;
		u_int flags;
		void __iomem *base;
		struct timer_list watchdog;
		int stale,fast_poll;
		u_char phy_id;
		u_char eth_phy,pna_phy;
		u_short link_status;
		u_long mii_reset;
	} cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 202 */;
	struct hw_info cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 198 */;
	struct pcmcia_driver cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1697 */;
	const struct pcmcia_device_id cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1473 */[];
	unsigned long cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1373 */;
	struct hw_info cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 134 */[];
	const u_short *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1337 */;
	const void *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1334 */;
	u_char *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1331 */;
	u_short __iomem *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1319 */;
	u_short *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1318 */;
	void __iomem *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1316 */;
	void *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1316 */;
	int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1316 */;
	void cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1316 */;
	long cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1291 */;
	u_long cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1220 */;
	const int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1212 */;
	const u_char *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1212 */;
	struct ei_device *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1162 */;
	unsigned int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1159 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1157 */;
	struct e8390_pkt_hdr cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1139 */;
	struct hw_info {
		u_int offset;
		u_char a0,a1,a2;
		u_int flags;
	} cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 113 */;
	struct e8390_pkt_hdr *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1125 */;
	struct mii_ioctl_data *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1102 */;
	struct ifreq *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1099 */;
	void cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 109 */(struct pcmcia_device *p_dev);
	int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 106 */(struct pcmcia_device *link,
								   int start_pg,
								   int stop_pg);
	int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 104 */(struct pcmcia_device *link,
								   int start_pg,
								   int stop_pg,
								   int cm_offset);
	int cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 103 */(struct net_device *dev,
								   struct ifmap *map);
	u_short cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1016 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 1010 */;
	void cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 101 */(struct timer_list *t);
	irqreturn_t cocci_id/* drivers/net/ethernet/8390/pcnet_cs.c 100 */(int irq,
									   void *dev_id);
}
