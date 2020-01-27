cocci_test_suite() {
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 74 */[MLX5_ST_SZ_DW(query_adapter_in)];
	bool cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 728 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 727 */[MLX5_ST_SZ_DW(mcqi_version)];
	u32 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 71 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 701 */[MLX5_ST_SZ_DW(mcqs_reg)];
	bool *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 699 */;
	enum{MCQI_FW_RUNNING_VERSION=0, MCQI_FW_STORED_VERSION=1,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 66 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 620 */;
	const struct firmware *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 619 */;
	const struct mlxfw_dev_ops cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 606 */;
	enum{MCQI_INFO_TYPE_CAPABILITIES=0x0, MCQI_INFO_TYPE_VERSION=0x1, MCQI_INFO_TYPE_ACTIVATION_METHOD=0x5,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 60 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 587 */;
	enum mlxfw_fsm_state_err cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 582 */;
	enum mlxfw_fsm_state_err *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 569 */;
	enum mlxfw_fsm_state *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 568 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 557 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 510 */;
	struct mlx5_mlxfw_dev cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 493 */;
	struct mlx5_mlxfw_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 492 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 490 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 490 */;
	enum{MCQS_UPDATE_STATE_IDLE, MCQS_UPDATE_STATE_IN_PROGRESS, MCQS_UPDATE_STATE_APPLIED, MCQS_UPDATE_STATE_ACTIVE, MCQS_UPDATE_STATE_ACTIVE_PENDING_RESET, MCQS_UPDATE_STATE_FAILED, MCQS_UPDATE_STATE_CANCELED, MCQS_UPDATE_STATE_BUSY,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 49 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 489 */;
	struct mlxfw_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 488 */;
	struct mlx5_mlxfw_dev {
		struct mlxfw_dev mlxfw_dev;
		struct mlx5_core_dev *mlx5_core_dev;
	} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 483 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 467 */[MLX5_ST_SZ_DW(mcqi_cap)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 442 */[MLX5_ST_SZ_DW(mcqi_reg)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 441 */[MLX5_ST_SZ_DW(mcqi_reg) + MLX5_UN_SZ_DW(mcqi_reg_data)];
	void *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 439 */;
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 414 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 412 */[MLX5_ST_SZ_DW(mcda_reg)];
	enum{MCQS_IDENTIFIER_BOOT_IMG=0x1, MCQS_IDENTIFIER_OEM_NVCONFIG=0x4, MCQS_IDENTIFIER_MLNX_NVCONFIG=0x5, MCQS_IDENTIFIER_CS_TOKEN=0x6, MCQS_IDENTIFIER_DBG_TOKEN=0x7, MCQS_IDENTIFIER_GEARBOX=0xA,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 40 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 385 */[MLX5_ST_SZ_DW(mcc_reg)];
	enum mlxsw_reg_mcc_instruction cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 363 */;
	enum mlxsw_reg_mcc_instruction{MLX5_REG_MCC_INSTRUCTION_LOCK_UPDATE_HANDLE=0x01, MLX5_REG_MCC_INSTRUCTION_RELEASE_UPDATE_HANDLE=0x02, MLX5_REG_MCC_INSTRUCTION_UPDATE_COMPONENT=0x03, MLX5_REG_MCC_INSTRUCTION_VERIFY_COMPONENT=0x04, MLX5_REG_MCC_INSTRUCTION_ACTIVATE=0x06, MLX5_REG_MCC_INSTRUCTION_CANCEL=0x08,} cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 353 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 310 */[MLX5_ST_SZ_DW(teardown_hca_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 309 */[MLX5_ST_SZ_DW(teardown_hca_out)];
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 308 */;
	struct mlx5_core_dev *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 306 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 306 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 254 */[MLX5_ST_SZ_DW(init_hca_in)];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 253 */[MLX5_ST_SZ_DW(init_hca_out)];
	uint32_t *cocci_id/* drivers/net/ethernet/mellanox/mlx5/core/fw.c 251 */;
}
