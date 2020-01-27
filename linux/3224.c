cocci_test_suite() {
	struct __coeff cocci_id/* drivers/hwmon/pmbus/lm25066.c 54 */[6][PSC_NUM_CLASSES + 2];
	struct i2c_driver cocci_id/* drivers/hwmon/pmbus/lm25066.c 496 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/pmbus/lm25066.c 484 */[];
	struct __coeff {
		short m,b,R;
	} cocci_id/* drivers/hwmon/pmbus/lm25066.c 47 */;
	struct lm25066_data cocci_id/* drivers/hwmon/pmbus/lm25066.c 422 */;
	struct __coeff *cocci_id/* drivers/hwmon/pmbus/lm25066.c 416 */;
	struct pmbus_driver_info *cocci_id/* drivers/hwmon/pmbus/lm25066.c 415 */;
	struct lm25066_data *cocci_id/* drivers/hwmon/pmbus/lm25066.c 414 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/pmbus/lm25066.c 411 */;
	s16 cocci_id/* drivers/hwmon/pmbus/lm25066.c 361 */;
	u16 cocci_id/* drivers/hwmon/pmbus/lm25066.c 344 */;
	struct i2c_client *cocci_id/* drivers/hwmon/pmbus/lm25066.c 319 */;
	int cocci_id/* drivers/hwmon/pmbus/lm25066.c 319 */;
	const struct lm25066_data *cocci_id/* drivers/hwmon/pmbus/lm25066.c 217 */;
	const struct pmbus_driver_info *cocci_id/* drivers/hwmon/pmbus/lm25066.c 216 */;
	struct lm25066_data {
		int id;
		u16 rlimit;
		struct pmbus_driver_info info;
	} cocci_id/* drivers/hwmon/pmbus/lm25066.c 206 */;
	enum chips{lm25056, lm25066, lm5064, lm5066, lm5066i,} cocci_id/* drivers/hwmon/pmbus/lm25066.c 19 */;
}
