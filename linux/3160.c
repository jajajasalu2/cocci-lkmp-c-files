cocci_test_suite() {
	struct sht21 {
		struct i2c_client *client;
		struct mutex lock;
		unsigned long last_update;
		int temperature;
		int humidity;
		char valid;
		char eic[18];
	} cocci_id/* drivers/hwmon/sht21.c 38 */;
	struct i2c_driver cocci_id/* drivers/hwmon/sht21.c 287 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/sht21.c 281 */[];
	const struct i2c_device_id *cocci_id/* drivers/hwmon/sht21.c 254 */;
	struct attribute *cocci_id/* drivers/hwmon/sht21.c 244 */[];
	char *cocci_id/* drivers/hwmon/sht21.c 224 */;
	struct device_attribute *cocci_id/* drivers/hwmon/sht21.c 223 */;
	struct device *cocci_id/* drivers/hwmon/sht21.c 222 */;
	int cocci_id/* drivers/hwmon/sht21.c 179 */;
	struct i2c_msg cocci_id/* drivers/hwmon/sht21.c 165 */[2];
	u8 cocci_id/* drivers/hwmon/sht21.c 163 */[8];
	u8 cocci_id/* drivers/hwmon/sht21.c 162 */[2];
	struct i2c_client *cocci_id/* drivers/hwmon/sht21.c 161 */;
	struct sht21 *cocci_id/* drivers/hwmon/sht21.c 159 */;
	ssize_t cocci_id/* drivers/hwmon/sht21.c 159 */;
}
