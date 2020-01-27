cocci_test_suite() {
	const u32 cocci_id/* drivers/hwmon/max6621.c 95 */[];
	struct i2c_driver cocci_id/* drivers/hwmon/max6621.c 552 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/hwmon/max6621.c 546 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/max6621.c 540 */[];
	struct device *cocci_id/* drivers/hwmon/max6621.c 483 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/max6621.c 481 */;
	struct i2c_client *cocci_id/* drivers/hwmon/max6621.c 480 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/max6621.c 475 */;
	const struct hwmon_ops cocci_id/* drivers/hwmon/max6621.c 468 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/max6621.c 452 */[];
	const struct regmap_config cocci_id/* drivers/hwmon/max6621.c 439 */;
	const struct reg_default cocci_id/* drivers/hwmon/max6621.c 434 */[];
	bool cocci_id/* drivers/hwmon/max6621.c 386 */;
	unsigned int cocci_id/* drivers/hwmon/max6621.c 386 */;
	const char **cocci_id/* drivers/hwmon/max6621.c 350 */;
	s8 cocci_id/* drivers/hwmon/max6621.c 207 */;
	long *cocci_id/* drivers/hwmon/max6621.c 202 */;
	struct max6621_data *cocci_id/* drivers/hwmon/max6621.c 143 */;
	int cocci_id/* drivers/hwmon/max6621.c 140 */;
	u32 cocci_id/* drivers/hwmon/max6621.c 139 */;
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/max6621.c 139 */;
	const void *cocci_id/* drivers/hwmon/max6621.c 139 */;
	umode_t cocci_id/* drivers/hwmon/max6621.c 138 */;
	long cocci_id/* drivers/hwmon/max6621.c 133 */;
	struct max6621_data {
		struct i2c_client *client;
		struct regmap *regmap;
		int input_chan2reg[MAX6621_TEMP_INPUT_REG_NUM + 1];
	} cocci_id/* drivers/hwmon/max6621.c 127 */;
	const int cocci_id/* drivers/hwmon/max6621.c 113 */[];
	const char *const cocci_id/* drivers/hwmon/max6621.c 101 */[];
}
