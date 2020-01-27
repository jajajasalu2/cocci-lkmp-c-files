cocci_test_suite() {
	struct tc654_data {
		struct i2c_client *client;
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		u8 rpm_output[2];
		u8 fan_fault[2];
		u8 config;
		u8 status;
		u8 duty_cycle;
	} cocci_id/* drivers/hwmon/tc654.c 58 */;
	struct i2c_driver cocci_id/* drivers/hwmon/tc654.c 487 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/tc654.c 479 */[];
	struct tc654_data cocci_id/* drivers/hwmon/tc654.c 460 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/tc654.c 450 */;
	struct attribute *cocci_id/* drivers/hwmon/tc654.c 429 */[];
	const int cocci_id/* drivers/hwmon/tc654.c 362 */[16];
	u8 cocci_id/* drivers/hwmon/tc654.c 274 */;
	const u8 cocci_id/* drivers/hwmon/tc654.c 267 */[];
	struct tc654_data *cocci_id/* drivers/hwmon/tc654.c 253 */;
	int cocci_id/* drivers/hwmon/tc654.c 252 */;
	char *cocci_id/* drivers/hwmon/tc654.c 250 */;
	struct device_attribute *cocci_id/* drivers/hwmon/tc654.c 249 */;
	struct device *cocci_id/* drivers/hwmon/tc654.c 249 */;
	ssize_t cocci_id/* drivers/hwmon/tc654.c 249 */;
	unsigned long cocci_id/* drivers/hwmon/tc654.c 231 */;
	struct i2c_client *cocci_id/* drivers/hwmon/tc654.c 230 */;
	const char *cocci_id/* drivers/hwmon/tc654.c 226 */;
	size_t cocci_id/* drivers/hwmon/tc654.c 226 */;
	enum tc654_regs{TC654_REG_RPM1=0x00, TC654_REG_RPM2=0x01, TC654_REG_FAN_FAULT1=0x02, TC654_REG_FAN_FAULT2=0x03, TC654_REG_CONFIG=0x04, TC654_REG_STATUS=0x05, TC654_REG_DUTY_CYCLE=0x06, TC654_REG_MFR_ID=0x07, TC654_REG_VER_ID=0x08,} cocci_id/* drivers/hwmon/tc654.c 20 */;
}
