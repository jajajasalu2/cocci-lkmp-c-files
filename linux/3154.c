cocci_test_suite() {
	const char *const cocci_id/* drivers/hwmon/powr1220.c 86 */[];
	struct powr1220_data {
		struct i2c_client *client;
		struct mutex update_lock;
		bool adc_valid[MAX_POWR1220_ADC_VALUES];
		unsigned long adc_last_updated[MAX_POWR1220_ADC_VALUES];
		int adc_maxes[MAX_POWR1220_ADC_VALUES];
		int adc_values[MAX_POWR1220_ADC_VALUES];
	} cocci_id/* drivers/hwmon/powr1220.c 74 */;
	enum powr1220_adc_values{VMON1, VMON2, VMON3, VMON4, VMON5, VMON6, VMON7, VMON8, VMON9, VMON10, VMON11, VMON12, VCCA, VCCINP, MAX_POWR1220_ADC_VALUES,} cocci_id/* drivers/hwmon/powr1220.c 56 */;
	struct i2c_driver cocci_id/* drivers/hwmon/powr1220.c 329 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/powr1220.c 322 */[];
	const struct i2c_device_id *cocci_id/* drivers/hwmon/powr1220.c 301 */;
	struct i2c_client *cocci_id/* drivers/hwmon/powr1220.c 300 */;
	int cocci_id/* drivers/hwmon/powr1220.c 300 */;
	enum powr1220_regs{VMON_STATUS0, VMON_STATUS1, VMON_STATUS2, OUTPUT_STATUS0, OUTPUT_STATUS1, OUTPUT_STATUS2, INPUT_STATUS, ADC_VALUE_LOW, ADC_VALUE_HIGH, ADC_MUX, UES_BYTE0, UES_BYTE1, UES_BYTE2, UES_BYTE3, GP_OUTPUT1, GP_OUTPUT2, GP_OUTPUT3, INPUT_VALUE, RESET, TRIM1_TRIM, TRIM2_TRIM, TRIM3_TRIM, TRIM4_TRIM, TRIM5_TRIM, TRIM6_TRIM, TRIM7_TRIM, TRIM8_TRIM, MAX_POWR1220_REGS,} cocci_id/* drivers/hwmon/powr1220.c 25 */;
	struct attribute *cocci_id/* drivers/hwmon/powr1220.c 249 */[];
	struct sensor_device_attribute *cocci_id/* drivers/hwmon/powr1220.c 199 */;
	char *cocci_id/* drivers/hwmon/powr1220.c 197 */;
	struct device_attribute *cocci_id/* drivers/hwmon/powr1220.c 196 */;
	struct device *cocci_id/* drivers/hwmon/powr1220.c 195 */;
	ssize_t cocci_id/* drivers/hwmon/powr1220.c 195 */;
	struct powr1220_data *cocci_id/* drivers/hwmon/powr1220.c 189 */;
}
