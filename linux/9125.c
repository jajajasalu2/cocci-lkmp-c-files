cocci_test_suite() {
	struct mlx5_fpga_tls_command_context cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 91 */;
	struct mlx5_fpga_tls_command_context *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 90 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 88 */;
	struct mlx5_fpga_dma_buf *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 87 */;
	struct mlx5_fpga_device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 86 */;
	struct mlx5_fpga_conn *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 85 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 85 */;
	struct mlx5_fpga_tls *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 589 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 586 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 558 */;
	struct mlx5_setup_stream_context *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 556 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 553 */;
	struct tls_crypto_info *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 552 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 551 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 551 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 551 */;
	__be64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 536 */;
	struct tls12_crypto_info_aes_gcm_128 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 514 */;
	__be64 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 512 */;
	struct mlx5_fpga_tls_command_context {
		struct list_head list;
		refcount_t ref;
		struct mlx5_fpga_dma_buf buf;
		mlx5_fpga_tls_command_complete complete;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 48 */;
	struct mlx5_fpga_conn_attr cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 449 */;
	void (*cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 43 */)(struct mlx5_fpga_conn *conn,
										    struct mlx5_fpga_device *fdev,
										    struct mlx5_fpga_tls_command_context *ctx,
										    struct mlx5_fpga_dma_buf *resp);
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 387 */;
	struct mlx5_setup_stream_context cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 311 */;
	struct mlx5_setup_stream_context {
		struct mlx5_fpga_tls_command_context cmd;
		atomic_t status;
		u32 syndrome;
		struct completion comp;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 297 */;
	enum mlx5_fpga_setup_stream_status{MLX5_FPGA_CMD_PENDING, MLX5_FPGA_CMD_SEND_FAILED, MLX5_FPGA_CMD_RESPONSE_RECEIVED, MLX5_FPGA_CMD_ABANDONED,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 290 */;
	gfp_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 266 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 198 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 132 */;
	spinlock_t *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 129 */;
	struct idr *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 129 */;
	mlx5_fpga_tls_command_complete cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fpga/tls.c 101 */;
}
