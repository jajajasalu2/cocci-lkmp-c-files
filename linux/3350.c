cocci_test_suite() {
	struct sensor_device_attribute_2 cocci_id/* drivers/hwmon/w83791d.c 990 */[];
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/w83791d.c 956 */;
	const u8 cocci_id/* drivers/hwmon/w83791d.c 95 */[NUMBER_OF_FANIN];
	const u8 cocci_id/* drivers/hwmon/w83791d.c 58 */[NUMBER_OF_VIN];
	bool cocci_id/* drivers/hwmon/w83791d.c 53 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/w83791d.c 481 */;
	short cocci_id/* drivers/hwmon/w83791d.c 45 */;
	unsigned short cocci_id/* drivers/hwmon/w83791d.c 44 */[4];
	const unsigned short cocci_id/* drivers/hwmon/w83791d.c 39 */[];
	unsigned long cocci_id/* drivers/hwmon/w83791d.c 378 */;
	struct i2c_client *cocci_id/* drivers/hwmon/w83791d.c 375 */;
	const char *cocci_id/* drivers/hwmon/w83791d.c 371 */;
	size_t cocci_id/* drivers/hwmon/w83791d.c 371 */;
	struct i2c_driver cocci_id/* drivers/hwmon/w83791d.c 340 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/w83791d.c 334 */[];
	void cocci_id/* drivers/hwmon/w83791d.c 332 */(struct i2c_client *client);
	void cocci_id/* drivers/hwmon/w83791d.c 329 */(struct w83791d_data *data,
						       struct device *dev);
	struct w83791d_data *cocci_id/* drivers/hwmon/w83791d.c 326 */(struct device *dev);
	int cocci_id/* drivers/hwmon/w83791d.c 325 */(struct i2c_client *client,
						      u8 reg, u8 value);
	int cocci_id/* drivers/hwmon/w83791d.c 324 */(struct i2c_client *client,
						      u8 reg);
	int cocci_id/* drivers/hwmon/w83791d.c 322 */(struct i2c_client *client);
	int cocci_id/* drivers/hwmon/w83791d.c 320 */(struct i2c_client *client,
						      struct i2c_board_info *info);
	int cocci_id/* drivers/hwmon/w83791d.c 318 */(struct i2c_client *client,
						      const struct i2c_device_id *id);
	struct w83791d_data {
		struct device *hwmon_dev;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		struct i2c_client *lm75[2];
		u8 in[NUMBER_OF_VIN];
		u8 in_max[NUMBER_OF_VIN];
		u8 in_min[NUMBER_OF_VIN];
		u8 fan[NUMBER_OF_FANIN];
		u8 fan_min[NUMBER_OF_FANIN];
		u8 fan_div[NUMBER_OF_FANIN];
		s8 temp1[3];
		s16 temp_add[2][3];
		u8 pwm[5];
		u8 pwm_enable[3];
		u8 temp_target[3];
		u8 temp_tolerance[3];
		u32 alarms;
		u8 beep_enable;
		u32 beep_mask;
		u8 vid;
		u8 vrm;
	} cocci_id/* drivers/hwmon/w83791d.c 269 */;
	u8 cocci_id/* drivers/hwmon/w83791d.c 255 */;
	long cocci_id/* drivers/hwmon/w83791d.c 255 */;
	int cocci_id/* drivers/hwmon/w83791d.c 255 */;
	const u8 cocci_id/* drivers/hwmon/w83791d.c 167 */[3];
	u16 cocci_id/* drivers/hwmon/w83791d.c 1649 */;
	const u8 cocci_id/* drivers/hwmon/w83791d.c 150 */[2][6];
	u8 cocci_id/* drivers/hwmon/w83791d.c 1491 */[3];
	void cocci_id/* drivers/hwmon/w83791d.c 1427 */;
	struct w83791d_data cocci_id/* drivers/hwmon/w83791d.c 1364 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/w83791d.c 1350 */;
	unsigned short cocci_id/* drivers/hwmon/w83791d.c 1310 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/w83791d.c 1308 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/w83791d.c 1306 */;
	const u8 cocci_id/* drivers/hwmon/w83791d.c 129 */[2];
	const struct attribute_group cocci_id/* drivers/hwmon/w83791d.c 1237 */;
	struct attribute *cocci_id/* drivers/hwmon/w83791d.c 1200 */[];
	struct sensor_device_attribute cocci_id/* drivers/hwmon/w83791d.c 1129 */[];
	const u8 cocci_id/* drivers/hwmon/w83791d.c 110 */[NUMBER_OF_PWM];
	struct w83791d_data *cocci_id/* drivers/hwmon/w83791d.c 1034 */;
	char *cocci_id/* drivers/hwmon/w83791d.c 1032 */;
	struct device_attribute *cocci_id/* drivers/hwmon/w83791d.c 1031 */;
	struct device *cocci_id/* drivers/hwmon/w83791d.c 1031 */;
	ssize_t cocci_id/* drivers/hwmon/w83791d.c 1031 */;
}
