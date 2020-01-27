cocci_test_suite() {
	bool cocci_id/* net/ipv4/tcp_ipv4.c 995 */;
	__be32 cocci_id/* net/ipv4/tcp_ipv4.c 993 */;
	const struct tcp_md5sig_info *cocci_id/* net/ipv4/tcp_ipv4.c 992 */;
	const struct tcp_sock *cocci_id/* net/ipv4/tcp_ipv4.c 990 */;
	int cocci_id/* net/ipv4/tcp_ipv4.c 988 */;
	const union tcp_md5_addr *cocci_id/* net/ipv4/tcp_ipv4.c 987 */;
	const struct sock *cocci_id/* net/ipv4/tcp_ipv4.c 986 */;
	struct tcp_md5sig_key *cocci_id/* net/ipv4/tcp_ipv4.c 986 */;
	struct flowi4 cocci_id/* net/ipv4/tcp_ipv4.c 943 */;
	enum tcp_synack_type cocci_id/* net/ipv4/tcp_ipv4.c 940 */;
	struct tcp_fastopen_cookie *cocci_id/* net/ipv4/tcp_ipv4.c 939 */;
	struct inet_hashinfo cocci_id/* net/ipv4/tcp_ipv4.c 90 */;
	struct tcp_timewait_sock *cocci_id/* net/ipv4/tcp_ipv4.c 889 */;
	struct inet_timewait_sock *cocci_id/* net/ipv4/tcp_ipv4.c 888 */;
	int cocci_id/* net/ipv4/tcp_ipv4.c 86 */(char *md5_hash,
						 const struct tcp_md5sig_key *key,
						 __be32 daddr, __be32 saddr,
						 const struct tcphdr *th);
	__u8 *cocci_id/* net/ipv4/tcp_ipv4.c 854 */;
	unsigned char *cocci_id/* net/ipv4/tcp_ipv4.c 823 */;
	u64 cocci_id/* net/ipv4/tcp_ipv4.c 818 */;
	struct ip_reply_arg cocci_id/* net/ipv4/tcp_ipv4.c 816 */;
	struct {
		struct tcphdr th;
		__be32 opt[(TCPOLEN_TSTAMP_ALIGNED >> 2)

#ifdef CONFIG_TCP_MD5SIG
 + (TCPOLEN_MD5SIG_ALIGNED >> 2)

#endif
];
	} cocci_id/* net/ipv4/tcp_ipv4.c 807 */;
	struct inet_timewait_sock cocci_id/* net/ipv4/tcp_ipv4.c 766 */;
	struct sock cocci_id/* net/ipv4/tcp_ipv4.c 765 */;
	struct {
		struct tcphdr th;
#ifdef CONFIG_TCP_MD5SIG
		__be32 opt[(TCPOLEN_MD5SIG_ALIGNED >> 2)];
#endif
	} cocci_id/* net/ipv4/tcp_ipv4.c 652 */;
	struct tcphdr cocci_id/* net/ipv4/tcp_ipv4.c 624 */;
	struct tcphdr *cocci_id/* net/ipv4/tcp_ipv4.c 620 */;
	struct sk_buff *cocci_id/* net/ipv4/tcp_ipv4.c 618 */;
	void cocci_id/* net/ipv4/tcp_ipv4.c 618 */;
	s32 cocci_id/* net/ipv4/tcp_ipv4.c 435 */;
	const int cocci_id/* net/ipv4/tcp_ipv4.c 429 */;
	struct inet_connection_sock *cocci_id/* net/ipv4/tcp_ipv4.c 426 */;
	struct request_sock *cocci_id/* net/ipv4/tcp_ipv4.c 384 */;
	struct dst_entry *cocci_id/* net/ipv4/tcp_ipv4.c 374 */;
	struct sock *cocci_id/* net/ipv4/tcp_ipv4.c 372 */;
	void __init cocci_id/* net/ipv4/tcp_ipv4.c 2757 */;
	struct pernet_operations __net_initdata cocci_id/* net/ipv4/tcp_ipv4.c 2751 */;
	struct list_head *cocci_id/* net/ipv4/tcp_ipv4.c 2741 */;
	struct tcp_sock cocci_id/* net/ipv4/tcp_ipv4.c 2604 */;
	struct net cocci_id/* net/ipv4/tcp_ipv4.c 2601 */;
	struct proto cocci_id/* net/ipv4/tcp_ipv4.c 2570 */;
	int __init cocci_id/* net/ipv4/tcp_ipv4.c 2559 */;
	struct pernet_operations cocci_id/* net/ipv4/tcp_ipv4.c 2554 */;
	void __net_exit cocci_id/* net/ipv4/tcp_ipv4.c 2549 */;
	struct tcp_iter_state cocci_id/* net/ipv4/tcp_ipv4.c 2544 */;
	int __net_init cocci_id/* net/ipv4/tcp_ipv4.c 2541 */;
	struct tcp_seq_afinfo cocci_id/* net/ipv4/tcp_ipv4.c 2537 */;
	const struct seq_operations cocci_id/* net/ipv4/tcp_ipv4.c 2530 */;
	const struct inet_timewait_sock *cocci_id/* net/ipv4/tcp_ipv4.c 2484 */;
	__u16 cocci_id/* net/ipv4/tcp_ipv4.c 2432 */;
	const struct fastopen_queue *cocci_id/* net/ipv4/tcp_ipv4.c 2429 */;
	const struct inet_sock *cocci_id/* net/ipv4/tcp_ipv4.c 2428 */;
	const struct inet_connection_sock *cocci_id/* net/ipv4/tcp_ipv4.c 2427 */;
	unsigned long cocci_id/* net/ipv4/tcp_ipv4.c 2425 */;
	long cocci_id/* net/ipv4/tcp_ipv4.c 2400 */;
	const struct inet_request_sock *cocci_id/* net/ipv4/tcp_ipv4.c 2399 */;
	const struct request_sock *cocci_id/* net/ipv4/tcp_ipv4.c 2396 */;
	loff_t cocci_id/* net/ipv4/tcp_ipv4.c 2261 */;
	spinlock_t *cocci_id/* net/ipv4/tcp_ipv4.c 2216 */;
	struct hlist_nulls_node *cocci_id/* net/ipv4/tcp_ipv4.c 2215 */;
	struct net *cocci_id/* net/ipv4/tcp_ipv4.c 2209 */;
	struct tcp_iter_state *cocci_id/* net/ipv4/tcp_ipv4.c 2208 */;
	struct tcp_seq_afinfo *cocci_id/* net/ipv4/tcp_ipv4.c 2207 */;
	struct seq_file *cocci_id/* net/ipv4/tcp_ipv4.c 2205 */;
	void *cocci_id/* net/ipv4/tcp_ipv4.c 2205 */;
	const struct tcp_iter_state *cocci_id/* net/ipv4/tcp_ipv4.c 2196 */;
	loff_t *cocci_id/* net/ipv4/tcp_ipv4.c 2180 */;
	struct inet_listen_hashbucket *cocci_id/* net/ipv4/tcp_ipv4.c 2149 */;
	struct inet_timewait_death_row *cocci_id/* net/ipv4/tcp_ipv4.c 208 */;
	struct ip_options_rcu *cocci_id/* net/ipv4/tcp_ipv4.c 207 */;
	const struct tcp_sock_af_ops cocci_id/* net/ipv4/tcp_ipv4.c 2066 */;
	struct sockaddr_in cocci_id/* net/ipv4/tcp_ipv4.c 2056 */;
	struct iphdr cocci_id/* net/ipv4/tcp_ipv4.c 2052 */;
	struct rtable *cocci_id/* net/ipv4/tcp_ipv4.c 205 */;
	const struct inet_connection_sock_af_ops cocci_id/* net/ipv4/tcp_ipv4.c 2045 */;
	struct flowi4 *cocci_id/* net/ipv4/tcp_ipv4.c 204 */;
	const struct sk_buff *cocci_id/* net/ipv4/tcp_ipv4.c 2034 */;
	struct tcp_timewait_sock cocci_id/* net/ipv4/tcp_ipv4.c 2029 */;
	struct timewait_sock_ops cocci_id/* net/ipv4/tcp_ipv4.c 2028 */;
	__be16 cocci_id/* net/ipv4/tcp_ipv4.c 202 */;
	struct inet_sock *cocci_id/* net/ipv4/tcp_ipv4.c 200 */;
	struct sockaddr_in *cocci_id/* net/ipv4/tcp_ipv4.c 199 */;
	struct sockaddr *cocci_id/* net/ipv4/tcp_ipv4.c 197 */;
	struct inet_skb_parm cocci_id/* net/ipv4/tcp_ipv4.c 1787 */;
	unsigned int cocci_id/* net/ipv4/tcp_ipv4.c 1653 */;
	const struct tcphdr *cocci_id/* net/ipv4/tcp_ipv4.c 1650 */;
	struct skb_shared_info *cocci_id/* net/ipv4/tcp_ipv4.c 1649 */;
	u32 cocci_id/* net/ipv4/tcp_ipv4.c 1648 */;
	const struct iphdr *cocci_id/* net/ipv4/tcp_ipv4.c 1610 */;
	u32 *cocci_id/* net/ipv4/tcp_ipv4.c 1524 */;
	u16 cocci_id/* net/ipv4/tcp_ipv4.c 1523 */;
	struct iphdr *cocci_id/* net/ipv4/tcp_ipv4.c 1523 */;
	bool *cocci_id/* net/ipv4/tcp_ipv4.c 1415 */;
	const struct tcp_request_sock_ops cocci_id/* net/ipv4/tcp_ipv4.c 1375 */;
	struct tcp_request_sock cocci_id/* net/ipv4/tcp_ipv4.c 1367 */;
	struct request_sock_ops cocci_id/* net/ipv4/tcp_ipv4.c 1365 */;
	struct flowi *cocci_id/* net/ipv4/tcp_ipv4.c 1359 */;
	struct inet_request_sock *cocci_id/* net/ipv4/tcp_ipv4.c 1350 */;
	union tcp_md5_addr *cocci_id/* net/ipv4/tcp_ipv4.c 1307 */;
	unsigned char cocci_id/* net/ipv4/tcp_ipv4.c 1305 */[16];
	const __u8 *cocci_id/* net/ipv4/tcp_ipv4.c 1300 */;
	struct ahash_request *cocci_id/* net/ipv4/tcp_ipv4.c 1211 */;
	struct tcp_md5sig_pool *cocci_id/* net/ipv4/tcp_ipv4.c 1210 */;
	const struct tcp_md5sig_key *cocci_id/* net/ipv4/tcp_ipv4.c 1207 */;
	char *cocci_id/* net/ipv4/tcp_ipv4.c 1207 */;
	struct scatterlist cocci_id/* net/ipv4/tcp_ipv4.c 1187 */;
	struct tcp4_pseudohdr *cocci_id/* net/ipv4/tcp_ipv4.c 1186 */;
	struct tcp_md5sig cocci_id/* net/ipv4/tcp_ipv4.c 1150 */;
	char __user *cocci_id/* net/ipv4/tcp_ipv4.c 1148 */;
	struct tcp_md5sig_info *cocci_id/* net/ipv4/tcp_ipv4.c 1136 */;
	struct hlist_node *cocci_id/* net/ipv4/tcp_ipv4.c 1135 */;
	struct tcp_sock *cocci_id/* net/ipv4/tcp_ipv4.c 1133 */;
	struct in_addr cocci_id/* net/ipv4/tcp_ipv4.c 1110 */;
	struct in6_addr cocci_id/* net/ipv4/tcp_ipv4.c 1109 */;
	const struct tcp_timewait_sock *cocci_id/* net/ipv4/tcp_ipv4.c 109 */;
	gfp_t cocci_id/* net/ipv4/tcp_ipv4.c 1069 */;
	u8 cocci_id/* net/ipv4/tcp_ipv4.c 1068 */;
	const u8 *cocci_id/* net/ipv4/tcp_ipv4.c 1068 */;
	const struct net *cocci_id/* net/ipv4/tcp_ipv4.c 101 */;
}
