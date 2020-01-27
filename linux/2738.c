cocci_test_suite() {
	struct mlxcpld_i2c_priv {
		struct i2c_adapter adap;
		u32 base_addr;
		struct mutex lock;
		struct mlxcpld_i2c_curr_xfer xfer;
		struct device *dev;
		bool smbus_block;
	} cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 83 */;
	struct mlxcpld_i2c_curr_xfer {
		u8 cmd;
		u8 addr_width;
		u8 data_len;
		u8 msg_num;
		struct i2c_msg *msg;
	} cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 75 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 541 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 492 */;
	struct i2c_adapter cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 482 */;
	const struct i2c_adapter_quirks cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 468 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 463 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 451 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 451 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 267 */;
	struct mlxcpld_i2c_priv *cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 265 */;
	int cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 265 */;
	int *cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 203 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 167 */;
	u16 *cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 122 */;
	u32 *cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 107 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 102 */;
	void cocci_id/* drivers/i2c/busses/i2c-mlxcpld.c 102 */;
}
