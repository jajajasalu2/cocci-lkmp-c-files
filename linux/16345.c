cocci_test_suite() {
	const u8 cocci_id/* drivers/staging/most/net/net.c 78 */[];
	u8 *cocci_id/* drivers/staging/most/net/net.c 77 */;
	const struct sk_buff *cocci_id/* drivers/staging/most/net/net.c 75 */;
	struct core_component cocci_id/* drivers/staging/most/net/net.c 73 */;
	struct mutex cocci_id/* drivers/staging/most/net/net.c 71 */;
	struct list_head cocci_id/* drivers/staging/most/net/net.c 70 */;
	struct net_dev_context {
		struct most_interface *iface;
		bool is_mamac;
		struct net_device *dev;
		struct net_dev_channel rx;
		struct net_dev_channel tx;
		struct list_head list;
	} cocci_id/* drivers/staging/most/net/net.c 61 */;
	struct net_dev_channel {
		bool linked;
		int ch_id;
	} cocci_id/* drivers/staging/most/net/net.c 56 */;
	const u8 *cocci_id/* drivers/staging/most/net/net.c 542 */;
	unsigned char *cocci_id/* drivers/staging/most/net/net.c 538 */;
	unsigned char cocci_id/* drivers/staging/most/net/net.c 538 */;
	void __exit cocci_id/* drivers/staging/most/net/net.c 525 */;
	int __init cocci_id/* drivers/staging/most/net/net.c 509 */;
	bool cocci_id/* drivers/staging/most/net/net.c 49 */;
	unsigned int cocci_id/* drivers/staging/most/net/net.c 426 */;
	struct sk_buff *cocci_id/* drivers/staging/most/net/net.c 424 */;
	u32 cocci_id/* drivers/staging/most/net/net.c 423 */;
	const u32 cocci_id/* drivers/staging/most/net/net.c 420 */;
	struct mbo *cocci_id/* drivers/staging/most/net/net.c 418 */;
	unsigned long cocci_id/* drivers/staging/most/net/net.c 357 */;
	struct net_dev_channel *cocci_id/* drivers/staging/most/net/net.c 356 */;
	struct net_dev_context *cocci_id/* drivers/staging/most/net/net.c 355 */;
	struct most_interface *cocci_id/* drivers/staging/most/net/net.c 352 */;
	int cocci_id/* drivers/staging/most/net/net.c 352 */;
	struct net_dev_context cocci_id/* drivers/staging/most/net/net.c 314 */;
	struct net_device *cocci_id/* drivers/staging/most/net/net.c 301 */;
	struct most_channel_config *cocci_id/* drivers/staging/most/net/net.c 296 */;
	char *cocci_id/* drivers/staging/most/net/net.c 296 */;
	void cocci_id/* drivers/staging/most/net/net.c 264 */;
	const struct net_device_ops cocci_id/* drivers/staging/most/net/net.c 257 */;
	netdev_tx_t cocci_id/* drivers/staging/most/net/net.c 223 */;
	void cocci_id/* drivers/staging/most/net/net.c 173 */(struct most_interface *iface,
							      unsigned char link_stat,
							      unsigned char *mac_addr);
	void *cocci_id/* drivers/staging/most/net/net.c 152 */;
}
