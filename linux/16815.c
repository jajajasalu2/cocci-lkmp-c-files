cocci_test_suite() {
	struct pm80x_onkey_info cocci_id/* drivers/input/misc/88pm80x_onkey.c 72 */;
	struct pm80x_chip *cocci_id/* drivers/input/misc/88pm80x_onkey.c 68 */;
	struct platform_device *cocci_id/* drivers/input/misc/88pm80x_onkey.c 65 */;
	unsigned int cocci_id/* drivers/input/misc/88pm80x_onkey.c 47 */;
	struct pm80x_onkey_info *cocci_id/* drivers/input/misc/88pm80x_onkey.c 45 */;
	irqreturn_t cocci_id/* drivers/input/misc/88pm80x_onkey.c 43 */;
	void *cocci_id/* drivers/input/misc/88pm80x_onkey.c 43 */;
	int cocci_id/* drivers/input/misc/88pm80x_onkey.c 43 */;
	struct pm80x_onkey_info {
		struct input_dev *idev;
		struct pm80x_chip *pm80x;
		struct regmap *map;
		int irq;
	} cocci_id/* drivers/input/misc/88pm80x_onkey.c 35 */;
	struct platform_driver cocci_id/* drivers/input/misc/88pm80x_onkey.c 151 */;
}
