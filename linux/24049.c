cocci_test_suite() {
	struct sw_flow_key *cocci_id/* net/openvswitch/actions.c 999 */;
	struct datapath *cocci_id/* net/openvswitch/actions.c 998 */;
	const struct sample_arg *cocci_id/* net/openvswitch/actions.c 974 */;
	void cocci_id/* net/openvswitch/actions.c 95 */;
	struct dp_upcall_info cocci_id/* net/openvswitch/actions.c 915 */;
	uint32_t cocci_id/* net/openvswitch/actions.c 913 */;
	struct net *cocci_id/* net/openvswitch/actions.c 899 */;
	u16 cocci_id/* net/openvswitch/actions.c 885 */;
	struct vport *cocci_id/* net/openvswitch/actions.c 882 */;
	struct rt6_info cocci_id/* net/openvswitch/actions.c 849 */;
	const struct nf_ipv6_ops *cocci_id/* net/openvswitch/actions.c 847 */;
	unsigned long cocci_id/* net/openvswitch/actions.c 832 */;
	struct dst_entry cocci_id/* net/openvswitch/actions.c 831 */;
	struct action_flow_keys *cocci_id/* net/openvswitch/actions.c 83 */;
	struct inet_skb_parm cocci_id/* net/openvswitch/actions.c 810 */;
	u8 cocci_id/* net/openvswitch/actions.c 790 */;
	struct dst_ops cocci_id/* net/openvswitch/actions.c 781 */;
	const struct dst_entry *cocci_id/* net/openvswitch/actions.c 776 */;
	unsigned int cocci_id/* net/openvswitch/actions.c 775 */;
	struct action_flow_keys __percpu *cocci_id/* net/openvswitch/actions.c 75 */;
	struct ovs_frag_data *cocci_id/* net/openvswitch/actions.c 743 */;
	struct sock *cocci_id/* net/openvswitch/actions.c 741 */;
	struct action_fifo __percpu *cocci_id/* net/openvswitch/actions.c 74 */;
	struct sctphdr cocci_id/* net/openvswitch/actions.c 718 */;
	__le32 cocci_id/* net/openvswitch/actions.c 715 */;
	struct sctphdr *cocci_id/* net/openvswitch/actions.c 714 */;
	const struct ovs_key_sctp *cocci_id/* net/openvswitch/actions.c 710 */;
	struct action_flow_keys {
		struct sw_flow_key key[OVS_DEFERRED_ACTION_THRESHOLD];
	} cocci_id/* net/openvswitch/actions.c 70 */;
	struct tcphdr cocci_id/* net/openvswitch/actions.c 689 */;
	__be16 cocci_id/* net/openvswitch/actions.c 685 */;
	struct tcphdr *cocci_id/* net/openvswitch/actions.c 684 */;
	const struct ovs_key_tcp *cocci_id/* net/openvswitch/actions.c 681 */;
	struct udphdr cocci_id/* net/openvswitch/actions.c 647 */;
	struct udphdr *cocci_id/* net/openvswitch/actions.c 642 */;
	const struct ovs_key_udp *cocci_id/* net/openvswitch/actions.c 639 */;
	__sum16 *cocci_id/* net/openvswitch/actions.c 632 */;
	__be16 *cocci_id/* net/openvswitch/actions.c 631 */;
	struct action_fifo {
		int head;
		int tail;
		struct deferred_action fifo[DEFERRED_ACTION_FIFO_SIZE];
	} cocci_id/* net/openvswitch/actions.c 63 */;
	struct ovs_key_nsh cocci_id/* net/openvswitch/actions.c 577 */;
	size_t cocci_id/* net/openvswitch/actions.c 571 */;
	struct ipv6hdr cocci_id/* net/openvswitch/actions.c 504 */;
	struct ipv6hdr *cocci_id/* net/openvswitch/actions.c 500 */;
	const struct ovs_key_ipv6 *cocci_id/* net/openvswitch/actions.c 497 */;
	const __be32 cocci_id/* net/openvswitch/actions.c 491 */[4];
	struct iphdr cocci_id/* net/openvswitch/actions.c 453 */;
	struct ovs_frag_data {
		unsigned long dst;
		struct vport *vport;
		struct ovs_skb_cb cb;
		__be16 inner_protocol;
		u16 network_offset;
		u16 vlan_tci;
		__be16 vlan_proto;
		unsigned int l2_len;
		u8 mac_proto;
		u8 l2_data[MAX_L2_LEN];
	} cocci_id/* net/openvswitch/actions.c 45 */;
	const struct ovs_key_ipv4 *cocci_id/* net/openvswitch/actions.c 445 */;
	__be32 cocci_id/* net/openvswitch/actions.c 408 */[4];
	struct icmp6hdr cocci_id/* net/openvswitch/actions.c 401 */;
	__be32 cocci_id/* net/openvswitch/actions.c 372 */;
	struct iphdr *cocci_id/* net/openvswitch/actions.c 371 */;
	struct deferred_action {
		struct sk_buff *skb;
		const struct nlattr *actions;
		int actions_len;
		struct sw_flow_key pkt_key;
	} cocci_id/* net/openvswitch/actions.c 35 */;
	const struct nshhdr *cocci_id/* net/openvswitch/actions.c 314 */;
	struct ethhdr *cocci_id/* net/openvswitch/actions.c 290 */;
	const struct ovs_action_push_eth *cocci_id/* net/openvswitch/actions.c 288 */;
	const struct ovs_key_ethernet *cocci_id/* net/openvswitch/actions.c 249 */;
	const u16 *cocci_id/* net/openvswitch/actions.c 240 */;
	u16 *cocci_id/* net/openvswitch/actions.c 239 */;
	const u8 *cocci_id/* net/openvswitch/actions.c 237 */;
	u8 *cocci_id/* net/openvswitch/actions.c 237 */;
	const struct ovs_action_push_vlan *cocci_id/* net/openvswitch/actions.c 224 */;
	struct mpls_shim_hdr *cocci_id/* net/openvswitch/actions.c 195 */;
	const __be32 *cocci_id/* net/openvswitch/actions.c 193 */;
	const __be16 cocci_id/* net/openvswitch/actions.c 179 */;
	const struct ovs_action_push_mpls *cocci_id/* net/openvswitch/actions.c 164 */;
	int cocci_id/* net/openvswitch/actions.c 159 */(struct datapath *dp,
							struct sk_buff *skb,
							struct sw_flow_key *key,
							const struct nlattr *attr,
							int len);
	int cocci_id/* net/openvswitch/actions.c 153 */(struct datapath *dp,
							struct sk_buff *skb,
							struct sw_flow_key *key,
							u32 recirc_id,
							const struct nlattr *actions,
							int len, bool last,
							bool clone_flow_key);
	struct action_flow_keys cocci_id/* net/openvswitch/actions.c 1495 */;
	struct action_fifo cocci_id/* net/openvswitch/actions.c 1491 */;
	int cocci_id/* net/openvswitch/actions.c 1489 */;
	const struct sw_flow_actions *cocci_id/* net/openvswitch/actions.c 1463 */;
	u32 cocci_id/* net/openvswitch/actions.c 1369 */;
	struct nshhdr *cocci_id/* net/openvswitch/actions.c 1310 */;
	u8 cocci_id/* net/openvswitch/actions.c 1309 */[NSH_HDR_MAX_LEN];
	const int cocci_id/* net/openvswitch/actions.c 126 */;
	const struct nlattr *cocci_id/* net/openvswitch/actions.c 125 */;
	const struct sw_flow_key *cocci_id/* net/openvswitch/actions.c 124 */;
	struct sk_buff *cocci_id/* net/openvswitch/actions.c 123 */;
	struct ovs_action_trunc *cocci_id/* net/openvswitch/actions.c 1215 */;
	const struct check_pkt_len_arg *cocci_id/* net/openvswitch/actions.c 1150 */;
	__be32 *cocci_id/* net/openvswitch/actions.c 1110 */;
	struct ovs_key_sctp *cocci_id/* net/openvswitch/actions.c 1105 */;
	struct ovs_key_udp *cocci_id/* net/openvswitch/actions.c 1100 */;
	struct ovs_key_tcp *cocci_id/* net/openvswitch/actions.c 1095 */;
	struct ovs_key_ipv6 *cocci_id/* net/openvswitch/actions.c 1090 */;
	struct ovs_key_ipv4 *cocci_id/* net/openvswitch/actions.c 1085 */;
	struct ovs_key_ethernet *cocci_id/* net/openvswitch/actions.c 1076 */;
	u32 *cocci_id/* net/openvswitch/actions.c 1060 */;
	struct deferred_action *cocci_id/* net/openvswitch/actions.c 106 */;
	struct action_fifo *cocci_id/* net/openvswitch/actions.c 106 */;
	const type cocci_id/* net/openvswitch/actions.c 1049 */;
	struct dst_entry *cocci_id/* net/openvswitch/actions.c 1040 */;
	struct ovs_tunnel_info *cocci_id/* net/openvswitch/actions.c 1037 */;
	struct ovs_action_hash *cocci_id/* net/openvswitch/actions.c 1019 */;
	bool cocci_id/* net/openvswitch/actions.c 101 */;
	const struct action_fifo *cocci_id/* net/openvswitch/actions.c 101 */;
	struct nlattr *cocci_id/* net/openvswitch/actions.c 1002 */;
	__typeof__(struct ovs_frag_data) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
