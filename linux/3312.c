cocci_test_suite() {
	struct thmc50_data {
		struct i2c_client *client;
		const struct attribute_group *groups[3];
		struct mutex update_lock;
		enum chips type;
		unsigned long last_updated;
		char has_temp3;
		char valid;
		s8 temp_input[3];
		s8 temp_max[3];
		s8 temp_min[3];
		s8 temp_critical[3];
		u8 analog_out;
		u8 alarms;
	} cocci_id/* drivers/hwmon/thmc50.c 57 */;
	const u8 cocci_id/* drivers/hwmon/thmc50.c 47 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/thmc50.c 417 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/thmc50.c 410 */[];
	struct thmc50_data cocci_id/* drivers/hwmon/thmc50.c 388 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/thmc50.c 381 */;
	void cocci_id/* drivers/hwmon/thmc50.c 360 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/thmc50.c 313 */;
	unsigned cocci_id/* drivers/hwmon/thmc50.c 310 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/thmc50.c 308 */;
	const struct attribute_group cocci_id/* drivers/hwmon/thmc50.c 302 */;
	struct attribute *cocci_id/* drivers/hwmon/thmc50.c 292 */[];
	unsigned int cocci_id/* drivers/hwmon/thmc50.c 29 */;
	unsigned short cocci_id/* drivers/hwmon/thmc50.c 28 */[16];
	enum chips{thmc50, adm1022,} cocci_id/* drivers/hwmon/thmc50.c 26 */;
	struct thmc50_data *cocci_id/* drivers/hwmon/thmc50.c 243 */;
	int cocci_id/* drivers/hwmon/thmc50.c 242 */;
	char *cocci_id/* drivers/hwmon/thmc50.c 240 */;
	struct device_attribute *cocci_id/* drivers/hwmon/thmc50.c 239 */;
	struct device *cocci_id/* drivers/hwmon/thmc50.c 239 */;
	ssize_t cocci_id/* drivers/hwmon/thmc50.c 239 */;
	const unsigned short cocci_id/* drivers/hwmon/thmc50.c 23 */[];
	long cocci_id/* drivers/hwmon/thmc50.c 216 */;
	unsigned long cocci_id/* drivers/hwmon/thmc50.c 132 */;
	struct i2c_client *cocci_id/* drivers/hwmon/thmc50.c 130 */;
	const char *cocci_id/* drivers/hwmon/thmc50.c 127 */;
	size_t cocci_id/* drivers/hwmon/thmc50.c 127 */;
}
