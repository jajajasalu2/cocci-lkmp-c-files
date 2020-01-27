cocci_test_suite() {
	u8 *cocci_id/* drivers/misc/eeprom/max6875.c 58 */;
	void cocci_id/* drivers/misc/eeprom/max6875.c 54 */;
	struct max6875_data {
		struct i2c_client *fake_client;
		struct mutex update_lock;
		u32 valid;
		u8 data[USER_EEPROM_SIZE];
		unsigned long last_updated[USER_EEPROM_SLICES];
	} cocci_id/* drivers/misc/eeprom/max6875.c 45 */;
	struct i2c_driver cocci_id/* drivers/misc/eeprom/max6875.c 194 */;
	const struct i2c_device_id cocci_id/* drivers/misc/eeprom/max6875.c 188 */[];
	struct max6875_data cocci_id/* drivers/misc/eeprom/max6875.c 148 */;
	struct max6875_data *cocci_id/* drivers/misc/eeprom/max6875.c 137 */;
	struct i2c_adapter *cocci_id/* drivers/misc/eeprom/max6875.c 136 */;
	const struct i2c_device_id *cocci_id/* drivers/misc/eeprom/max6875.c 134 */;
	struct i2c_client *cocci_id/* drivers/misc/eeprom/max6875.c 133 */;
	int cocci_id/* drivers/misc/eeprom/max6875.c 133 */;
	const struct bin_attribute cocci_id/* drivers/misc/eeprom/max6875.c 124 */;
	loff_t cocci_id/* drivers/misc/eeprom/max6875.c 108 */;
	char *cocci_id/* drivers/misc/eeprom/max6875.c 108 */;
	size_t cocci_id/* drivers/misc/eeprom/max6875.c 108 */;
	struct bin_attribute *cocci_id/* drivers/misc/eeprom/max6875.c 107 */;
	struct kobject *cocci_id/* drivers/misc/eeprom/max6875.c 106 */;
	struct file *cocci_id/* drivers/misc/eeprom/max6875.c 106 */;
	ssize_t cocci_id/* drivers/misc/eeprom/max6875.c 106 */;
}
