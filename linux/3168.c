cocci_test_suite() {
	struct sch5636_data {
		unsigned short addr;
		struct device *hwmon_dev;
		struct sch56xx_watchdog_data *watchdog;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		u8 in[SCH5636_NO_INS];
		u8 temp_val[SCH5636_NO_TEMPS];
		u8 temp_ctrl[SCH5636_NO_TEMPS];
		u16 fan_val[SCH5636_NO_FANS];
		u8 fan_ctrl[SCH5636_NO_FANS];
	} cocci_id/* drivers/hwmon/sch5636.c 54 */;
	struct platform_driver cocci_id/* drivers/hwmon/sch5636.c 509 */;
	const u16 cocci_id/* drivers/hwmon/sch5636.c 45 */[SCH5636_NO_FANS];
	struct sch5636_data cocci_id/* drivers/hwmon/sch5636.c 401 */;
	char cocci_id/* drivers/hwmon/sch5636.c 399 */[4];
	struct platform_device *cocci_id/* drivers/hwmon/sch5636.c 395 */;
	const u16 cocci_id/* drivers/hwmon/sch5636.c 37 */[SCH5636_NO_TEMPS];
	const char *const cocci_id/* drivers/hwmon/sch5636.c 34 */[SCH5636_NO_INS];
	const u16 cocci_id/* drivers/hwmon/sch5636.c 32 */[SCH5636_NO_INS];
	struct sensor_device_attribute cocci_id/* drivers/hwmon/sch5636.c 278 */[];
	int cocci_id/* drivers/hwmon/sch5636.c 269 */;
	struct sch5636_data *cocci_id/* drivers/hwmon/sch5636.c 268 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/sch5636.c 267 */;
	struct device_attribute *cocci_id/* drivers/hwmon/sch5636.c 265 */;
	char *cocci_id/* drivers/hwmon/sch5636.c 265 */;
	struct device *cocci_id/* drivers/hwmon/sch5636.c 264 */;
	ssize_t cocci_id/* drivers/hwmon/sch5636.c 264 */;
	u16 cocci_id/* drivers/hwmon/sch5636.c 150 */;
}
