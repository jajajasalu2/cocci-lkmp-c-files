cocci_test_suite() {
	const u8 cocci_id/* drivers/hwmon/max1619.c 90 */[t_num_regs];
	struct max1619_data {
		struct i2c_client *client;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		u8 temp[t_num_regs];
		u8 alarms;
	} cocci_id/* drivers/hwmon/max1619.c 79 */;
	enum temp_index{t_input1=0, t_input2, t_low2, t_high2, t_crit2, t_hyst2, t_num_regs,} cocci_id/* drivers/hwmon/max1619.c 65 */;
	struct i2c_driver cocci_id/* drivers/hwmon/max1619.c 303 */;
	const struct of_device_id cocci_id/* drivers/hwmon/max1619.c 295 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/max1619.c 288 */[];
	struct max1619_data cocci_id/* drivers/hwmon/max1619.c 270 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/max1619.c 265 */;
	const unsigned short cocci_id/* drivers/hwmon/max1619.c 26 */[];
	void cocci_id/* drivers/hwmon/max1619.c 249 */;
	u8 cocci_id/* drivers/hwmon/max1619.c 218 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/max1619.c 217 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/max1619.c 215 */;
	struct i2c_client *cocci_id/* drivers/hwmon/max1619.c 214 */;
	struct attribute *cocci_id/* drivers/hwmon/max1619.c 196 */[];
	struct max1619_data *cocci_id/* drivers/hwmon/max1619.c 179 */;
	int cocci_id/* drivers/hwmon/max1619.c 178 */;
	char *cocci_id/* drivers/hwmon/max1619.c 176 */;
	struct device_attribute *cocci_id/* drivers/hwmon/max1619.c 175 */;
	struct device *cocci_id/* drivers/hwmon/max1619.c 175 */;
	ssize_t cocci_id/* drivers/hwmon/max1619.c 175 */;
	long cocci_id/* drivers/hwmon/max1619.c 155 */;
	size_t cocci_id/* drivers/hwmon/max1619.c 150 */;
	const char *cocci_id/* drivers/hwmon/max1619.c 149 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/max1619.c 142 */;
}
