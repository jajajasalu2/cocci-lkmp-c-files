cocci_test_suite() {
	struct sctp_hash_cmp_arg cocci_id/* net/sctp/input.c 980 */;
	struct rhlist_head *cocci_id/* net/sctp/input.c 978 */;
	struct sctp_transport cocci_id/* net/sctp/input.c 913 */;
	const struct rhashtable_params cocci_id/* net/sctp/input.c 912 */;
	u32 cocci_id/* net/sctp/input.c 905 */;
	const struct sctp_transport *cocci_id/* net/sctp/input.c 898 */;
	const struct sctp_hash_cmp_arg *cocci_id/* net/sctp/input.c 877 */;
	const void *cocci_id/* net/sctp/input.c 874 */;
	struct rhashtable_compare_arg *cocci_id/* net/sctp/input.c 873 */;
	struct sctp_hash_cmp_arg {
		const union sctp_addr *paddr;
		const struct net *net;
		__be16 lport;
	} cocci_id/* net/sctp/input.c 867 */;
	struct sctphdr cocci_id/* net/sctp/input.c 857 */;
	__u32 cocci_id/* net/sctp/input.c 854 */;
	const struct net *cocci_id/* net/sctp/input.c 812 */;
	void cocci_id/* net/sctp/input.c 784 */;
	struct list_head *cocci_id/* net/sctp/input.c 732 */;
	bool cocci_id/* net/sctp/input.c 730 */;
	struct sctp_ep_common *cocci_id/* net/sctp/input.c 723 */;
	struct sctp_hashbucket *cocci_id/* net/sctp/input.c 722 */;
	struct net *cocci_id/* net/sctp/input.c 721 */;
	struct sock *cocci_id/* net/sctp/input.c 720 */;
	struct sctp_endpoint *cocci_id/* net/sctp/input.c 718 */;
	int cocci_id/* net/sctp/input.c 718 */;
	__le32 cocci_id/* net/sctp/input.c 71 */;
	void *cocci_id/* net/sctp/input.c 705 */;
	int cocci_id/* net/sctp/input.c 64 */(struct sock *sk,
					      struct sk_buff *skb);
	__u16 cocci_id/* net/sctp/input.c 581 */;
	struct inet_sock *cocci_id/* net/sctp/input.c 580 */;
	struct sctp_association *cocci_id/* net/sctp/input.c 58 */(struct net *net,
								   const union sctp_addr *local,
								   const union sctp_addr *peer,
								   struct sctp_transport **pt);
	const int cocci_id/* net/sctp/input.c 574 */;
	const struct iphdr *cocci_id/* net/sctp/input.c 573 */;
	struct sctp_endpoint *cocci_id/* net/sctp/input.c 54 */(struct net *net,
								struct sk_buff *skb,
								const union sctp_addr *laddr,
								const union sctp_addr *daddr);
	struct sctp_chunkhdr cocci_id/* net/sctp/input.c 521 */;
	struct sctp_association *cocci_id/* net/sctp/input.c 49 */(struct net *net,
								   struct sk_buff *skb,
								   const union sctp_addr *paddr,
								   const union sctp_addr *laddr,
								   struct sctp_transport **transportp);
	int cocci_id/* net/sctp/input.c 48 */(struct sk_buff *);
	struct sctp_association **cocci_id/* net/sctp/input.c 473 */;
	struct dst_entry *cocci_id/* net/sctp/input.c 422 */;
	struct sctp_chunk *cocci_id/* net/sctp/input.c 362 */;
	struct sctp_inq *cocci_id/* net/sctp/input.c 292 */;
	__u8 *cocci_id/* net/sctp/input.c 1201 */;
	unsigned int cocci_id/* net/sctp/input.c 1200 */;
	union sctp_addr cocci_id/* net/sctp/input.c 1168 */;
	union sctp_addr_param *cocci_id/* net/sctp/input.c 1167 */;
	struct sctp_af *cocci_id/* net/sctp/input.c 1166 */;
	struct sctp_addip_chunk *cocci_id/* net/sctp/input.c 1165 */;
	__be16 cocci_id/* net/sctp/input.c 1162 */;
	struct sctp_chunkhdr *cocci_id/* net/sctp/input.c 1160 */;
	struct sctp_init_chunk *cocci_id/* net/sctp/input.c 1105 */;
	union sctp_params cocci_id/* net/sctp/input.c 1104 */;
	struct sctphdr *cocci_id/* net/sctp/input.c 1103 */;
	union sctp_addr *cocci_id/* net/sctp/input.c 1102 */;
	struct sk_buff *cocci_id/* net/sctp/input.c 1097 */;
	struct sctp_transport *cocci_id/* net/sctp/input.c 1033 */;
	struct sctp_transport **cocci_id/* net/sctp/input.c 1031 */;
	const union sctp_addr *cocci_id/* net/sctp/input.c 1029 */;
	struct sctp_association *cocci_id/* net/sctp/input.c 1027 */;
	const struct sctp_endpoint *cocci_id/* net/sctp/input.c 1004 */;
}
