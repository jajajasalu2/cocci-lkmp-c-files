cocci_test_suite() {
	const struct mlx5_vport *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 93 */;
	const struct mlx5_eswitch *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 92 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 905 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 903 */;
	struct mlx5_flow_namespace *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 902 */;
	struct mlx5_flow_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 900 */;
	const unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 868 */[4];
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 807 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 804 */;
	struct mlx5_flow_spec *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 803 */;
	struct mlx5_flow_destination cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 801 */;
	struct mlx5_flow_act cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 800 */;
	struct mlx5_flow_handle **cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 693 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 689 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 67 */(struct mlx5_eswitch *esw,
											 u32 chain,
											 u16 prio,
											 int level);
	struct mlx5_flow_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 65 */(struct mlx5_eswitch *esw,
													    u32 chain,
													    u16 prio,
													    int level);
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 603 */[MLX5_ST_SZ_DW(modify_esw_vport_context_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 602 */[MLX5_ST_SZ_DW(query_esw_vport_context_out)];
	struct offloads_fdb *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 434 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 319 */;
	struct mlx5_esw_flow_attr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 318 */;
	struct mlx5_flow_handle *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 317 */;
	struct mlx5_eswitch_rep_data *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2601 */;
	const struct mlx5_eswitch_rep_ops *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2598 */;
	enum devlink_eswitch_encap_mode *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2583 */;
	struct mlx5_flow_destination cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 258 */[MLX5_MAX_FLOW_FWD_VPORTS + 1];
	enum devlink_eswitch_encap_mode cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2533 */;
	struct devlink *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2370 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2294 */;
	struct mlx5_eswitch cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2211 */;
	struct mlx5_esw_functions cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2210 */;
	struct mlx5_esw_functions *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2202 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2200 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2200 */;
	struct mlx5_host_work cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2187 */;
	const u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2185 */;
	struct mlx5_host_work *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2183 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2181 */;
	struct offloads_fdb cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2113 */;
	struct mlx5_vport *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 2080 */;
	const struct mlx5_flow_spec cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1809 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1808 */[MLX5_UN_SZ_BYTES(set_action_in_add_action_in_auto)];
	struct mlx5_devcom *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1748 */;
	struct mlx5_flow_root_namespace *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1649 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1494 */;
	struct mlx5_eswitch_rep *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1494 */;
	struct mlx5_eswitch *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1493 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1493 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1433 */;
	struct mlx5_eswitch_rep cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1416 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1369 */;
	struct mlx5_flow_destination *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1323 */;
	struct mlx5_esw_offload *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1279 */;
	struct mlx5_flow_group *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1062 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1058 */;
	struct mlx5_flow_table_attr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads.c 1056 */;
}
