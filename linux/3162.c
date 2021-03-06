cocci_test_suite() {
	u16 cocci_id/* drivers/hwmon/lm95234.c 74 */;
	struct i2c_driver cocci_id/* drivers/hwmon/lm95234.c 717 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/lm95234.c 710 */[];
	int *cocci_id/* drivers/hwmon/lm95234.c 71 */;
	struct lm95234_data cocci_id/* drivers/hwmon/lm95234.c 688 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/lm95234.c 681 */;
	const char *cocci_id/* drivers/hwmon/lm95234.c 598 */;
	u8 cocci_id/* drivers/hwmon/lm95234.c 596 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/lm95234.c 594 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/lm95234.c 592 */;
	struct i2c_client *cocci_id/* drivers/hwmon/lm95234.c 591 */;
	struct attribute *cocci_id/* drivers/hwmon/lm95234.c 569 */[];
	const struct attribute_group cocci_id/* drivers/hwmon/lm95234.c 565 */;
	struct lm95234_data {
		struct i2c_client *client;
		const struct attribute_group *groups[3];
		struct mutex update_lock;
		unsigned long last_updated,interval;
		bool valid;
		int temp[5];
		u32 status;
		u8 tcrit1[5];
		u8 tcrit2[2];
		s8 toffset[4];
		u8 thyst;
		u8 sensor_type;
	} cocci_id/* drivers/hwmon/lm95234.c 54 */;
	long cocci_id/* drivers/hwmon/lm95234.c 424 */;
	size_t cocci_id/* drivers/hwmon/lm95234.c 419 */;
	const unsigned short cocci_id/* drivers/hwmon/lm95234.c 26 */[];
	unsigned long cocci_id/* drivers/hwmon/lm95234.c 249 */;
	enum chips{lm95233, lm95234,} cocci_id/* drivers/hwmon/lm95234.c 24 */;
	int cocci_id/* drivers/hwmon/lm95234.c 224 */;
	u32 cocci_id/* drivers/hwmon/lm95234.c 223 */;
	struct lm95234_data *cocci_id/* drivers/hwmon/lm95234.c 222 */;
	char *cocci_id/* drivers/hwmon/lm95234.c 220 */;
	struct device_attribute *cocci_id/* drivers/hwmon/lm95234.c 219 */;
	struct device *cocci_id/* drivers/hwmon/lm95234.c 219 */;
	ssize_t cocci_id/* drivers/hwmon/lm95234.c 219 */;
	u16 cocci_id/* drivers/hwmon/lm95234.c 109 */[];
	s16 cocci_id/* drivers/hwmon/lm95234.c 104 */;
}
