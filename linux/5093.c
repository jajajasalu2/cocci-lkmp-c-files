cocci_test_suite() {
	void cocci_id/* drivers/gpio/gpio-tps68470.c 73 */;
	struct regmap *cocci_id/* drivers/gpio/gpio-tps68470.c 32 */;
	struct tps68470_gpio_data *cocci_id/* drivers/gpio/gpio-tps68470.c 31 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-tps68470.c 29 */;
	unsigned int cocci_id/* drivers/gpio/gpio-tps68470.c 29 */;
	int cocci_id/* drivers/gpio/gpio-tps68470.c 29 */;
	struct tps68470_gpio_data {
		struct regmap *tps68470_regmap;
		struct gpio_chip gc;
	} cocci_id/* drivers/gpio/gpio-tps68470.c 24 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-tps68470.c 161 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-tps68470.c 125 */;
	const char *cocci_id/* drivers/gpio/gpio-tps68470.c 119 */[TPS68470_N_GPIO];
}
