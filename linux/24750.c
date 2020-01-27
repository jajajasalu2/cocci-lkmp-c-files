cocci_test_suite() {
	__be16 cocci_id/* net/netfilter/nf_conntrack_amanda.c 99 */;
	u_int16_t cocci_id/* net/netfilter/nf_conntrack_amanda.c 98 */;
	char cocci_id/* net/netfilter/nf_conntrack_amanda.c 97 */[sizeof("65535")];
	struct nf_conntrack_tuple *cocci_id/* net/netfilter/nf_conntrack_amanda.c 95 */;
	struct nf_conntrack_expect *cocci_id/* net/netfilter/nf_conntrack_amanda.c 94 */;
	enum ip_conntrack_info cocci_id/* net/netfilter/nf_conntrack_amanda.c 92 */;
	struct nf_conn *cocci_id/* net/netfilter/nf_conntrack_amanda.c 91 */;
	unsigned int cocci_id/* net/netfilter/nf_conntrack_amanda.c 90 */;
	struct sk_buff *cocci_id/* net/netfilter/nf_conntrack_amanda.c 89 */;
	int cocci_id/* net/netfilter/nf_conntrack_amanda.c 89 */;
	struct {
		const char *string;
		size_t len;
		struct ts_config *ts;
	} cocci_id/* net/netfilter/nf_conntrack_amanda.c 58 */[]__read_mostly;
	enum amanda_strings{SEARCH_CONNECT, SEARCH_NEWLINE, SEARCH_DATA, SEARCH_MESG, SEARCH_INDEX, SEARCH_STATE,} cocci_id/* net/netfilter/nf_conntrack_amanda.c 49 */;
	unsigned int (*cocci_id/* net/netfilter/nf_conntrack_amanda.c 40 */)(struct sk_buff *skb,
									     enum ip_conntrack_info ctinfo,
									     unsigned int protoff,
									     unsigned int matchoff,
									     unsigned int matchlen,
									     struct nf_conntrack_expect *exp)
				   __read_mostly;
	char *cocci_id/* net/netfilter/nf_conntrack_amanda.c 25 */;
	int __init cocci_id/* net/netfilter/nf_conntrack_amanda.c 211 */;
	void __exit cocci_id/* net/netfilter/nf_conntrack_amanda.c 201 */;
	void cocci_id/* net/netfilter/nf_conntrack_amanda.c 201 */;
	struct nf_conntrack_helper cocci_id/* net/netfilter/nf_conntrack_amanda.c 178 */[2]__read_mostly;
	const struct nf_conntrack_expect_policy cocci_id/* net/netfilter/nf_conntrack_amanda.c 173 */;
	struct udphdr cocci_id/* net/netfilter/nf_conntrack_amanda.c 112 */;
	typeof(nf_nat_amanda_hook) cocci_id/* net/netfilter/nf_conntrack_amanda.c 101 */;
}
