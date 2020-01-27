cocci_test_suite() {
	unsigned char cocci_id/* drivers/input/touchscreen/wacom_i2c.c 94 */;
	unsigned int cocci_id/* drivers/input/touchscreen/wacom_i2c.c 93 */;
	u8 *cocci_id/* drivers/input/touchscreen/wacom_i2c.c 92 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/wacom_i2c.c 88 */;
	void *cocci_id/* drivers/input/touchscreen/wacom_i2c.c 88 */;
	int cocci_id/* drivers/input/touchscreen/wacom_i2c.c 88 */;
	struct i2c_msg cocci_id/* drivers/input/touchscreen/wacom_i2c.c 48 */[];
	u8 cocci_id/* drivers/input/touchscreen/wacom_i2c.c 47 */[WACOM_QUERY_SIZE];
	u8 cocci_id/* drivers/input/touchscreen/wacom_i2c.c 44 */[];
	struct wacom_features *cocci_id/* drivers/input/touchscreen/wacom_i2c.c 41 */;
	struct wacom_i2c {
		struct i2c_client *client;
		struct input_dev *input;
		u8 data[WACOM_QUERY_SIZE];
		bool prox;
		int tool;
	} cocci_id/* drivers/input/touchscreen/wacom_i2c.c 32 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/wacom_i2c.c 265 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/wacom_i2c.c 259 */[];
	struct wacom_features {
		int x_max;
		int y_max;
		int pressure_max;
		char fw_version;
	} cocci_id/* drivers/input/touchscreen/wacom_i2c.c 25 */;
	struct device *cocci_id/* drivers/input/touchscreen/wacom_i2c.c 248 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/wacom_i2c.c 248 */;
	struct wacom_features cocci_id/* drivers/input/touchscreen/wacom_i2c.c 152 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/wacom_i2c.c 148 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/wacom_i2c.c 142 */;
	struct wacom_i2c *cocci_id/* drivers/input/touchscreen/wacom_i2c.c 141 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/wacom_i2c.c 139 */;
	void cocci_id/* drivers/input/touchscreen/wacom_i2c.c 139 */;
	__le16 *cocci_id/* drivers/input/touchscreen/wacom_i2c.c 106 */;
}
