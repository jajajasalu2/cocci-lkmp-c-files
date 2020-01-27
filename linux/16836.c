cocci_test_suite() {
	struct pm860x_onkey_info cocci_id/* drivers/input/misc/88pm860x_onkey.c 70 */;
	struct pm860x_chip *cocci_id/* drivers/input/misc/88pm860x_onkey.c 62 */;
	struct platform_device *cocci_id/* drivers/input/misc/88pm860x_onkey.c 60 */;
	struct pm860x_onkey_info *cocci_id/* drivers/input/misc/88pm860x_onkey.c 47 */;
	irqreturn_t cocci_id/* drivers/input/misc/88pm860x_onkey.c 45 */;
	void *cocci_id/* drivers/input/misc/88pm860x_onkey.c 45 */;
	int cocci_id/* drivers/input/misc/88pm860x_onkey.c 45 */;
	struct pm860x_onkey_info {
		struct input_dev *idev;
		struct pm860x_chip *chip;
		struct i2c_client *i2c;
		struct device *dev;
		int irq;
	} cocci_id/* drivers/input/misc/88pm860x_onkey.c 36 */;
	struct platform_driver cocci_id/* drivers/input/misc/88pm860x_onkey.c 134 */;
	struct device *cocci_id/* drivers/input/misc/88pm860x_onkey.c 122 */;
	int __maybe_unused cocci_id/* drivers/input/misc/88pm860x_onkey.c 122 */;
}
