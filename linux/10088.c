cocci_test_suite() {
	const struct ppp_channel_ops cocci_id/* drivers/net/ppp/ppp_synctty.c 99 */;
	void cocci_id/* drivers/net/ppp/ppp_synctty.c 96 */(struct syncppp *ap,
							    const unsigned char *buf,
							    char *flags,
							    int count);
	void cocci_id/* drivers/net/ppp/ppp_synctty.c 95 */(struct syncppp *ap);
	int cocci_id/* drivers/net/ppp/ppp_synctty.c 94 */(struct syncppp *ap);
	void cocci_id/* drivers/net/ppp/ppp_synctty.c 93 */(unsigned long arg);
	int cocci_id/* drivers/net/ppp/ppp_synctty.c 91 */(struct ppp_channel *chan,
							   unsigned int cmd,
							   unsigned long arg);
	int cocci_id/* drivers/net/ppp/ppp_synctty.c 90 */(struct ppp_channel *chan,
							   struct sk_buff *skb);
	struct sk_buff *cocci_id/* drivers/net/ppp/ppp_synctty.c 89 */(struct syncppp *ap,
								       struct sk_buff *);
	void __exit cocci_id/* drivers/net/ppp/ppp_synctty.c 726 */;
	unsigned char *cocci_id/* drivers/net/ppp/ppp_synctty.c 671 */;
	struct sk_buff *cocci_id/* drivers/net/ppp/ppp_synctty.c 670 */;
	char *cocci_id/* drivers/net/ppp/ppp_synctty.c 668 */;
	const unsigned char *cocci_id/* drivers/net/ppp/ppp_synctty.c 667 */;
	struct syncppp {
		struct tty_struct *tty;
		unsigned int flags;
		unsigned int rbits;
		int mru;
		spinlock_t xmit_lock;
		spinlock_t recv_lock;
		unsigned long xmit_flags;
		u32 xaccm[8];
		u32 raccm;
		unsigned int bytes_sent;
		unsigned int bytes_rcvd;
		struct sk_buff *tpkt;
		unsigned long last_xmit;
		struct sk_buff_head rqueue;
		struct tasklet_struct tsk;
		refcount_t refcnt;
		struct completion dead_cmp;
		struct ppp_channel chan;
	} cocci_id/* drivers/net/ppp/ppp_synctty.c 52 */;
	int __user *cocci_id/* drivers/net/ppp/ppp_synctty.c 408 */;
	u32 __user *cocci_id/* drivers/net/ppp/ppp_synctty.c 402 */;
	void __user *cocci_id/* drivers/net/ppp/ppp_synctty.c 401 */;
	u32 cocci_id/* drivers/net/ppp/ppp_synctty.c 400 */[8];
	struct ppp_channel *cocci_id/* drivers/net/ppp/ppp_synctty.c 396 */;
	unsigned long cocci_id/* drivers/net/ppp/ppp_synctty.c 396 */;
	unsigned int cocci_id/* drivers/net/ppp/ppp_synctty.c 396 */;
	int __init cocci_id/* drivers/net/ppp/ppp_synctty.c 380 */;
	struct tty_ldisc_ops cocci_id/* drivers/net/ppp/ppp_synctty.c 365 */;
	poll_table *cocci_id/* drivers/net/ppp/ppp_synctty.c 327 */;
	struct file *cocci_id/* drivers/net/ppp/ppp_synctty.c 327 */;
	__poll_t cocci_id/* drivers/net/ppp/ppp_synctty.c 326 */;
	unsigned char __user *cocci_id/* drivers/net/ppp/ppp_synctty.c 260 */;
	size_t cocci_id/* drivers/net/ppp/ppp_synctty.c 260 */;
	ssize_t cocci_id/* drivers/net/ppp/ppp_synctty.c 258 */;
	struct syncppp *cocci_id/* drivers/net/ppp/ppp_synctty.c 216 */;
	struct tty_struct *cocci_id/* drivers/net/ppp/ppp_synctty.c 214 */;
	const __u8 *cocci_id/* drivers/net/ppp/ppp_synctty.c 108 */;
	const char *cocci_id/* drivers/net/ppp/ppp_synctty.c 108 */;
	int cocci_id/* drivers/net/ppp/ppp_synctty.c 108 */;
	void cocci_id/* drivers/net/ppp/ppp_synctty.c 107 */;
}
