cocci_test_suite() {
	const unsigned char *cocci_id/* drivers/net/hamradio/6pack.c 952 */;
	short cocci_id/* drivers/net/hamradio/6pack.c 907 */;
	struct sixpack {
		struct tty_struct *tty;
		struct net_device *dev;
		unsigned char *rbuff;
		int rcount;
		unsigned char *xbuff;
		unsigned char *xhead;
		int xleft;
		unsigned char raw_buf[4];
		unsigned char cooked_buf[400];
		unsigned int rx_count;
		unsigned int rx_count_cooked;
		int mtu;
		int buffsize;
		unsigned long flags;
		unsigned char mode;
		unsigned char tx_delay;
		unsigned char persistence;
		unsigned char slottime;
		unsigned char duplex;
		unsigned char led_state;
		unsigned char status;
		unsigned char status1;
		unsigned char status2;
		unsigned char tx_enable;
		unsigned char tnc_state;
		struct timer_list tx_t;
		struct timer_list resync_t;
		refcount_t refcnt;
		struct completion dead;
		spinlock_t lock;
	} cocci_id/* drivers/net/hamradio/6pack.c 85 */;
	unsigned char *cocci_id/* drivers/net/hamradio/6pack.c 834 */;
	unsigned char cocci_id/* drivers/net/hamradio/6pack.c 832 */;
	enum sixpack_flags{SIXPF_ERROR,} cocci_id/* drivers/net/hamradio/6pack.c 81 */;
	void __exit cocci_id/* drivers/net/hamradio/6pack.c 784 */;
	const char cocci_id/* drivers/net/hamradio/6pack.c 781 */[];
	int __init cocci_id/* drivers/net/hamradio/6pack.c 768 */;
	const char cocci_id/* drivers/net/hamradio/6pack.c 763 */[]__initconst;
	struct tty_ldisc_ops cocci_id/* drivers/net/hamradio/6pack.c 750 */;
	char cocci_id/* drivers/net/hamradio/6pack.c 725 */[AX25_ADDR_LEN];
	int __user *cocci_id/* drivers/net/hamradio/6pack.c 706 */;
	void __user *cocci_id/* drivers/net/hamradio/6pack.c 701 */;
	struct net_device *cocci_id/* drivers/net/hamradio/6pack.c 692 */;
	unsigned long cocci_id/* drivers/net/hamradio/6pack.c 689 */;
	unsigned int cocci_id/* drivers/net/hamradio/6pack.c 689 */;
	struct file *cocci_id/* drivers/net/hamradio/6pack.c 688 */;
	struct tty_struct *cocci_id/* drivers/net/hamradio/6pack.c 653 */;
	struct sixpack cocci_id/* drivers/net/hamradio/6pack.c 563 */;
	char cocci_id/* drivers/net/hamradio/6pack.c 506 */;
	struct timer_list *cocci_id/* drivers/net/hamradio/6pack.c 503 */;
	char *cocci_id/* drivers/net/hamradio/6pack.c 476 */;
	struct sixpack *cocci_id/* drivers/net/hamradio/6pack.c 474 */;
	int cocci_id/* drivers/net/hamradio/6pack.c 474 */;
	void cocci_id/* drivers/net/hamradio/6pack.c 474 */;
	struct sk_buff *cocci_id/* drivers/net/hamradio/6pack.c 339 */;
	const struct net_device_ops cocci_id/* drivers/net/hamradio/6pack.c 303 */;
	struct sockaddr_ax25 *cocci_id/* drivers/net/hamradio/6pack.c 292 */;
	void *cocci_id/* drivers/net/hamradio/6pack.c 290 */;
	netdev_tx_t cocci_id/* drivers/net/hamradio/6pack.c 246 */;
	int cocci_id/* drivers/net/hamradio/6pack.c 131 */(unsigned char *,
							   unsigned char *,
							   int, unsigned char);
	void cocci_id/* drivers/net/hamradio/6pack.c 130 */(struct sixpack *,
							    const unsigned char[],
							    int);
}
