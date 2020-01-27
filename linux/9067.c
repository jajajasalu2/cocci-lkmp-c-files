cocci_test_suite() {
	struct mlx5_core_dev cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 57 */;
	struct mlx5_device_context *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 56 */;
	struct mlx5_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 54 */;
	enum{MLX5_INTERFACE_ADDED, MLX5_INTERFACE_ATTACHED,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 48 */;
	struct mlx5_device_context {
		struct list_head list;
		struct mlx5_interface *intf;
		void *context;
		unsigned long state;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 41 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 304 */;
	struct mlx5_interface *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 283 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 281 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 281 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 281 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/dev.c 182 */;
}
