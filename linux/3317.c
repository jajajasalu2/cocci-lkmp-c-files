cocci_test_suite() {
	void cocci_id/* drivers/hwmon/max6642.c 92 */;
	struct max6642_data {
		struct i2c_client *client;
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		u16 temp_input[2];
		u16 temp_high[2];
		u8 alarms;
	} cocci_id/* drivers/hwmon/max6642.c 76 */;
	const unsigned short cocci_id/* drivers/hwmon/max6642.c 33 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/max6642.c 300 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/max6642.c 294 */[];
	struct max6642_data cocci_id/* drivers/hwmon/max6642.c 274 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/max6642.c 268 */;
	struct attribute *cocci_id/* drivers/hwmon/max6642.c 254 */[];
	struct max6642_data *cocci_id/* drivers/hwmon/max6642.c 240 */;
	int cocci_id/* drivers/hwmon/max6642.c 239 */;
	char *cocci_id/* drivers/hwmon/max6642.c 237 */;
	struct device_attribute *cocci_id/* drivers/hwmon/max6642.c 236 */;
	struct device *cocci_id/* drivers/hwmon/max6642.c 236 */;
	ssize_t cocci_id/* drivers/hwmon/max6642.c 236 */;
	unsigned long cocci_id/* drivers/hwmon/max6642.c 221 */;
	size_t cocci_id/* drivers/hwmon/max6642.c 217 */;
	const char *cocci_id/* drivers/hwmon/max6642.c 216 */;
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/max6642.c 209 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/max6642.c 199 */;
	u16 cocci_id/* drivers/hwmon/max6642.c 160 */;
	u8 cocci_id/* drivers/hwmon/max6642.c 116 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/max6642.c 115 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/max6642.c 113 */;
	struct i2c_client *cocci_id/* drivers/hwmon/max6642.c 112 */;
}
