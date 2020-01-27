cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/hwmon/hih6130.c 88 */[1];
	unsigned char cocci_id/* drivers/hwmon/hih6130.c 87 */[4];
	struct hih6130 {
		struct i2c_client *client;
		struct mutex lock;
		bool valid;
		unsigned long last_update;
		int temperature;
		int humidity;
		size_t write_length;
	} cocci_id/* drivers/hwmon/hih6130.c 35 */;
	struct i2c_driver cocci_id/* drivers/hwmon/hih6130.c 248 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/hwmon/hih6130.c 242 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/hih6130.c 236 */[];
	const struct i2c_device_id *cocci_id/* drivers/hwmon/hih6130.c 208 */;
	struct i2c_client *cocci_id/* drivers/hwmon/hih6130.c 207 */;
	struct attribute *cocci_id/* drivers/hwmon/hih6130.c 199 */[];
	int cocci_id/* drivers/hwmon/hih6130.c 187 */;
	struct hih6130 *cocci_id/* drivers/hwmon/hih6130.c 186 */;
	struct device_attribute *cocci_id/* drivers/hwmon/hih6130.c 184 */;
	char *cocci_id/* drivers/hwmon/hih6130.c 184 */;
	struct device *cocci_id/* drivers/hwmon/hih6130.c 183 */;
	ssize_t cocci_id/* drivers/hwmon/hih6130.c 183 */;
}
