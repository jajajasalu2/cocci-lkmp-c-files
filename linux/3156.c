cocci_test_suite() {
	struct sch5627_data {
		unsigned short addr;
		struct device *hwmon_dev;
		struct sch56xx_watchdog_data *watchdog;
		u8 control;
		u8 temp_max[SCH5627_NO_TEMPS];
		u8 temp_crit[SCH5627_NO_TEMPS];
		u16 fan_min[SCH5627_NO_FANS];
		struct mutex update_lock;
		unsigned long last_battery;
		char valid;
		unsigned long last_updated;
		u16 temp[SCH5627_NO_TEMPS];
		u16 fan[SCH5627_NO_FANS];
		u16 in[SCH5627_NO_IN];
	} cocci_id/* drivers/hwmon/sch5627.c 66 */;
	const char *const cocci_id/* drivers/hwmon/sch5627.c 63 */[SCH5627_NO_IN];
	const u16 cocci_id/* drivers/hwmon/sch5627.c 61 */[SCH5627_NO_IN];
	struct platform_driver cocci_id/* drivers/hwmon/sch5627.c 579 */;
	const u16 cocci_id/* drivers/hwmon/sch5627.c 50 */[SCH5627_NO_FANS];
	const u16 cocci_id/* drivers/hwmon/sch5627.c 47 */[SCH5627_NO_TEMPS];
	struct sch5627_data cocci_id/* drivers/hwmon/sch5627.c 460 */;
	struct platform_device *cocci_id/* drivers/hwmon/sch5627.c 455 */;
	const struct attribute_group cocci_id/* drivers/hwmon/sch5627.c 436 */;
	struct attribute *cocci_id/* drivers/hwmon/sch5627.c 373 */[];
	int cocci_id/* drivers/hwmon/sch5627.c 284 */;
	struct sch5627_data *cocci_id/* drivers/hwmon/sch5627.c 270 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/sch5627.c 269 */;
	struct device_attribute *cocci_id/* drivers/hwmon/sch5627.c 267 */;
	char *cocci_id/* drivers/hwmon/sch5627.c 267 */;
	struct device *cocci_id/* drivers/hwmon/sch5627.c 266 */;
	ssize_t cocci_id/* drivers/hwmon/sch5627.c 266 */;
	u16 cocci_id/* drivers/hwmon/sch5627.c 185 */;
	u8 cocci_id/* drivers/hwmon/sch5627.c 180 */;
}
