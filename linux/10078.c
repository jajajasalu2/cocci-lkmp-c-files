cocci_test_suite() {
	struct lt_mem cocci_id/* drivers/net/appletalk/ltpc.c 948 */;
	struct lt_sendlap cocci_id/* drivers/net/appletalk/ltpc.c 897 */;
	netdev_tx_t cocci_id/* drivers/net/appletalk/ltpc.c 891 */;
	struct sk_buff *cocci_id/* drivers/net/appletalk/ltpc.c 891 */;
	struct timer_list *cocci_id/* drivers/net/appletalk/ltpc.c 871 */;
	struct lt_init cocci_id/* drivers/net/appletalk/ltpc.c 823 */;
	struct atalk_addr *cocci_id/* drivers/net/appletalk/ltpc.c 822 */;
	struct ltpc_private *cocci_id/* drivers/net/appletalk/ltpc.c 821 */;
	struct sockaddr_at *cocci_id/* drivers/net/appletalk/ltpc.c 819 */;
	struct ifreq *cocci_id/* drivers/net/appletalk/ltpc.c 817 */;
	irqreturn_t cocci_id/* drivers/net/appletalk/ltpc.c 787 */;
	struct lt_rcvlap *cocci_id/* drivers/net/appletalk/ltpc.c 726 */;
	lt_command cocci_id/* drivers/net/appletalk/ltpc.c 703 */;
	netdev_tx_t cocci_id/* drivers/net/appletalk/ltpc.c 699 */(struct sk_buff *skb,
								   struct net_device *dev);
	struct timer_list cocci_id/* drivers/net/appletalk/ltpc.c 696 */;
	void *cocci_id/* drivers/net/appletalk/ltpc.c 670 */;
	int cocci_id/* drivers/net/appletalk/ltpc.c 489 */;
	unsigned char cocci_id/* drivers/net/appletalk/ltpc.c 486 */[2];
	unsigned char cocci_id/* drivers/net/appletalk/ltpc.c 332 */[16];
	struct xmitQel cocci_id/* drivers/net/appletalk/ltpc.c 329 */[16];
	unsigned long cocci_id/* drivers/net/appletalk/ltpc.c 304 */;
	struct xmitQel *cocci_id/* drivers/net/appletalk/ltpc.c 302 */;
	void cocci_id/* drivers/net/appletalk/ltpc.c 302 */;
	struct xmitQel {
		struct xmitQel *next;
		unsigned char *cbuf;
		short cbuflen;
		unsigned char *dbuf;
		short dbuflen;
		unsigned char QWrite;
		unsigned char mailbox;
	} cocci_id/* drivers/net/appletalk/ltpc.c 268 */;
	struct ltpc_private {
		struct atalk_addr my_addr;
	} cocci_id/* drivers/net/appletalk/ltpc.c 261 */;
	unsigned char *cocci_id/* drivers/net/appletalk/ltpc.c 256 */;
	int cocci_id/* drivers/net/appletalk/ltpc.c 244 */(struct net_device *dev);
	int cocci_id/* drivers/net/appletalk/ltpc.c 242 */(struct net_device *dev,
							   void *cbuf,
							   int cbuflen,
							   void *dbuf,
							   int dbuflen);
	void __exit cocci_id/* drivers/net/appletalk/ltpc.c 1245 */;
	int __init cocci_id/* drivers/net/appletalk/ltpc.c 1233 */;
	struct net_device *cocci_id/* drivers/net/appletalk/ltpc.c 1222 */;
	int cocci_id/* drivers/net/appletalk/ltpc.c 1192 */[5];
	char *cocci_id/* drivers/net/appletalk/ltpc.c 1190 */;
	struct ltpc_private cocci_id/* drivers/net/appletalk/ltpc.c 1023 */;
	struct net_device *__init cocci_id/* drivers/net/appletalk/ltpc.c 1014 */;
	const struct net_device_ops cocci_id/* drivers/net/appletalk/ltpc.c 1008 */;
}
