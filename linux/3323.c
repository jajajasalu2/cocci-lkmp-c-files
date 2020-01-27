cocci_test_suite() {
	int cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 77 */;
	const char *const cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 44 */[];
	struct menf21bmc_hwmon {
		bool valid;
		struct i2c_client *i2c_client;
		unsigned long last_update;
		int in_val[BMC_VOLT_COUNT];
		int in_min[BMC_VOLT_COUNT];
		int in_max[BMC_VOLT_COUNT];
	} cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 35 */;
	struct platform_driver cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 219 */;
	struct menf21bmc_hwmon cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 195 */;
	struct i2c_client *cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 192 */;
	struct platform_device *cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 188 */;
	struct attribute *cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 158 */[];
	struct menf21bmc_hwmon *cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 111 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 110 */;
	struct device_attribute *cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 108 */;
	struct device *cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 108 */;
	char *cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 108 */;
	ssize_t cocci_id/* drivers/hwmon/menf21bmc_hwmon.c 107 */;
}
