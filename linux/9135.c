cocci_test_suite() {
	char *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 782 */;
	struct mlx5_core_health *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 754 */;
	enum{MLX5_SENSOR_NO_ERR=0, MLX5_SENSOR_PCI_COMM_ERR=1, MLX5_SENSOR_PCI_ERR=2, MLX5_SENSOR_NIC_DISABLED=3, MLX5_SENSOR_NIC_SW_RESET=4, MLX5_SENSOR_FW_SYND_RFR=5,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 69 */;
	struct timer_list *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 680 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 656 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 656 */;
	enum{MLX5_DROP_NEW_HEALTH_WORK,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 65 */;
	struct devlink *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 626 */;
	const struct devlink_health_reporter_ops cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 616 */;
	struct mlx5_core_dev cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 602 */;
	struct mlx5_priv cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 601 */;
	struct mlx5_core_health cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 600 */;
	struct mlx5_priv *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 598 */;
	struct mlx5_fw_reporter_ctx cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 595 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 593 */;
	struct mlx5_fw_reporter_ctx *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 579 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 565 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 561 */;
	struct devlink_fmsg *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 560 */;
	struct devlink_health_reporter *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 559 */;
	enum{MLX5_HEALTH_SYNDR_FW_ERR=0x1, MLX5_HEALTH_SYNDR_IRISC_ERR=0x7, MLX5_HEALTH_SYNDR_HW_UNRECOVERABLE_ERR=0x8, MLX5_HEALTH_SYNDR_CRC_ERR=0x9, MLX5_HEALTH_SYNDR_FETCH_PCI_ERR=0xa, MLX5_HEALTH_SYNDR_HW_FTL_ERR=0xb, MLX5_HEALTH_SYNDR_ASYNC_EQ_OVERRUN_ERR=0xc, MLX5_HEALTH_SYNDR_EQ_ERR=0xd, MLX5_HEALTH_SYNDR_EQ_INV=0xe, MLX5_HEALTH_SYNDR_FFSER_ERR=0xf, MLX5_HEALTH_SYNDR_HIGH_TEMP=0x10,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 51 */;
	enum{MLX5_HEALTH_POLL_INTERVAL=2 * HZ, MAX_MISSES=3,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 46 */;
	struct mlx5_fw_reporter_ctx {
		u8 err_synd;
		int miss_counter;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 409 */;
	struct health_buffer __iomem *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 398 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 364 */[18];
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 330 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 330 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 209 */;
	enum mlx5_vsc_state cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 132 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 130 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 130 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 114 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/health.c 114 */;
}
