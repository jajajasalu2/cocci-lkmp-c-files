cocci_test_suite() {
	struct da9055 *cocci_id/* drivers/hwmon/da9055-hwmon.c 62 */;
	unsigned short cocci_id/* drivers/hwmon/da9055-hwmon.c 59 */;
	unsigned char cocci_id/* drivers/hwmon/da9055-hwmon.c 56 */;
	struct da9055_hwmon *cocci_id/* drivers/hwmon/da9055-hwmon.c 55 */;
	int cocci_id/* drivers/hwmon/da9055-hwmon.c 55 */;
	const u8 cocci_id/* drivers/hwmon/da9055-hwmon.c 47 */[DA9055_ADC_TJUNC + 1];
	const char *const cocci_id/* drivers/hwmon/da9055-hwmon.c 39 */[];
	struct da9055_hwmon {
		struct da9055 *da9055;
		struct mutex hwmon_lock;
		struct mutex irq_lock;
		struct completion done;
	} cocci_id/* drivers/hwmon/da9055-hwmon.c 32 */;
	struct platform_driver cocci_id/* drivers/hwmon/da9055-hwmon.c 271 */;
	struct da9055_hwmon cocci_id/* drivers/hwmon/da9055-hwmon.c 241 */;
	struct platform_device *cocci_id/* drivers/hwmon/da9055-hwmon.c 234 */;
	struct attribute *cocci_id/* drivers/hwmon/da9055-hwmon.c 217 */[];
	char *cocci_id/* drivers/hwmon/da9055-hwmon.c 140 */;
	struct device_attribute *cocci_id/* drivers/hwmon/da9055-hwmon.c 139 */;
	struct device *cocci_id/* drivers/hwmon/da9055-hwmon.c 138 */;
	ssize_t cocci_id/* drivers/hwmon/da9055-hwmon.c 138 */;
	irqreturn_t cocci_id/* drivers/hwmon/da9055-hwmon.c 106 */;
	void *cocci_id/* drivers/hwmon/da9055-hwmon.c 106 */;
}
