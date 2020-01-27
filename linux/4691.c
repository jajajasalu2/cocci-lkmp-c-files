cocci_test_suite() {
	struct isl29003_data *cocci_id/* drivers/misc/isl29003.c 67 */;
	u8 cocci_id/* drivers/misc/isl29003.c 65 */;
	u32 cocci_id/* drivers/misc/isl29003.c 65 */;
	struct i2c_client *cocci_id/* drivers/misc/isl29003.c 64 */;
	int cocci_id/* drivers/misc/isl29003.c 64 */;
	int cocci_id/* drivers/misc/isl29003.c 56 */[];
	struct isl29003_data {
		struct i2c_client *client;
		struct mutex lock;
		u8 reg_cache[ISL29003_NUM_CACHABLE_REGS];
		u8 power_state_before_suspend;
	} cocci_id/* drivers/misc/isl29003.c 49 */;
	struct i2c_driver cocci_id/* drivers/misc/isl29003.c 459 */;
	const struct i2c_device_id cocci_id/* drivers/misc/isl29003.c 453 */[];
	struct device *cocci_id/* drivers/misc/isl29003.c 431 */;
	struct isl29003_data cocci_id/* drivers/misc/isl29003.c 387 */;
	struct i2c_adapter *cocci_id/* drivers/misc/isl29003.c 380 */;
	const struct i2c_device_id *cocci_id/* drivers/misc/isl29003.c 378 */;
	const struct attribute_group cocci_id/* drivers/misc/isl29003.c 344 */;
	struct attribute *cocci_id/* drivers/misc/isl29003.c 335 */[];
	struct device_attribute *cocci_id/* drivers/misc/isl29003.c 322 */;
	char *cocci_id/* drivers/misc/isl29003.c 322 */;
	ssize_t cocci_id/* drivers/misc/isl29003.c 321 */;
	unsigned long cocci_id/* drivers/misc/isl29003.c 266 */;
	const char *cocci_id/* drivers/misc/isl29003.c 263 */;
	size_t cocci_id/* drivers/misc/isl29003.c 263 */;
}
