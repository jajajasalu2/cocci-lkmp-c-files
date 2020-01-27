cocci_test_suite() {
	struct udphdr cocci_id/* net/netfilter/nf_conntrack_tftp.c 52 */;
	typeof(nf_nat_tftp_hook) cocci_id/* net/netfilter/nf_conntrack_tftp.c 50 */;
	struct nf_conntrack_tuple *cocci_id/* net/netfilter/nf_conntrack_tftp.c 48 */;
	struct nf_conntrack_expect *cocci_id/* net/netfilter/nf_conntrack_tftp.c 47 */;
	struct tftphdr cocci_id/* net/netfilter/nf_conntrack_tftp.c 46 */;
	const struct tftphdr *cocci_id/* net/netfilter/nf_conntrack_tftp.c 45 */;
	enum ip_conntrack_info cocci_id/* net/netfilter/nf_conntrack_tftp.c 43 */;
	struct nf_conn *cocci_id/* net/netfilter/nf_conntrack_tftp.c 42 */;
	struct sk_buff *cocci_id/* net/netfilter/nf_conntrack_tftp.c 40 */;
	unsigned int (*cocci_id/* net/netfilter/nf_conntrack_tftp.c 35 */)(struct sk_buff *skb,
									   enum ip_conntrack_info ctinfo,
									   struct nf_conntrack_expect *exp)__read_mostly;
	unsigned int cocci_id/* net/netfilter/nf_conntrack_tftp.c 31 */;
	unsigned short cocci_id/* net/netfilter/nf_conntrack_tftp.c 30 */[MAX_PORTS];
	int cocci_id/* net/netfilter/nf_conntrack_tftp.c 114 */;
	int __init cocci_id/* net/netfilter/nf_conntrack_tftp.c 112 */;
	void __exit cocci_id/* net/netfilter/nf_conntrack_tftp.c 107 */;
	void cocci_id/* net/netfilter/nf_conntrack_tftp.c 107 */;
	const struct nf_conntrack_expect_policy cocci_id/* net/netfilter/nf_conntrack_tftp.c 102 */;
	struct nf_conntrack_helper cocci_id/* net/netfilter/nf_conntrack_tftp.c 100 */[MAX_PORTS * 2]__read_mostly;
}
