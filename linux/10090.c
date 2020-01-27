cocci_test_suite() {
	void cocci_id/* drivers/net/ppp/ppp_async.c 99 */(struct asyncppp *ap);
	int cocci_id/* drivers/net/ppp/ppp_async.c 97 */(struct ppp_channel *chan,
							 struct sk_buff *skb);
	int cocci_id/* drivers/net/ppp/ppp_async.c 96 */(struct asyncppp *ap);
	u32 cocci_id/* drivers/net/ppp/ppp_async.c 954 */;
	int cocci_id/* drivers/net/ppp/ppp_async.c 951 */;
	unsigned char *cocci_id/* drivers/net/ppp/ppp_async.c 950 */;
	struct sk_buff *cocci_id/* drivers/net/ppp/ppp_async.c 834 */;
	char *cocci_id/* drivers/net/ppp/ppp_async.c 832 */;
	const unsigned char *cocci_id/* drivers/net/ppp/ppp_async.c 831 */;
	u32 __user *cocci_id/* drivers/net/ppp/ppp_async.c 430 */;
	struct asyncppp {
		struct tty_struct *tty;
		unsigned int flags;
		unsigned int state;
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
		int tpkt_pos;
		u16 tfcs;
		unsigned char *optr;
		unsigned char *olim;
		unsigned long last_xmit;
		struct sk_buff *rpkt;
		int lcp_fcs;
		struct sk_buff_head rqueue;
		struct tasklet_struct tsk;
		refcount_t refcnt;
		struct completion dead;
		struct ppp_channel chan;
		unsigned char obuf[OBUFSIZE];
	} cocci_id/* drivers/net/ppp/ppp_async.c 41 */;
	u32 cocci_id/* drivers/net/ppp/ppp_async.c 409 */[8];
	int __user *cocci_id/* drivers/net/ppp/ppp_async.c 407 */;
	void __user *cocci_id/* drivers/net/ppp/ppp_async.c 406 */;
	struct ppp_channel *cocci_id/* drivers/net/ppp/ppp_async.c 403 */;
	unsigned long cocci_id/* drivers/net/ppp/ppp_async.c 403 */;
	unsigned int cocci_id/* drivers/net/ppp/ppp_async.c 403 */;
	int __init cocci_id/* drivers/net/ppp/ppp_async.c 387 */;
	struct tty_ldisc_ops cocci_id/* drivers/net/ppp/ppp_async.c 372 */;
	poll_table *cocci_id/* drivers/net/ppp/ppp_async.c 334 */;
	__poll_t cocci_id/* drivers/net/ppp/ppp_async.c 333 */;
	struct file *cocci_id/* drivers/net/ppp/ppp_async.c 284 */;
	unsigned char __user *cocci_id/* drivers/net/ppp/ppp_async.c 262 */;
	size_t cocci_id/* drivers/net/ppp/ppp_async.c 262 */;
	ssize_t cocci_id/* drivers/net/ppp/ppp_async.c 260 */;
	void cocci_id/* drivers/net/ppp/ppp_async.c 144 */;
	struct tty_struct *cocci_id/* drivers/net/ppp/ppp_async.c 132 */;
	struct asyncppp *cocci_id/* drivers/net/ppp/ppp_async.c 132 */;
	const struct ppp_channel_ops cocci_id/* drivers/net/ppp/ppp_async.c 109 */;
	void cocci_id/* drivers/net/ppp/ppp_async.c 106 */(struct asyncppp *ap,
							   unsigned char *data,
							   int len,
							   int inbound);
	void cocci_id/* drivers/net/ppp/ppp_async.c 104 */(unsigned long arg);
	int cocci_id/* drivers/net/ppp/ppp_async.c 102 */(struct ppp_channel *chan,
							  unsigned int cmd,
							  unsigned long arg);
	void __exit cocci_id/* drivers/net/ppp/ppp_async.c 1016 */;
	void cocci_id/* drivers/net/ppp/ppp_async.c 100 */(struct asyncppp *ap,
							   const unsigned char *buf,
							   char *flags,
							   int count);
}
