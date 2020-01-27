cocci_test_suite() {
	struct mlx5_geneve {
		struct mlx5_core_dev *mdev;
		__be16 opt_class;
		u8 opt_type;
		u32 obj_id;
		struct mutex sync_lock;
		u32 refcount;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 8 */;
	struct geneve_opt *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 63 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 63 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 54 */[MLX5_ST_SZ_DW(general_obj_in_cmd_hdr)];
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 26 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 25 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 24 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 23 */[MLX5_ST_SZ_DW(general_obj_out_cmd_hdr)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 22 */[MLX5_ST_SZ_DW(create_geneve_tlv_option_in)];
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 19 */;
	__be16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 18 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 147 */;
	struct mlx5_geneve *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 134 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/geneve.c 134 */;
}
