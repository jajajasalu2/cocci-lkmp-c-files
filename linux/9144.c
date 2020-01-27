cocci_test_suite() {
	struct mlx5_vport cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 941 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 938 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 87 */[MLX5_ST_SZ_DW(modify_nic_vport_context_out)];
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 86 */[MLX5_ST_SZ_DW(modify_nic_vport_context_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 84 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 83 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 716 */[ETH_ALEN];
	struct vport_addr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 697 */;
	struct hlist_node *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 687 */;
	struct l2addr_node *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 685 */;
	vport_addr_action cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 682 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 678 */;
	struct mlx5_vport *__must_check cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 64 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 62 */(struct mlx5_eswitch *esw);
	struct esw_mc_addr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 605 */;
	struct esw_mc_addr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 598 */;
	struct hlist_head *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 597 */;
	struct vport_addr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 595 */;
	struct vport_addr {
		struct l2addr_node node;
		u8 action;
		u16 vport;
		struct mlx5_flow_handle *flow_rule;
		bool mpfs;
		bool mc_promisc;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 51 */;
	int (*cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 485 */)(struct mlx5_eswitch *esw,
										   struct vport_addr *vaddr);
	enum{MLX5_ACTION_NONE=0, MLX5_ACTION_ADD=1, MLX5_ACTION_DEL=2,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 44 */;
	struct legacy_fdb cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 433 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 314 */;
	struct mlx5_flow_group *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 311 */;
	struct mlx5_flow_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 310 */;
	struct mlx5_flow_namespace *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 309 */;
	struct mlx5_flow_table_attr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 307 */;
	const int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 2744 */;
	enum{LEGACY_VEPA_PRIO=0, LEGACY_FDB_PRIO,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 273 */;
	enum devlink_eswitch_encap_mode cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 2715 */;
	struct mlx5_vport_drop_stats cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 2638 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 2637 */[MLX5_ST_SZ_DW(query_vport_counter_in)];
	struct ifla_vf_stats *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 2633 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 2598 */;
	struct mlx5_vport_drop_stats *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 2595 */;
	struct mlx5_vport *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 2279 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 2277 */;
	struct ifla_vf_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 2252 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 189 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1885 */[MLX5_ST_SZ_DW(query_esw_functions_in)];
	const u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1882 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 187 */;
	struct mlx5_eqe *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1863 */;
	struct mlx5_eswitch cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1862 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1860 */;
	struct mlx5_flow_spec *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 186 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1859 */;
	struct mlx5_flow_destination cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 185 */;
	struct mlx5_flow_act cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 184 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 181 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 179 */[ETH_ALEN];
	enum mlx5_eswitch_vport_event cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1780 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 178 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 178 */;
	struct mlx5_eswitch *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 178 */;
	struct mlx5_flow_handle *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 177 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1653 */;
	__be32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1489 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1487 */[MLX5_ST_SZ_DW(scheduling_context)];
	const struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1465 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 143 */[MLX5_ST_SZ_DW(modify_esw_vport_context_in)];
	struct mlx5_flow_destination *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1402 */;
	struct mlx5_fc *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 1400 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 131 */[MLX5_ST_SZ_DW(query_esw_vport_context_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch.c 118 */[MLX5_ST_SZ_DW(modify_esw_vport_context_out)];
}