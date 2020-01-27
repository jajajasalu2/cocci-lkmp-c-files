cocci_test_suite() {
	const u8 cocci_id/* drivers/hwmon/tmp401.c 87 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/tmp401.c 734 */;
	const u8 cocci_id/* drivers/hwmon/tmp401.c 72 */[4][3];
	struct tmp401_data cocci_id/* drivers/hwmon/tmp401.c 697 */;
	const char *const cocci_id/* drivers/hwmon/tmp401.c 689 */[];
	const struct i2c_device_id *cocci_id/* drivers/hwmon/tmp401.c 687 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/tmp401.c 621 */;
	enum chips cocci_id/* drivers/hwmon/tmp401.c 620 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/tmp401.c 618 */;
	const u8 cocci_id/* drivers/hwmon/tmp401.c 52 */[7][2];
	const struct attribute_group cocci_id/* drivers/hwmon/tmp401.c 512 */;
	struct attribute *cocci_id/* drivers/hwmon/tmp401.c 487 */[];
	long cocci_id/* drivers/hwmon/tmp401.c 403 */;
	struct i2c_client *cocci_id/* drivers/hwmon/tmp401.c 402 */;
	struct tmp401_data *cocci_id/* drivers/hwmon/tmp401.c 401 */;
	const char *cocci_id/* drivers/hwmon/tmp401.c 399 */;
	size_t cocci_id/* drivers/hwmon/tmp401.c 399 */;
	struct device_attribute *cocci_id/* drivers/hwmon/tmp401.c 398 */;
	struct device *cocci_id/* drivers/hwmon/tmp401.c 397 */;
	ssize_t cocci_id/* drivers/hwmon/tmp401.c 397 */;
	enum chips{tmp401, tmp411, tmp431, tmp432, tmp435, tmp461,} cocci_id/* drivers/hwmon/tmp401.c 37 */;
	u8 cocci_id/* drivers/hwmon/tmp401.c 364 */;
	const unsigned short cocci_id/* drivers/hwmon/tmp401.c 34 */[];
	u16 cocci_id/* drivers/hwmon/tmp401.c 332 */;
	int cocci_id/* drivers/hwmon/tmp401.c 313 */;
	char *cocci_id/* drivers/hwmon/tmp401.c 311 */;
	unsigned long cocci_id/* drivers/hwmon/tmp401.c 212 */;
	struct tmp401_data {
		struct i2c_client *client;
		const struct attribute_group *groups[3];
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		enum chips kind;
		unsigned int update_interval;
		u8 status[4];
		u8 config;
		u16 temp[7][3];
		u8 temp_crit_hyst;
	} cocci_id/* drivers/hwmon/tmp401.c 135 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/tmp401.c 120 */[];
}
