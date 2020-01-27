cocci_test_suite() {
	struct mlx5_termtbl_handle {
		struct hlist_node termtbl_hlist;
		struct mlx5_flow_table *termtbl;
		struct mlx5_flow_act flow_act;
		struct mlx5_flow_destination dest;
		struct mlx5_flow_handle *rule;
		int ref_count;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 7 */;
	struct mlx5_flow_namespace *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 53 */;
	const struct mlx5_flow_spec cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 52 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 48 */;
	const void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 25 */;
	struct mlx5_termtbl_handle *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 228 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 220 */;
	struct mlx5_flow_act cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 218 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 216 */;
	struct mlx5_flow_destination *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 215 */;
	struct mlx5_flow_act *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 214 */;
	struct mlx5_esw_flow_attr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 213 */;
	struct mlx5_flow_spec *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 212 */;
	struct mlx5_flow_table *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 211 */;
	struct mlx5_eswitch *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 210 */;
	struct mlx5_flow_handle *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 209 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 183 */;
	const struct mlx5_flow_spec *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 181 */;
	const struct mlx5_eswitch *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 180 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/eswitch_offloads_termtbl.c 159 */;
}
