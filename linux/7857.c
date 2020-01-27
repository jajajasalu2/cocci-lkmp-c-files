cocci_test_suite() {
	u8 cocci_id/* drivers/net/wan/sbni.c 958 */;
	u32 *cocci_id/* drivers/net/wan/sbni.c 954 */;
	u8 *cocci_id/* drivers/net/wan/sbni.c 813 */;
	struct net_local *cocci_id/* drivers/net/wan/sbni.c 811 */;
	u32 cocci_id/* drivers/net/wan/sbni.c 809 */;
	struct net_device *cocci_id/* drivers/net/wan/sbni.c 809 */;
	unsigned cocci_id/* drivers/net/wan/sbni.c 809 */;
	int cocci_id/* drivers/net/wan/sbni.c 808 */;
	struct net_local {
		struct timer_list watchdog;
		struct net_device *watchdog_dev;
		spinlock_t lock;
		struct sk_buff *rx_buf_p;
		struct sk_buff *tx_buf_p;
		unsigned int framelen;
		unsigned int maxframe;
		unsigned int state;
		unsigned int inppos,outpos;
		unsigned int tx_frameno;
		unsigned int wait_frameno;
		unsigned int trans_errors;
		unsigned int timer_ticks;
		int delta_rxl;
		unsigned int cur_rxl_index,timeout_rxl;
		unsigned long cur_rxl_rcvd,prev_rxl_rcvd;
		struct sbni_csr1 csr1;
		struct sbni_in_stats in_stats;
		struct net_device *second;
#ifdef CONFIG_SBNI_MULTILINE
		struct net_device *master;
		struct net_device *link;
#endif
	} cocci_id/* drivers/net/wan/sbni.c 72 */;
	unsigned int cocci_id/* drivers/net/wan/sbni.c 686 */;
	struct sk_buff *cocci_id/* drivers/net/wan/sbni.c 684 */;
	unsigned char cocci_id/* drivers/net/wan/sbni.c 538 */;
	unsigned long cocci_id/* drivers/net/wan/sbni.c 535 */;
	void *cocci_id/* drivers/net/wan/sbni.c 503 */;
	irqreturn_t cocci_id/* drivers/net/wan/sbni.c 502 */;
	netdev_tx_t cocci_id/* drivers/net/wan/sbni.c 441 */;
	long cocci_id/* drivers/net/wan/sbni.c 396 */;
	__be32 *cocci_id/* drivers/net/wan/sbni.c 393 */;
	__be16 *cocci_id/* drivers/net/wan/sbni.c 392 */;
	struct net_device *__init cocci_id/* drivers/net/wan/sbni.c 347 */;
	struct pci_dev *cocci_id/* drivers/net/wan/sbni.c 298 */;
	void __init cocci_id/* drivers/net/wan/sbni.c 219 */;
	const struct net_device_ops cocci_id/* drivers/net/wan/sbni.c 209 */;
	int __init cocci_id/* drivers/net/wan/sbni.c 194 */;
	unsigned int cocci_id/* drivers/net/wan/sbni.c 181 */[]__initdata;
	iarr *cocci_id/* drivers/net/wan/sbni.c 177 */[5]__initdata;
	u32 cocci_id/* drivers/net/wan/sbni.c 170 */[SBNI_MAX_NUM_CARDS]__initdata;
	struct net_device *cocci_id/* drivers/net/wan/sbni.c 164 */[SBNI_MAX_NUM_CARDS];
	u32 cocci_id/* drivers/net/wan/sbni.c 161 */[];
	unsigned char cocci_id/* drivers/net/wan/sbni.c 160 */[];
	bool cocci_id/* drivers/net/wan/sbni.c 156 */;
	u32 cocci_id/* drivers/net/wan/sbni.c 1557 */[]__attribute__((aligned(8)));
	const char cocci_id/* drivers/net/wan/sbni.c 153 */[];
	char *cocci_id/* drivers/net/wan/sbni.c 1518 */;
	int cocci_id/* drivers/net/wan/sbni.c 150 */(struct net_device *);
	int cocci_id/* drivers/net/wan/sbni.c 149 */(struct net_device *,
						     struct net_device *);
	struct net_local cocci_id/* drivers/net/wan/sbni.c 1477 */;
	int __init cocci_id/* drivers/net/wan/sbni.c 1471 */;
	struct sk_buff *cocci_id/* drivers/net/wan/sbni.c 145 */(struct net_device *);
	u32 cocci_id/* drivers/net/wan/sbni.c 144 */(u32, u8 *, u32);
	int cocci_id/* drivers/net/wan/sbni.c 141 */(u32, u32 *, u32 *, u32 *,
						     u32 *, u32 *);
	struct net_device_stats cocci_id/* drivers/net/wan/sbni.c 1403 */;
	int cocci_id/* drivers/net/wan/sbni.c 140 */(unsigned int,
						     unsigned int, u32);
	void cocci_id/* drivers/net/wan/sbni.c 137 */(struct sk_buff *,
						      struct net_device *);
	void cocci_id/* drivers/net/wan/sbni.c 136 */(struct net_device *);
	int cocci_id/* drivers/net/wan/sbni.c 134 */(struct net_device *,
						     unsigned, u32);
	void cocci_id/* drivers/net/wan/sbni.c 133 */(struct net_device *,
						      unsigned);
	struct sbni_flags *cocci_id/* drivers/net/wan/sbni.c 1329 */;
	void cocci_id/* drivers/net/wan/sbni.c 132 */(struct timer_list *);
	void cocci_id/* drivers/net/wan/sbni.c 131 */(struct net_device *,
						      u32 *);
	struct sbni_in_stats cocci_id/* drivers/net/wan/sbni.c 1303 */;
	char cocci_id/* drivers/net/wan/sbni.c 1297 */[8];
	struct sbni_flags cocci_id/* drivers/net/wan/sbni.c 1292 */;
	int cocci_id/* drivers/net/wan/sbni.c 129 */(struct net_device *,
						     unsigned, unsigned,
						     unsigned, u32);
	struct ifreq *cocci_id/* drivers/net/wan/sbni.c 1289 */;
	irqreturn_t cocci_id/* drivers/net/wan/sbni.c 125 */(int, void *);
	int cocci_id/* drivers/net/wan/sbni.c 122 */(struct net_device *,
						     struct ifreq *, int);
	netdev_tx_t cocci_id/* drivers/net/wan/sbni.c 120 */(struct sk_buff *,
							     struct net_device *);
	struct net_device *cocci_id/* drivers/net/wan/sbni.c 117 */(struct net_device *,
								    unsigned long,
								    int);
	struct net_device **cocci_id/* drivers/net/wan/sbni.c 1162 */;
	struct timer_list *cocci_id/* drivers/net/wan/sbni.c 1154 */;
	int cocci_id/* drivers/net/wan/sbni.c 115 */(unsigned long);
	unsigned char *cocci_id/* drivers/net/wan/sbni.c 1138 */;
	u_char *cocci_id/* drivers/net/wan/sbni.c 1095 */;
	void cocci_id/* drivers/net/wan/sbni.c 1081 */;
}
