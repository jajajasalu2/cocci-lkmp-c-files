cocci_test_suite() {
	unsigned int cocci_id/* drivers/net/sb1000.c 996 */[5];
	short cocci_id/* drivers/net/sb1000.c 994 */[4];
	unsigned char cocci_id/* drivers/net/sb1000.c 993 */[2];
	char *cocci_id/* drivers/net/sb1000.c 992 */;
	struct ifreq *cocci_id/* drivers/net/sb1000.c 990 */;
	const unsigned short cocci_id/* drivers/net/sb1000.c 932 */[];
	int cocci_id/* drivers/net/sb1000.c 93 */(const int ioaddr[],
						  const char *name,
						  const unsigned char out[],
						  unsigned char in[]);
	int cocci_id/* drivers/net/sb1000.c 91 */(const int ioaddr[],
						  const char *name,
						  unsigned char in[]);
	unsigned char cocci_id/* drivers/net/sb1000.c 904 */[5];
	void cocci_id/* drivers/net/sb1000.c 898 */;
	int cocci_id/* drivers/net/sb1000.c 89 */(const int ioaddr[],
						  const char *name);
	int cocci_id/* drivers/net/sb1000.c 85 */(struct net_device *dev);
	unsigned short cocci_id/* drivers/net/sb1000.c 842 */;
	irqreturn_t cocci_id/* drivers/net/sb1000.c 84 */(int irq,
							  void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/sb1000.c 82 */(struct sk_buff *skb,
							  struct net_device *dev);
	int cocci_id/* drivers/net/sb1000.c 81 */(struct net_device *dev,
						  struct ifreq *ifr, int cmd);
	unsigned short *cocci_id/* drivers/net/sb1000.c 761 */;
	struct net_device_stats *cocci_id/* drivers/net/sb1000.c 747 */;
	struct sk_buff *cocci_id/* drivers/net/sb1000.c 745 */;
	short cocci_id/* drivers/net/sb1000.c 742 */;
	struct sb1000_private {
		struct sk_buff *rx_skb[NPIDS];
		short rx_dlen[NPIDS];
		unsigned int rx_frames;
		short rx_error_count;
		short rx_error_dpc_count;
		unsigned char rx_session_id[NPIDS];
		unsigned char rx_frame_id[NPIDS];
		unsigned char rx_pkt_type[NPIDS];
	} cocci_id/* drivers/net/sb1000.c 67 */;
	unsigned char cocci_id/* drivers/net/sb1000.c 663 */[6];
	const short cocci_id/* drivers/net/sb1000.c 656 */[];
	short cocci_id/* drivers/net/sb1000.c 621 */[];
	const int cocci_id/* drivers/net/sb1000.c 62 */;
	int *cocci_id/* drivers/net/sb1000.c 573 */;
	unsigned char cocci_id/* drivers/net/sb1000.c 527 */[7];
	const unsigned char cocci_id/* drivers/net/sb1000.c 524 */[6];
	const unsigned char cocci_id/* drivers/net/sb1000.c 313 */[];
	unsigned char cocci_id/* drivers/net/sb1000.c 313 */[];
	const int cocci_id/* drivers/net/sb1000.c 312 */[];
	const char *cocci_id/* drivers/net/sb1000.c 312 */;
	int cocci_id/* drivers/net/sb1000.c 311 */;
	char cocci_id/* drivers/net/sb1000.c 31 */[];
	unsigned long cocci_id/* drivers/net/sb1000.c 260 */;
	unsigned char cocci_id/* drivers/net/sb1000.c 259 */;
	struct pnp_driver cocci_id/* drivers/net/sb1000.c 241 */;
	struct sb1000_private cocci_id/* drivers/net/sb1000.c 174 */;
	unsigned int cocci_id/* drivers/net/sb1000.c 149 */;
	unsigned short cocci_id/* drivers/net/sb1000.c 148 */[2];
	const struct pnp_device_id *cocci_id/* drivers/net/sb1000.c 145 */;
	struct pnp_dev *cocci_id/* drivers/net/sb1000.c 145 */;
	const struct net_device_ops cocci_id/* drivers/net/sb1000.c 135 */;
	const struct pnp_device_id cocci_id/* drivers/net/sb1000.c 129 */[];
	void cocci_id/* drivers/net/sb1000.c 127 */(struct net_device *dev);
	int cocci_id/* drivers/net/sb1000.c 122 */(const int ioaddr[],
						   const char *name,
						   const short PID[]);
	int cocci_id/* drivers/net/sb1000.c 120 */(const int ioaddr[],
						   const char *name,
						   short PID[]);
	int cocci_id/* drivers/net/sb1000.c 118 */(const int ioaddr[],
						   const char *name,
						   int frequency);
	int cocci_id/* drivers/net/sb1000.c 116 */(const int ioaddr[],
						   const char *name,
						   int *frequency);
	struct sb1000_private *cocci_id/* drivers/net/sb1000.c 1144 */;
	int cocci_id/* drivers/net/sb1000.c 1143 */[2];
	struct net_device *cocci_id/* drivers/net/sb1000.c 1140 */;
	int cocci_id/* drivers/net/sb1000.c 114 */(const int ioaddr[],
						   const char *name,
						   unsigned char version[],
						   int do_end);
	irqreturn_t cocci_id/* drivers/net/sb1000.c 1085 */;
	void *cocci_id/* drivers/net/sb1000.c 1085 */;
	netdev_tx_t cocci_id/* drivers/net/sb1000.c 1075 */;
	void cocci_id/* drivers/net/sb1000.c 103 */(const int ioaddr[],
						    const char *name);
	int __user *cocci_id/* drivers/net/sb1000.c 1029 */;
	void cocci_id/* drivers/net/sb1000.c 102 */(const int ioaddr[],
						    unsigned char in[]);
	void cocci_id/* drivers/net/sb1000.c 100 */(const int ioaddr[],
						    const char *name,
						    const unsigned char out[]);
}
