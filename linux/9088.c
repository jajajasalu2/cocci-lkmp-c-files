cocci_test_suite() {
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 98 */;
	struct semaphore *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 858 */;
	struct mlx5_cmd_layout *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 857 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 847 */(struct mlx5_core_dev *dev,
									     struct mlx5_cmd_msg *msg);
	struct mlx5_core_dev cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 837 */;
	struct mlx5_cmd_work_ent cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 835 */;
	struct delayed_work cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 832 */;
	struct delayed_work *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 832 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 830 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 828 */(struct mlx5_core_dev *dev,
									     u64 vec,
									     bool forced);
	gfp_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 79 */;
	mlx5_cmd_cbk_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 76 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 75 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 75 */;
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 730 */;
	struct mlx5_cmd_msg *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 73 */;
	struct mlx5_ifc_mbox_in_bits {
		u8 opcode[0x10];
		u8 uid[0x10];
		u8 reserved_at_20[0x10];
		u8 op_mod[0x10];
		u8 reserved_at_40[0x40];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 720 */;
	struct mlx5_cmd_work_ent *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 72 */;
	struct mlx5_cmd *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 72 */;
	struct mlx5_ifc_mbox_out_bits {
		u8 status[0x8];
		u8 reserved_at_8[0x18];
		u8 syndrome[0x20];
		u8 reserved_at_40[0x40];
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 711 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 648 */;
	enum{MLX5_CMD_DELIVERY_STAT_OK=0x0, MLX5_CMD_DELIVERY_STAT_SIGNAT_ERR=0x1, MLX5_CMD_DELIVERY_STAT_TOK_ERR=0x2, MLX5_CMD_DELIVERY_STAT_BAD_BLK_NUM_ERR=0x3, MLX5_CMD_DELIVERY_STAT_OUT_PTR_ALIGN_ERR=0x4, MLX5_CMD_DELIVERY_STAT_IN_PTR_ALIGN_ERR=0x5, MLX5_CMD_DELIVERY_STAT_FW_ERR=0x6, MLX5_CMD_DELIVERY_STAT_IN_LENGTH_ERR=0x7, MLX5_CMD_DELIVERY_STAT_OUT_LENGTH_ERR=0x8, MLX5_CMD_DELIVERY_STAT_RES_FLD_NOT_CLR_ERR=0x9, MLX5_CMD_DELIVERY_STAT_CMD_DESCR_ERR=0x10,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 58 */;
	enum{CMD_MODE_POLLING, CMD_MODE_EVENTS,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 53 */;
	enum{CMD_IF_REV=5,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 49 */;
	__be32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 252 */;
	unsigned long long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1970 */;
	uintptr_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1864 */;
	struct device *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1856 */;
	unsigned cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1820 */[MLX5_NUM_COMMAND_CACHES];
	struct mlx5_cmd_prot_block cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 178 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 178 */;
	struct mlx5_async_work *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1772 */;
	mlx5_async_cbk_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1771 */;
	struct mlx5_async_ctx *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1753 */;
	struct mlx5_cmd_prot_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 175 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 175 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1670 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1665 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1657 */;
	typeof(*msg) cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1632 */;
	struct cmd_msg_cache *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1616 */;
	struct mlx5_cmd_stats *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1456 */;
	s64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1455 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1447 */;
	struct mlx5_cmd cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1413 */;
	struct mlx5_eqe *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1411 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1406 */;
	struct mlx5_cmd_debug *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1366 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1303 */[8];
	const struct file_operations cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1291 */;
	loff_t *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1279 */;
	struct file *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1278 */;
	char __user *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1278 */;
	ssize_t cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1278 */;
	const char __user *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1254 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1165 */;
	struct mlx5_cmd_mailbox *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1165 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 114 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1070 */[3];
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/cmd.c 1004 */;
}
