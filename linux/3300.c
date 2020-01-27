cocci_test_suite() {
	struct adm1029_data {
		struct i2c_client *client;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		s8 temp[ARRAY_SIZE(ADM1029_REG_TEMP)];
		u8 fan[ARRAY_SIZE(ADM1029_REG_FAN)];
		u8 fan_div[ARRAY_SIZE(ADM1029_REG_FAN_DIV)];
	} cocci_id/* drivers/hwmon/adm1029.c 99 */;
	const u8 cocci_id/* drivers/hwmon/adm1029.c 83 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/adm1029.c 388 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/adm1029.c 382 */[];
	struct adm1029_data cocci_id/* drivers/hwmon/adm1029.c 362 */;
	struct adm1029_data *cocci_id/* drivers/hwmon/adm1029.c 359 */;
	struct device *cocci_id/* drivers/hwmon/adm1029.c 358 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/adm1029.c 356 */;
	u8 cocci_id/* drivers/hwmon/adm1029.c 299 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/adm1029.c 298 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/adm1029.c 296 */;
	struct i2c_client *cocci_id/* drivers/hwmon/adm1029.c 295 */;
	int cocci_id/* drivers/hwmon/adm1029.c 295 */;
	const unsigned short cocci_id/* drivers/hwmon/adm1029.c 29 */[];
	struct attribute *cocci_id/* drivers/hwmon/adm1029.c 269 */[];
	long cocci_id/* drivers/hwmon/adm1029.c 204 */;
	const char *cocci_id/* drivers/hwmon/adm1029.c 198 */;
	size_t cocci_id/* drivers/hwmon/adm1029.c 198 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/adm1029.c 188 */;
	struct device_attribute *cocci_id/* drivers/hwmon/adm1029.c 186 */;
	char *cocci_id/* drivers/hwmon/adm1029.c 186 */;
	ssize_t cocci_id/* drivers/hwmon/adm1029.c 185 */;
	u16 cocci_id/* drivers/hwmon/adm1029.c 172 */;
}
