cocci_test_suite() {
	u32 cocci_id/* drivers/hwmon/adcxx.c 96 */;
	struct adcxx *cocci_id/* drivers/hwmon/adcxx.c 95 */;
	struct spi_device *cocci_id/* drivers/hwmon/adcxx.c 94 */;
	struct device_attribute *cocci_id/* drivers/hwmon/adcxx.c 92 */;
	char *cocci_id/* drivers/hwmon/adcxx.c 92 */;
	struct device *cocci_id/* drivers/hwmon/adcxx.c 91 */;
	ssize_t cocci_id/* drivers/hwmon/adcxx.c 91 */;
	u8 cocci_id/* drivers/hwmon/adcxx.c 53 */[2];
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/adcxx.c 51 */;
	struct adcxx {
		struct device *hwmon_dev;
		struct mutex lock;
		u32 channels;
		u32 reference;
	} cocci_id/* drivers/hwmon/adcxx.c 39 */;
	struct spi_driver cocci_id/* drivers/hwmon/adcxx.c 221 */;
	const struct spi_device_id cocci_id/* drivers/hwmon/adcxx.c 212 */[];
	int cocci_id/* drivers/hwmon/adcxx.c 151 */;
	struct sensor_device_attribute cocci_id/* drivers/hwmon/adcxx.c 135 */[];
	unsigned long cocci_id/* drivers/hwmon/adcxx.c 114 */;
	const char *cocci_id/* drivers/hwmon/adcxx.c 110 */;
	size_t cocci_id/* drivers/hwmon/adcxx.c 110 */;
}
