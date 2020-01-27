cocci_test_suite() {
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/max197.c 92 */;
	bool cocci_id/* drivers/hwmon/max197.c 77 */;
	struct max197_data *cocci_id/* drivers/hwmon/max197.c 77 */;
	int cocci_id/* drivers/hwmon/max197.c 77 */;
	void cocci_id/* drivers/hwmon/max197.c 62 */;
	struct max197_data {
		struct max197_platform_data *pdata;
		struct device *hwmon_dev;
		struct mutex lock;
		int limit;
		bool scale;
		u8 ctrl_bytes[MAX197_NUM_CH];
	} cocci_id/* drivers/hwmon/max197.c 48 */;
	enum max197_chips{max197, max199,} cocci_id/* drivers/hwmon/max197.c 37 */;
	struct platform_driver cocci_id/* drivers/hwmon/max197.c 332 */;
	const struct platform_device_id cocci_id/* drivers/hwmon/max197.c 325 */[];
	u8 cocci_id/* drivers/hwmon/max197.c 291 */;
	struct max197_data cocci_id/* drivers/hwmon/max197.c 275 */;
	enum max197_chips cocci_id/* drivers/hwmon/max197.c 263 */;
	struct max197_platform_data *cocci_id/* drivers/hwmon/max197.c 262 */;
	struct platform_device *cocci_id/* drivers/hwmon/max197.c 258 */;
	struct attribute *cocci_id/* drivers/hwmon/max197.c 244 */[];
	const struct attribute_group cocci_id/* drivers/hwmon/max197.c 243 */;
	s32 cocci_id/* drivers/hwmon/max197.c 177 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/max197.c 175 */;
	char *cocci_id/* drivers/hwmon/max197.c 172 */;
	struct device_attribute *cocci_id/* drivers/hwmon/max197.c 171 */;
	struct device *cocci_id/* drivers/hwmon/max197.c 170 */;
	ssize_t cocci_id/* drivers/hwmon/max197.c 170 */;
	long cocci_id/* drivers/hwmon/max197.c 123 */;
	const char *cocci_id/* drivers/hwmon/max197.c 117 */;
	size_t cocci_id/* drivers/hwmon/max197.c 117 */;
}
