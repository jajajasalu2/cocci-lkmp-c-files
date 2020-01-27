cocci_test_suite() {
	struct vexpress_hwmon_type {
		const char *name;
		const struct attribute_group **attr_groups;
	} cocci_id/* drivers/hwmon/vexpress-hwmon.c 82 */;
	struct device_attribute cocci_id/* drivers/hwmon/vexpress-hwmon.c 73 */;
	struct device_attribute *cocci_id/* drivers/hwmon/vexpress-hwmon.c 72 */;
	struct device *cocci_id/* drivers/hwmon/vexpress-hwmon.c 71 */;
	struct attribute *cocci_id/* drivers/hwmon/vexpress-hwmon.c 69 */;
	int cocci_id/* drivers/hwmon/vexpress-hwmon.c 69 */;
	umode_t cocci_id/* drivers/hwmon/vexpress-hwmon.c 68 */;
	struct kobject *cocci_id/* drivers/hwmon/vexpress-hwmon.c 68 */;
	u64 cocci_id/* drivers/hwmon/vexpress-hwmon.c 64 */;
	u32 cocci_id/* drivers/hwmon/vexpress-hwmon.c 38 */;
	const char *cocci_id/* drivers/hwmon/vexpress-hwmon.c 28 */;
	char *cocci_id/* drivers/hwmon/vexpress-hwmon.c 26 */;
	ssize_t cocci_id/* drivers/hwmon/vexpress-hwmon.c 25 */;
	struct platform_driver cocci_id/* drivers/hwmon/vexpress-hwmon.c 234 */;
	const struct vexpress_hwmon_type *cocci_id/* drivers/hwmon/vexpress-hwmon.c 212 */;
	struct vexpress_hwmon_data *cocci_id/* drivers/hwmon/vexpress-hwmon.c 211 */;
	const struct of_device_id *cocci_id/* drivers/hwmon/vexpress-hwmon.c 210 */;
	struct platform_device *cocci_id/* drivers/hwmon/vexpress-hwmon.c 208 */;
	struct vexpress_hwmon_data {
		struct device *hwmon_dev;
		struct regmap *reg;
	} cocci_id/* drivers/hwmon/vexpress-hwmon.c 20 */;
	const struct of_device_id cocci_id/* drivers/hwmon/vexpress-hwmon.c 184 */[];
	const struct attribute_group *cocci_id/* drivers/hwmon/vexpress-hwmon.c 121 */[];
	struct vexpress_hwmon_type cocci_id/* drivers/hwmon/vexpress-hwmon.c 119 */;
	struct attribute_group cocci_id/* drivers/hwmon/vexpress-hwmon.c 115 */;
	struct attribute *cocci_id/* drivers/hwmon/vexpress-hwmon.c 110 */[];
}
