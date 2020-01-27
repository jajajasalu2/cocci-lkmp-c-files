cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 98 */[2];
	u8 cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 97 */[CFFPS_INPUT_HISTORY_SIZE + 1];
	u8 cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 96 */[1];
	struct ibm_cffps {
		enum versions version;
		struct i2c_client *client;
		struct ibm_cffps_input_history input_history;
		int debugfs_entries[CFFPS_DEBUGFS_NUM_ENTRIES];
		char led_name[32];
		u8 led_state;
		struct led_classdev led;
	} cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 76 */;
	struct ibm_cffps_input_history {
		struct mutex update_lock;
		unsigned long last_update;
		u8 byte_count;
		u8 data[CFFPS_INPUT_HISTORY_SIZE];
	} cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 68 */;
	enum versions{cffps1, cffps2, cffps_unknown,} cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 66 */;
	enum{CFFPS_DEBUGFS_INPUT_HISTORY=0, CFFPS_DEBUGFS_FRU, CFFPS_DEBUGFS_PN, CFFPS_DEBUGFS_SN, CFFPS_DEBUGFS_CCIN, CFFPS_DEBUGFS_FW, CFFPS_DEBUGFS_NUM_ENTRIES,} cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 56 */;
	struct i2c_driver cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 527 */;
	void *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 513 */;
	const struct of_device_id cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 510 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 502 */[];
	u16 cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 428 */;
	const void *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 420 */;
	struct dentry *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 417 */;
	enum versions cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 416 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 413 */;
	struct pmbus_platform_data cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 408 */;
	struct pmbus_driver_info cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 380 */[];
	struct device *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 366 */;
	struct i2c_client *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 365 */;
	int cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 364 */;
	struct ibm_cffps *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 362 */;
	void cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 362 */;
	struct ibm_cffps cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 343 */;
	unsigned long *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 339 */;
	struct led_classdev *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 338 */;
	enum led_brightness cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 305 */;
	const struct file_operations cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 217 */;
	char cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 147 */[I2C_SMBUS_BLOCK_MAX];
	int *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 144 */;
	u8 cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 142 */;
	loff_t *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 140 */;
	size_t cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 140 */;
	struct file *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 139 */;
	char __user *cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 139 */;
	ssize_t cocci_id/* drivers/hwmon/pmbus/ibm-cffps.c 139 */;
}
