cocci_test_suite() {
	char *cocci_id/* drivers/hwmon/iio_hwmon.c 74 */;
	struct iio_channel *cocci_id/* drivers/hwmon/iio_hwmon.c 72 */;
	enum iio_chan_type cocci_id/* drivers/hwmon/iio_hwmon.c 71 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/iio_hwmon.c 68 */;
	struct iio_hwmon_state *cocci_id/* drivers/hwmon/iio_hwmon.c 67 */;
	struct device *cocci_id/* drivers/hwmon/iio_hwmon.c 66 */;
	struct platform_device *cocci_id/* drivers/hwmon/iio_hwmon.c 64 */;
	int cocci_id/* drivers/hwmon/iio_hwmon.c 64 */;
	struct device_attribute *cocci_id/* drivers/hwmon/iio_hwmon.c 40 */;
	ssize_t cocci_id/* drivers/hwmon/iio_hwmon.c 39 */;
	struct iio_hwmon_state {
		struct iio_channel *channels;
		int num_channels;
		struct attribute_group attr_group;
		const struct attribute_group *groups[2];
		struct attribute **attrs;
	} cocci_id/* drivers/hwmon/iio_hwmon.c 26 */;
	struct platform_driver __refdata cocci_id/* drivers/hwmon/iio_hwmon.c 172 */;
	const struct of_device_id cocci_id/* drivers/hwmon/iio_hwmon.c 166 */[];
	const char *cocci_id/* drivers/hwmon/iio_hwmon.c 100 */;
}
