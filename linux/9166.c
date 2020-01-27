cocci_test_suite() {
	struct mlxsw_sp_acl_tcam_vgroup *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 985 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 98 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 973 */;
	const struct mlxsw_sp_acl_tcam_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 960 */;
	struct mlxsw_sp_acl_tcam_region *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 958 */;
	struct mlxsw_sp_acl_tcam_vchunk *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 957 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 956 */;
	struct mlxsw_sp_acl_tcam_chunk *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 955 */;
	struct mlxsw_afk_element_usage cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 918 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 877 */;
	struct mlxsw_sp_acl_tcam *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 86 */;
	struct mlxsw_afk *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 800 */;
	struct mlxsw_sp_acl_tcam_vregion cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 754 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 751 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 746 */(struct mlxsw_sp *mlxsw_sp,
										       struct mlxsw_sp_acl_tcam_vregion *vregion,
										       int *credits);
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 738 */;
	struct mlxsw_sp_acl_tcam_vregion *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 671 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 661 */[MLXSW_REG_PACL_LEN];
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 611 */[MLXSW_REG_PTAR_LEN];
	struct mlxsw_afk_key_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 610 */;
	typeof(*vregion) cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 534 */;
	typeof(*vregion2) cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 493 */;
	typeof(*region2) cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 444 */;
	struct list_head *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 427 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 423 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 39 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 364 */[MLXSW_REG_PPBT_LEN];
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 36 */;
	const struct mlxsw_sp_acl_tcam_pattern *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 316 */;
	struct mlxsw_sp_acl_tcam_group *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 288 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 268 */[MLXSW_REG_PAGT_LEN];
	struct mlxsw_sp_acl_tcam_vchunk cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 259 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 257 */;
	struct mlxsw_sp_acl_tcam_ventry {
		struct mlxsw_sp_acl_tcam_entry *entry;
		struct list_head list;
		struct mlxsw_sp_acl_tcam_vchunk *vchunk;
		struct mlxsw_sp_acl_rule_info *rulei;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 250 */;
	struct mlxsw_sp_acl_tcam_entry {
		struct mlxsw_sp_acl_tcam_ventry *ventry;
		struct mlxsw_sp_acl_tcam_chunk *chunk;
		unsigned long priv[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 243 */;
	struct mlxsw_sp_acl_tcam_vchunk {
		struct mlxsw_sp_acl_tcam_chunk *chunk;
		struct mlxsw_sp_acl_tcam_chunk *chunk2;
		struct list_head list;
		struct rhash_head ht_node;
		struct list_head ventry_list;
		unsigned int priority;
		struct mlxsw_sp_acl_tcam_vgroup *vgroup;
		struct mlxsw_sp_acl_tcam_vregion *vregion;
		unsigned int ref_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 231 */;
	struct mlxsw_sp_acl_tcam_chunk {
		struct mlxsw_sp_acl_tcam_vchunk *vchunk;
		struct mlxsw_sp_acl_tcam_region *region;
		unsigned long priv[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 224 */;
	struct mlxsw_sp_acl_tcam_vregion {
		struct mutex lock;
		struct mlxsw_sp_acl_tcam_region *region;
		struct mlxsw_sp_acl_tcam_region *region2;
		struct list_head list;
		struct list_head tlist;
		struct list_head vchunk_list;
		struct mlxsw_afk_key_info *key_info;
		struct mlxsw_sp_acl_tcam *tcam;
		struct mlxsw_sp_acl_tcam_vgroup *vgroup;
		struct {
			struct delayed_work dw;
			struct mlxsw_sp_acl_tcam_rehash_ctx ctx;
		} rehash;
		struct mlxsw_sp *mlxsw_sp;
		unsigned int ref_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 202 */;
	struct mlxsw_sp_acl_tcam_rehash_ctx {
		void *hints_priv;
		bool this_is_rollback;
		struct mlxsw_sp_acl_tcam_vchunk *current_vchunk;
		struct mlxsw_sp_acl_tcam_ventry *start_ventry;
		struct mlxsw_sp_acl_tcam_ventry *stop_ventry;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 184 */;
	enum mlxsw_sp_acl_profile cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1823 */;
	const struct mlxsw_sp_acl_profile_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1821 */;
	const struct mlxsw_sp_acl_profile_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1815 */[];
	struct mlxsw_sp_acl_tcam_mr_rule cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1808 */;
	struct mlxsw_sp_acl_tcam_mr_ruleset cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1802 */;
	struct mlxsw_sp_acl_tcam_mr_rule *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1785 */;
	struct mlxsw_sp_acl_tcam_mr_ruleset *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1765 */;
	struct mlxsw_sp_acl_tcam_vgroup {
		struct mlxsw_sp_acl_tcam_group group;
		struct list_head vregion_list;
		struct rhashtable vchunk_ht;
		const struct mlxsw_sp_acl_tcam_pattern *patterns;
		unsigned int patterns_count;
		bool tmplt_elusage_set;
		struct mlxsw_afk_element_usage tmplt_elusage;
		bool vregion_rehash_enabled;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 173 */;
	struct mlxsw_sp_acl_tcam_mr_rule {
		struct mlxsw_sp_acl_tcam_ventry ventry;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1685 */;
	struct mlxsw_sp_acl_tcam_mr_ruleset {
		struct mlxsw_sp_acl_tcam_vchunk *vchunk;
		struct mlxsw_sp_acl_tcam_vgroup vgroup;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1680 */;
	struct mlxsw_sp_acl_tcam_flower_rule cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1673 */;
	struct mlxsw_sp_acl_tcam_flower_ruleset cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1667 */;
	const struct mlxsw_sp_acl_profile_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1666 */;
	struct mlxsw_sp_acl_tcam_flower_rule *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1660 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1650 */;
	struct mlxsw_sp_acl_tcam_group {
		struct mlxsw_sp_acl_tcam *tcam;
		u16 id;
		struct mutex lock;
		struct list_head region_list;
		unsigned int region_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 165 */;
	struct mlxsw_sp_acl_tcam_flower_ruleset *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1633 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1620 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1600 */;
	struct mlxsw_sp_acl_tcam_pattern {
		const enum mlxsw_afk_element *elements;
		unsigned int elements_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 160 */;
	struct mlxsw_sp_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1599 */;
	struct mlxsw_afk_element_usage *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1577 */;
	struct mlxsw_sp_acl_tcam_flower_rule {
		struct mlxsw_sp_acl_tcam_ventry ventry;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1569 */;
	struct mlxsw_sp_acl_tcam_flower_ruleset {
		struct mlxsw_sp_acl_tcam_vgroup vgroup;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1565 */;
	const struct mlxsw_sp_acl_tcam_pattern cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1551 */[];
	const enum mlxsw_afk_element cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1516 */[];
	const struct mlxsw_sp_acl_tcam_rehash_ctx *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1414 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 141 */;
	typeof(*vchunk) cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1367 */;
	int *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1355 */;
	struct mlxsw_sp_acl_tcam_rehash_ctx *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1354 */;
	typeof(*ventry) cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1305 */;
	bool *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1145 */;
	struct mlxsw_sp_acl_rule_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1134 */;
	struct mlxsw_sp_acl_tcam_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1133 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1130 */;
	struct mlxsw_sp_acl_tcam_ventry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_acl_tcam.c 1095 */;
}
