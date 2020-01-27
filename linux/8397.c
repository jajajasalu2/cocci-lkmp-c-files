cocci_test_suite() {
	unsigned char *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 994 */;
	u32 cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 982 */;
	struct nfp_tun_pre_tun_rule cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 981 */;
	struct nfp_flower_priv *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 980 */;
	struct nfp_fl_payload *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 978 */;
	struct net_device *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 939 */;
	struct nfp_tun_offloaded_mac *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 937 */;
	struct nfp_ipv4_route_entry {
		__be32 ipv4_addr;
		struct list_head list;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 90 */;
	struct netdev_notifier_changeupper_info *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 897 */;
	struct nfp_tun_req_route_ipv4 {
		__be32 ingress_port;
		__be32 ipv4_addr;
		__be32 reserved[2];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 79 */;
	struct nfp_flower_non_repr_priv *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 758 */;
	enum nfp_flower_mac_offload_cmd cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 756 */;
	struct nfp_flower_repr_priv cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 719 */;
	struct nfp_repr *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 679 */;
	struct nfp_flower_repr_priv *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 677 */;
	struct nfp_tun_neigh {
		__be32 dst_ipv4;
		__be32 src_ipv4;
		u8 dst_addr[ETH_ALEN];
		u8 src_addr[ETH_ALEN];
		__be32 port_id;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 65 */;
	struct nfp_tun_mac_addr_offload cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 508 */;
	u16 cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 506 */;
	bool cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 506 */;
	u8 *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 506 */;
	struct nfp_app *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 506 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 505 */;
	struct nfp_tun_active_tuns {
		__be32 seq;
		__be32 count;
		__be32 flags;
		struct route_ip_info {
			__be32 ipv4;
			__be32 egress_port;
			__be32 extra[2];
		} tun_info[];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 46 */;
	struct nfp_ipv4_addr_entry cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 441 */;
	struct nfp_tun_ipv4_addr cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 428 */;
	struct nfp_ipv4_addr_entry *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 427 */;
	struct nfp_tun_req_route_ipv4 *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 382 */;
	struct nfp_flower_priv cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 351 */;
	__be32 *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 349 */;
	struct rtable *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 334 */;
	struct neighbour *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 332 */;
	struct flowi4 cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 331 */;
	struct netevent_redirect *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 330 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 326 */;
	unsigned long cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 326 */;
	struct nfp_tun_neigh cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 293 */;
	struct flowi4 *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 291 */;
	struct nfp_tun_pre_tun_rule {
		__be32 flags;
		__be16 port_idx;
		__be16 vlan_tci;
		__be32 host_ctx_id;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 29 */;
	struct nfp_ipv4_route_entry cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 253 */;
	struct list_head *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 249 */;
	struct nfp_ipv4_route_entry *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 248 */;
	__be32 cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 245 */;
	void cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 245 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 213 */;
	gfp_t cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 211 */;
	u8 cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 210 */;
	void *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 210 */;
	struct nfp_tun_active_tuns *cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 170 */;
	struct nfp_tun_offloaded_mac cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 162 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 161 */;
	struct nfp_tun_offloaded_mac {
		struct rhash_head ht_node;
		u8 addr[ETH_ALEN];
		u16 index;
		int ref_count;
		struct list_head repr_list;
		int bridge_count;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 152 */;
	enum nfp_flower_mac_offload_cmd{NFP_TUNNEL_MAC_OFFLOAD_ADD=0, NFP_TUNNEL_MAC_OFFLOAD_DEL=1, NFP_TUNNEL_MAC_OFFLOAD_MOD=2,} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 135 */;
	struct nfp_tun_mac_addr_offload {
		__be16 flags;
		__be16 count;
		__be16 index;
		u8 addr[ETH_ALEN];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 128 */;
	struct nfp_ipv4_addr_entry {
		__be32 ipv4_addr;
		int ref_count;
		struct list_head list;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 113 */;
	struct nfp_tun_ipv4_addr {
		__be32 count;
		__be32 ipv4_addr[NFP_FL_IPV4_ADDRS_MAX];
	} cocci_id/* drivers/net/ethernet/netronome/nfp/flower/tunnel_conf.c 102 */;
}
