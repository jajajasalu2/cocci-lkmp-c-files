cocci_test_suite() {
	u64 cocci_id/* drivers/hwmon/scpi-hwmon.c 71 */;
	int *cocci_id/* drivers/hwmon/scpi-hwmon.c 65 */;
	void *cocci_id/* drivers/hwmon/scpi-hwmon.c 65 */;
	u64 *cocci_id/* drivers/hwmon/scpi-hwmon.c 57 */;
	void cocci_id/* drivers/hwmon/scpi-hwmon.c 57 */;
	const u32 cocci_id/* drivers/hwmon/scpi-hwmon.c 41 */[];
	struct scpi_sensors {
		struct scpi_ops *scpi_ops;
		struct sensor_data *data;
		struct list_head thermal_zones;
		struct attribute **attrs;
		struct attribute_group group;
		const struct attribute_group *groups[2];
	} cocci_id/* drivers/hwmon/scpi-hwmon.c 32 */;
	struct platform_driver cocci_id/* drivers/hwmon/scpi-hwmon.c 288 */;
	struct scpi_thermal_zone {
		int sensor_id;
		struct scpi_sensors *scpi_sensors;
	} cocci_id/* drivers/hwmon/scpi-hwmon.c 27 */;
	struct scpi_thermal_zone *cocci_id/* drivers/hwmon/scpi-hwmon.c 260 */;
	struct thermal_zone_device *cocci_id/* drivers/hwmon/scpi-hwmon.c 259 */;
	struct sensor_data {
		unsigned int scale;
		struct scpi_sensor_info info;
		struct device_attribute dev_attr_input;
		struct device_attribute dev_attr_label;
		char input[20];
		char label[20];
	} cocci_id/* drivers/hwmon/scpi-hwmon.c 18 */;
	struct sensor_data *cocci_id/* drivers/hwmon/scpi-hwmon.c 173 */;
	const struct of_device_id *cocci_id/* drivers/hwmon/scpi-hwmon.c 135 */;
	struct scpi_sensors *cocci_id/* drivers/hwmon/scpi-hwmon.c 134 */;
	struct device *cocci_id/* drivers/hwmon/scpi-hwmon.c 133 */;
	struct scpi_ops *cocci_id/* drivers/hwmon/scpi-hwmon.c 132 */;
	const u32 *cocci_id/* drivers/hwmon/scpi-hwmon.c 129 */;
	u16 cocci_id/* drivers/hwmon/scpi-hwmon.c 128 */;
	struct platform_device *cocci_id/* drivers/hwmon/scpi-hwmon.c 126 */;
	int cocci_id/* drivers/hwmon/scpi-hwmon.c 126 */;
	const struct of_device_id cocci_id/* drivers/hwmon/scpi-hwmon.c 119 */[];
	const struct thermal_zone_of_device_ops cocci_id/* drivers/hwmon/scpi-hwmon.c 115 */;
	struct sensor_data cocci_id/* drivers/hwmon/scpi-hwmon.c 110 */;
	struct device_attribute *cocci_id/* drivers/hwmon/scpi-hwmon.c 106 */;
	char *cocci_id/* drivers/hwmon/scpi-hwmon.c 106 */;
	ssize_t cocci_id/* drivers/hwmon/scpi-hwmon.c 105 */;
}
