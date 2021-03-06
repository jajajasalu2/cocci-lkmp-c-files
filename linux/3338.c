cocci_test_suite() {
	const u8 cocci_id/* drivers/hwmon/adt7411.c 89 */[];
	const unsigned short cocci_id/* drivers/hwmon/adt7411.c 75 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/adt7411.c 706 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/adt7411.c 700 */[];
	struct device *cocci_id/* drivers/hwmon/adt7411.c 672 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/adt7411.c 670 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/adt7411.c 664 */;
	const struct hwmon_ops cocci_id/* drivers/hwmon/adt7411.c 658 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/adt7411.c 639 */[];
	u8 cocci_id/* drivers/hwmon/adt7411.c 601 */;
	struct adt7411_data *cocci_id/* drivers/hwmon/adt7411.c 598 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/adt7411.c 570 */;
	struct i2c_client *cocci_id/* drivers/hwmon/adt7411.c 569 */;
	int cocci_id/* drivers/hwmon/adt7411.c 569 */;
	bool cocci_id/* drivers/hwmon/adt7411.c 536 */;
	const struct adt7411_data *cocci_id/* drivers/hwmon/adt7411.c 535 */;
	u32 cocci_id/* drivers/hwmon/adt7411.c 533 */;
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/adt7411.c 532 */;
	umode_t cocci_id/* drivers/hwmon/adt7411.c 531 */;
	const void *cocci_id/* drivers/hwmon/adt7411.c 531 */;
	long cocci_id/* drivers/hwmon/adt7411.c 519 */;
	long *cocci_id/* drivers/hwmon/adt7411.c 418 */;
	struct attribute *cocci_id/* drivers/hwmon/adt7411.c 207 */[];
	unsigned long cocci_id/* drivers/hwmon/adt7411.c 183 */;
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/adt7411.c 179 */;
	size_t cocci_id/* drivers/hwmon/adt7411.c 177 */;
	const char *cocci_id/* drivers/hwmon/adt7411.c 176 */;
	struct device_attribute *cocci_id/* drivers/hwmon/adt7411.c 176 */;
	ssize_t cocci_id/* drivers/hwmon/adt7411.c 175 */;
	char *cocci_id/* drivers/hwmon/adt7411.c 165 */;
	struct adt7411_data {
		struct mutex device_lock;
		struct mutex update_lock;
		unsigned long next_update;
		long vref_cached;
		struct i2c_client *client;
		bool use_ext_temp;
	} cocci_id/* drivers/hwmon/adt7411.c 101 */;
}
