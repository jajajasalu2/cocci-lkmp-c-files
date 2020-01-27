cocci_test_suite() {
	const char *cocci_id/* drivers/hwmon/f75375s.c 884 */;
	u16 cocci_id/* drivers/hwmon/f75375s.c 882 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/f75375s.c 881 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/f75375s.c 879 */;
	struct i2c_client *cocci_id/* drivers/hwmon/f75375s.c 878 */;
	int cocci_id/* drivers/hwmon/f75375s.c 878 */;
	struct f75375_data cocci_id/* drivers/hwmon/f75375s.c 828 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/f75375s.c 818 */;
	struct f75375_data {
		unsigned short addr;
		struct device *hwmon_dev;
		const char *name;
		int kind;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		unsigned long last_limits;
		u8 in[4];
		u8 in_max[4];
		u8 in_min[4];
		u16 fan[2];
		u16 fan_min[2];
		u16 fan_max[2];
		u16 fan_target[2];
		u8 fan_timer;
		u8 pwm[2];
		u8 pwm_mode[2];
		u8 pwm_enable[2];
		s16 temp11[2];
		s8 temp_high[2];
		s8 temp_max_hyst[2];
	} cocci_id/* drivers/hwmon/f75375s.c 81 */;
	struct f75375s_platform_data *cocci_id/* drivers/hwmon/f75375s.c 754 */;
	struct f75375_data *cocci_id/* drivers/hwmon/f75375s.c 753 */;
	void cocci_id/* drivers/hwmon/f75375s.c 753 */;
	const struct attribute_group cocci_id/* drivers/hwmon/f75375s.c 749 */;
	struct attribute *cocci_id/* drivers/hwmon/f75375s.c 713 */[];
	char *cocci_id/* drivers/hwmon/f75375s.c 509 */;
	char cocci_id/* drivers/hwmon/f75375s.c 454 */;
	enum chips{f75373, f75375, f75387,} cocci_id/* drivers/hwmon/f75375s.c 32 */;
	const unsigned short cocci_id/* drivers/hwmon/f75375s.c 30 */[];
	unsigned long cocci_id/* drivers/hwmon/f75375s.c 291 */;
	size_t cocci_id/* drivers/hwmon/f75375s.c 286 */;
	struct device_attribute *cocci_id/* drivers/hwmon/f75375s.c 285 */;
	ssize_t cocci_id/* drivers/hwmon/f75375s.c 285 */;
	u8 cocci_id/* drivers/hwmon/f75375s.c 269 */;
	bool cocci_id/* drivers/hwmon/f75375s.c 269 */;
	struct device *cocci_id/* drivers/hwmon/f75375s.c 177 */;
	struct i2c_driver cocci_id/* drivers/hwmon/f75375s.c 128 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/f75375s.c 120 */[];
	int cocci_id/* drivers/hwmon/f75375s.c 118 */(struct i2c_client *client);
	int cocci_id/* drivers/hwmon/f75375s.c 116 */(struct i2c_client *client,
						      const struct i2c_device_id *id);
	int cocci_id/* drivers/hwmon/f75375s.c 114 */(struct i2c_client *client,
						      struct i2c_board_info *info);
}
