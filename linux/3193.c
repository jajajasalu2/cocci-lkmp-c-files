cocci_test_suite() {
	u32 cocci_id/* drivers/hwmon/ltc4151.c 90 */;
	u8 cocci_id/* drivers/hwmon/ltc4151.c 88 */;
	struct ltc4151_data *cocci_id/* drivers/hwmon/ltc4151.c 88 */;
	int cocci_id/* drivers/hwmon/ltc4151.c 88 */;
	struct ltc4151_data {
		struct i2c_client *client;
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		unsigned int shunt;
		u8 regs[6];
	} cocci_id/* drivers/hwmon/ltc4151.c 36 */;
	struct i2c_driver cocci_id/* drivers/hwmon/ltc4151.c 204 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/hwmon/ltc4151.c 197 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/ltc4151.c 191 */[];
	struct device *cocci_id/* drivers/hwmon/ltc4151.c 161 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/ltc4151.c 160 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/ltc4151.c 158 */;
	struct i2c_client *cocci_id/* drivers/hwmon/ltc4151.c 157 */;
	struct attribute *cocci_id/* drivers/hwmon/ltc4151.c 147 */[];
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/ltc4151.c 123 */;
	struct device_attribute *cocci_id/* drivers/hwmon/ltc4151.c 121 */;
	char *cocci_id/* drivers/hwmon/ltc4151.c 121 */;
	ssize_t cocci_id/* drivers/hwmon/ltc4151.c 120 */;
}
