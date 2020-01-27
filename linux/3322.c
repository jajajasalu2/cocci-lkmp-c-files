cocci_test_suite() {
	void cocci_id/* drivers/hwmon/asb100.c 928 */;
	u16 cocci_id/* drivers/hwmon/asb100.c 844 */;
	struct asb100_data cocci_id/* drivers/hwmon/asb100.c 784 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/asb100.c 779 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/asb100.c 740 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/asb100.c 738 */;
	struct i2c_client *cocci_id/* drivers/hwmon/asb100.c 737 */;
	unsigned short cocci_id/* drivers/hwmon/asb100.c 673 */[2];
	const struct attribute_group cocci_id/* drivers/hwmon/asb100.c 665 */;
	struct attribute *cocci_id/* drivers/hwmon/asb100.c 598 */[];
	unsigned long cocci_id/* drivers/hwmon/asb100.c 580 */;
	const u16 cocci_id/* drivers/hwmon/asb100.c 58 */[];
	const char *cocci_id/* drivers/hwmon/asb100.c 576 */;
	size_t cocci_id/* drivers/hwmon/asb100.c 576 */;
	struct asb100_data *cocci_id/* drivers/hwmon/asb100.c 514 */;
	char *cocci_id/* drivers/hwmon/asb100.c 512 */;
	struct device_attribute *cocci_id/* drivers/hwmon/asb100.c 511 */;
	struct device *cocci_id/* drivers/hwmon/asb100.c 511 */;
	ssize_t cocci_id/* drivers/hwmon/asb100.c 511 */;
	short cocci_id/* drivers/hwmon/asb100.c 44 */;
	unsigned short cocci_id/* drivers/hwmon/asb100.c 43 */[4];
	const unsigned short cocci_id/* drivers/hwmon/asb100.c 41 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/asb100.c 222 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/asb100.c 216 */[];
	void cocci_id/* drivers/hwmon/asb100.c 214 */(struct i2c_client *client);
	struct asb100_data *cocci_id/* drivers/hwmon/asb100.c 213 */(struct device *dev);
	int cocci_id/* drivers/hwmon/asb100.c 212 */(struct i2c_client *client);
	int cocci_id/* drivers/hwmon/asb100.c 210 */(struct i2c_client *client,
						     struct i2c_board_info *info);
	int cocci_id/* drivers/hwmon/asb100.c 208 */(struct i2c_client *client,
						     const struct i2c_device_id *id);
	void cocci_id/* drivers/hwmon/asb100.c 206 */(struct i2c_client *client,
						      u16 reg, u16 val);
	int cocci_id/* drivers/hwmon/asb100.c 205 */(struct i2c_client *client,
						     u16 reg);
	struct asb100_data {
		struct device *hwmon_dev;
		struct mutex lock;
		struct mutex update_lock;
		unsigned long last_updated;
		struct i2c_client *lm75[2];
		char valid;
		u8 in[7];
		u8 in_max[7];
		u8 in_min[7];
		u8 fan[3];
		u8 fan_min[3];
		u16 temp[4];
		u16 temp_max[4];
		u16 temp_hyst[4];
		u8 fan_div[3];
		u8 pwm;
		u8 vid;
		u32 alarms;
		u8 vrm;
	} cocci_id/* drivers/hwmon/asb100.c 179 */;
	long cocci_id/* drivers/hwmon/asb100.c 169 */;
	u8 cocci_id/* drivers/hwmon/asb100.c 158 */;
	int cocci_id/* drivers/hwmon/asb100.c 158 */;
	s8 cocci_id/* drivers/hwmon/asb100.c 145 */;
	unsigned cocci_id/* drivers/hwmon/asb100.c 108 */;
}
