cocci_test_suite() {
	struct attribute *cocci_id/* drivers/hwmon/tc74.c 99 */[];
	struct device_attribute *cocci_id/* drivers/hwmon/tc74.c 86 */;
	char *cocci_id/* drivers/hwmon/tc74.c 86 */;
	ssize_t cocci_id/* drivers/hwmon/tc74.c 85 */;
	struct tc74_data {
		struct i2c_client *client;
		struct mutex lock;
		bool valid;
		unsigned long next_update;
		s8 temp_input;
	} cocci_id/* drivers/hwmon/tc74.c 28 */;
	struct i2c_driver cocci_id/* drivers/hwmon/tc74.c 160 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/tc74.c 154 */[];
	struct tc74_data cocci_id/* drivers/hwmon/tc74.c 117 */;
	s32 cocci_id/* drivers/hwmon/tc74.c 112 */;
	struct tc74_data *cocci_id/* drivers/hwmon/tc74.c 110 */;
	struct device *cocci_id/* drivers/hwmon/tc74.c 109 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/tc74.c 107 */;
	struct i2c_client *cocci_id/* drivers/hwmon/tc74.c 106 */;
	int cocci_id/* drivers/hwmon/tc74.c 106 */;
}
