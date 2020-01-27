cocci_test_suite() {
	const struct of_device_id *cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 94 */;
	struct input_dev *cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 93 */;
	struct device *cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 91 */;
	struct platform_device *cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 89 */;
	unsigned int cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 67 */;
	const struct tps6521x_data *cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 66 */;
	struct tps6521x_pwrbutton *cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 65 */;
	irqreturn_t cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 63 */;
	void *cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 63 */;
	int cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 63 */;
	const struct of_device_id cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 56 */[];
	struct tps6521x_pwrbutton {
		struct device *dev;
		struct regmap *regmap;
		struct input_dev *idev;
		const struct tps6521x_data *data;
		char phys[32];
	} cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 48 */;
	const struct tps6521x_data cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 36 */;
	struct tps6521x_data {
		unsigned int reg_status;
		unsigned int pb_mask;
		const char *name;
	} cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 30 */;
	struct platform_driver cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 156 */;
	const struct platform_device_id cocci_id/* drivers/input/misc/tps65218-pwrbutton.c 149 */[];
}
