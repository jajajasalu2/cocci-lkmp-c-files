cocci_test_suite() {
	enum mlxsw_afa_forward_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 992 */;
	enum mlxsw_afa_forward_type{MLXSW_AFA_FORWARD_TYPE_PBS, MLXSW_AFA_FORWARD_TYPE_OUTPUT,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 970 */;
	struct mlxsw_afa_mirror *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 938 */;
	const struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 935 */;
	struct mlxsw_afa_mirror cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 886 */;
	struct mlxsw_afa_mirror {
		struct mlxsw_afa_resource resource;
		int span_id;
		u8 local_in_port;
		bool ingress;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 861 */;
	struct mlxsw_afa_set {
		struct rhash_head ht_node;
		struct mlxsw_afa_set_ht_key ht_key;
		u32 kvdl_index;
		bool shared;
		unsigned int ref_count;
		struct mlxsw_afa_set *next;
		struct mlxsw_afa_set *prev;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 82 */;
	enum mlxsw_afa_trapdisc_forward_action cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 800 */;
	enum mlxsw_afa_trapdisc_trap_action cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 799 */;
	enum mlxsw_afa_trapdisc_forward_action{MLXSW_AFA_TRAPDISC_FORWARD_ACTION_FORWARD=1, MLXSW_AFA_TRAPDISC_FORWARD_ACTION_DISCARD=3,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 772 */;
	enum mlxsw_afa_trapdisc_trap_action{MLXSW_AFA_TRAPDISC_TRAP_ACTION_NOP=0, MLXSW_AFA_TRAPDISC_TRAP_ACTION_TRAP=2,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 762 */;
	enum mlxsw_afa_vlan_cmd cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 717 */;
	enum mlxsw_afa_vlan_vlan_tag_cmd cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 716 */;
	struct mlxsw_afa_set_ht_key {
		char enc_actions[MLXSW_AFA_SET_LEN];
		bool is_first;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 70 */;
	enum mlxsw_afa_vlan_cmd{MLXSW_AFA_VLAN_CMD_NOP, MLXSW_AFA_VLAN_CMD_SET_OUTER, MLXSW_AFA_VLAN_CMD_SET_INNER, MLXSW_AFA_VLAN_CMD_COPY_OUTER_TO_INNER, MLXSW_AFA_VLAN_CMD_COPY_INNER_TO_OUTER, MLXSW_AFA_VLAN_CMD_SWAP,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 680 */;
	enum mlxsw_afa_vlan_vlan_tag_cmd{MLXSW_AFA_VLAN_VLAN_TAG_CMD_NOP, MLXSW_AFA_VLAN_VLAN_TAG_CMD_PUSH_TAG, MLXSW_AFA_VLAN_VLAN_TAG_CMD_POP_TAG,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 674 */;
	struct mlxsw_afa_set *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 643 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 634 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 633 */;
	struct mlxsw_afa_counter cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 603 */;
	struct mlxsw_afa {
		unsigned int max_acts_per_set;
		const struct mlxsw_afa_ops *ops;
		void *ops_priv;
		struct rhashtable set_ht;
		struct rhashtable fwd_entry_ht;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 60 */;
	struct mlxsw_afa_resource *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 599 */;
	struct mlxsw_afa_counter {
		struct mlxsw_afa_resource resource;
		u32 counter_index;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 582 */;
	struct mlxsw_afa_fwd_entry_ref cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 552 */;
	struct mlxsw_afa_fwd_entry_ref {
		struct mlxsw_afa_resource resource;
		struct mlxsw_afa_fwd_entry *fwd_entry;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 532 */;
	struct mlxsw_afa_fwd_entry_ht_key cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 511 */;
	struct mlxsw_afa_fwd_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 465 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 425 */;
	bool *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 423 */;
	struct mlxsw_afa_block *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 423 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 423 */;
	enum mlxsw_afa_set_goto_binding_cmd{MLXSW_AFA_SET_GOTO_BINDING_CMD_NONE, MLXSW_AFA_SET_GOTO_BINDING_CMD_JUMP, MLXSW_AFA_SET_GOTO_BINDING_CMD_TERM=4,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 37 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 351 */;
	struct mlxsw_afa *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 313 */;
	struct mlxsw_afa_resource {
		struct list_head list;
		void (*destructor)(struct mlxsw_afa_block *block,
				   struct mlxsw_afa_resource *resource);
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 287 */;
	struct mlxsw_afa_block {
		struct mlxsw_afa *afa;
		bool finished;
		struct mlxsw_afa_set *first_set;
		struct mlxsw_afa_set *cur_set;
		unsigned int cur_act_index;
		struct list_head resource_list;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 276 */;
	enum mlxsw_afa_set_goto_binding_cmd cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 163 */;
	enum mlxsw_afa_set_type{MLXSW_AFA_SET_TYPE_NEXT, MLXSW_AFA_SET_TYPE_GOTO,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 15 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 126 */;
	const struct mlxsw_afa_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 125 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 124 */;
	enum mlxsw_afa_mrouter_vrmid cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1210 */;
	enum mlxsw_afa_mcrouter_rpf_action cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1208 */;
	struct mlxsw_afa_fwd_entry cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 119 */;
	enum mlxsw_afa_mrouter_vrmid{MLXSW_AFA_MCROUTER_VRMID_INVALID, MLXSW_AFA_MCROUTER_VRMID_VALID,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1188 */;
	enum mlxsw_afa_mcrouter_rpf_action{MLXSW_AFA_MCROUTER_RPF_ACTION_NOP, MLXSW_AFA_MCROUTER_RPF_ACTION_TRAP, MLXSW_AFA_MCROUTER_RPF_ACTION_DISCARD_ERROR,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1173 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 117 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1149 */;
	enum mlxsw_afa_virfwd_fid_cmd cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1142 */;
	enum mlxsw_afa_virfwd_fid_cmd{MLXSW_AFA_VIRFWD_FID_CMD_NOOP, MLXSW_AFA_VIRFWD_FID_CMD_SET,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1126 */;
	struct mlxsw_afa_fwd_entry {
		struct rhash_head ht_node;
		struct mlxsw_afa_fwd_entry_ht_key ht_key;
		u32 kvdl_index;
		unsigned int ref_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 110 */;
	struct mlxsw_afa_counter *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1091 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1089 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1088 */;
	enum mlxsw_afa_polcnt_counter_set_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1067 */;
	struct mlxsw_afa_fwd_entry_ht_key {
		u8 local_port;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 106 */;
	enum mlxsw_afa_polcnt_counter_set_type{MLXSW_AFA_POLCNT_COUNTER_SET_TYPE_NO_COUNT=0x00, MLXSW_AFA_POLCNT_COUNTER_SET_TYPE_PACKETS_BYTES=0x03, MLXSW_AFA_POLCNT_COUNTER_SET_TYPE_PACKETS=0x05,} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1046 */;
	struct mlxsw_afa_set cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 101 */;
	struct mlxsw_afa_fwd_entry_ref *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1004 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 1001 */;
	struct mlxsw_afa_set_ht_key cocci_id/* drivers/net/ethernet/mellanox/mlxsw/core_acl_flex_actions.c 100 */;
}
