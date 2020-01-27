cocci_test_suite() {
	struct adm1275_data {
		int id;
		bool have_oc_fault;
		bool have_uc_fault;
		bool have_vout;
		bool have_vaux_status;
		bool have_mfr_vaux_status;
		bool have_iout_min;
		bool have_pin_min;
		bool have_pin_max;
		bool have_temp_max;
		bool have_power_sampling;
		struct pmbus_driver_info info;
	} cocci_id/* drivers/hwmon/pmbus/adm1275.c 86 */;
	struct i2c_driver cocci_id/* drivers/hwmon/pmbus/adm1275.c 780 */;
	struct adm1275_data cocci_id/* drivers/hwmon/pmbus/adm1275.c 510 */;
	u32 cocci_id/* drivers/hwmon/pmbus/adm1275.c 466 */;
	const struct coefficients *cocci_id/* drivers/hwmon/pmbus/adm1275.c 463 */;
	struct adm1275_data *cocci_id/* drivers/hwmon/pmbus/adm1275.c 461 */;
	struct pmbus_driver_info *cocci_id/* drivers/hwmon/pmbus/adm1275.c 460 */;
	u8 cocci_id/* drivers/hwmon/pmbus/adm1275.c 457 */[I2C_SMBUS_BLOCK_MAX + 1];
	const struct i2c_device_id *cocci_id/* drivers/hwmon/pmbus/adm1275.c 455 */;
	struct i2c_client *cocci_id/* drivers/hwmon/pmbus/adm1275.c 454 */;
	int cocci_id/* drivers/hwmon/pmbus/adm1275.c 454 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/pmbus/adm1275.c 442 */[];
	const struct adm1275_data *cocci_id/* drivers/hwmon/pmbus/adm1275.c 389 */;
	const struct pmbus_driver_info *cocci_id/* drivers/hwmon/pmbus/adm1275.c 388 */;
	enum chips{adm1075, adm1272, adm1275, adm1276, adm1278, adm1293, adm1294,} cocci_id/* drivers/hwmon/pmbus/adm1275.c 21 */;
	u16 cocci_id/* drivers/hwmon/pmbus/adm1275.c 177 */;
	bool cocci_id/* drivers/hwmon/pmbus/adm1275.c 174 */;
	const struct coefficients cocci_id/* drivers/hwmon/pmbus/adm1275.c 109 */[];
	struct coefficients {
		s16 m;
		s16 b;
		s16 R;
	} cocci_id/* drivers/hwmon/pmbus/adm1275.c 103 */;
}
