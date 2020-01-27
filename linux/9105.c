cocci_test_suite() {
	struct mlx5_flow_act cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 913 */;
	struct mlx5_flow_destination cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 912 */[2];
	struct mlx5_nic_flow_attr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 910 */;
	struct mlx5_flow_context *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 909 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 787 */;
	struct mlx5e_hairpin_entry *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 785 */;
	struct mlx5_hairpin_params cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 783 */;
	enum{MLX5E_TC_FLOW_FLAG_INGRESS=MLX5E_TC_FLAG_INGRESS_BIT, MLX5E_TC_FLOW_FLAG_EGRESS=MLX5E_TC_FLAG_EGRESS_BIT, MLX5E_TC_FLOW_FLAG_ESWITCH=MLX5E_TC_FLAG_ESW_OFFLOAD_BIT, MLX5E_TC_FLOW_FLAG_FT=MLX5E_TC_FLAG_FT_OFFLOAD_BIT, MLX5E_TC_FLOW_FLAG_NIC=MLX5E_TC_FLAG_NIC_OFFLOAD_BIT, MLX5E_TC_FLOW_FLAG_OFFLOADED=MLX5E_TC_FLOW_BASE, MLX5E_TC_FLOW_FLAG_HAIRPIN=MLX5E_TC_FLOW_BASE + 1, MLX5E_TC_FLOW_FLAG_HAIRPIN_RSS=MLX5E_TC_FLOW_BASE + 2, MLX5E_TC_FLOW_FLAG_SLOW=MLX5E_TC_FLOW_BASE + 3, MLX5E_TC_FLOW_FLAG_DUP=MLX5E_TC_FLOW_BASE + 4, MLX5E_TC_FLOW_FLAG_NOT_READY=MLX5E_TC_FLOW_BASE + 5, MLX5E_TC_FLOW_FLAG_DELETED=MLX5E_TC_FLOW_BASE + 6,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 73 */;
	struct mlx5_hairpin *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 647 */;
	struct mlx5_hairpin_params *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 642 */;
	struct mlx5e_hairpin *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 641 */;
	struct mlx5_nic_flow_attr {
		u32 action;
		u32 flow_tag;
		struct mlx5_modify_hdr *modify_hdr;
		u32 hairpin_tirn;
		u8 match_level;
		struct mlx5_flow_table *hairpin_ft;
		struct mlx5_fc *counter;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 61 */;
	struct ttc_params cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 603 */;
	struct mlx5_flow_table_attr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 585 */;
	struct ttc_params *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 583 */;
	struct mlx5e_tirc_config cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 549 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 544 */[MLX5_ST_SZ_DW(create_tir_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 496 */[MLX5E_INDIR_RQT_SIZE];
	struct net *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 450 */;
	struct mlx5_rep_uplink_priv cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 4209 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 4206 */;
	struct mlx5e_priv cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 4118 */;
	struct mlx5e_flow_steering cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 4117 */;
	struct mlx5e_tc_table cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 4116 */;
	struct mlx5e_tc_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 4108 */;
	struct mlx5e_flow_steering *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 4106 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 4102 */;
	struct rtnl_link_stats64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 4062 */;
	struct tc_cls_matchall_offload *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 4038 */;
	struct mlx5_fc *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3915 */;
	struct mlx5_devcom *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3911 */;
	struct mlx5_nic_flow_attr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3768 */;
	struct mlx5e_tc_flow **cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3721 */;
	struct mlx5_esw_flow_attr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3629 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3626 */;
	struct mlx5e_tc_flow_parse_attr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3624 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3623 */;
	struct flow_rule *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3622 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3620 */;
	struct mlx5_eswitch_rep *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3619 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3618 */;
	struct flow_cls_offload *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3616 */;
	struct mlx5e_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3615 */;
	struct mod_hdr_key cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 360 */;
	struct mlx5e_mod_hdr_entry *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 358 */;
	struct mlx5e_tc_flow_parse_attr **cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3555 */;
	struct rhashtable *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3518 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3511 */;
	unsigned long *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3492 */;
	struct pedit_headers_action cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3228 */[2];
	struct flow_action_entry cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3199 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3196 */;
	struct mlx5_esw_flow_attr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3195 */;
	struct net_device **cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3170 */;
	struct mod_hdr_tbl *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 305 */;
	uintptr_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3017 */;
	unsigned short cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3016 */;
	struct mlx5e_encap_entry *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3015 */;
	struct encap_key cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3014 */;
	bool *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 3008 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2997 */;
	const struct ip_tunnel_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2995 */;
	struct ip_tunnel_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2995 */;
	struct mod_hdr_key *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 296 */;
	struct encap_key *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2941 */;
	struct encap_key {
		const struct ip_tunnel_key *ip_tun_key;
		struct mlx5e_tc_tunnel *tc_tunnel;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2936 */;
	const struct flow_action_entry cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2808 */;
	struct pedit_headers_action *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2805 */;
	__be16 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2770 */;
	struct vlan_ethhdr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2769 */;
	const struct flow_action_entry *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2759 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2723 */;
	struct flow_action *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2718 */;
	struct ipv6hdr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2664 */;
	struct ipv6_hoplimit_word *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2661 */;
	struct iphdr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2655 */;
	struct ip_ttl_word *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2652 */;
	struct ipv6_hoplimit_word {
		__be16 payload_len;
		__u8 nexthdr;
		__u8 hop_limit;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2633 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 263 */;
	struct ip_ttl_word {
		__u8 ttl;
		__u8 protocol;
		__sum16 check;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2627 */;
	struct pedit_headers *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2563 */;
	struct mlx5e_tc_flow *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 253 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 253 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 253 */;
	const struct pedit_headers cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2515 */;
	__be32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2435 */;
	__be16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2358 */;
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2357 */;
	struct mlx5_fields *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2355 */;
	struct mlx5_fields cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2302 */[];
	type cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2273 */;
	type *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2273 */;
	struct mlx5_fields {
		u8 field;
		u8 field_bsize;
		u32 field_mask;
		u32 offset;
		u32 match_offset;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2256 */;
	struct pedit_headers cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2227 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2226 */[];
	struct pedit_headers_action {
		struct pedit_headers vals;
		struct pedit_headers masks;
		u32 pedits;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2220 */;
	struct pedit_headers {
		struct ethhdr eth;
		struct vlan_hdr vlan;
		struct iphdr ip4;
		struct ipv6hdr ip6;
		struct tcphdr tcp;
		struct udphdr udp;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2211 */;
	struct flow_match_tcp cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2148 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 214 */(struct mlx5e_priv *priv,
									       struct mlx5e_tc_flow *flow);
	struct flow_match_ports cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2108 */;
	struct flow_match_ip cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2075 */;
	struct flow_match_ipv6_addrs cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2052 */;
	struct flow_match_ipv4_addrs cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 2031 */;
	struct flow_match_control cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1992 */;
	struct flow_match_eth_addrs cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1969 */;
	struct mlx5e_mod_hdr_entry {
		struct hlist_node mod_hdr_hlist;
		spinlock_t flows_lock;
		struct list_head flows;
		struct mod_hdr_key key;
		struct mlx5_modify_hdr *modify_hdr;
		refcount_t refcnt;
		struct completion res_ready;
		int compl_result;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 194 */;
	struct mod_hdr_key {
		int num_actions;
		void *actions;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 189 */;
	struct flow_match_vlan cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1887 */;
	struct flow_dissector_key_vlan cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1885 */;
	struct flow_match_basic cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1872 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1826 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1825 */;
	struct flow_dissector *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1824 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1815 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1812 */;
	struct mlx5_flow_spec *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1809 */;
	struct mlx5e_hairpin_entry {
		struct hlist_node hairpin_hlist;
		spinlock_t flows_lock;
		struct list_head flows;
		struct list_head dead_peer_wait_list;
		u16 peer_vhca_id;
		u8 prio;
		struct mlx5e_hairpin *hp;
		refcount_t refcnt;
		struct completion res_ready;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 169 */;
	struct mlx5_eswitch *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1617 */;
	struct mlx5e_hairpin {
		struct mlx5_hairpin *pair;
		struct mlx5_core_dev *func_mdev;
		struct mlx5e_priv *func_priv;
		u32 tdn;
		u32 tirn;
		int num_channels;
		struct mlx5e_rqt indir_rqt;
		u32 indir_tirn[MLX5E_NUM_INDIR_TIRS];
		struct mlx5e_ttc_table ttc;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 155 */;
	struct neighbour *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1498 */;
	struct neigh_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1496 */;
	struct mlx5e_neigh *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1492 */;
	struct mlx5e_encap_entry cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1458 */;
	struct mlx5e_neigh_hash_entry *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1446 */;
	struct list_head *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1437 */;
	struct mlx5e_tc_flow cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1426 */;
	struct encap_flow_item *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1422 */;
	struct mlx5e_tc_flow_parse_attr {
		const struct ip_tunnel_info *tun_info[MLX5_MAX_FLOW_FWD_VPORTS];
		struct net_device *filter_dev;
		struct mlx5_flow_spec spec;
		int num_mod_hdr_actions;
		int max_mod_hdr_actions;
		void *mod_hdr_actions;
		int mirred_ifindex[MLX5_MAX_FLOW_FWD_VPORTS];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 142 */;
	struct mlx5_flow_handle *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1311 */;
	struct mlx5e_tc_flow {
		struct rhash_head node;
		struct mlx5e_priv *priv;
		u64 cookie;
		unsigned long flags;
		struct mlx5_flow_handle *rule[MLX5E_TC_MAX_SPLITS + 1];
		struct encap_flow_item encaps[MLX5_MAX_FLOW_FWD_VPORTS];
		struct mlx5e_tc_flow *peer_flow;
		struct mlx5e_mod_hdr_entry *mh;
		struct list_head mod_hdr;
		struct mlx5e_hairpin_entry *hpe;
		struct list_head hairpin;
		struct list_head peer;
		struct list_head unready;
		int tmp_efi_index;
		struct list_head tmp_list;
		refcount_t refcnt;
		struct rcu_head rcu_head;
		struct completion init_done;
		union {
			struct mlx5_esw_flow_attr esw_attr[0];
			struct mlx5_nic_flow_attr nic_attr[0];
		};
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 113 */;
	struct mlx5e_rep_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1127 */;
	struct mlx5_rep_uplink_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1126 */;
	struct encap_flow_item {
		struct mlx5e_encap_entry *e;
		struct list_head list;
		int index;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 107 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1028 */(struct mlx5e_priv *priv,
									       struct mlx5e_tc_flow *flow,
									       struct net_device *mirred_dev,
									       int out_index,
									       struct netlink_ext_ack *extack,
									       struct net_device **encap_dev,
									       bool *encap_valid);
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_tc.c 1025 */(struct mlx5e_priv *priv,
										struct mlx5e_tc_flow *flow,
										int out_index);
}
