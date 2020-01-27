cocci_test_suite() {
	u8 cocci_id/* drivers/hwmon/ad7414.c 56 */;
	s16 cocci_id/* drivers/hwmon/ad7414.c 47 */;
	struct ad7414_data {
		struct i2c_client *client;
		struct mutex lock;
		char valid;
		unsigned long next_update;
		s16 temp_input;
		s8 temps[ARRAY_SIZE(AD7414_REG_LIMIT)];
	} cocci_id/* drivers/hwmon/ad7414.c 37 */;
	u8 cocci_id/* drivers/hwmon/ad7414.c 35 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/ad7414.c 220 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/hwmon/ad7414.c 214 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/ad7414.c 208 */[];
	struct ad7414_data cocci_id/* drivers/hwmon/ad7414.c 184 */;
	struct ad7414_data *cocci_id/* drivers/hwmon/ad7414.c 176 */;
	struct device *cocci_id/* drivers/hwmon/ad7414.c 175 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/ad7414.c 173 */;
	struct i2c_client *cocci_id/* drivers/hwmon/ad7414.c 172 */;
	int cocci_id/* drivers/hwmon/ad7414.c 172 */;
	struct attribute *cocci_id/* drivers/hwmon/ad7414.c 161 */[];
	char *cocci_id/* drivers/hwmon/ad7414.c 150 */;
	struct device_attribute *cocci_id/* drivers/hwmon/ad7414.c 149 */;
	ssize_t cocci_id/* drivers/hwmon/ad7414.c 149 */;
	long cocci_id/* drivers/hwmon/ad7414.c 130 */;
	size_t cocci_id/* drivers/hwmon/ad7414.c 124 */;
	const char *cocci_id/* drivers/hwmon/ad7414.c 123 */;
}
