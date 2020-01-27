cocci_test_suite() {
	u8 cocci_id/* drivers/hwmon/lm77.c 86 */;
	u16 cocci_id/* drivers/hwmon/lm77.c 86 */;
	s16 cocci_id/* drivers/hwmon/lm77.c 77 */;
	int cocci_id/* drivers/hwmon/lm77.c 77 */;
	struct lm77_data {
		struct i2c_client *client;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		int temp[t_num_temp];
		u8 alarms;
	} cocci_id/* drivers/hwmon/lm77.c 55 */;
	const u8 cocci_id/* drivers/hwmon/lm77.c 46 */[t_num_temp];
	enum temp_index{t_input=0, t_crit, t_min, t_max, t_hyst, t_num_temp,} cocci_id/* drivers/hwmon/lm77.c 37 */;
	struct i2c_driver cocci_id/* drivers/hwmon/lm77.c 346 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/lm77.c 339 */[];
	struct lm77_data cocci_id/* drivers/hwmon/lm77.c 324 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/lm77.c 318 */;
	void cocci_id/* drivers/hwmon/lm77.c 310 */;
	const unsigned short cocci_id/* drivers/hwmon/lm77.c 26 */[];
	struct i2c_adapter *cocci_id/* drivers/hwmon/lm77.c 242 */;
	struct i2c_client *cocci_id/* drivers/hwmon/lm77.c 240 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/lm77.c 240 */;
	struct attribute *cocci_id/* drivers/hwmon/lm77.c 224 */[];
	struct lm77_data *cocci_id/* drivers/hwmon/lm77.c 207 */;
	char *cocci_id/* drivers/hwmon/lm77.c 204 */;
	struct device_attribute *cocci_id/* drivers/hwmon/lm77.c 203 */;
	struct device *cocci_id/* drivers/hwmon/lm77.c 203 */;
	ssize_t cocci_id/* drivers/hwmon/lm77.c 203 */;
	long cocci_id/* drivers/hwmon/lm77.c 187 */;
	const char *cocci_id/* drivers/hwmon/lm77.c 183 */;
	size_t cocci_id/* drivers/hwmon/lm77.c 183 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/lm77.c 143 */;
}
