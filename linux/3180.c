cocci_test_suite() {
	struct adm1025_data {
		struct i2c_client *client;
		const struct attribute_group *groups[3];
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		u8 in[6];
		u8 in_max[6];
		u8 in_min[6];
		s8 temp[2];
		s8 temp_min[2];
		s8 temp_max[2];
		u16 alarms;
		u8 vid;
		u8 vrm;
	} cocci_id/* drivers/hwmon/adm1025.c 96 */;
	const int cocci_id/* drivers/hwmon/adm1025.c 79 */[6];
	struct i2c_driver cocci_id/* drivers/hwmon/adm1025.c 558 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/adm1025.c 551 */[];
	enum chips{adm1025, ne1619,} cocci_id/* drivers/hwmon/adm1025.c 54 */;
	struct adm1025_data cocci_id/* drivers/hwmon/adm1025.c 528 */;
	struct device *cocci_id/* drivers/hwmon/adm1025.c 523 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/adm1025.c 521 */;
	const unsigned short cocci_id/* drivers/hwmon/adm1025.c 52 */[];
	struct adm1025_data *cocci_id/* drivers/hwmon/adm1025.c 481 */;
	void cocci_id/* drivers/hwmon/adm1025.c 478 */;
	u8 cocci_id/* drivers/hwmon/adm1025.c 446 */;
	const char *cocci_id/* drivers/hwmon/adm1025.c 445 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/adm1025.c 444 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/adm1025.c 442 */;
	struct i2c_client *cocci_id/* drivers/hwmon/adm1025.c 441 */;
	int cocci_id/* drivers/hwmon/adm1025.c 441 */;
	const struct attribute_group cocci_id/* drivers/hwmon/adm1025.c 424 */;
	struct attribute *cocci_id/* drivers/hwmon/adm1025.c 388 */[];
	unsigned long cocci_id/* drivers/hwmon/adm1025.c 369 */;
	struct device_attribute *cocci_id/* drivers/hwmon/adm1025.c 335 */;
	char *cocci_id/* drivers/hwmon/adm1025.c 335 */;
	ssize_t cocci_id/* drivers/hwmon/adm1025.c 334 */;
	long cocci_id/* drivers/hwmon/adm1025.c 241 */;
	size_t cocci_id/* drivers/hwmon/adm1025.c 236 */;
}
