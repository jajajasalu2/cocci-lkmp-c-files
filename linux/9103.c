cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 93 */;
	enum mlx5_lag_port_affinity cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 48 */;
	struct fib_nh_notifier_info cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 288 */;
	struct fib_entry_notifier_info cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 265 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 26 */;
	struct fib_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 252 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 251 */;
	struct fib_nh_notifier_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 250 */;
	struct fib_entry_notifier_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 249 */;
	struct mlx5_fib_event_work *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 248 */;
	struct fib_notifier_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 247 */;
	struct mlx5_lag cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 246 */;
	struct lag_mp cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 245 */;
	struct lag_mp *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 245 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 243 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 242 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 241 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 241 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 21 */;
	struct mlx5_lag *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 21 */;
	struct mlx5_fib_event_work cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 195 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 192 */;
	struct fib_nh *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 169 */;
	struct lag_tracker cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 157 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 117 */;
	struct mlx5_fib_event_work {
		struct work_struct work;
		struct mlx5_lag *ldev;
		unsigned long event;
		union {
			struct fib_entry_notifier_info fen_info;
			struct fib_nh_notifier_info fnh_info;
		};
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/lag_mp.c 101 */;
}
