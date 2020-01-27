cocci_test_suite() {
	const u8 cocci_id/* drivers/hwmon/adt7x10.c 96 */[4];
	u16 cocci_id/* drivers/hwmon/adt7x10.c 90 */;
	u8 cocci_id/* drivers/hwmon/adt7x10.c 72 */;
	struct adt7x10_data {
		const struct adt7x10_ops *ops;
		const char *name;
		struct device *hwmon_dev;
		struct mutex update_lock;
		u8 config;
		u8 oldconfig;
		bool valid;
		unsigned long last_updated;
		s16 temp[4];
		u8 hyst;
	} cocci_id/* drivers/hwmon/adt7x10.c 55 */;
	const struct adt7x10_ops *cocci_id/* drivers/hwmon/adt7x10.c 360 */;
	const char *cocci_id/* drivers/hwmon/adt7x10.c 359 */;
	const struct attribute_group cocci_id/* drivers/hwmon/adt7x10.c 355 */;
	struct attribute *cocci_id/* drivers/hwmon/adt7x10.c 341 */[];
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/adt7x10.c 308 */;
	struct device_attribute *cocci_id/* drivers/hwmon/adt7x10.c 306 */;
	char *cocci_id/* drivers/hwmon/adt7x10.c 306 */;
	struct device *cocci_id/* drivers/hwmon/adt7x10.c 305 */;
	ssize_t cocci_id/* drivers/hwmon/adt7x10.c 305 */;
	size_t cocci_id/* drivers/hwmon/adt7x10.c 284 */;
	s16 cocci_id/* drivers/hwmon/adt7x10.c 204 */;
	struct adt7x10_data *cocci_id/* drivers/hwmon/adt7x10.c 204 */;
	int cocci_id/* drivers/hwmon/adt7x10.c 204 */;
	long cocci_id/* drivers/hwmon/adt7x10.c 198 */;
	irqreturn_t cocci_id/* drivers/hwmon/adt7x10.c 103 */;
	void *cocci_id/* drivers/hwmon/adt7x10.c 103 */;
}
