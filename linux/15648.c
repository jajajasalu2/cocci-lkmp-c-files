cocci_test_suite() {
	void *cocci_id/* drivers/staging/greybus/i2c.c 89 */;
	size_t cocci_id/* drivers/staging/greybus/i2c.c 88 */;
	struct gb_i2c_transfer_request *cocci_id/* drivers/staging/greybus/i2c.c 82 */;
	struct gb_connection *cocci_id/* drivers/staging/greybus/i2c.c 78 */;
	struct gb_operation *cocci_id/* drivers/staging/greybus/i2c.c 77 */;
	u16 cocci_id/* drivers/staging/greybus/i2c.c 70 */;
	struct gb_i2c_transfer_op *cocci_id/* drivers/staging/greybus/i2c.c 68 */;
	struct gb_i2c_functionality_response cocci_id/* drivers/staging/greybus/i2c.c 43 */;
	struct gb_i2c_device *cocci_id/* drivers/staging/greybus/i2c.c 41 */;
	int cocci_id/* drivers/staging/greybus/i2c.c 41 */;
	struct gbphy_driver cocci_id/* drivers/staging/greybus/i2c.c 329 */;
	const struct gbphy_device_id cocci_id/* drivers/staging/greybus/i2c.c 323 */[];
	const struct gbphy_device_id *cocci_id/* drivers/staging/greybus/i2c.c 246 */;
	struct gbphy_device *cocci_id/* drivers/staging/greybus/i2c.c 245 */;
	const struct i2c_algorithm cocci_id/* drivers/staging/greybus/i2c.c 239 */;
	struct i2c_adapter *cocci_id/* drivers/staging/greybus/i2c.c 232 */;
	struct device *cocci_id/* drivers/staging/greybus/i2c.c 177 */;
	struct gb_i2c_device {
		struct gb_connection *connection;
		struct gbphy_device *gbphy_dev;
		u32 functionality;
		struct i2c_adapter adapter;
	} cocci_id/* drivers/staging/greybus/i2c.c 17 */;
	bool cocci_id/* drivers/staging/greybus/i2c.c 168 */;
	u8 *cocci_id/* drivers/staging/greybus/i2c.c 150 */;
	struct gb_i2c_transfer_response *cocci_id/* drivers/staging/greybus/i2c.c 147 */;
	u32 cocci_id/* drivers/staging/greybus/i2c.c 146 */;
	struct i2c_msg *cocci_id/* drivers/staging/greybus/i2c.c 146 */;
	void cocci_id/* drivers/staging/greybus/i2c.c 146 */;
}
