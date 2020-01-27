cocci_test_suite() {
	struct alert_data cocci_id/* drivers/i2c/i2c-smbus.c 74 */;
	s32 cocci_id/* drivers/i2c/i2c-smbus.c 73 */;
	irqreturn_t cocci_id/* drivers/i2c/i2c-smbus.c 65 */;
	void *cocci_id/* drivers/i2c/i2c-smbus.c 65 */;
	struct i2c_driver *cocci_id/* drivers/i2c/i2c-smbus.c 35 */;
	struct alert_data *cocci_id/* drivers/i2c/i2c-smbus.c 34 */;
	struct device *cocci_id/* drivers/i2c/i2c-smbus.c 31 */;
	struct alert_data {
		unsigned short addr;
		enum i2c_alert_protocol type;
		unsigned int data;
	} cocci_id/* drivers/i2c/i2c-smbus.c 24 */;
	struct i2c_smbus_alert *cocci_id/* drivers/i2c/i2c-smbus.c 191 */;
	struct i2c_smbus_alert {
		struct work_struct alert;
		struct i2c_client *ara;
	} cocci_id/* drivers/i2c/i2c-smbus.c 19 */;
	struct i2c_client *cocci_id/* drivers/i2c/i2c-smbus.c 189 */;
	int cocci_id/* drivers/i2c/i2c-smbus.c 189 */;
	struct i2c_driver cocci_id/* drivers/i2c/i2c-smbus.c 168 */;
	const struct i2c_device_id cocci_id/* drivers/i2c/i2c-smbus.c 162 */[];
	struct i2c_smbus_alert cocci_id/* drivers/i2c/i2c-smbus.c 122 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/i2c-smbus.c 119 */;
	struct i2c_smbus_alert_setup *cocci_id/* drivers/i2c/i2c-smbus.c 117 */;
	const struct i2c_device_id *cocci_id/* drivers/i2c/i2c-smbus.c 115 */;
	struct work_struct *cocci_id/* drivers/i2c/i2c-smbus.c 103 */;
	void cocci_id/* drivers/i2c/i2c-smbus.c 103 */;
}
