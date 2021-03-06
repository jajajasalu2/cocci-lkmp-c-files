cocci_test_suite() {
	s8 cocci_id/* drivers/hwmon/max1668.c 91 */;
	s32 cocci_id/* drivers/hwmon/max1668.c 76 */;
	struct max1668_data {
		struct i2c_client *client;
		const struct attribute_group *groups[3];
		enum chips type;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		s8 temp_max[5];
		s8 temp_min[5];
		s8 temp[5];
		u16 alarms;
	} cocci_id/* drivers/hwmon/max1668.c 55 */;
	enum chips{max1668, max1805, max1989,} cocci_id/* drivers/hwmon/max1668.c 53 */;
	bool cocci_id/* drivers/hwmon/max1668.c 49 */;
	struct i2c_driver cocci_id/* drivers/hwmon/max1668.c 432 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/max1668.c 423 */[];
	struct max1668_data cocci_id/* drivers/hwmon/max1668.c 405 */;
	struct max1668_data *cocci_id/* drivers/hwmon/max1668.c 400 */;
	struct device *cocci_id/* drivers/hwmon/max1668.c 398 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/max1668.c 395 */;
	const char *cocci_id/* drivers/hwmon/max1668.c 363 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/max1668.c 362 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/max1668.c 360 */;
	struct i2c_client *cocci_id/* drivers/hwmon/max1668.c 359 */;
	const struct attribute_group cocci_id/* drivers/hwmon/max1668.c 348 */;
	struct attribute *cocci_id/* drivers/hwmon/max1668.c 329 */;
	int cocci_id/* drivers/hwmon/max1668.c 329 */;
	umode_t cocci_id/* drivers/hwmon/max1668.c 328 */;
	struct kobject *cocci_id/* drivers/hwmon/max1668.c 328 */;
	struct attribute *cocci_id/* drivers/hwmon/max1668.c 286 */[];
	const unsigned short cocci_id/* drivers/hwmon/max1668.c 20 */[];
	long cocci_id/* drivers/hwmon/max1668.c 198 */;
	size_t cocci_id/* drivers/hwmon/max1668.c 193 */;
	struct device_attribute *cocci_id/* drivers/hwmon/max1668.c 192 */;
	ssize_t cocci_id/* drivers/hwmon/max1668.c 191 */;
	char *cocci_id/* drivers/hwmon/max1668.c 167 */;
}
