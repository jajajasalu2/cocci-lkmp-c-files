cocci_test_suite() {
	struct xpnet_pending_msg {
		struct sk_buff *skb;
		atomic_t use_count;
	} cocci_id/* drivers/misc/sgi-xp/xpnet.c 94 */;
	struct xpnet_message cocci_id/* drivers/misc/sgi-xp/xpnet.c 63 */;
	void __exit cocci_id/* drivers/misc/sgi-xp/xpnet.c 581 */;
	long cocci_id/* drivers/misc/sgi-xp/xpnet.c 524 */;
	int __init cocci_id/* drivers/misc/sgi-xp/xpnet.c 513 */;
	const struct net_device_ops cocci_id/* drivers/misc/sgi-xp/xpnet.c 504 */;
	struct xpnet_message {
		u16 version;
		u16 embedded_bytes;
		u32 magic;
		unsigned long buf_pa;
		u32 size;
		u8 leadin_ignore;
		u8 tailout_ignore;
		unsigned char data;
	} cocci_id/* drivers/misc/sgi-xp/xpnet.c 44 */;
	struct xpnet_pending_msg cocci_id/* drivers/misc/sgi-xp/xpnet.c 433 */;
	u16 cocci_id/* drivers/misc/sgi-xp/xpnet.c 416 */;
	u64 cocci_id/* drivers/misc/sgi-xp/xpnet.c 414 */;
	struct xpnet_pending_msg *cocci_id/* drivers/misc/sgi-xp/xpnet.c 413 */;
	struct sk_buff *cocci_id/* drivers/misc/sgi-xp/xpnet.c 411 */;
	struct net_device *cocci_id/* drivers/misc/sgi-xp/xpnet.c 411 */;
	netdev_tx_t cocci_id/* drivers/misc/sgi-xp/xpnet.c 410 */;
	u8 cocci_id/* drivers/misc/sgi-xp/xpnet.c 365 */[XPNET_MSG_SIZE];
	unsigned long cocci_id/* drivers/misc/sgi-xp/xpnet.c 305 */;
	struct xpnet_message *cocci_id/* drivers/misc/sgi-xp/xpnet.c 268 */;
	void *cocci_id/* drivers/misc/sgi-xp/xpnet.c 259 */;
	enum xp_retval cocci_id/* drivers/misc/sgi-xp/xpnet.c 258 */;
	int cocci_id/* drivers/misc/sgi-xp/xpnet.c 258 */;
	short cocci_id/* drivers/misc/sgi-xp/xpnet.c 258 */;
	void cocci_id/* drivers/misc/sgi-xp/xpnet.c 257 */;
	size_t cocci_id/* drivers/misc/sgi-xp/xpnet.c 203 */;
	struct device *cocci_id/* drivers/misc/sgi-xp/xpnet.c 143 */;
	struct device cocci_id/* drivers/misc/sgi-xp/xpnet.c 138 */;
	struct device_driver cocci_id/* drivers/misc/sgi-xp/xpnet.c 134 */;
	unsigned long *cocci_id/* drivers/misc/sgi-xp/xpnet.c 105 */;
}
