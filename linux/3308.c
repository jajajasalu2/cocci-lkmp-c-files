cocci_test_suite() {
	int cocci_id/* drivers/hwmon/pcf8591.c 75 */(struct device *dev,
						     int channel);
	void cocci_id/* drivers/hwmon/pcf8591.c 74 */(struct i2c_client *client);
	struct pcf8591_data {
		struct device *hwmon_dev;
		struct mutex update_lock;
		u8 control;
		u8 aout;
	} cocci_id/* drivers/hwmon/pcf8591.c 66 */;
	void __exit cocci_id/* drivers/hwmon/pcf8591.c 312 */;
	void cocci_id/* drivers/hwmon/pcf8591.c 312 */;
	int __init cocci_id/* drivers/hwmon/pcf8591.c 303 */;
	struct i2c_driver cocci_id/* drivers/hwmon/pcf8591.c 294 */;
	const struct i2c_device_id cocci_id/* drivers/hwmon/pcf8591.c 288 */[];
	u8 cocci_id/* drivers/hwmon/pcf8591.c 260 */;
	int cocci_id/* drivers/hwmon/pcf8591.c 20 */;
	struct pcf8591_data cocci_id/* drivers/hwmon/pcf8591.c 188 */;
	const struct i2c_device_id *cocci_id/* drivers/hwmon/pcf8591.c 183 */;
	const struct attribute_group cocci_id/* drivers/hwmon/pcf8591.c 164 */;
	struct attribute *cocci_id/* drivers/hwmon/pcf8591.c 156 */[];
	unsigned long cocci_id/* drivers/hwmon/pcf8591.c 137 */;
	struct i2c_client *cocci_id/* drivers/hwmon/pcf8591.c 135 */;
	const char *cocci_id/* drivers/hwmon/pcf8591.c 133 */;
	size_t cocci_id/* drivers/hwmon/pcf8591.c 133 */;
	struct pcf8591_data *cocci_id/* drivers/hwmon/pcf8591.c 127 */;
	struct device_attribute *cocci_id/* drivers/hwmon/pcf8591.c 125 */;
	char *cocci_id/* drivers/hwmon/pcf8591.c 125 */;
	struct device *cocci_id/* drivers/hwmon/pcf8591.c 124 */;
	ssize_t cocci_id/* drivers/hwmon/pcf8591.c 124 */;
}
