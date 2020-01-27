cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/input/misc/gpio-beeper.c 96 */[];
	struct platform_device *cocci_id/* drivers/input/misc/gpio-beeper.c 61 */;
	struct gpio_beeper *cocci_id/* drivers/input/misc/gpio-beeper.c 55 */;
	struct input_dev *cocci_id/* drivers/input/misc/gpio-beeper.c 53 */;
	void cocci_id/* drivers/input/misc/gpio-beeper.c 53 */;
	unsigned int cocci_id/* drivers/input/misc/gpio-beeper.c 35 */;
	int cocci_id/* drivers/input/misc/gpio-beeper.c 35 */;
	struct gpio_beeper cocci_id/* drivers/input/misc/gpio-beeper.c 30 */;
	struct work_struct *cocci_id/* drivers/input/misc/gpio-beeper.c 28 */;
	bool cocci_id/* drivers/input/misc/gpio-beeper.c 23 */;
	struct gpio_beeper {
		struct work_struct work;
		struct gpio_desc *desc;
		bool beeping;
	} cocci_id/* drivers/input/misc/gpio-beeper.c 17 */;
	struct platform_driver cocci_id/* drivers/input/misc/gpio-beeper.c 103 */;
}
