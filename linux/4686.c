cocci_test_suite() {
	const struct i2c_device_id cocci_id/* drivers/misc/ics932s401.c 98 */[];
	int cocci_id/* drivers/misc/ics932s401.c 96 */(struct i2c_client *client);
	int cocci_id/* drivers/misc/ics932s401.c 94 */(struct i2c_client *client,
						       struct i2c_board_info *info);
	int cocci_id/* drivers/misc/ics932s401.c 92 */(struct i2c_client *client,
						       const struct i2c_device_id *id);
	struct ics932s401_data {
		struct attribute_group attrs;
		struct mutex lock;
		char sensors_valid;
		unsigned long sensors_last_updated;
		u8 regs[NUM_REGS];
	} cocci_id/* drivers/misc/ics932s401.c 83 */;
	int cocci_id/* drivers/misc/ics932s401.c 59 */[NUM_MIRRORED_REGS];
	struct ics932s401_data cocci_id/* drivers/misc/ics932s401.c 438 */;
	const struct i2c_device_id *cocci_id/* drivers/misc/ics932s401.c 433 */;
	struct i2c_adapter *cocci_id/* drivers/misc/ics932s401.c 406 */;
	struct i2c_board_info *cocci_id/* drivers/misc/ics932s401.c 404 */;
	struct i2c_client *cocci_id/* drivers/misc/ics932s401.c 403 */;
	struct attribute *cocci_id/* drivers/misc/ics932s401.c 345 */[];
	ssize_t cocci_id/* drivers/misc/ics932s401.c 329 */(struct device *dev,
							    struct device_attribute *devattr,
							    char *buf);
	char *cocci_id/* drivers/misc/ics932s401.c 198 */;
	struct device_attribute *cocci_id/* drivers/misc/ics932s401.c 197 */;
	ssize_t cocci_id/* drivers/misc/ics932s401.c 196 */;
	const unsigned short cocci_id/* drivers/misc/ics932s401.c 19 */[];
	struct ics932s401_data *cocci_id/* drivers/misc/ics932s401.c 178 */;
	int cocci_id/* drivers/misc/ics932s401.c 178 */;
	const int cocci_id/* drivers/misc/ics932s401.c 174 */[];
	unsigned long cocci_id/* drivers/misc/ics932s401.c 120 */;
	struct device *cocci_id/* drivers/misc/ics932s401.c 116 */;
	struct i2c_driver cocci_id/* drivers/misc/ics932s401.c 104 */;
}
