cocci_test_suite() {
	void (*cocci_id/* drivers/net/hamradio/scc.c 997 */)(struct timer_list *t);
	struct scc_channel *cocci_id/* drivers/net/hamradio/scc.c 996 */;
	unsigned cocci_id/* drivers/net/hamradio/scc.c 909 */;
	char cocci_id/* drivers/net/hamradio/scc.c 899 */;
	struct scc_ctrl *cocci_id/* drivers/net/hamradio/scc.c 635 */;
	long cocci_id/* drivers/net/hamradio/scc.c 632 */;
	irqreturn_t cocci_id/* drivers/net/hamradio/scc.c 630 */;
	void *cocci_id/* drivers/net/hamradio/scc.c 630 */;
	char *cocci_id/* drivers/net/hamradio/scc.c 325 */;
	void cocci_id/* drivers/net/hamradio/scc.c 261 */;
	unsigned long cocci_id/* drivers/net/hamradio/scc.c 244 */;
	io_port cocci_id/* drivers/net/hamradio/scc.c 242 */;
	int cocci_id/* drivers/net/hamradio/scc.c 230 */;
	unsigned char cocci_id/* drivers/net/hamradio/scc.c 229 */;
	struct scc_ctrl {
		io_port chan_A;
		io_port chan_B;
		int irq;
	} cocci_id/* drivers/net/hamradio/scc.c 223 */[SCC_MAXCHIPS + 1];
	struct scc_channel cocci_id/* drivers/net/hamradio/scc.c 221 */[2 * SCC_MAXCHIPS];
	struct irqflags {
		unsigned char used:1;
	} cocci_id/* drivers/net/hamradio/scc.c 219 */[NR_IRQS];
	unsigned char cocci_id/* drivers/net/hamradio/scc.c 217 */[];
	struct net_device_stats *cocci_id/* drivers/net/hamradio/scc.c 215 */(struct net_device *dev);
	int cocci_id/* drivers/net/hamradio/scc.c 214 */(struct net_device *dev,
							 void *addr);
	int cocci_id/* drivers/net/hamradio/scc.c 213 */(struct net_device *dev,
							 struct ifreq *ifr,
							 int cmd);
	struct net_device *cocci_id/* drivers/net/hamradio/scc.c 2120 */;
	void __exit cocci_id/* drivers/net/hamradio/scc.c 2115 */;
	netdev_tx_t cocci_id/* drivers/net/hamradio/scc.c 211 */(struct sk_buff *skb,
								 struct net_device *dev);
	void cocci_id/* drivers/net/hamradio/scc.c 210 */(struct scc_channel *scc,
							  struct sk_buff *skb);
	char cocci_id/* drivers/net/hamradio/scc.c 2096 */[IFNAMSIZ];
	int __init cocci_id/* drivers/net/hamradio/scc.c 2094 */;
	int cocci_id/* drivers/net/hamradio/scc.c 209 */(struct net_device *dev);
	const struct seq_operations cocci_id/* drivers/net/hamradio/scc.c 2081 */;
	void cocci_id/* drivers/net/hamradio/scc.c 207 */(struct net_device *dev);
	int cocci_id/* drivers/net/hamradio/scc.c 206 */(const char *name,
							 struct scc_channel *scc);
	void cocci_id/* drivers/net/hamradio/scc.c 203 */(struct scc_channel *scc,
							  char tx);
	const struct scc_kiss *cocci_id/* drivers/net/hamradio/scc.c 2023 */;
	const struct scc_stat *cocci_id/* drivers/net/hamradio/scc.c 2022 */;
	const struct scc_channel *cocci_id/* drivers/net/hamradio/scc.c 2021 */;
	void cocci_id/* drivers/net/hamradio/scc.c 202 */(struct scc_channel *scc);
	void cocci_id/* drivers/net/hamradio/scc.c 200 */(void);
	loff_t *cocci_id/* drivers/net/hamradio/scc.c 1994 */;
	struct seq_file *cocci_id/* drivers/net/hamradio/scc.c 1994 */;
	void cocci_id/* drivers/net/hamradio/scc.c 198 */(struct scc_channel *);
	loff_t cocci_id/* drivers/net/hamradio/scc.c 1975 */;
	struct net_device_stats *cocci_id/* drivers/net/hamradio/scc.c 1957 */;
	struct sockaddr *cocci_id/* drivers/net/hamradio/scc.c 1950 */;
	void cocci_id/* drivers/net/hamradio/scc.c 195 */(struct scc_channel *,
							  void(*)(struct timer_list *),
							  unsigned long);
	void cocci_id/* drivers/net/hamradio/scc.c 191 */(struct timer_list *);
	void cocci_id/* drivers/net/hamradio/scc.c 188 */(struct timer_list *t);
	struct scc_modem cocci_id/* drivers/net/hamradio/scc.c 1857 */;
	const char cocci_id/* drivers/net/hamradio/scc.c 185 */[]__initconst;
	void __user *cocci_id/* drivers/net/hamradio/scc.c 1715 */;
	unsigned char cocci_id/* drivers/net/hamradio/scc.c 1714 */[IFNAMSIZ];
	struct scc_calibrate cocci_id/* drivers/net/hamradio/scc.c 1711 */;
	struct scc_hw_config cocci_id/* drivers/net/hamradio/scc.c 1710 */;
	struct scc_mem_config cocci_id/* drivers/net/hamradio/scc.c 1709 */;
	struct scc_kiss_cmd cocci_id/* drivers/net/hamradio/scc.c 1708 */;
	struct ifreq *cocci_id/* drivers/net/hamradio/scc.c 1706 */;
	netdev_tx_t cocci_id/* drivers/net/hamradio/scc.c 1637 */;
	struct sk_buff *cocci_id/* drivers/net/hamradio/scc.c 1620 */;
	const struct net_device_ops cocci_id/* drivers/net/hamradio/scc.c 1547 */;
	const char *cocci_id/* drivers/net/hamradio/scc.c 1514 */;
	struct timer_list *cocci_id/* drivers/net/hamradio/scc.c 1402 */;
	unsigned int cocci_id/* drivers/net/hamradio/scc.c 1371 */;
}
