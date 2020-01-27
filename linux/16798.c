cocci_test_suite() {
	struct gpio_vibrator *cocci_id/* drivers/input/misc/gpio-vibra.c 95 */;
	struct input_dev *cocci_id/* drivers/input/misc/gpio-vibra.c 93 */;
	void cocci_id/* drivers/input/misc/gpio-vibra.c 93 */;
	struct ff_effect *cocci_id/* drivers/input/misc/gpio-vibra.c 78 */;
	void *cocci_id/* drivers/input/misc/gpio-vibra.c 77 */;
	int cocci_id/* drivers/input/misc/gpio-vibra.c 77 */;
	struct gpio_vibrator cocci_id/* drivers/input/misc/gpio-vibra.c 69 */;
	struct work_struct *cocci_id/* drivers/input/misc/gpio-vibra.c 66 */;
	struct gpio_vibrator {
		struct input_dev *input;
		struct gpio_desc *gpio;
		struct regulator *vcc;
		struct work_struct play_work;
		bool running;
		bool vcc_on;
	} cocci_id/* drivers/input/misc/gpio-vibra.c 27 */;
	struct platform_driver cocci_id/* drivers/input/misc/gpio-vibra.c 194 */;
	const struct of_device_id cocci_id/* drivers/input/misc/gpio-vibra.c 187 */[];
	struct device *cocci_id/* drivers/input/misc/gpio-vibra.c 172 */;
	int __maybe_unused cocci_id/* drivers/input/misc/gpio-vibra.c 172 */;
	struct platform_device *cocci_id/* drivers/input/misc/gpio-vibra.c 102 */;
}
