cocci_test_suite() {
	unsigned long cocci_id/* drivers/hwmon/atxp1.c 96 */;
	size_t cocci_id/* drivers/hwmon/atxp1.c 91 */;
	const char *cocci_id/* drivers/hwmon/atxp1.c 90 */;
	struct device_attribute *cocci_id/* drivers/hwmon/atxp1.c 76 */;
	char *cocci_id/* drivers/hwmon/atxp1.c 76 */;
	ssize_t cocci_id/* drivers/hwmon/atxp1.c 75 */;
	struct atxp1_data {
		struct i2c_client *client;
		struct mutex update_lock;
		unsigned long last_updated;
		u8 valid;
		struct {
			u8 vid;
			u8 cpu_vid;
			u8 gpio1;
			u8 gpio2;
		} reg;
		u8 vrm;
	} cocci_id/* drivers/hwmon/atxp1.c 36 */;
	struct i2c_driver cocci_id/* drivers/hwmon/atxp1.c 286 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/atxp1.c 280 */[];
	struct atxp1_data cocci_id/* drivers/hwmon/atxp1.c 254 */;
	struct atxp1_data *cocci_id/* drivers/hwmon/atxp1.c 251 */;
	struct device *cocci_id/* drivers/hwmon/atxp1.c 250 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/atxp1.c 248 */;
	struct i2c_client *cocci_id/* drivers/hwmon/atxp1.c 247 */;
	int cocci_id/* drivers/hwmon/atxp1.c 247 */;
	struct attribute *cocci_id/* drivers/hwmon/atxp1.c 239 */[];
	unsigned int cocci_id/* drivers/hwmon/atxp1.c 179 */;
}
