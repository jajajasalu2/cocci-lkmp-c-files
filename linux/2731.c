cocci_test_suite() {
	struct {
		u8 port;
		u8 addr;
		u8 mem_addr_len;
		__le32 mem_addr;
		__le16 buf_len;
		u8 buf[DLN2_I2C_MAX_XFER_SIZE];
	}__packed *cocci_id/* drivers/i2c/busses/i2c-dln2.c 74 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-dln2.c 70 */;
	struct {
		u8 port;
	} cocci_id/* drivers/i2c/busses/i2c-dln2.c 56 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-dln2.c 55 */;
	bool cocci_id/* drivers/i2c/busses/i2c-dln2.c 53 */;
	struct dln2_i2c *cocci_id/* drivers/i2c/busses/i2c-dln2.c 53 */;
	int cocci_id/* drivers/i2c/busses/i2c-dln2.c 53 */;
	struct dln2_i2c {
		struct platform_device *pdev;
		struct i2c_adapter adapter;
		u8 port;
		void *buf;
	} cocci_id/* drivers/i2c/busses/i2c-dln2.c 42 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-dln2.c 249 */;
	struct dln2_platform_data *cocci_id/* drivers/i2c/busses/i2c-dln2.c 192 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-dln2.c 191 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-dln2.c 187 */;
	const struct i2c_adapter_quirks cocci_id/* drivers/i2c/busses/i2c-dln2.c 182 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-dln2.c 177 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-dln2.c 170 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-dln2.c 170 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-dln2.c 141 */;
	unsigned cocci_id/* drivers/i2c/busses/i2c-dln2.c 116 */;
	struct {
		__le16 buf_len;
		u8 buf[DLN2_I2C_MAX_XFER_SIZE];
	}__packed *cocci_id/* drivers/i2c/busses/i2c-dln2.c 112 */;
	struct {
		u8 port;
		u8 addr;
		u8 mem_addr_len;
		__le32 mem_addr;
		__le16 buf_len;
	}__packed cocci_id/* drivers/i2c/busses/i2c-dln2.c 105 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-dln2.c 101 */;
}
