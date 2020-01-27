cocci_test_suite() {
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 72 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 67 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 53 */;
	struct mlx5_devcom_list *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 52 */;
	struct mlx5_devcom *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 52 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 36 */;
	struct mlx5_devcom {
		struct mlx5_devcom_list *priv;
		int idx;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 31 */;
	struct mlx5_devcom_list {
		struct list_head list;
		struct mlx5_devcom_component components[MLX5_DEVCOM_NUM_COMPONENTS];
		struct mlx5_core_dev *devs[MLX5_MAX_PORTS];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 24 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 230 */;
	struct mlx5_devcom_component *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 229 */;
	enum mlx5_devcom_components cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 227 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 226 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 217 */;
	mlx5_devcom_event_handler_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 150 */;
	struct mlx5_devcom_component {
		struct {
			void *data;
		} device[MLX5_MAX_PORTS];
		mlx5_devcom_event_handler_t handler;
		struct rw_semaphore sem;
		bool paired;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lib/devcom.c 14 */;
}
