cocci_test_suite() {
	struct sane_reply_net_start *cocci_id/* net/netfilter/nf_conntrack_sane.c 77 */;
	struct sane_request *cocci_id/* net/netfilter/nf_conntrack_sane.c 76 */;
	struct nf_conntrack_tuple *cocci_id/* net/netfilter/nf_conntrack_sane.c 75 */;
	struct nf_conntrack_expect *cocci_id/* net/netfilter/nf_conntrack_sane.c 74 */;
	struct nf_ct_sane_master *cocci_id/* net/netfilter/nf_conntrack_sane.c 73 */;
	void *cocci_id/* net/netfilter/nf_conntrack_sane.c 70 */;
	struct tcphdr cocci_id/* net/netfilter/nf_conntrack_sane.c 69 */;
	const struct tcphdr *cocci_id/* net/netfilter/nf_conntrack_sane.c 68 */;
	enum ip_conntrack_info cocci_id/* net/netfilter/nf_conntrack_sane.c 65 */;
	struct nf_conn *cocci_id/* net/netfilter/nf_conntrack_sane.c 64 */;
	unsigned int cocci_id/* net/netfilter/nf_conntrack_sane.c 63 */;
	struct sk_buff *cocci_id/* net/netfilter/nf_conntrack_sane.c 62 */;
	int cocci_id/* net/netfilter/nf_conntrack_sane.c 62 */;
	struct sane_reply_net_start {
		__be32 status;
#define SANE_STATUS_SUCCESS 0
		__be16 zero;
		__be16 port;
	} cocci_id/* net/netfilter/nf_conntrack_sane.c 53 */;
	struct sane_request {
		__be32 RPC_code;
#define SANE_NET_START 7
		__be32 handle;
	} cocci_id/* net/netfilter/nf_conntrack_sane.c 46 */;
	u_int16_t cocci_id/* net/netfilter/nf_conntrack_sane.c 42 */[MAX_PORTS];
	char *cocci_id/* net/netfilter/nf_conntrack_sane.c 37 */;
	struct nf_ct_sane_master cocci_id/* net/netfilter/nf_conntrack_sane.c 185 */;
	int __init cocci_id/* net/netfilter/nf_conntrack_sane.c 181 */;
	void __exit cocci_id/* net/netfilter/nf_conntrack_sane.c 175 */;
	void cocci_id/* net/netfilter/nf_conntrack_sane.c 175 */;
	const struct nf_conntrack_expect_policy cocci_id/* net/netfilter/nf_conntrack_sane.c 170 */;
	struct nf_conntrack_helper cocci_id/* net/netfilter/nf_conntrack_sane.c 168 */[MAX_PORTS * 2]__read_mostly;
	struct sane_reply_net_start cocci_id/* net/netfilter/nf_conntrack_sane.c 123 */;
	struct sane_request cocci_id/* net/netfilter/nf_conntrack_sane.c 101 */;
}
