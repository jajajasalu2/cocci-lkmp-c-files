cocci_test_suite() {
	u8 cocci_id/* drivers/misc/eeprom/eeprom.c 81 */;
	loff_t cocci_id/* drivers/misc/eeprom/eeprom.c 77 */;
	char *cocci_id/* drivers/misc/eeprom/eeprom.c 77 */;
	size_t cocci_id/* drivers/misc/eeprom/eeprom.c 77 */;
	struct bin_attribute *cocci_id/* drivers/misc/eeprom/eeprom.c 76 */;
	struct kobject *cocci_id/* drivers/misc/eeprom/eeprom.c 75 */;
	struct file *cocci_id/* drivers/misc/eeprom/eeprom.c 75 */;
	ssize_t cocci_id/* drivers/misc/eeprom/eeprom.c 75 */;
	void cocci_id/* drivers/misc/eeprom/eeprom.c 42 */;
	struct eeprom_data {
		struct mutex update_lock;
		u8 valid;
		unsigned long last_updated[8];
		u8 data[EEPROM_SIZE];
		enum eeprom_nature nature;
	} cocci_id/* drivers/misc/eeprom/eeprom.c 33 */;
	enum eeprom_nature{UNKNOWN, VAIO,} cocci_id/* drivers/misc/eeprom/eeprom.c 27 */;
	struct i2c_driver cocci_id/* drivers/misc/eeprom/eeprom.c 198 */;
	const struct i2c_device_id cocci_id/* drivers/misc/eeprom/eeprom.c 193 */[];
	const unsigned short cocci_id/* drivers/misc/eeprom/eeprom.c 19 */[];
	char cocci_id/* drivers/misc/eeprom/eeprom.c 164 */[4];
	struct eeprom_data cocci_id/* drivers/misc/eeprom/eeprom.c 150 */;
	struct eeprom_data *cocci_id/* drivers/misc/eeprom/eeprom.c 148 */;
	const struct i2c_device_id *cocci_id/* drivers/misc/eeprom/eeprom.c 145 */;
	struct i2c_adapter *cocci_id/* drivers/misc/eeprom/eeprom.c 120 */;
	struct i2c_client *cocci_id/* drivers/misc/eeprom/eeprom.c 118 */;
	struct i2c_board_info *cocci_id/* drivers/misc/eeprom/eeprom.c 118 */;
	int cocci_id/* drivers/misc/eeprom/eeprom.c 118 */;
	const struct bin_attribute cocci_id/* drivers/misc/eeprom/eeprom.c 108 */;
}
