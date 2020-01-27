cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/hwmon/max6650.c 815 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/max6650.c 808 */[];
	uintptr_t cocci_id/* drivers/hwmon/max6650.c 778 */;
	struct max6650_data cocci_id/* drivers/hwmon/max6650.c 771 */;
	const struct of_device_id *cocci_id/* drivers/hwmon/max6650.c 765 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/max6650.c 761 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/max6650.c 755 */;
	const struct hwmon_ops cocci_id/* drivers/hwmon/max6650.c 749 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/max6650.c 740 */[];
	const struct max6650_data *cocci_id/* drivers/hwmon/max6650.c 696 */;
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/max6650.c 693 */;
	const void *cocci_id/* drivers/hwmon/max6650.c 692 */;
	long cocci_id/* drivers/hwmon/max6650.c 611 */;
	const u8 cocci_id/* drivers/hwmon/max6650.c 603 */[];
	long *cocci_id/* drivers/hwmon/max6650.c 520 */;
	const struct thermal_cooling_device_ops cocci_id/* drivers/hwmon/max6650.c 513 */;
	unsigned long cocci_id/* drivers/hwmon/max6650.c 489 */;
	unsigned long *cocci_id/* drivers/hwmon/max6650.c 479 */;
	struct thermal_cooling_device *cocci_id/* drivers/hwmon/max6650.c 478 */;
	int cocci_id/* drivers/hwmon/max6650.c 41 */;
	u32 cocci_id/* drivers/hwmon/max6650.c 364 */;
	struct i2c_client *cocci_id/* drivers/hwmon/max6650.c 359 */;
	const struct attribute_group *cocci_id/* drivers/hwmon/max6650.c 353 */[];
	const struct attribute_group cocci_id/* drivers/hwmon/max6650.c 348 */;
	struct attribute *cocci_id/* drivers/hwmon/max6650.c 342 */[];
	struct device_attribute cocci_id/* drivers/hwmon/max6650.c 332 */;
	struct device cocci_id/* drivers/hwmon/max6650.c 324 */;
	umode_t cocci_id/* drivers/hwmon/max6650.c 321 */;
	struct kobject *cocci_id/* drivers/hwmon/max6650.c 321 */;
	struct attribute *cocci_id/* drivers/hwmon/max6650.c 321 */;
	bool cocci_id/* drivers/hwmon/max6650.c 302 */;
	struct max6650_data *cocci_id/* drivers/hwmon/max6650.c 301 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/max6650.c 300 */;
	struct device_attribute *cocci_id/* drivers/hwmon/max6650.c 298 */;
	char *cocci_id/* drivers/hwmon/max6650.c 298 */;
	struct device *cocci_id/* drivers/hwmon/max6650.c 297 */;
	ssize_t cocci_id/* drivers/hwmon/max6650.c 297 */;
	u8 cocci_id/* drivers/hwmon/max6650.c 201 */;
	unsigned int cocci_id/* drivers/hwmon/max6650.c 149 */;
	void *cocci_id/* drivers/hwmon/max6650.c 130 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/hwmon/max6650.c 127 */[];
	struct max6650_data {
		struct i2c_client *client;
		struct mutex update_lock;
		int nr_fans;
		bool valid;
		unsigned long last_updated;
		u8 speed;
		u8 config;
		u8 tach[4];
		u8 count;
		u8 dac;
		u8 alarm;
		u8 alarm_en;
		unsigned long cooling_dev_state;
	} cocci_id/* drivers/hwmon/max6650.c 102 */;
}