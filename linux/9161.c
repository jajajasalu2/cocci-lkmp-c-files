cocci_test_suite() {
	struct mlxsw_sp_fid *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 90 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 853 */;
	struct mlxsw_sp_acl_rule cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 85 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 83 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 829 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 825 */;
	struct mlxsw_sp_acl cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 812 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 810 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 804 */;
	struct mlxsw_sp_acl_ruleset cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 78 */;
	struct mlxsw_sp_acl_rule_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 742 */;
	struct mlxsw_afa_block *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 738 */;
	struct mlxsw_sp_acl_rule *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 737 */;
	struct mlxsw_sp_acl_rule {
		struct rhash_head ht_node;
		struct list_head list;
		unsigned long cookie;
		struct mlxsw_sp_acl_ruleset *ruleset;
		struct mlxsw_sp_acl_rule_info *rulei;
		u64 last_used;
		u64 last_packets;
		u64 last_bytes;
		unsigned long priv[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 63 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 625 */;
	struct mlxsw_sp_acl_block_binding cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 573 */;
	struct mlxsw_sp_acl_ruleset {
		struct rhash_head ht_node;
		struct mlxsw_sp_acl_ruleset_ht_key ht_key;
		struct rhashtable rule_ht;
		unsigned int ref_count;
		unsigned long priv[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 54 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 533 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 529 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 493 */;
	enum mlxsw_afk_element cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 492 */;
	struct mlxsw_sp_acl_ruleset_ht_key {
		struct mlxsw_sp_acl_block *block;
		u32 chain_index;
		const struct mlxsw_sp_acl_profile_ops *ops;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 48 */;
	struct mlxsw_sp_acl_block_binding {
		struct list_head list;
		struct net_device *dev;
		struct mlxsw_sp_port *mlxsw_sp_port;
		bool ingress;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 41 */;
	enum mlxsw_sp_acl_profile cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 403 */;
	struct mlxsw_sp_acl_ruleset_ht_key cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 372 */;
	const struct mlxsw_sp_acl_profile_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 370 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 369 */;
	struct mlxsw_sp_acl_block *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 369 */;
	struct mlxsw_sp_acl *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 368 */;
	struct mlxsw_sp_acl_ruleset *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 367 */;
	struct mlxsw_afk *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 36 */;
	struct mlxsw_afk_element_usage *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 300 */;
	struct mlxsw_sp_acl_block_binding *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 245 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 243 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 242 */;
	struct mlxsw_sp_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 241 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 239 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 239 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 220 */;
	struct mlxsw_sp_acl {
		struct mlxsw_sp *mlxsw_sp;
		struct mlxsw_afk *afk;
		struct mlxsw_sp_fid *dummy_fid;
		struct rhashtable ruleset_ht;
		struct list_head rules;
		struct {
			struct delayed_work dw;
			unsigned long interval;
#define MLXSW_SP_ACL_RULE_ACTIVITY_UPDATE_PERIOD_MS 1000
		} rule_activity_update;
		struct mlxsw_sp_acl_tcam tcam;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 22 */;
	struct net *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 207 */;
	const struct mlxsw_sp_acl_ruleset *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 134 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl.c 100 */;
}
