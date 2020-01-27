cocci_test_suite() {
	struct flow_block_offload cocci_id/* net/netfilter/nf_flow_table_offload.c 816 */;
	enum flow_block_command cocci_id/* net/netfilter/nf_flow_table_offload.c 788 */;
	struct flow_block_offload *cocci_id/* net/netfilter/nf_flow_table_offload.c 787 */;
	s64 cocci_id/* net/netfilter/nf_flow_table_offload.c 762 */;
	struct flow_offload_work cocci_id/* net/netfilter/nf_flow_table_offload.c 728 */;
	struct flow_offload *cocci_id/* net/netfilter/nf_flow_table_offload.c 724 */;
	struct flow_offload_work *cocci_id/* net/netfilter/nf_flow_table_offload.c 714 */;
	struct work_struct *cocci_id/* net/netfilter/nf_flow_table_offload.c 683 */;
	u64 cocci_id/* net/netfilter/nf_flow_table_offload.c 673 */;
	struct flow_stats cocci_id/* net/netfilter/nf_flow_table_offload.c 672 */[FLOW_OFFLOAD_DIR_MAX];
	struct flow_stats *cocci_id/* net/netfilter/nf_flow_table_offload.c 653 */;
	struct nf_flow_rule *cocci_id/* net/netfilter/nf_flow_table_offload.c 631 */[FLOW_OFFLOAD_DIR_MAX];
	struct nf_flow_rule *cocci_id/* net/netfilter/nf_flow_table_offload.c 615 */[];
	__be16 cocci_id/* net/netfilter/nf_flow_table_offload.c 575 */;
	struct netlink_ext_ack cocci_id/* net/netfilter/nf_flow_table_offload.c 574 */;
	struct flow_block_cb *cocci_id/* net/netfilter/nf_flow_table_offload.c 573 */;
	struct flow_cls_offload cocci_id/* net/netfilter/nf_flow_table_offload.c 572 */;
	struct nf_flowtable *cocci_id/* net/netfilter/nf_flow_table_offload.c 571 */;
	unsigned long cocci_id/* net/netfilter/nf_flow_table_offload.c 564 */;
	struct netlink_ext_ack *cocci_id/* net/netfilter/nf_flow_table_offload.c 558 */;
	enum flow_cls_command cocci_id/* net/netfilter/nf_flow_table_offload.c 556 */;
	struct flow_cls_offload *cocci_id/* net/netfilter/nf_flow_table_offload.c 554 */;
	struct nf_flow_key *cocci_id/* net/netfilter/nf_flow_table_offload.c 55 */;
	const struct flow_offload_work *cocci_id/* net/netfilter/nf_flow_table_offload.c 534 */;
	struct nf_flow_match *cocci_id/* net/netfilter/nf_flow_table_offload.c 52 */;
	int cocci_id/* net/netfilter/nf_flow_table_offload.c 513 */;
	struct flow_action_entry *cocci_id/* net/netfilter/nf_flow_table_offload.c 512 */;
	struct nf_flow_rule *cocci_id/* net/netfilter/nf_flow_table_offload.c 510 */;
	void cocci_id/* net/netfilter/nf_flow_table_offload.c 510 */;
	struct nf_flow_key cocci_id/* net/netfilter/nf_flow_table_offload.c 50 */;
	const struct nf_flowtable *cocci_id/* net/netfilter/nf_flow_table_offload.c 473 */;
	struct nf_flow_rule {
		struct nf_flow_match match;
		struct flow_rule *rule;
	} cocci_id/* net/netfilter/nf_flow_table_offload.c 43 */;
	struct rtable *cocci_id/* net/netfilter/nf_flow_table_offload.c 409 */;
	u8 cocci_id/* net/netfilter/nf_flow_table_offload.c 388 */;
	struct nf_flow_match {
		struct flow_dissector dissector;
		struct nf_flow_key key;
		struct nf_flow_key mask;
	} cocci_id/* net/netfilter/nf_flow_table_offload.c 37 */;
	struct ipv6hdr cocci_id/* net/netfilter/nf_flow_table_offload.c 300 */;
	const __be32 *cocci_id/* net/netfilter/nf_flow_table_offload.c 294 */;
	struct nf_flow_key {
		struct flow_dissector_key_control control;
		struct flow_dissector_key_basic basic;
		union {
			struct flow_dissector_key_ipv4_addrs ipv4;
			struct flow_dissector_key_ipv6_addrs ipv6;
		};
		struct flow_dissector_key_tcp tcp;
		struct flow_dissector_key_ports tp;
	}__aligned(BITS_PER_LONG/8) cocci_id/* net/netfilter/nf_flow_table_offload.c 26 */;
	struct in6_addr cocci_id/* net/netfilter/nf_flow_table_offload.c 256 */;
	unsigned int cocci_id/* net/netfilter/nf_flow_table_offload.c 250 */;
	struct iphdr cocci_id/* net/netfilter/nf_flow_table_offload.c 235 */;
	__be32 cocci_id/* net/netfilter/nf_flow_table_offload.c 229 */;
	struct flow_offload_work {
		struct list_head list;
		enum flow_cls_command cmd;
		int priority;
		struct nf_flowtable *flowtable;
		struct flow_offload *flow;
	} cocci_id/* net/netfilter/nf_flow_table_offload.c 18 */;
	u16 cocci_id/* net/netfilter/nf_flow_table_offload.c 174 */;
	u32 cocci_id/* net/netfilter/nf_flow_table_offload.c 173 */;
	struct neighbour *cocci_id/* net/netfilter/nf_flow_table_offload.c 172 */;
	const struct flow_offload_tuple *cocci_id/* net/netfilter/nf_flow_table_offload.c 169 */;
	enum flow_offload_tuple_dir cocci_id/* net/netfilter/nf_flow_table_offload.c 166 */;
	const struct flow_offload *cocci_id/* net/netfilter/nf_flow_table_offload.c 165 */;
	struct net *cocci_id/* net/netfilter/nf_flow_table_offload.c 164 */;
	struct net_device *cocci_id/* net/netfilter/nf_flow_table_offload.c 141 */;
	struct work_struct cocci_id/* net/netfilter/nf_flow_table_offload.c 14 */;
	enum flow_action_mangle_base cocci_id/* net/netfilter/nf_flow_table_offload.c 115 */;
}
