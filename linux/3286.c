cocci_test_suite() {
	u32 cocci_id/* drivers/hwmon/ltc4261.c 92 */;
	int cocci_id/* drivers/hwmon/ltc4261.c 90 */;
	struct ltc4261_data {
		struct i2c_client *client;
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		u8 regs[10];
	} cocci_id/* drivers/hwmon/ltc4261.c 44 */;
	struct i2c_driver cocci_id/* drivers/hwmon/ltc4261.c 233 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/ltc4261.c 225 */[];
	struct i2c_adapter *cocci_id/* drivers/hwmon/ltc4261.c 196 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/ltc4261.c 194 */;
	struct i2c_client *cocci_id/* drivers/hwmon/ltc4261.c 193 */;
	struct attribute *cocci_id/* drivers/hwmon/ltc4261.c 178 */[];
	u8 cocci_id/* drivers/hwmon/ltc4261.c 141 */;
	struct ltc4261_data *cocci_id/* drivers/hwmon/ltc4261.c 140 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/ltc4261.c 139 */;
	struct device_attribute *cocci_id/* drivers/hwmon/ltc4261.c 137 */;
	char *cocci_id/* drivers/hwmon/ltc4261.c 137 */;
	struct device *cocci_id/* drivers/hwmon/ltc4261.c 136 */;
	ssize_t cocci_id/* drivers/hwmon/ltc4261.c 136 */;
}
