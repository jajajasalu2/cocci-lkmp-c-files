cocci_test_suite() {
	struct temperature *cocci_id/* drivers/hwmon/emc2103.c 86 */;
	u8 *cocci_id/* drivers/hwmon/emc2103.c 73 */;
	struct i2c_driver cocci_id/* drivers/hwmon/emc2103.c 651 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/emc2103.c 632 */;
	struct i2c_client *cocci_id/* drivers/hwmon/emc2103.c 630 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/emc2103.c 630 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/emc2103.c 622 */[];
	struct emc2103_data cocci_id/* drivers/hwmon/emc2103.c 563 */;
	struct device *cocci_id/* drivers/hwmon/emc2103.c 557 */;
	struct emc2103_data *cocci_id/* drivers/hwmon/emc2103.c 556 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/emc2103.c 554 */;
	struct emc2103_data {
		struct i2c_client *client;
		const struct attribute_group *groups[4];
		struct mutex update_lock;
		bool valid;
		bool fan_rpm_control;
		int temp_count;
		unsigned long last_updated;
		struct temperature temp[4];
		s8 temp_min[4];
		s8 temp_max[4];
		u8 temp_min_alarm;
		u8 temp_max_alarm;
		u8 fan_multiplier;
		u16 fan_tach;
		u16 fan_target;
	} cocci_id/* drivers/hwmon/emc2103.c 55 */;
	const struct attribute_group cocci_id/* drivers/hwmon/emc2103.c 541 */;
	struct temperature {
		s8 degrees;
		u8 fraction;
	} cocci_id/* drivers/hwmon/emc2103.c 50 */;
	struct attribute *cocci_id/* drivers/hwmon/emc2103.c 498 */[];
	int cocci_id/* drivers/hwmon/emc2103.c 46 */;
	u8 cocci_id/* drivers/hwmon/emc2103.c 426 */;
	bool cocci_id/* drivers/hwmon/emc2103.c 408 */;
	unsigned long cocci_id/* drivers/hwmon/emc2103.c 380 */;
	u16 cocci_id/* drivers/hwmon/emc2103.c 348 */;
	long cocci_id/* drivers/hwmon/emc2103.c 305 */;
	const char *cocci_id/* drivers/hwmon/emc2103.c 300 */;
	size_t cocci_id/* drivers/hwmon/emc2103.c 300 */;
	struct device_attribute *cocci_id/* drivers/hwmon/emc2103.c 286 */;
	char *cocci_id/* drivers/hwmon/emc2103.c 286 */;
	ssize_t cocci_id/* drivers/hwmon/emc2103.c 285 */;
	const u8 cocci_id/* drivers/hwmon/emc2103.c 20 */[4];
	const unsigned short cocci_id/* drivers/hwmon/emc2103.c 18 */[];
	void cocci_id/* drivers/hwmon/emc2103.c 122 */;
	u16 *cocci_id/* drivers/hwmon/emc2103.c 100 */;
}