cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/hwmon/lineage-pem.c 511 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/lineage-pem.c 505 */[];
	struct i2c_adapter *cocci_id/* drivers/hwmon/lineage-pem.c 423 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/lineage-pem.c 421 */;
	struct i2c_client *cocci_id/* drivers/hwmon/lineage-pem.c 420 */;
	const struct attribute_group cocci_id/* drivers/hwmon/lineage-pem.c 416 */;
	struct attribute *cocci_id/* drivers/hwmon/lineage-pem.c 372 */[];
	long cocci_id/* drivers/hwmon/lineage-pem.c 291 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/lineage-pem.c 289 */;
	u8 cocci_id/* drivers/hwmon/lineage-pem.c 277 */;
	struct pem_data *cocci_id/* drivers/hwmon/lineage-pem.c 276 */;
	struct sensor_device_attribute_2 *cocci_id/* drivers/hwmon/lineage-pem.c 275 */;
	char *cocci_id/* drivers/hwmon/lineage-pem.c 273 */;
	struct device_attribute *cocci_id/* drivers/hwmon/lineage-pem.c 272 */;
	struct device *cocci_id/* drivers/hwmon/lineage-pem.c 272 */;
	ssize_t cocci_id/* drivers/hwmon/lineage-pem.c 272 */;
	u8 *cocci_id/* drivers/hwmon/lineage-pem.c 201 */;
	int cocci_id/* drivers/hwmon/lineage-pem.c 201 */;
	u8 cocci_id/* drivers/hwmon/lineage-pem.c 133 */[I2C_SMBUS_BLOCK_MAX];
	struct pem_data {
		struct i2c_client *client;
		const struct attribute_group *groups[4];
		struct mutex update_lock;
		bool valid;
		bool fans_supported;
		int input_length;
		unsigned long last_updated;
		u8 firmware_rev[FIRMWARE_REV_LEN];
		u8 data_string[DATA_STRING_LEN];
		u8 input_string[INPUT_STRING_LEN];
		u8 fan_speed[FAN_SPEED_LEN];
	} cocci_id/* drivers/hwmon/lineage-pem.c 114 */;
}
