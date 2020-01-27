cocci_test_suite() {
	typeof(nf_ct_timeout_find_get_hook) cocci_id/* net/netfilter/nf_conntrack_timeout.c 61 */;
	u8 cocci_id/* net/netfilter/nf_conntrack_timeout.c 59 */;
	const char *cocci_id/* net/netfilter/nf_conntrack_timeout.c 59 */;
	struct net *cocci_id/* net/netfilter/nf_conntrack_timeout.c 58 */;
	typeof(nf_ct_timeout_put_hook) cocci_id/* net/netfilter/nf_conntrack_timeout.c 51 */;
	struct nf_ct_timeout *cocci_id/* net/netfilter/nf_conntrack_timeout.c 49 */;
	void cocci_id/* net/netfilter/nf_conntrack_timeout.c 49 */;
	void *cocci_id/* net/netfilter/nf_conntrack_timeout.c 32 */;
	void (*cocci_id/* net/netfilter/nf_conntrack_timeout.c 29 */)(struct nf_ct_timeout *timeout)__read_mostly;
	struct nf_ct_timeout *(*cocci_id/* net/netfilter/nf_conntrack_timeout.c 25 */)(struct net *net,
										       const char *name)__read_mostly;
	int cocci_id/* net/netfilter/nf_conntrack_timeout.c 144 */;
	struct nf_conn_timeout cocci_id/* net/netfilter/nf_conntrack_timeout.c 139 */;
	const struct nf_ct_ext_type cocci_id/* net/netfilter/nf_conntrack_timeout.c 138 */;
	struct nf_conn_timeout *cocci_id/* net/netfilter/nf_conntrack_timeout.c 121 */;
	struct nf_conn *cocci_id/* net/netfilter/nf_conntrack_timeout.c 119 */;
}
