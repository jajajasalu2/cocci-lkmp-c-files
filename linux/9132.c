cocci_test_suite() {
	struct mlx5_flow_destination *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 993 */;
	struct mlx5_flow_handle *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 990 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 799 */;
	struct mlx5e_l2_hash_node *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 79 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 782 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 782 */;
	struct hlist_head *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 77 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 77 */;
	struct mlx5e_etype_proto cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 694 */[];
	struct mlx5e_etype_proto {
		u16 etype;
		u8 proto;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 689 */;
	struct mlx5e_ttc_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 670 */;
	struct mlx5e_l2_hash_node {
		struct hlist_node hlist;
		u8 action;
		struct mlx5e_l2_rule ai;
		bool mpfs;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 65 */;
	struct mlx5e_priv cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 595 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 593 */;
	enum{MLX5E_ACTION_NONE=0, MLX5E_ACTION_ADD=1, MLX5E_ACTION_DEL=2,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 59 */;
	struct hlist_node *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 566 */;
	enum{MLX5E_UC=0, MLX5E_MC_IPV4=1, MLX5E_MC_IPV6=2, MLX5E_MC_OTHER=3,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 52 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 510 */[ETH_ALEN];
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 482 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 479 */[][ETH_ALEN];
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 462 */;
	enum{MLX5E_FULLMATCH=0, MLX5E_ALLMULTI=1, MLX5E_PROMISC=2,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 46 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 431 */[ETH_ALEN];
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 43 */(struct mlx5e_priv *priv,
									      struct mlx5e_l2_rule *ai);
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 41 */(struct mlx5e_priv *priv,
									     struct mlx5e_l2_rule *ai,
									     int type);
	__be16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 359 */;
	struct mlx5_flow_handle **cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 167 */;
	struct mlx5_flow_destination cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 166 */;
	struct mlx5_flow_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 165 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 163 */;
	struct mlx5_flow_spec *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 163 */;
	enum mlx5e_vlan_rule_type cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 162 */;
	struct mlx5e_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 161 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 161 */;
	struct ttc_params cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 1540 */;
	enum mlx5e_vlan_rule_type{MLX5E_VLAN_RULE_TYPE_UNTAGGED, MLX5E_VLAN_RULE_TYPE_ANY_CTAG_VID, MLX5E_VLAN_RULE_TYPE_ANY_STAG_VID, MLX5E_VLAN_RULE_TYPE_MATCH_CTAG_VID, MLX5E_VLAN_RULE_TYPE_MATCH_STAG_VID,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 153 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 1416 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 1411 */;
	struct mlx5e_flow_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 1411 */;
	struct mlx5_flow_table_attr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 1372 */;
	struct mlx5e_l2_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 1370 */;
	struct mlx5e_l2_rule *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 1239 */;
	struct ttc_params *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 1153 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 115 */;
	struct mlx5_flow_table_attr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en_fs.c 1136 */;
}
