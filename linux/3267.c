cocci_test_suite() {
	struct s3c_hwmon {
		struct mutex lock;
		struct s3c_adc_client *client;
		struct device *hwmon_dev;
		struct s3c_hwmon_attr attrs[8];
	} cocci_id/* drivers/hwmon/s3c-hwmon.c 40 */;
	struct platform_driver cocci_id/* drivers/hwmon/s3c-hwmon.c 366 */;
	struct s3c_hwmon cocci_id/* drivers/hwmon/s3c-hwmon.c 275 */;
	struct platform_device *cocci_id/* drivers/hwmon/s3c-hwmon.c 263 */;
	struct s3c_hwmon_attr {
		struct sensor_device_attribute in;
		struct sensor_device_attribute label;
		char in_name[12];
		char label_name[12];
	} cocci_id/* drivers/hwmon/s3c-hwmon.c 26 */;
	void cocci_id/* drivers/hwmon/s3c-hwmon.c 252 */;
	struct s3c_hwmon_attr *cocci_id/* drivers/hwmon/s3c-hwmon.c 209 */;
	struct s3c_hwmon_chcfg *cocci_id/* drivers/hwmon/s3c-hwmon.c 157 */;
	struct s3c_hwmon_pdata *cocci_id/* drivers/hwmon/s3c-hwmon.c 156 */;
	struct s3c_hwmon *cocci_id/* drivers/hwmon/s3c-hwmon.c 155 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/s3c-hwmon.c 154 */;
	char *cocci_id/* drivers/hwmon/s3c-hwmon.c 152 */;
	struct device_attribute *cocci_id/* drivers/hwmon/s3c-hwmon.c 151 */;
	ssize_t cocci_id/* drivers/hwmon/s3c-hwmon.c 150 */;
	struct device *cocci_id/* drivers/hwmon/s3c-hwmon.c 123 */;
	int cocci_id/* drivers/hwmon/s3c-hwmon.c 123 */;
	struct attribute_group cocci_id/* drivers/hwmon/s3c-hwmon.c 119 */;
	struct attribute *cocci_id/* drivers/hwmon/s3c-hwmon.c 107 */[9];
}
