cocci_test_suite() {
	struct device cocci_id/* drivers/i2c/i2c-slave-eeprom.c 99 */;
	unsigned long cocci_id/* drivers/i2c/i2c-slave-eeprom.c 97 */;
	struct eeprom_data *cocci_id/* drivers/i2c/i2c-slave-eeprom.c 96 */;
	loff_t cocci_id/* drivers/i2c/i2c-slave-eeprom.c 94 */;
	struct bin_attribute *cocci_id/* drivers/i2c/i2c-slave-eeprom.c 94 */;
	char *cocci_id/* drivers/i2c/i2c-slave-eeprom.c 94 */;
	size_t cocci_id/* drivers/i2c/i2c-slave-eeprom.c 94 */;
	struct kobject *cocci_id/* drivers/i2c/i2c-slave-eeprom.c 93 */;
	struct file *cocci_id/* drivers/i2c/i2c-slave-eeprom.c 93 */;
	ssize_t cocci_id/* drivers/i2c/i2c-slave-eeprom.c 93 */;
	enum i2c_slave_event cocci_id/* drivers/i2c/i2c-slave-eeprom.c 46 */;
	u8 *cocci_id/* drivers/i2c/i2c-slave-eeprom.c 46 */;
	struct eeprom_data {
		struct bin_attribute bin;
		spinlock_t buffer_lock;
		u16 buffer_idx;
		u16 address_mask;
		u8 num_address_bytes;
		u8 idx_write_cnt;
		bool read_only;
		u8 buffer[];
	} cocci_id/* drivers/i2c/i2c-slave-eeprom.c 29 */;
	struct i2c_driver cocci_id/* drivers/i2c/i2c-slave-eeprom.c 182 */;
	const struct i2c_device_id cocci_id/* drivers/i2c/i2c-slave-eeprom.c 171 */[];
	struct eeprom_data cocci_id/* drivers/i2c/i2c-slave-eeprom.c 130 */;
	unsigned int cocci_id/* drivers/i2c/i2c-slave-eeprom.c 127 */;
	const struct i2c_device_id *cocci_id/* drivers/i2c/i2c-slave-eeprom.c 123 */;
	struct i2c_client *cocci_id/* drivers/i2c/i2c-slave-eeprom.c 123 */;
	int cocci_id/* drivers/i2c/i2c-slave-eeprom.c 123 */;
}
