cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/hwmon/smm665.c 693 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/smm665.c 681 */[];
	struct i2c_adapter *cocci_id/* drivers/hwmon/smm665.c 568 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/smm665.c 566 */;
	struct i2c_client *cocci_id/* drivers/hwmon/smm665.c 565 */;
	struct attribute *cocci_id/* drivers/hwmon/smm665.c 482 */[];
	const int cocci_id/* drivers/hwmon/smm665.c 377 */;
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/smm665.c 344 */;
	struct device_attribute *cocci_id/* drivers/hwmon/smm665.c 342 */;
	char *cocci_id/* drivers/hwmon/smm665.c 342 */;
	ssize_t cocci_id/* drivers/hwmon/smm665.c 341 */;
	enum chips{smm465, smm665, smm665c, smm764, smm766,} cocci_id/* drivers/hwmon/smm665.c 34 */;
	struct smm665_data *cocci_id/* drivers/hwmon/smm665.c 336 */;
	struct device *cocci_id/* drivers/hwmon/smm665.c 334 */;
	u16 cocci_id/* drivers/hwmon/smm665.c 276 */;
	int cocci_id/* drivers/hwmon/smm665.c 276 */;
	struct smm665_data {
		enum chips type;
		int conversion_time;
		struct i2c_client *client;
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		u16 adc[SMM665_NUM_ADC];
		u16 faults;
		int critical_min_limit[SMM665_NUM_ADC];
		int alarm_min_limit[SMM665_NUM_ADC];
		int critical_max_limit[SMM665_NUM_ADC];
		int alarm_max_limit[SMM665_NUM_ADC];
		struct i2c_client *cmdreg;
	} cocci_id/* drivers/hwmon/smm665.c 137 */;
}
