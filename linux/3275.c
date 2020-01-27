cocci_test_suite() {
	struct da9052 *cocci_id/* drivers/hwmon/da9052-hwmon.c 79 */;
	struct platform_driver cocci_id/* drivers/hwmon/da9052-hwmon.c 494 */;
	struct da9052_hwmon cocci_id/* drivers/hwmon/da9052-hwmon.c 402 */;
	struct platform_device *cocci_id/* drivers/hwmon/da9052-hwmon.c 395 */;
	irqreturn_t cocci_id/* drivers/hwmon/da9052-hwmon.c 387 */;
	void *cocci_id/* drivers/hwmon/da9052-hwmon.c 387 */;
	const struct attribute_group cocci_id/* drivers/hwmon/da9052-hwmon.c 381 */;
	struct attribute *cocci_id/* drivers/hwmon/da9052-hwmon.c 351 */[];
	const char *const cocci_id/* drivers/hwmon/da9052-hwmon.c 33 */[];
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/da9052-hwmon.c 306 */;
	struct device_attribute cocci_id/* drivers/hwmon/da9052-hwmon.c 305 */;
	struct device_attribute *cocci_id/* drivers/hwmon/da9052-hwmon.c 304 */;
	struct device cocci_id/* drivers/hwmon/da9052-hwmon.c 302 */;
	struct attribute *cocci_id/* drivers/hwmon/da9052-hwmon.c 300 */;
	umode_t cocci_id/* drivers/hwmon/da9052-hwmon.c 299 */;
	struct kobject *cocci_id/* drivers/hwmon/da9052-hwmon.c 299 */;
	struct da9052_hwmon {
		struct da9052 *da9052;
		struct mutex hwmon_lock;
		bool tsi_as_adc;
		int tsiref_mv;
		struct regulator *tsiref;
		struct completion tsidone;
	} cocci_id/* drivers/hwmon/da9052-hwmon.c 24 */;
	struct da9052_hwmon *cocci_id/* drivers/hwmon/da9052-hwmon.c 223 */;
	struct device *cocci_id/* drivers/hwmon/da9052-hwmon.c 221 */;
	int cocci_id/* drivers/hwmon/da9052-hwmon.c 221 */;
	ssize_t cocci_id/* drivers/hwmon/da9052-hwmon.c 221 */;
	u8 cocci_id/* drivers/hwmon/da9052-hwmon.c 191 */[3];
	u8 cocci_id/* drivers/hwmon/da9052-hwmon.c 169 */;
	char *cocci_id/* drivers/hwmon/da9052-hwmon.c 118 */;
}
