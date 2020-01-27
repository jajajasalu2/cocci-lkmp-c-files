cocci_test_suite() {
	u8 cocci_id/* drivers/hwmon/emc6w201.c 61 */;
	u16 cocci_id/* drivers/hwmon/emc6w201.c 61 */;
	struct i2c_driver cocci_id/* drivers/hwmon/emc6w201.c 473 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/emc6w201.c 467 */[];
	struct emc6w201_data cocci_id/* drivers/hwmon/emc6w201.c 454 */;
	struct emc6w201_data *cocci_id/* drivers/hwmon/emc6w201.c 451 */;
	struct device *cocci_id/* drivers/hwmon/emc6w201.c 450 */;
	struct emc6w201_data {
		struct i2c_client *client;
		struct mutex update_lock;
		char valid;
		unsigned long last_updated;
		u8 in[3][6];
		s8 temp[3][6];
		u16 fan[2][5];
	} cocci_id/* drivers/hwmon/emc6w201.c 45 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/emc6w201.c 448 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/emc6w201.c 414 */;
	struct i2c_board_info *cocci_id/* drivers/hwmon/emc6w201.c 412 */;
	struct i2c_client *cocci_id/* drivers/hwmon/emc6w201.c 411 */;
	int cocci_id/* drivers/hwmon/emc6w201.c 411 */;
	enum subfeature{input, min, max,} cocci_id/* drivers/hwmon/emc6w201.c 39 */;
	struct attribute *cocci_id/* drivers/hwmon/emc6w201.c 352 */[];
	unsigned long cocci_id/* drivers/hwmon/emc6w201.c 281 */;
	const char *cocci_id/* drivers/hwmon/emc6w201.c 274 */;
	size_t cocci_id/* drivers/hwmon/emc6w201.c 274 */;
	unsigned cocci_id/* drivers/hwmon/emc6w201.c 263 */;
	char *cocci_id/* drivers/hwmon/emc6w201.c 258 */;
	struct device_attribute *cocci_id/* drivers/hwmon/emc6w201.c 257 */;
	ssize_t cocci_id/* drivers/hwmon/emc6w201.c 257 */;
	const unsigned short cocci_id/* drivers/hwmon/emc6w201.c 21 */[];
	long cocci_id/* drivers/hwmon/emc6w201.c 198 */;
	const s16 cocci_id/* drivers/hwmon/emc6w201.c 177 */[6];
}
