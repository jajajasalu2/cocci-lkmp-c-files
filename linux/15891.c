cocci_test_suite() {
	struct net_local *cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 92 */;
	void cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 91 */;
	const struct in_ifaddr *cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 73 */;
	struct in_device *cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 62 */;
	struct net_local {
		struct net_device *dev;
		spinlock_t lock;
		struct sk_buff *skbs[MAX_SKB_BUFFERS];
		int in_idx,out_idx;
		int sk_count;
	} cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 37 */;
	char *cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 321 */;
	struct net_local cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 262 */;
	unsigned int cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 26 */;
	struct net_device *cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 252 */;
	hysdn_card *cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 250 */;
	int cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 249 */;
	const struct net_device_ops cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 235 */;
	struct sk_buff *cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 192 */;
	unsigned char *cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 188 */;
	unsigned short cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 188 */;
	netdev_tx_t cocci_id/* drivers/staging/isdn/hysdn/hysdn_net.c 123 */;
}
