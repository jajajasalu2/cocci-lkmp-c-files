cocci_test_suite() {
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 97 */;
	struct i2c_driver *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 667 */;
	struct mlxsw_i2c {
		struct {
			u32 mb_size_in;
			u32 mb_off_in;
			u32 mb_size_out;
			u32 mb_off_out;
			struct mutex lock;
		} cmd;
		struct device *dev;
		struct mlxsw_core *core;
		struct mlxsw_bus_info bus_info;
		u16 block_size;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 66 */;
	const struct i2c_adapter_quirks *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 560 */;
	const struct i2c_device_id *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 558 */;
	const struct mlxsw_bus cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 548 */;
	struct mlxsw_res *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 511 */;
	const struct mlxsw_config_profile *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 510 */;
	struct mlxsw_core *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 509 */;
	const struct mlxsw_tx_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 503 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 502 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 486 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 485 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 484 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 484 */;
	struct i2c_msg cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 401 */[];
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 397 */[MLXSW_I2C_ADDR_BUF_SIZE];
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 396 */;
	struct mlxsw_i2c *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 395 */;
	struct i2c_client *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 394 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 392 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 391 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 391 */;
	struct device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 391 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 391 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 390 */;
	struct i2c_msg cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 322 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 289 */[MLXSW_I2C_MBOX_SIZE];
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 186 */[MLXSW_I2C_PREP_SIZE / 4];
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 183 */[MLXSW_I2C_PUSH_CMD_SIZE / 4];
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 139 */[MLXSW_I2C_READ_SEMA_SIZE];
	__be16 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 121 */;
	__be32 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/i2c.c 103 */;
}
