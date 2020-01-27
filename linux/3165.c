cocci_test_suite() {
	struct w83l785ts_data {
		struct device *hwmon_dev;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		s8 temp[2];
	} cocci_id/* drivers/hwmon/w83l785ts.c 99 */;
	struct i2c_driver cocci_id/* drivers/hwmon/w83l785ts.c 83 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/w83l785ts.c 77 */[];
	struct w83l785ts_data *cocci_id/* drivers/hwmon/w83l785ts.c 71 */(struct device *dev);
	u8 cocci_id/* drivers/hwmon/w83l785ts.c 70 */(struct i2c_client *client,
						      u8 reg, u8 defval);
	int cocci_id/* drivers/hwmon/w83l785ts.c 69 */(struct i2c_client *client);
	int cocci_id/* drivers/hwmon/w83l785ts.c 67 */(struct i2c_client *client,
						       struct i2c_board_info *info);
	int cocci_id/* drivers/hwmon/w83l785ts.c 65 */(struct i2c_client *client,
						       const struct i2c_device_id *id);
	const unsigned short cocci_id/* drivers/hwmon/w83l785ts.c 39 */[];
	const char *cocci_id/* drivers/hwmon/w83l785ts.c 225 */;
	struct w83l785ts_data cocci_id/* drivers/hwmon/w83l785ts.c 173 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/w83l785ts.c 167 */;
	u8 cocci_id/* drivers/hwmon/w83l785ts.c 134 */;
	u16 cocci_id/* drivers/hwmon/w83l785ts.c 133 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/w83l785ts.c 132 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/w83l785ts.c 130 */;
	struct i2c_client *cocci_id/* drivers/hwmon/w83l785ts.c 129 */;
	int cocci_id/* drivers/hwmon/w83l785ts.c 129 */;
	struct w83l785ts_data *cocci_id/* drivers/hwmon/w83l785ts.c 117 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/w83l785ts.c 116 */;
	char *cocci_id/* drivers/hwmon/w83l785ts.c 114 */;
	struct device_attribute *cocci_id/* drivers/hwmon/w83l785ts.c 113 */;
	struct device *cocci_id/* drivers/hwmon/w83l785ts.c 113 */;
	ssize_t cocci_id/* drivers/hwmon/w83l785ts.c 113 */;
}
