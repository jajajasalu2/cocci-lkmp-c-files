cocci_test_suite() {
	struct cisco_packet *cocci_id/* drivers/net/wan/hdlc_cisco.c 99 */;
	__be32 cocci_id/* drivers/net/wan/hdlc_cisco.c 96 */;
	u32 cocci_id/* drivers/net/wan/hdlc_cisco.c 95 */;
	void cocci_id/* drivers/net/wan/hdlc_cisco.c 95 */;
	struct hdlc_header cocci_id/* drivers/net/wan/hdlc_cisco.c 81 */;
	struct hdlc_header *cocci_id/* drivers/net/wan/hdlc_cisco.c 76 */;
	unsigned int cocci_id/* drivers/net/wan/hdlc_cisco.c 74 */;
	u16 cocci_id/* drivers/net/wan/hdlc_cisco.c 73 */;
	const void *cocci_id/* drivers/net/wan/hdlc_cisco.c 73 */;
	struct sk_buff *cocci_id/* drivers/net/wan/hdlc_cisco.c 72 */;
	struct net_device *cocci_id/* drivers/net/wan/hdlc_cisco.c 72 */;
	int cocci_id/* drivers/net/wan/hdlc_cisco.c 72 */;
	int cocci_id/* drivers/net/wan/hdlc_cisco.c 63 */(struct net_device *dev,
							  struct ifreq *ifr);
	struct cisco_state {
		cisco_proto settings;
		struct timer_list timer;
		struct net_device *dev;
		spinlock_t lock;
		unsigned long last_poll;
		int up;
		u32 txseq;
		u32 rxseq;
	} cocci_id/* drivers/net/wan/hdlc_cisco.c 50 */;
	void __exit cocci_id/* drivers/net/wan/hdlc_cisco.c 391 */;
	struct cisco_packet {
		__be32 type;
		__be32 par1;
		__be32 par2;
		__be16 rel;
		__be32 time;
	}__packed cocci_id/* drivers/net/wan/hdlc_cisco.c 39 */;
	int __init cocci_id/* drivers/net/wan/hdlc_cisco.c 383 */;
	struct cisco_state cocci_id/* drivers/net/wan/hdlc_cisco.c 366 */;
	hdlc_device *cocci_id/* drivers/net/wan/hdlc_cisco.c 331 */;
	const size_t cocci_id/* drivers/net/wan/hdlc_cisco.c 329 */;
	cisco_proto cocci_id/* drivers/net/wan/hdlc_cisco.c 329 */;
	cisco_proto __user *cocci_id/* drivers/net/wan/hdlc_cisco.c 328 */;
	struct ifreq *cocci_id/* drivers/net/wan/hdlc_cisco.c 326 */;
	const struct header_ops cocci_id/* drivers/net/wan/hdlc_cisco.c 322 */;
	struct hdlc_header {
		u8 address;
		u8 control;
		__be16 protocol;
	}__packed cocci_id/* drivers/net/wan/hdlc_cisco.c 32 */;
	struct hdlc_proto cocci_id/* drivers/net/wan/hdlc_cisco.c 313 */;
	unsigned long cocci_id/* drivers/net/wan/hdlc_cisco.c 284 */;
	struct timer_list *cocci_id/* drivers/net/wan/hdlc_cisco.c 257 */;
	const struct in_ifaddr *cocci_id/* drivers/net/wan/hdlc_cisco.c 196 */;
	struct in_device *cocci_id/* drivers/net/wan/hdlc_cisco.c 158 */;
	struct cisco_state *cocci_id/* drivers/net/wan/hdlc_cisco.c 155 */;
	__be16 cocci_id/* drivers/net/wan/hdlc_cisco.c 128 */;
	struct cisco_packet cocci_id/* drivers/net/wan/hdlc_cisco.c 102 */;
}
