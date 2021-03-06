cocci_test_suite() {
	const char cocci_id/* drivers/hwmon/sht3x.c 75 */[][SHT3X_CMD_LENGTH];
	struct i2c_driver cocci_id/* drivers/hwmon/sht3x.c 743 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/sht3x.c 735 */[];
	struct sht3x_platform_data *cocci_id/* drivers/hwmon/sht3x.c 700 */;
	const struct attribute_group **cocci_id/* drivers/hwmon/sht3x.c 673 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/sht3x.c 671 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/sht3x.c 666 */;
	enum sht3x_limits{limit_max=0, limit_max_hyst, limit_min, limit_min_hyst,} cocci_id/* drivers/hwmon/sht3x.c 65 */;
	struct attribute *cocci_id/* drivers/hwmon/sht3x.c 639 */[];
	enum sht3x_chips{sht3x, sts3x,} cocci_id/* drivers/hwmon/sht3x.c 60 */;
	bool cocci_id/* drivers/hwmon/sht3x.c 527 */;
	struct i2c_client *cocci_id/* drivers/hwmon/sht3x.c 525 */;
	struct sht3x_data *cocci_id/* drivers/hwmon/sht3x.c 524 */;
	const char *cocci_id/* drivers/hwmon/sht3x.c 521 */;
	int cocci_id/* drivers/hwmon/sht3x.c 509 */;
	char cocci_id/* drivers/hwmon/sht3x.c 508 */[SHT3X_WORD_LEN + SHT3X_CRC8_LEN];
	char *cocci_id/* drivers/hwmon/sht3x.c 506 */;
	struct device_attribute *cocci_id/* drivers/hwmon/sht3x.c 505 */;
	struct device *cocci_id/* drivers/hwmon/sht3x.c 504 */;
	ssize_t cocci_id/* drivers/hwmon/sht3x.c 504 */;
	void cocci_id/* drivers/hwmon/sht3x.c 433 */;
	__be16 *cocci_id/* drivers/hwmon/sht3x.c 367 */;
	const struct sht3x_limit_commands *cocci_id/* drivers/hwmon/sht3x.c 352 */;
	const unsigned char cocci_id/* drivers/hwmon/sht3x.c 35 */[];
	char cocci_id/* drivers/hwmon/sht3x.c 346 */[SHT3X_CMD_LENGTH + SHT3X_WORD_LEN + SHT3X_CRC8_LEN];
	u32 cocci_id/* drivers/hwmon/sht3x.c 332 */;
	char cocci_id/* drivers/hwmon/sht3x.c 292 */[SHT3X_RESPONSE_LENGTH];
	unsigned char cocci_id/* drivers/hwmon/sht3x.c 225 */[SHT3X_RESPONSE_LENGTH];
	unsigned long cocci_id/* drivers/hwmon/sht3x.c 224 */;
	size_t cocci_id/* drivers/hwmon/sht3x.c 154 */;
	u8 cocci_id/* drivers/hwmon/sht3x.c 152 */;
	u16 cocci_id/* drivers/hwmon/sht3x.c 152 */;
	struct sht3x_data {
		struct i2c_client *client;
		struct mutex i2c_lock;
		struct mutex data_lock;
		u8 mode;
		const unsigned char *command;
		u32 wait_time;
		unsigned long last_update;
		struct sht3x_platform_data setup;
		int temperature;
		int temperature_limits[SHT3X_NUM_LIMIT_CMD];
		u32 humidity;
		u32 humidity_limits[SHT3X_NUM_LIMIT_CMD];
	} cocci_id/* drivers/hwmon/sht3x.c 129 */;
	const u16 cocci_id/* drivers/hwmon/sht3x.c 120 */[];
	const struct sht3x_limit_commands cocci_id/* drivers/hwmon/sht3x.c 107 */[];
	struct sht3x_limit_commands {
		const char read_command[SHT3X_CMD_LENGTH];
		const char write_command[SHT3X_CMD_LENGTH];
	} cocci_id/* drivers/hwmon/sht3x.c 102 */;
}
