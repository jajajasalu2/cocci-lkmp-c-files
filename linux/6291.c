cocci_test_suite() {
	struct adp5520_chip *cocci_id/* drivers/mfd/adp5520.c 74 */;
	uint8_t cocci_id/* drivers/mfd/adp5520.c 72 */;
	struct i2c_client *cocci_id/* drivers/mfd/adp5520.c 71 */;
	int cocci_id/* drivers/mfd/adp5520.c 71 */;
	uint8_t *cocci_id/* drivers/mfd/adp5520.c 43 */;
	struct i2c_driver cocci_id/* drivers/mfd/adp5520.c 339 */;
	const struct i2c_device_id cocci_id/* drivers/mfd/adp5520.c 333 */[];
	struct adp5520_chip {
		struct i2c_client *client;
		struct device *dev;
		struct mutex lock;
		struct blocking_notifier_head notifier_list;
		int irq;
		unsigned long id;
		uint8_t mode;
	} cocci_id/* drivers/mfd/adp5520.c 32 */;
	struct platform_device *cocci_id/* drivers/mfd/adp5520.c 211 */;
	struct adp5520_platform_data *cocci_id/* drivers/mfd/adp5520.c 210 */;
	const struct i2c_device_id *cocci_id/* drivers/mfd/adp5520.c 208 */;
	struct device *cocci_id/* drivers/mfd/adp5520.c 196 */;
	void *cocci_id/* drivers/mfd/adp5520.c 196 */;
	unsigned int cocci_id/* drivers/mfd/adp5520.c 177 */;
	irqreturn_t cocci_id/* drivers/mfd/adp5520.c 174 */;
	struct notifier_block *cocci_id/* drivers/mfd/adp5520.c 143 */;
}
