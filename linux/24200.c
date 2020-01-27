cocci_test_suite() {
	struct lwtunnel_state *cocci_id/* net/ipv6/seg6_local.c 976 */;
	struct nlattr *cocci_id/* net/ipv6/seg6_local.c 975 */[SEG6_LOCAL_MAX + 1];
	struct netlink_ext_ack *cocci_id/* net/ipv6/seg6_local.c 973 */;
	const void *cocci_id/* net/ipv6/seg6_local.c 972 */;
	struct lwtunnel_state **cocci_id/* net/ipv6/seg6_local.c 972 */;
	struct seg6_action_param *cocci_id/* net/ipv6/seg6_local.c 941 */;
	struct nlattr **cocci_id/* net/ipv6/seg6_local.c 939 */;
	struct seg6_action_param cocci_id/* net/ipv6/seg6_local.c 908 */[SEG6_LOCAL_MAX + 1];
	struct seg6_action_param {
		int (*parse)(struct nlattr **attrs,
			     struct seg6_local_lwt *slwt);
		int (*put)(struct sk_buff *skb, struct seg6_local_lwt *slwt);
		int (*cmp)(struct seg6_local_lwt *a, struct seg6_local_lwt *b);
	} cocci_id/* net/ipv6/seg6_local.c 902 */;
	struct seg6_local_lwt *cocci_id/* net/ipv6/seg6_local.c 891 */;
	struct nlattr *cocci_id/* net/ipv6/seg6_local.c 872 */;
	u32 cocci_id/* net/ipv6/seg6_local.c 844 */;
	struct bpf_prog *cocci_id/* net/ipv6/seg6_local.c 842 */;
	struct nlattr *cocci_id/* net/ipv6/seg6_local.c 841 */[SEG6_LOCAL_BPF_PROG_MAX + 1];
	const struct nla_policy cocci_id/* net/ipv6/seg6_local.c 833 */[SEG6_LOCAL_BPF_PROG_MAX + 1];
	struct in6_addr cocci_id/* net/ipv6/seg6_local.c 783 */;
	struct in_addr cocci_id/* net/ipv6/seg6_local.c 757 */;
	const struct nla_policy cocci_id/* net/ipv6/seg6_local.c 646 */[SEG6_LOCAL_MAX + 1];
	struct dst_entry *cocci_id/* net/ipv6/seg6_local.c 631 */;
	struct seg6_action_desc *cocci_id/* net/ipv6/seg6_local.c 614 */;
	int cocci_id/* net/ipv6/seg6_local.c 614 */;
	struct seg6_action_desc cocci_id/* net/ipv6/seg6_local.c 559 */[];
	struct seg6_bpf_srh_state *cocci_id/* net/ipv6/seg6_local.c 508 */;
	u8 cocci_id/* net/ipv6/seg6_local.c 495 */;
	struct seg6_local_lwt {
		int action;
		struct ipv6_sr_hdr *srh;
		int table;
		struct in_addr nh4;
		struct in6_addr nh6;
		int iif;
		int oif;
		struct bpf_lwt_prog bpf;
		int headroom;
		struct seg6_action_desc *desc;
	} cocci_id/* net/ipv6/seg6_local.c 47 */;
	struct ipv6hdr cocci_id/* net/ipv6/seg6_local.c 436 */;
	struct bpf_lwt_prog {
		struct bpf_prog *prog;
		char *name;
	} cocci_id/* net/ipv6/seg6_local.c 42 */;
	struct iphdr cocci_id/* net/ipv6/seg6_local.c 378 */;
	__be32 cocci_id/* net/ipv6/seg6_local.c 372 */;
	struct iphdr *cocci_id/* net/ipv6/seg6_local.c 371 */;
	struct seg6_action_desc {
		int action;
		unsigned long attrs;
		int (*input)(struct sk_buff *skb, struct seg6_local_lwt *slwt);
		int static_headroom;
	} cocci_id/* net/ipv6/seg6_local.c 35 */;
	struct seg6_local_lwt cocci_id/* net/ipv6/seg6_local.c 33 */;
	struct ethhdr *cocci_id/* net/ipv6/seg6_local.c 281 */;
	struct net_device *cocci_id/* net/ipv6/seg6_local.c 280 */;
	struct net *cocci_id/* net/ipv6/seg6_local.c 279 */;
	struct fib6_table *cocci_id/* net/ipv6/seg6_local.c 177 */;
	struct flowi6 cocci_id/* net/ipv6/seg6_local.c 161 */;
	struct rt6_info *cocci_id/* net/ipv6/seg6_local.c 160 */;
	struct ipv6hdr *cocci_id/* net/ipv6/seg6_local.c 157 */;
	struct ipv6_sr_hdr *cocci_id/* net/ipv6/seg6_local.c 143 */;
	struct in6_addr *cocci_id/* net/ipv6/seg6_local.c 143 */;
	void cocci_id/* net/ipv6/seg6_local.c 143 */;
	unsigned int cocci_id/* net/ipv6/seg6_local.c 117 */;
	bool cocci_id/* net/ipv6/seg6_local.c 114 */;
	struct sk_buff *cocci_id/* net/ipv6/seg6_local.c 114 */;
	int __init cocci_id/* net/ipv6/seg6_local.c 1126 */;
	const struct lwtunnel_encap_ops cocci_id/* net/ipv6/seg6_local.c 1116 */;
	struct nlattr cocci_id/* net/ipv6/seg6_local.c 1082 */;
	unsigned long cocci_id/* net/ipv6/seg6_local.c 1056 */;
	__typeof__(struct seg6_bpf_srh_state) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
