cocci_test_suite() {
	void cocci_id/* drivers/input/touchscreen/zet6223.c 98 */;
	u8 cocci_id/* drivers/input/touchscreen/zet6223.c 63 */[ZET6223_MAX_PKT_SIZE];
	u8 cocci_id/* drivers/input/touchscreen/zet6223.c 62 */;
	u16 cocci_id/* drivers/input/touchscreen/zet6223.c 56 */;
	struct zet6223_ts *cocci_id/* drivers/input/touchscreen/zet6223.c 55 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/zet6223.c 53 */;
	void *cocci_id/* drivers/input/touchscreen/zet6223.c 53 */;
	int cocci_id/* drivers/input/touchscreen/zet6223.c 53 */;
	struct zet6223_ts {
		struct i2c_client *client;
		struct input_dev *input;
		struct regulator *vcc;
		struct regulator *vio;
		struct touchscreen_properties prop;
		struct regulator_bulk_data supplies[2];
		u16 max_x;
		u16 max_y;
		u8 fingernum;
	} cocci_id/* drivers/input/touchscreen/zet6223.c 25 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/zet6223.c 247 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/zet6223.c 241 */[];
	const struct of_device_id cocci_id/* drivers/input/touchscreen/zet6223.c 235 */[];
	struct input_dev *cocci_id/* drivers/input/touchscreen/zet6223.c 175 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/zet6223.c 171 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/zet6223.c 170 */;
	u8 cocci_id/* drivers/input/touchscreen/zet6223.c 135 */[ZET6223_CMD_INFO_LENGTH];
	struct device *cocci_id/* drivers/input/touchscreen/zet6223.c 107 */;
}
