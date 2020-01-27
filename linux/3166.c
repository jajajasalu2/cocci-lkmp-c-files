cocci_test_suite() {
	struct max6639_data {
		struct i2c_client *client;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		u16 temp[2];
		bool temp_fault[2];
		u8 fan[2];
		u8 status;
		u8 pwm[2];
		u8 temp_therm[2];
		u8 temp_alert[2];
		u8 temp_ot[2];
		u8 ppr;
		u8 rpm_range;
	} cocci_id/* drivers/hwmon/max6639.c 69 */;
	const int cocci_id/* drivers/hwmon/max6639.c 60 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/max6639.c 578 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/max6639.c 569 */[];
	struct max6639_data cocci_id/* drivers/hwmon/max6639.c 527 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/max6639.c 520 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/max6639.c 502 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/max6639.c 500 */;
	struct i2c_client *cocci_id/* drivers/hwmon/max6639.c 499 */;
	int cocci_id/* drivers/hwmon/max6639.c 499 */;
	struct max6639_platform_data *cocci_id/* drivers/hwmon/max6639.c 404 */;
	struct attribute *cocci_id/* drivers/hwmon/max6639.c 358 */[];
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/max6639.c 326 */;
	struct max6639_data *cocci_id/* drivers/hwmon/max6639.c 325 */;
	struct device_attribute *cocci_id/* drivers/hwmon/max6639.c 323 */;
	char *cocci_id/* drivers/hwmon/max6639.c 323 */;
	struct device *cocci_id/* drivers/hwmon/max6639.c 322 */;
	ssize_t cocci_id/* drivers/hwmon/max6639.c 322 */;
	u8 cocci_id/* drivers/hwmon/max6639.c 301 */;
	unsigned long cocci_id/* drivers/hwmon/max6639.c 291 */;
	size_t cocci_id/* drivers/hwmon/max6639.c 286 */;
	const char *cocci_id/* drivers/hwmon/max6639.c 285 */;
	const unsigned short cocci_id/* drivers/hwmon/max6639.c 25 */[];
	long cocci_id/* drivers/hwmon/max6639.c 155 */;
}