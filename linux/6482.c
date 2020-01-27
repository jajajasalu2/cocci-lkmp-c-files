cocci_test_suite() {
	unsigned cocci_id/* drivers/regulator/gpio-regulator.c 87 */;
	unsigned *cocci_id/* drivers/regulator/gpio-regulator.c 59 */;
	struct gpio_regulator_data *cocci_id/* drivers/regulator/gpio-regulator.c 47 */;
	struct regulator_dev *cocci_id/* drivers/regulator/gpio-regulator.c 45 */;
	int cocci_id/* drivers/regulator/gpio-regulator.c 45 */;
	void __exit cocci_id/* drivers/regulator/gpio-regulator.c 359 */;
	void cocci_id/* drivers/regulator/gpio-regulator.c 359 */;
	int __init cocci_id/* drivers/regulator/gpio-regulator.c 353 */;
	struct platform_driver cocci_id/* drivers/regulator/gpio-regulator.c 345 */;
	const struct of_device_id cocci_id/* drivers/regulator/gpio-regulator.c 338 */[];
	struct gpio_regulator_data {
		struct regulator_desc desc;
		struct gpio_desc **gpiods;
		int nr_gpios;
		struct gpio_regulator_state *states;
		int nr_states;
		int state;
	} cocci_id/* drivers/regulator/gpio-regulator.c 33 */;
	struct gpio_regulator_state cocci_id/* drivers/regulator/gpio-regulator.c 272 */;
	struct gpio_desc *cocci_id/* drivers/regulator/gpio-regulator.c 253 */;
	struct gpio_regulator_data cocci_id/* drivers/regulator/gpio-regulator.c 235 */;
	enum gpiod_flags cocci_id/* drivers/regulator/gpio-regulator.c 232 */;
	struct regulator_config cocci_id/* drivers/regulator/gpio-regulator.c 230 */;
	struct device_node *cocci_id/* drivers/regulator/gpio-regulator.c 228 */;
	struct gpio_regulator_config *cocci_id/* drivers/regulator/gpio-regulator.c 227 */;
	struct device *cocci_id/* drivers/regulator/gpio-regulator.c 226 */;
	struct platform_device *cocci_id/* drivers/regulator/gpio-regulator.c 224 */;
	const struct regulator_ops cocci_id/* drivers/regulator/gpio-regulator.c 219 */;
	u32 cocci_id/* drivers/regulator/gpio-regulator.c 167 */;
	struct gpio_regulator_config cocci_id/* drivers/regulator/gpio-regulator.c 140 */;
	const char *cocci_id/* drivers/regulator/gpio-regulator.c 134 */;
	const struct regulator_desc *cocci_id/* drivers/regulator/gpio-regulator.c 131 */;
}
