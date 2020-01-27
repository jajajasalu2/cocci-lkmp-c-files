cocci_test_suite() {
	u8 cocci_id/* drivers/hwmon/ad7418.c 65 */;
	s32 cocci_id/* drivers/hwmon/ad7418.c 59 */;
	struct ad7418_data {
		struct i2c_client *client;
		enum chips type;
		struct mutex lock;
		int adc_max;
		char valid;
		unsigned long last_updated;
		s16 temp[3];
		u16 in[4];
	} cocci_id/* drivers/hwmon/ad7418.c 44 */;
	const u8 cocci_id/* drivers/hwmon/ad7418.c 40 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/ad7418.c 303 */;
	void *cocci_id/* drivers/hwmon/ad7418.c 296 */;
	const struct of_device_id cocci_id/* drivers/hwmon/ad7418.c 295 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/ad7418.c 287 */[];
	enum chips{ad7416, ad7417, ad7418,} cocci_id/* drivers/hwmon/ad7418.c 27 */;
	enum chips cocci_id/* drivers/hwmon/ad7418.c 255 */;
	struct ad7418_data cocci_id/* drivers/hwmon/ad7418.c 246 */;
	const struct attribute_group **cocci_id/* drivers/hwmon/ad7418.c 240 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/ad7418.c 237 */;
	struct device *cocci_id/* drivers/hwmon/ad7418.c 236 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/ad7418.c 234 */;
	int cocci_id/* drivers/hwmon/ad7418.c 220 */;
	struct ad7418_data *cocci_id/* drivers/hwmon/ad7418.c 218 */;
	struct i2c_client *cocci_id/* drivers/hwmon/ad7418.c 216 */;
	void cocci_id/* drivers/hwmon/ad7418.c 216 */;
	struct attribute *cocci_id/* drivers/hwmon/ad7418.c 187 */[];
	long cocci_id/* drivers/hwmon/ad7418.c 163 */;
	size_t cocci_id/* drivers/hwmon/ad7418.c 158 */;
	const char *cocci_id/* drivers/hwmon/ad7418.c 157 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/ad7418.c 144 */;
	char *cocci_id/* drivers/hwmon/ad7418.c 142 */;
	struct device_attribute *cocci_id/* drivers/hwmon/ad7418.c 141 */;
	ssize_t cocci_id/* drivers/hwmon/ad7418.c 141 */;
}
