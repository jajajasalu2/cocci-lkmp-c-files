cocci_test_suite() {
	struct lm92_data {
		struct i2c_client *client;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		s16 temp[t_num_regs];
	} cocci_id/* drivers/hwmon/lm92.c 99 */;
	const u8 cocci_id/* drivers/hwmon/lm92.c 90 */[t_num_regs];
	enum temp_index{t_input, t_crit, t_min, t_max, t_hyst, t_num_regs,} cocci_id/* drivers/hwmon/lm92.c 81 */;
	u8 cocci_id/* drivers/hwmon/lm92.c 76 */;
	s16 cocci_id/* drivers/hwmon/lm92.c 76 */;
	long cocci_id/* drivers/hwmon/lm92.c 69 */;
	int cocci_id/* drivers/hwmon/lm92.c 64 */;
	enum chips{lm92, max6635,} cocci_id/* drivers/hwmon/lm92.c 46 */;
	const unsigned short cocci_id/* drivers/hwmon/lm92.c 44 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/lm92.c 329 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/lm92.c 322 */[];
	struct lm92_data cocci_id/* drivers/hwmon/lm92.c 301 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/lm92.c 296 */;
	u16 cocci_id/* drivers/hwmon/lm92.c 276 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/lm92.c 274 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/lm92.c 272 */;
	struct i2c_client *cocci_id/* drivers/hwmon/lm92.c 271 */;
	struct attribute *cocci_id/* drivers/hwmon/lm92.c 254 */[];
	void cocci_id/* drivers/hwmon/lm92.c 243 */;
	struct lm92_data *cocci_id/* drivers/hwmon/lm92.c 223 */;
	char *cocci_id/* drivers/hwmon/lm92.c 220 */;
	struct device_attribute *cocci_id/* drivers/hwmon/lm92.c 219 */;
	struct device *cocci_id/* drivers/hwmon/lm92.c 219 */;
	ssize_t cocci_id/* drivers/hwmon/lm92.c 219 */;
	const char *cocci_id/* drivers/hwmon/lm92.c 189 */;
	size_t cocci_id/* drivers/hwmon/lm92.c 189 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/lm92.c 171 */;
}
