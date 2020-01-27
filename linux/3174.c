cocci_test_suite() {
	struct shtc1_data {
		struct i2c_client *client;
		struct mutex update_lock;
		bool valid;
		unsigned long last_updated;
		const unsigned char *command;
		unsigned int nonblocking_wait_time;
		struct shtc1_platform_data setup;
		enum shtcx_chips chip;
		int temperature;
		int humidity;
	} cocci_id/* drivers/hwmon/shtc1.c 54 */;
	enum shtcx_chips{shtc1, shtc3,} cocci_id/* drivers/hwmon/shtc1.c 49 */;
	struct i2c_driver cocci_id/* drivers/hwmon/shtc1.c 260 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/shtc1.c 252 */[];
	struct shtc1_platform_data *cocci_id/* drivers/hwmon/shtc1.c 237 */;
	__be16 *cocci_id/* drivers/hwmon/shtc1.c 216 */;
	struct i2c_adapter *cocci_id/* drivers/hwmon/shtc1.c 197 */;
	enum shtcx_chips cocci_id/* drivers/hwmon/shtc1.c 196 */;
	char cocci_id/* drivers/hwmon/shtc1.c 193 */[2];
	u16 cocci_id/* drivers/hwmon/shtc1.c 192 */;
	const unsigned char cocci_id/* drivers/hwmon/shtc1.c 19 */[];
	const struct i2c_device_id *cocci_id/* drivers/hwmon/shtc1.c 189 */;
	struct i2c_client *cocci_id/* drivers/hwmon/shtc1.c 188 */;
	int cocci_id/* drivers/hwmon/shtc1.c 188 */;
	void cocci_id/* drivers/hwmon/shtc1.c 169 */;
	struct attribute *cocci_id/* drivers/hwmon/shtc1.c 161 */[];
	struct shtc1_data *cocci_id/* drivers/hwmon/shtc1.c 151 */;
	struct device_attribute *cocci_id/* drivers/hwmon/shtc1.c 149 */;
	char *cocci_id/* drivers/hwmon/shtc1.c 149 */;
	struct device *cocci_id/* drivers/hwmon/shtc1.c 148 */;
	ssize_t cocci_id/* drivers/hwmon/shtc1.c 148 */;
	unsigned char cocci_id/* drivers/hwmon/shtc1.c 104 */[SHTC1_RESPONSE_LENGTH];
}
