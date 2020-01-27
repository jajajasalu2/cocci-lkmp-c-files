cocci_test_suite() {
	char cocci_id/* drivers/thermal/thermal_hwmon.c 90 */[THERMAL_NAME_LENGTH];
	const struct thermal_zone_device *cocci_id/* drivers/thermal/thermal_hwmon.c 87 */;
	int cocci_id/* drivers/thermal/thermal_hwmon.c 75 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/thermal_hwmon.c 74 */;
	struct thermal_hwmon_temp cocci_id/* drivers/thermal/thermal_hwmon.c 72 */;
	struct thermal_hwmon_temp *cocci_id/* drivers/thermal/thermal_hwmon.c 71 */;
	struct thermal_hwmon_attr cocci_id/* drivers/thermal/thermal_hwmon.c 70 */;
	struct thermal_hwmon_attr *cocci_id/* drivers/thermal/thermal_hwmon.c 69 */;
	struct device_attribute *cocci_id/* drivers/thermal/thermal_hwmon.c 67 */;
	struct device *cocci_id/* drivers/thermal/thermal_hwmon.c 67 */;
	char *cocci_id/* drivers/thermal/thermal_hwmon.c 67 */;
	ssize_t cocci_id/* drivers/thermal/thermal_hwmon.c 66 */;
	struct thermal_hwmon_temp {
		struct list_head hwmon_node;
		struct thermal_zone_device *tz;
		struct thermal_hwmon_attr temp_input;
		struct thermal_hwmon_attr temp_crit;
	} cocci_id/* drivers/thermal/thermal_hwmon.c 35 */;
	struct thermal_hwmon_attr {
		struct device_attribute attr;
		char name[16];
	} cocci_id/* drivers/thermal/thermal_hwmon.c 29 */;
	void cocci_id/* drivers/thermal/thermal_hwmon.c 214 */;
	struct thermal_hwmon_device {
		char type[THERMAL_NAME_LENGTH];
		struct device *device;
		int count;
		struct list_head tz_list;
		struct list_head node;
	} cocci_id/* drivers/thermal/thermal_hwmon.c 21 */;
	struct thermal_hwmon_device *cocci_id/* drivers/thermal/thermal_hwmon.c 132 */;
	bool cocci_id/* drivers/thermal/thermal_hwmon.c 124 */;
	const struct thermal_hwmon_device *cocci_id/* drivers/thermal/thermal_hwmon.c 108 */;
}
