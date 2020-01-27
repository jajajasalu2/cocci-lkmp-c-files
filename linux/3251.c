cocci_test_suite() {
	u32 cocci_id/* drivers/hwmon/ltc4215.c 80 */;
	u8 cocci_id/* drivers/hwmon/ltc4215.c 76 */;
	int cocci_id/* drivers/hwmon/ltc4215.c 76 */;
	s32 cocci_id/* drivers/hwmon/ltc4215.c 47 */;
	struct ltc4215_data {
		struct i2c_client *client;
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		u8 regs[7];
	} cocci_id/* drivers/hwmon/ltc4215.c 32 */;
	struct i2c_driver cocci_id/* drivers/hwmon/ltc4215.c 255 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/ltc4215.c 248 */[];
	struct i2c_adapter *cocci_id/* drivers/hwmon/ltc4215.c 224 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/ltc4215.c 222 */;
	struct i2c_client *cocci_id/* drivers/hwmon/ltc4215.c 221 */;
	enum ltc4215_cmd{LTC4215_CONTROL=0x00, LTC4215_ALERT=0x01, LTC4215_STATUS=0x02, LTC4215_FAULT=0x03, LTC4215_SENSE=0x04, LTC4215_SOURCE=0x05, LTC4215_ADIN=0x06,} cocci_id/* drivers/hwmon/ltc4215.c 22 */;
	struct attribute *cocci_id/* drivers/hwmon/ltc4215.c 204 */[];
	const u32 cocci_id/* drivers/hwmon/ltc4215.c 171 */;
	const u8 cocci_id/* drivers/hwmon/ltc4215.c 170 */;
	struct ltc4215_data *cocci_id/* drivers/hwmon/ltc4215.c 169 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/ltc4215.c 168 */;
	struct device_attribute *cocci_id/* drivers/hwmon/ltc4215.c 166 */;
	char *cocci_id/* drivers/hwmon/ltc4215.c 166 */;
	struct device *cocci_id/* drivers/hwmon/ltc4215.c 165 */;
	ssize_t cocci_id/* drivers/hwmon/ltc4215.c 165 */;
	const int cocci_id/* drivers/hwmon/ltc4215.c 157 */;
	const unsigned int cocci_id/* drivers/hwmon/ltc4215.c 148 */;
	unsigned int cocci_id/* drivers/hwmon/ltc4215.c 108 */;
}
