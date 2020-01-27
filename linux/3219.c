cocci_test_suite() {
	struct ltc2978_data {
		enum chips id;
		u16 vin_min,vin_max;
		u16 temp_min[LTC2974_NUM_PAGES],temp_max[LTC2974_NUM_PAGES];
		u16 vout_min[LTC2978_NUM_PAGES],vout_max[LTC2978_NUM_PAGES];
		u16 iout_min[LTC2974_NUM_PAGES],iout_max[LTC2974_NUM_PAGES];
		u16 iin_min,iin_max;
		u16 pin_min,pin_max;
		u16 temp2_max;
		struct pmbus_driver_info info;
		u32 features;
	} cocci_id/* drivers/hwmon/pmbus/ltc2978.c 96 */;
	struct i2c_driver cocci_id/* drivers/hwmon/pmbus/ltc2978.c 776 */;
	const struct of_device_id cocci_id/* drivers/hwmon/pmbus/ltc2978.c 756 */[];
	struct ltc2978_data cocci_id/* drivers/hwmon/pmbus/ltc2978.c 603 */;
	struct pmbus_driver_info *cocci_id/* drivers/hwmon/pmbus/ltc2978.c 597 */;
	u8 cocci_id/* drivers/hwmon/pmbus/ltc2978.c 533 */[I2C_SMBUS_BLOCK_MAX];
	const struct i2c_device_id *cocci_id/* drivers/hwmon/pmbus/ltc2978.c 532 */;
	const struct regulator_desc cocci_id/* drivers/hwmon/pmbus/ltc2978.c 514 */[];
	const struct i2c_device_id cocci_id/* drivers/hwmon/pmbus/ltc2978.c 494 */[];
	u16 cocci_id/* drivers/hwmon/pmbus/ltc2978.c 443 */;
	struct ltc2978_data *cocci_id/* drivers/hwmon/pmbus/ltc2978.c 320 */;
	const struct pmbus_driver_info *cocci_id/* drivers/hwmon/pmbus/ltc2978.c 319 */;
	struct i2c_client *cocci_id/* drivers/hwmon/pmbus/ltc2978.c 317 */;
	enum chips{ltc2974, ltc2975, ltc2977, ltc2978, ltc2980, ltc3880, ltc3882, ltc3883, ltc3886, ltc3887, ltm2987, ltm4675, ltm4676, ltm4686,} cocci_id/* drivers/hwmon/pmbus/ltc2978.c 22 */;
	u16 *cocci_id/* drivers/hwmon/pmbus/ltc2978.c 201 */;
	s32 cocci_id/* drivers/hwmon/pmbus/ltc2978.c 190 */;
	s16 cocci_id/* drivers/hwmon/pmbus/ltc2978.c 189 */;
	int cocci_id/* drivers/hwmon/pmbus/ltc2978.c 187 */;
	u8 cocci_id/* drivers/hwmon/pmbus/ltc2978.c 122 */;
	unsigned long cocci_id/* drivers/hwmon/pmbus/ltc2978.c 118 */;
}
