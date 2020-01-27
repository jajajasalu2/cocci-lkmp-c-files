cocci_test_suite() {
	struct max31790_data {
		struct i2c_client *client;
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		u8 fan_config[NR_CHANNEL];
		u8 fan_dynamics[NR_CHANNEL];
		u16 fault_status;
		u16 tach[NR_CHANNEL * 2];
		u16 pwm[NR_CHANNEL];
		u16 target_count[NR_CHANNEL];
	} cocci_id/* drivers/hwmon/max31790.c 52 */;
	struct i2c_driver cocci_id/* drivers/hwmon/max31790.c 492 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/max31790.c 486 */[];
	struct max31790_data cocci_id/* drivers/hwmon/max31790.c 464 */;
	struct device *cocci_id/* drivers/hwmon/max31790.c 455 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/max31790.c 454 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/max31790.c 452 */;
	struct max31790_data *cocci_id/* drivers/hwmon/max31790.c 430 */;
	struct i2c_client *cocci_id/* drivers/hwmon/max31790.c 429 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/max31790.c 424 */;
	const struct hwmon_ops cocci_id/* drivers/hwmon/max31790.c 418 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/max31790.c 394 */[];
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/max31790.c 381 */;
	long cocci_id/* drivers/hwmon/max31790.c 368 */;
	long *cocci_id/* drivers/hwmon/max31790.c 355 */;
	const struct max31790_data *cocci_id/* drivers/hwmon/max31790.c 238 */;
	umode_t cocci_id/* drivers/hwmon/max31790.c 236 */;
	u32 cocci_id/* drivers/hwmon/max31790.c 236 */;
	const void *cocci_id/* drivers/hwmon/max31790.c 236 */;
	u8 cocci_id/* drivers/hwmon/max31790.c 142 */;
	int cocci_id/* drivers/hwmon/max31790.c 142 */;
	const u8 cocci_id/* drivers/hwmon/max31790.c 135 */[8];
}
