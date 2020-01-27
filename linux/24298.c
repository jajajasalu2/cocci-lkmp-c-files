cocci_test_suite() {
	int (*cocci_id/* net/bridge/br_netfilter_hooks.c 999 */)(struct net *,
								 struct sock *,
								 struct sk_buff *);
	struct notifier_block cocci_id/* net/bridge/br_netfilter_hooks.c 986 */;
	struct notifier_block *cocci_id/* net/bridge/br_netfilter_hooks.c 960 */;
	unsigned long cocci_id/* net/bridge/br_netfilter_hooks.c 960 */;
	const struct nf_hook_ops cocci_id/* net/bridge/br_netfilter_hooks.c 921 */[];
	const struct nf_br_ops cocci_id/* net/bridge/br_netfilter_hooks.c 915 */;
	const struct nf_bridge_info *cocci_id/* net/bridge/br_netfilter_hooks.c 906 */;
	const struct nf_ipv6_ops *cocci_id/* net/bridge/br_netfilter_hooks.c 779 */;
	struct brnf_frag_data *cocci_id/* net/bridge/br_netfilter_hooks.c 751 */;
	unsigned int cocci_id/* net/bridge/br_netfilter_hooks.c 733 */;
	struct nf_bridge_info *cocci_id/* net/bridge/br_netfilter_hooks.c 732 */;
	struct sock *cocci_id/* net/bridge/br_netfilter_hooks.c 730 */;
	struct sk_buff *cocci_id/* net/bridge/br_netfilter_hooks.c 730 */;
	struct iphdr *cocci_id/* net/bridge/br_netfilter_hooks.c 708 */;
	struct arphdr cocci_id/* net/bridge/br_netfilter_hooks.c 665 */;
	struct net_device **cocci_id/* net/bridge/br_netfilter_hooks.c 647 */;
	struct net_bridge *cocci_id/* net/bridge/br_netfilter_hooks.c 646 */;
	struct net_bridge_port *cocci_id/* net/bridge/br_netfilter_hooks.c 645 */;
	const struct nf_hook_state *cocci_id/* net/bridge/br_netfilter_hooks.c 643 */;
	void *cocci_id/* net/bridge/br_netfilter_hooks.c 641 */;
	u_int8_t cocci_id/* net/bridge/br_netfilter_hooks.c 581 */;
	struct net_device *cocci_id/* net/bridge/br_netfilter_hooks.c 543 */;
	__u32 cocci_id/* net/bridge/br_netfilter_hooks.c 482 */;
	struct brnf_net {
		bool enabled;
#ifdef CONFIG_SYSCTL
		struct ctl_table_header *ctl_hdr;
#endif
		int call_iptables;
		int call_ip6tables;
		int call_arptables;
		int filter_vlan_tagged;
		int filter_pppoe_tagged;
		int pass_vlan_indev;
	} cocci_id/* net/bridge/br_netfilter_hooks.c 48 */;
	const struct net *cocci_id/* net/bridge/br_netfilter_hooks.c 429 */;
	struct in_device *cocci_id/* net/bridge/br_netfilter_hooks.c 369 */;
	struct rtable *cocci_id/* net/bridge/br_netfilter_hooks.c 357 */;
	const struct sk_buff *cocci_id/* net/bridge/br_netfilter_hooks.c 307 */;
	bool cocci_id/* net/bridge/br_netfilter_hooks.c 306 */;
	struct dst_entry *cocci_id/* net/bridge/br_netfilter_hooks.c 269 */;
	struct neighbour *cocci_id/* net/bridge/br_netfilter_hooks.c 268 */;
	struct inet_skb_parm cocci_id/* net/bridge/br_netfilter_hooks.c 229 */;
	u8 *cocci_id/* net/bridge/br_netfilter_hooks.c 214 */;
	struct iphdr cocci_id/* net/bridge/br_netfilter_hooks.c 201 */;
	u32 cocci_id/* net/bridge/br_netfilter_hooks.c 199 */;
	const struct iphdr *cocci_id/* net/bridge/br_netfilter_hooks.c 198 */;
	const struct net_device *cocci_id/* net/bridge/br_netfilter_hooks.c 150 */;
	struct brnf_frag_data {
		char mac[NF_BRIDGE_MAX_MAC_HEADER_LENGTH];
		u8 encap_size;
		u8 size;
		u16 vlan_tci;
		__be16 vlan_proto;
	} cocci_id/* net/bridge/br_netfilter_hooks.c 135 */;
	void __exit cocci_id/* net/bridge/br_netfilter_hooks.c 1182 */;
	void cocci_id/* net/bridge/br_netfilter_hooks.c 1182 */;
	int cocci_id/* net/bridge/br_netfilter_hooks.c 1165 */;
	int __init cocci_id/* net/bridge/br_netfilter_hooks.c 1163 */;
	struct brnf_net cocci_id/* net/bridge/br_netfilter_hooks.c 1160 */;
	struct pernet_operations cocci_id/* net/bridge/br_netfilter_hooks.c 1154 */;
	void __net_exit cocci_id/* net/bridge/br_netfilter_hooks.c 1139 */;
	int __net_init cocci_id/* net/bridge/br_netfilter_hooks.c 1133 */;
	struct ctl_table *cocci_id/* net/bridge/br_netfilter_hooks.c 1126 */;
	struct net *cocci_id/* net/bridge/br_netfilter_hooks.c 1123 */;
	struct pppoe_hdr cocci_id/* net/bridge/br_netfilter_hooks.c 111 */;
	__be16 *cocci_id/* net/bridge/br_netfilter_hooks.c 110 */;
	struct brnf_net *cocci_id/* net/bridge/br_netfilter_hooks.c 1081 */;
	__be16 cocci_id/* net/bridge/br_netfilter_hooks.c 108 */;
	struct ctl_table cocci_id/* net/bridge/br_netfilter_hooks.c 1041 */[];
	int *cocci_id/* net/bridge/br_netfilter_hooks.c 1036 */;
	loff_t *cocci_id/* net/bridge/br_netfilter_hooks.c 1030 */;
	size_t *cocci_id/* net/bridge/br_netfilter_hooks.c 1030 */;
	void __user *cocci_id/* net/bridge/br_netfilter_hooks.c 1030 */;
	struct nf_hook_ops **cocci_id/* net/bridge/br_netfilter_hooks.c 1004 */;
	struct nf_hook_state cocci_id/* net/bridge/br_netfilter_hooks.c 1003 */;
	const struct nf_hook_entries *cocci_id/* net/bridge/br_netfilter_hooks.c 1002 */;
	__typeof__(struct brnf_frag_data) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
