cocci_test_suite() {
	unsigned char cocci_id/* drivers/gpio/gpio-adp5520.c 94 */;
	struct adp5520_gpio_platform_data *cocci_id/* drivers/gpio/gpio-adp5520.c 90 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-adp5520.c 88 */;
	struct adp5520_gpio *cocci_id/* drivers/gpio/gpio-adp5520.c 57 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-adp5520.c 55 */;
	unsigned cocci_id/* drivers/gpio/gpio-adp5520.c 55 */;
	int cocci_id/* drivers/gpio/gpio-adp5520.c 55 */;
	void cocci_id/* drivers/gpio/gpio-adp5520.c 43 */;
	uint8_t cocci_id/* drivers/gpio/gpio-adp5520.c 26 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-adp5520.c 165 */;
	struct adp5520_gpio {
		struct device *master;
		struct gpio_chip gpio_chip;
		unsigned char lut[ADP5520_MAXGPIOS];
		unsigned long output;
	} cocci_id/* drivers/gpio/gpio-adp5520.c 16 */;
}
