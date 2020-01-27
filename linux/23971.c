cocci_test_suite() {
	size_t cocci_id/* net/ipv4/tcp_metrics.c 986 */;
	int __net_init cocci_id/* net/ipv4/tcp_metrics.c 984 */;
	ssize_t cocci_id/* net/ipv4/tcp_metrics.c 971 */;
	char *cocci_id/* net/ipv4/tcp_metrics.c 969 */;
	int __init cocci_id/* net/ipv4/tcp_metrics.c 969 */;
	const struct genl_ops cocci_id/* net/ipv4/tcp_metrics.c 941 */[];
	const struct dst_entry *cocci_id/* net/ipv4/tcp_metrics.c 94 */;
	struct tcp_metrics_block __rcu **cocci_id/* net/ipv4/tcp_metrics.c 878 */;
	struct tcpm_hash_bucket *cocci_id/* net/ipv4/tcp_metrics.c 873 */;
	struct tcpm_hash_bucket {
		struct tcp_metrics_block __rcu *chain;
	} cocci_id/* net/ipv4/tcp_metrics.c 84 */;
	struct in6_addr cocci_id/* net/ipv4/tcp_metrics.c 786 */;
	bool cocci_id/* net/ipv4/tcp_metrics.c 78 */;
	struct nlattr *cocci_id/* net/ipv4/tcp_metrics.c 775 */;
	unsigned int *cocci_id/* net/ipv4/tcp_metrics.c 773 */;
	struct inetpeer_addr *cocci_id/* net/ipv4/tcp_metrics.c 772 */;
	struct genl_info *cocci_id/* net/ipv4/tcp_metrics.c 772 */;
	int cocci_id/* net/ipv4/tcp_metrics.c 772 */;
	void *cocci_id/* net/ipv4/tcp_metrics.c 720 */;
	struct netlink_callback *cocci_id/* net/ipv4/tcp_metrics.c 717 */;
	struct sk_buff *cocci_id/* net/ipv4/tcp_metrics.c 716 */;
	struct tcp_fastopen_metrics cocci_id/* net/ipv4/tcp_metrics.c 684 */[1];
	enum tcp_metric_index cocci_id/* net/ipv4/tcp_metrics.c 66 */;
	const struct nla_policy cocci_id/* net/ipv4/tcp_metrics.c 595 */[TCP_METRICS_ATTR_MAX + 1];
	struct genl_family cocci_id/* net/ipv4/tcp_metrics.c 593 */;
	u16 cocci_id/* net/ipv4/tcp_metrics.c 561 */;
	struct tcp_fastopen_metrics *cocci_id/* net/ipv4/tcp_metrics.c 546 */;
	struct tcp_fastopen_cookie *cocci_id/* net/ipv4/tcp_metrics.c 539 */;
	u16 *cocci_id/* net/ipv4/tcp_metrics.c 538 */;
	struct sock *cocci_id/* net/ipv4/tcp_metrics.c 538 */;
	void cocci_id/* net/ipv4/tcp_metrics.c 538 */;
	u32 cocci_id/* net/ipv4/tcp_metrics.c 445 */;
	struct tcp_sock *cocci_id/* net/ipv4/tcp_metrics.c 443 */;
	struct tcp_metrics_block {
		struct tcp_metrics_block __rcu *tcpm_next;
		possible_net_t tcpm_net;
		struct inetpeer_addr tcpm_saddr;
		struct inetpeer_addr tcpm_daddr;
		unsigned long tcpm_stamp;
		u32 tcpm_lock;
		u32 tcpm_vals[TCP_METRIC_MAX_KERNEL + 1];
		struct tcp_fastopen_metrics tcpm_fastopen;
		struct rcu_head rcu_head;
	} cocci_id/* net/ipv4/tcp_metrics.c 41 */;
	unsigned long cocci_id/* net/ipv4/tcp_metrics.c 327 */;
	const struct inet_connection_sock *cocci_id/* net/ipv4/tcp_metrics.c 322 */;
	struct tcp_fastopen_metrics {
		u16 mss;
		u16 syn_loss:10,try_exp:2;
		unsigned long last_syn_loss;
		struct tcp_fastopen_cookie cookie;
	} cocci_id/* net/ipv4/tcp_metrics.c 28 */;
	struct tcp_metrics_block *cocci_id/* net/ipv4/tcp_metrics.c 24 */(const struct inetpeer_addr *saddr,
									  const struct inetpeer_addr *daddr,
									  struct net *net,
									  unsigned int hash);
	struct inetpeer_addr cocci_id/* net/ipv4/tcp_metrics.c 233 */;
	struct dst_entry *cocci_id/* net/ipv4/tcp_metrics.c 230 */;
	struct request_sock *cocci_id/* net/ipv4/tcp_metrics.c 229 */;
	struct net *cocci_id/* net/ipv4/tcp_metrics.c 213 */;
	unsigned int cocci_id/* net/ipv4/tcp_metrics.c 213 */;
	const struct inetpeer_addr *cocci_id/* net/ipv4/tcp_metrics.c 211 */;
	struct tcp_metrics_block *cocci_id/* net/ipv4/tcp_metrics.c 211 */;
	void __init cocci_id/* net/ipv4/tcp_metrics.c 1020 */;
	struct pernet_operations cocci_id/* net/ipv4/tcp_metrics.c 1015 */;
	struct list_head *cocci_id/* net/ipv4/tcp_metrics.c 1010 */;
	void __net_exit cocci_id/* net/ipv4/tcp_metrics.c 1010 */;
	struct tcpm_hash_bucket cocci_id/* net/ipv4/tcp_metrics.c 1001 */;
}
