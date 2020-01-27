cocci_test_suite() {
	struct mlxsw_sp_mr_erif_sublist cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 96 */;
	struct mlxsw_sp_mr_erif_sublist *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 84 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 82 */;
	struct mlxsw_sp_mr_tcam_erif_list *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 81 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 80 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 79 */;
	struct mlxsw_sp_mr_tcam_route cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 603 */;
	struct mlxsw_sp_mr_tcam cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 602 */;
	const struct mlxsw_sp_mr_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 601 */;
	struct mlxsw_sp_mr_tcam *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 595 */;
	const struct mlxsw_sp_mr_tcam_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 594 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 592 */;
	struct mlxsw_sp_mr_tcam_erif_list cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 469 */;
	struct mlxsw_sp_mr_tcam_route *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 373 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 358 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 32 */;
	struct mlxsw_sp_mr_route_params *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 281 */;
	struct mlxsw_sp_mr_tcam_erif_list {
		struct list_head erif_sublists;
		u32 kvdl_index;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 27 */;
	struct mlxsw_sp_mr_route_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 262 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 194 */;
	enum mlxsw_sp_mr_route_action cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 193 */;
	struct mlxsw_afa_block *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 191 */;
	struct mlxsw_sp_mr_erif_sublist {
		struct list_head list;
		u32 rigr2_kvdl_index;
		int num_erifs;
		u16 erif_indices[MLXSW_REG_RIGR2_MAX_ERIFS];
		bool synced;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 19 */;
	struct mlxsw_sp_mr_tcam_route {
		struct mlxsw_sp_mr_tcam_erif_list erif_list;
		struct mlxsw_afa_block *afa_block;
		u32 counter_index;
		enum mlxsw_sp_mr_route_action action;
		struct mlxsw_sp_mr_route_key key;
		u16 irif_index;
		u16 min_mtu;
		void *priv;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 180 */;
	struct mlxsw_sp_mr_tcam {
		void *priv;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 14 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 128 */[MLXSW_REG_RIGR2_LEN];
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_mr_tcam.c 112 */;
}
