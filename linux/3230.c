cocci_test_suite() {
	struct ucd9000_data *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 76 */;
	struct ucd9000_debugfs_entry {
		struct i2c_client *client;
		u8 index;
	} cocci_id/* drivers/hwmon/pmbus/ucd9000.c 68 */;
	struct ucd9000_data cocci_id/* drivers/hwmon/pmbus/ucd9000.c 66 */;
	struct i2c_driver cocci_id/* drivers/hwmon/pmbus/ucd9000.c 604 */;
	struct ucd9000_data {
		u8 fan_data[UCD9000_NUM_FAN][I2C_SMBUS_BLOCK_MAX];
		struct pmbus_driver_info info;
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gpio;
#endif
		struct dentry *debugfs;
	} cocci_id/* drivers/hwmon/pmbus/ucd9000.c 58 */;
	enum chips cocci_id/* drivers/hwmon/pmbus/ucd9000.c 482 */;
	struct pmbus_driver_info *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 480 */;
	u8 cocci_id/* drivers/hwmon/pmbus/ucd9000.c 478 */[I2C_SMBUS_BLOCK_MAX + 1];
	char cocci_id/* drivers/hwmon/pmbus/ucd9000.c 426 */[UCD9000_DEBUGFS_NAME_LEN];
	struct dentry *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 423 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 420 */;
	const struct file_operations cocci_id/* drivers/hwmon/pmbus/ucd9000.c 413 */;
	int cocci_id/* drivers/hwmon/pmbus/ucd9000.c 400 */;
	char *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 399 */;
	char cocci_id/* drivers/hwmon/pmbus/ucd9000.c 398 */[(I2C_SMBUS_BLOCK_MAX * 2) + 2];
	u8 cocci_id/* drivers/hwmon/pmbus/ucd9000.c 397 */[I2C_SMBUS_BLOCK_MAX];
	struct i2c_client *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 396 */;
	loff_t *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 394 */;
	char __user *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 393 */;
	size_t cocci_id/* drivers/hwmon/pmbus/ucd9000.c 393 */;
	struct file *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 392 */;
	ssize_t cocci_id/* drivers/hwmon/pmbus/ucd9000.c 392 */;
	struct ucd9000_debugfs_entry *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 372 */;
	u64 *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 370 */;
	void *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 370 */;
	u8 *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 360 */;
	unsigned int cocci_id/* drivers/hwmon/pmbus/ucd9000.c 298 */;
	struct gpio_chip *cocci_id/* drivers/hwmon/pmbus/ucd9000.c 297 */;
	bool cocci_id/* drivers/hwmon/pmbus/ucd9000.c 252 */;
	enum chips{ucd9000, ucd90120, ucd90124, ucd90160, ucd9090, ucd90910,} cocci_id/* drivers/hwmon/pmbus/ucd9000.c 21 */;
	void cocci_id/* drivers/hwmon/pmbus/ucd9000.c 195 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/hwmon/pmbus/ucd9000.c 140 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/pmbus/ucd9000.c 129 */[];
}
