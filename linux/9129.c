cocci_test_suite() {
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 972 */;
	enum mlx5_vport_roce_state cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 915 */;
	enum mlx5_vport_roce_state{MLX5_VPORT_ROCE_DISABLED=0, MLX5_VPORT_ROCE_ENABLED=1,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 909 */;
	bool *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 880 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 86 */[MLX5_ST_SZ_DW(query_nic_vport_context_in)];
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 842 */;
	enum{UC_LOCAL_LB, MC_LOCAL_LB,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 837 */;
	u64 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 759 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 71 */[MLX5_ST_SZ_DW(modify_vport_state_out)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 70 */[MLX5_ST_SZ_DW(modify_vport_state_in)];
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 667 */[MLX5_ST_SZ_DW(query_hca_vport_context_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 60 */[MLX5_ST_SZ_DW(query_vport_state_out)];
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 598 */;
	union ib_gid *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 532 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 477 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 46 */[MLX5_ST_SZ_DW(query_vport_state_in)];
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 44 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 44 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 43 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 43 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 43 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 385 */[];
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 332 */[][ETH_ALEN];
	enum mlx5_list_type cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 331 */;
	int *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 272 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 196 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 142 */[MLX5_ST_SZ_DW(modify_nic_vport_context_in)];
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 121 */;
	const struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 1166 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 110 */[MLX5_ST_SZ_DW(query_nic_vport_context_out)];
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 1040 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 1038 */[MLX5_ST_SZ_BYTES(modify_hca_vport_context_out)];
	struct mlx5_hca_vport_context *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 1035 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 1012 */[MLX5_ST_SZ_DW(query_vnic_env_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 1011 */[MLX5_ST_SZ_DW(query_vnic_env_out)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/vport.c 100 */[MLX5_ST_SZ_DW(modify_nic_vport_context_out)];
}