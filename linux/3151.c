cocci_test_suite() {
	u16 cocci_id/* drivers/hwmon/lm95241.c 96 */;
	s16 cocci_id/* drivers/hwmon/lm95241.c 90 */;
	struct lm95241_data {
		struct i2c_client *client;
		struct mutex update_lock;
		unsigned long last_updated;
		unsigned long interval;
		char valid;
		u8 temp[ARRAY_SIZE(lm95241_reg_address)];
		u8 status,config,model,trutherm;
	} cocci_id/* drivers/hwmon/lm95241.c 76 */;
	const u8 cocci_id/* drivers/hwmon/lm95241.c 66 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/lm95241.c 467 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/lm95241.c 460 */[];
	struct lm95241_data cocci_id/* drivers/hwmon/lm95241.c 442 */;
	struct device *cocci_id/* drivers/hwmon/lm95241.c 438 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/lm95241.c 436 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/lm95241.c 430 */;
	const struct hwmon_ops cocci_id/* drivers/hwmon/lm95241.c 424 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/lm95241.c 412 */[];
	struct lm95241_data *cocci_id/* drivers/hwmon/lm95241.c 397 */;
	void cocci_id/* drivers/hwmon/lm95241.c 396 */;
	const char *cocci_id/* drivers/hwmon/lm95241.c 369 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/lm95241.c 368 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/lm95241.c 366 */;
	struct i2c_client *cocci_id/* drivers/hwmon/lm95241.c 365 */;
	int cocci_id/* drivers/hwmon/lm95241.c 365 */;
	u32 cocci_id/* drivers/hwmon/lm95241.c 337 */;
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/lm95241.c 336 */;
	umode_t cocci_id/* drivers/hwmon/lm95241.c 335 */;
	const void *cocci_id/* drivers/hwmon/lm95241.c 335 */;
	long cocci_id/* drivers/hwmon/lm95241.c 323 */;
	const unsigned short cocci_id/* drivers/hwmon/lm95241.c 23 */[];
	u8 cocci_id/* drivers/hwmon/lm95241.c 204 */;
	long *cocci_id/* drivers/hwmon/lm95241.c 187 */;
}
