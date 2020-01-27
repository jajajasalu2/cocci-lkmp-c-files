cocci_test_suite() {
	struct mlx5e_hv_vhca_stats_agent *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 96 */;
	struct mlx5_hv_vhca_control_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 94 */;
	struct mlx5e_hv_vhca_per_ring_stats {
		u64 rx_packets;
		u64 rx_bytes;
		u64 tx_packets;
		u64 tx_bytes;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 9 */;
	enum{MLX5_HV_VHCA_STATS_VERSION=1, MLX5_HV_VHCA_STATS_UPDATE_ONCE=0xFFFF,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 88 */;
	struct mlx5e_priv cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 68 */;
	struct mlx5e_hv_vhca_stats_agent cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 67 */;
	struct delayed_work *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 61 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 57 */;
	struct mlx5e_hv_vhca_per_ring_stats cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 42 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 33 */;
	struct mlx5e_channel_stats *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 20 */;
	struct mlx5e_hv_vhca_per_ring_stats *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 18 */;
	struct mlx5e_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 17 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 17 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 16 */;
	struct mlx5_hv_vhca_agent *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/en/hv_vhca_stats.c 116 */;
}
