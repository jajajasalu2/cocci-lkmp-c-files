cocci_test_suite() {
	bool cocci_id/* net/ipv4/icmp.c 988 */;
	const struct net_protocol *cocci_id/* net/ipv4/icmp.c 755 */;
	struct iphdr cocci_id/* net/ipv4/icmp.c 732 */;
	struct net_device *cocci_id/* net/ipv4/icmp.c 678 */;
	struct icmphdr cocci_id/* net/ipv4/icmp.c 639 */;
	u8 *cocci_id/* net/ipv4/icmp.c 601 */;
	struct sock *cocci_id/* net/ipv4/icmp.c 582 */;
	struct net *cocci_id/* net/ipv4/icmp.c 581 */;
	u32 cocci_id/* net/ipv4/icmp.c 580 */;
	u8 cocci_id/* net/ipv4/icmp.c 579 */;
	struct flowi4 cocci_id/* net/ipv4/icmp.c 577 */;
	struct ipcm_cookie cocci_id/* net/ipv4/icmp.c 576 */;
	struct rtable *cocci_id/* net/ipv4/icmp.c 575 */;
	struct icmp_bxm cocci_id/* net/ipv4/icmp.c 574 */;
	struct iphdr *cocci_id/* net/ipv4/icmp.c 572 */;
	const struct ip_options *cocci_id/* net/ipv4/icmp.c 570 */;
	__be32 cocci_id/* net/ipv4/icmp.c 569 */;
	struct sk_buff *cocci_id/* net/ipv4/icmp.c 569 */;
	int cocci_id/* net/ipv4/icmp.c 569 */;
	void cocci_id/* net/ipv4/icmp.c 569 */;
	unsigned long cocci_id/* net/ipv4/icmp.c 513 */;
	const struct iphdr *cocci_id/* net/ipv4/icmp.c 463 */;
	struct inet_sock *cocci_id/* net/ipv4/icmp.c 405 */;
	struct ipcm_cookie *cocci_id/* net/ipv4/icmp.c 365 */;
	struct rtable **cocci_id/* net/ipv4/icmp.c 365 */;
	struct flowi4 *cocci_id/* net/ipv4/icmp.c 364 */;
	__wsum cocci_id/* net/ipv4/icmp.c 351 */;
	struct icmp_bxm *cocci_id/* net/ipv4/icmp.c 350 */;
	char *cocci_id/* net/ipv4/icmp.c 347 */;
	void *cocci_id/* net/ipv4/icmp.c 347 */;
	unsigned char cocci_id/* net/ipv4/icmp.c 337 */;
	struct inet_peer *cocci_id/* net/ipv4/icmp.c 314 */;
	struct dst_entry *cocci_id/* net/ipv4/icmp.c 313 */;
	struct {
		spinlock_t lock;
		u32 credit;
		u32 stamp;
	} cocci_id/* net/ipv4/icmp.c 231 */;
	const struct icmp_control cocci_id/* net/ipv4/icmp.c 193 */[NR_ICMP_TYPES + 1];
	struct icmp_control {
		bool (*handler)(struct sk_buff *skb);
		short error;
	} cocci_id/* net/ipv4/icmp.c 188 */;
	int __init cocci_id/* net/ipv4/icmp.c 1261 */;
	struct pernet_operations __net_initdata cocci_id/* net/ipv4/icmp.c 1256 */;
	int __net_init cocci_id/* net/ipv4/icmp.c 1196 */;
	void __net_exit cocci_id/* net/ipv4/icmp.c 1186 */;
	const struct icmp_err cocci_id/* net/ipv4/icmp.c 116 */[];
	struct icmphdr *cocci_id/* net/ipv4/icmp.c 1090 */;
	struct sec_path *cocci_id/* net/ipv4/icmp.c 1005 */;
	struct icmp_bxm {
		struct sk_buff *skb;
		int offset;
		int data_len;
		struct {
			struct icmphdr icmph;
			__be32 times[3];
		} data;
		int head_len;
		struct ip_options_data replyopts;
	} cocci_id/* net/ipv4/icmp.c 100 */;
}
