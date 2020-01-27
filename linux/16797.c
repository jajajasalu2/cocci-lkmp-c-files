cocci_test_suite() {
	struct max8925_onkey_info cocci_id/* drivers/input/misc/max8925_onkey.c 81 */;
	int cocci_id/* drivers/input/misc/max8925_onkey.c 71 */[2];
	struct input_dev *cocci_id/* drivers/input/misc/max8925_onkey.c 70 */;
	struct max8925_chip *cocci_id/* drivers/input/misc/max8925_onkey.c 68 */;
	struct platform_device *cocci_id/* drivers/input/misc/max8925_onkey.c 66 */;
	struct max8925_onkey_info *cocci_id/* drivers/input/misc/max8925_onkey.c 49 */;
	irqreturn_t cocci_id/* drivers/input/misc/max8925_onkey.c 47 */;
	void *cocci_id/* drivers/input/misc/max8925_onkey.c 47 */;
	int cocci_id/* drivers/input/misc/max8925_onkey.c 47 */;
	struct max8925_onkey_info {
		struct input_dev *idev;
		struct i2c_client *i2c;
		struct device *dev;
		unsigned int irq[2];
	} cocci_id/* drivers/input/misc/max8925_onkey.c 35 */;
	struct platform_driver cocci_id/* drivers/input/misc/max8925_onkey.c 162 */;
	struct device *cocci_id/* drivers/input/misc/max8925_onkey.c 146 */;
	int __maybe_unused cocci_id/* drivers/input/misc/max8925_onkey.c 146 */;
}
