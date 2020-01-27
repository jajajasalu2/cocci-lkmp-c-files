cocci_test_suite() {
	void __exit cocci_id/* drivers/net/hamradio/mkiss.c 967 */;
	const char cocci_id/* drivers/net/hamradio/mkiss.c 964 */[];
	int __init cocci_id/* drivers/net/hamradio/mkiss.c 951 */;
	const char cocci_id/* drivers/net/hamradio/mkiss.c 946 */[]__initconst;
	struct tty_ldisc_ops cocci_id/* drivers/net/hamradio/mkiss.c 935 */;
	char *cocci_id/* drivers/net/hamradio/mkiss.c 875 */;
	const unsigned char *cocci_id/* drivers/net/hamradio/mkiss.c 874 */;
	char cocci_id/* drivers/net/hamradio/mkiss.c 844 */[AX25_ADDR_LEN];
	int __user *cocci_id/* drivers/net/hamradio/mkiss.c 825 */;
	void __user *cocci_id/* drivers/net/hamradio/mkiss.c 820 */;
	unsigned int cocci_id/* drivers/net/hamradio/mkiss.c 807 */;
	struct file *cocci_id/* drivers/net/hamradio/mkiss.c 806 */;
	const unsigned short cocci_id/* drivers/net/hamradio/mkiss.c 80 */[];
	struct tty_struct *cocci_id/* drivers/net/hamradio/mkiss.c 772 */;
	struct mkiss cocci_id/* drivers/net/hamradio/mkiss.c 697 */;
	const struct net_device_ops cocci_id/* drivers/net/hamradio/mkiss.c 630 */;
	unsigned long cocci_id/* drivers/net/hamradio/mkiss.c 571 */;
	netdev_tx_t cocci_id/* drivers/net/hamradio/mkiss.c 518 */;
	unsigned short cocci_id/* drivers/net/hamradio/mkiss.c 480 */;
	struct mkiss {
		struct tty_struct *tty;
		struct net_device *dev;
		spinlock_t buflock;
		unsigned char *rbuff;
		int rcount;
		unsigned char *xbuff;
		unsigned char *xhead;
		int xleft;
		int mtu;
		int buffsize;
		unsigned long flags;
#define AXF_INUSE 0
#define AXF_ESCAPE 1
#define AXF_ERROR 2
#define AXF_KEEPTEST 3
#define AXF_OUTWAIT 4
		int mode;
		int crcmode;
		int crcauto;
#define CRC_MODE_NONE 0
#define CRC_MODE_FLEX 1
#define CRC_MODE_SMACK 2
#define CRC_MODE_FLEX_TEST 3
#define CRC_MODE_SMACK_TEST 4
		refcount_t refcnt;
		struct completion dead;
	} cocci_id/* drivers/net/hamradio/mkiss.c 40 */;
	unsigned char *cocci_id/* drivers/net/hamradio/mkiss.c 359 */;
	struct net_device *cocci_id/* drivers/net/hamradio/mkiss.c 358 */;
	struct sockaddr_ax25 *cocci_id/* drivers/net/hamradio/mkiss.c 343 */;
	void *cocci_id/* drivers/net/hamradio/mkiss.c 341 */;
	int cocci_id/* drivers/net/hamradio/mkiss.c 238 */;
	struct sk_buff *cocci_id/* drivers/net/hamradio/mkiss.c 237 */;
	struct mkiss *cocci_id/* drivers/net/hamradio/mkiss.c 235 */;
	void cocci_id/* drivers/net/hamradio/mkiss.c 235 */;
	unsigned char cocci_id/* drivers/net/hamradio/mkiss.c 163 */;
}
