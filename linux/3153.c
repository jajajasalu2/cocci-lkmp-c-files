cocci_test_suite() {
	const int cocci_id/* drivers/hwmon/max16065.c 99 */[];
	struct max16065_data {
		enum chips type;
		struct i2c_client *client;
		const struct attribute_group *groups[4];
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		int num_adc;
		bool have_current;
		int curr_gain;
		int limit[MAX16065_NUM_LIMIT][MAX16065_NUM_ADC];
		int range[MAX16065_NUM_ADC + 1];
		int adc[MAX16065_NUM_ADC + 1];
		int curr_sense;
		int fault[2];
	} cocci_id/* drivers/hwmon/max16065.c 81 */;
	const bool cocci_id/* drivers/hwmon/max16065.c 72 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/max16065.c 597 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/max16065.c 584 */[];
	bool cocci_id/* drivers/hwmon/max16065.c 504 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/max16065.c 499 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/max16065.c 497 */;
	struct i2c_client *cocci_id/* drivers/hwmon/max16065.c 496 */;
	const struct attribute_group cocci_id/* drivers/hwmon/max16065.c 477 */;
	struct device cocci_id/* drivers/hwmon/max16065.c 457 */;
	struct attribute *cocci_id/* drivers/hwmon/max16065.c 455 */;
	umode_t cocci_id/* drivers/hwmon/max16065.c 454 */;
	struct kobject *cocci_id/* drivers/hwmon/max16065.c 454 */;
	struct attribute *cocci_id/* drivers/hwmon/max16065.c 351 */[];
	enum chips{max16065, max16066, max16067, max16068, max16070, max16071,} cocci_id/* drivers/hwmon/max16065.c 24 */;
	unsigned long cocci_id/* drivers/hwmon/max16065.c 225 */;
	const char *cocci_id/* drivers/hwmon/max16065.c 221 */;
	size_t cocci_id/* drivers/hwmon/max16065.c 221 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/max16065.c 196 */;
	struct max16065_data *cocci_id/* drivers/hwmon/max16065.c 179 */;
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/max16065.c 178 */;
	struct device_attribute *cocci_id/* drivers/hwmon/max16065.c 176 */;
	char *cocci_id/* drivers/hwmon/max16065.c 176 */;
	struct device *cocci_id/* drivers/hwmon/max16065.c 175 */;
	ssize_t cocci_id/* drivers/hwmon/max16065.c 175 */;
	int cocci_id/* drivers/hwmon/max16065.c 122 */;
}
