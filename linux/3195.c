cocci_test_suite() {
	const u8 cocci_id/* drivers/hwmon/lm83.c 80 */[];
	enum chips{lm83, lm82,} cocci_id/* drivers/hwmon/lm83.c 41 */;
	const unsigned short cocci_id/* drivers/hwmon/lm83.c 38 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/lm83.c 361 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/lm83.c 354 */[];
	struct lm83_data cocci_id/* drivers/hwmon/lm83.c 326 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/lm83.c 321 */;
	u8 cocci_id/* drivers/hwmon/lm83.c 280 */;
	const char *cocci_id/* drivers/hwmon/lm83.c 279 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/lm83.c 278 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/lm83.c 276 */;
	struct i2c_client *cocci_id/* drivers/hwmon/lm83.c 275 */;
	const struct attribute_group cocci_id/* drivers/hwmon/lm83.c 245 */;
	struct attribute *cocci_id/* drivers/hwmon/lm83.c 228 */[];
	int cocci_id/* drivers/hwmon/lm83.c 195 */;
	struct lm83_data *cocci_id/* drivers/hwmon/lm83.c 194 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/lm83.c 193 */;
	struct device_attribute *cocci_id/* drivers/hwmon/lm83.c 191 */;
	char *cocci_id/* drivers/hwmon/lm83.c 191 */;
	struct device *cocci_id/* drivers/hwmon/lm83.c 190 */;
	ssize_t cocci_id/* drivers/hwmon/lm83.c 190 */;
	long cocci_id/* drivers/hwmon/lm83.c 167 */;
	size_t cocci_id/* drivers/hwmon/lm83.c 162 */;
	struct lm83_data {
		struct i2c_client *client;
		const struct attribute_group *groups[3];
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		s8 temp[9];
		u16 alarms;
	} cocci_id/* drivers/hwmon/lm83.c 104 */;
}
