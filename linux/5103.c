cocci_test_suite() {
	unsigned long cocci_id/* drivers/gpio/gpio-pisosr.c 99 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-pisosr.c 96 */;
	struct pisosr_gpio *cocci_id/* drivers/gpio/gpio-pisosr.c 87 */;
	unsigned cocci_id/* drivers/gpio/gpio-pisosr.c 72 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-pisosr.c 71 */;
	int cocci_id/* drivers/gpio/gpio-pisosr.c 71 */;
	struct pisosr_gpio {
		struct gpio_chip chip;
		struct spi_device *spi;
		u8 *buffer;
		size_t buffer_size;
		struct gpio_desc *load_gpio;
		struct mutex lock;
	} cocci_id/* drivers/gpio/gpio-pisosr.c 35 */;
	struct spi_driver cocci_id/* drivers/gpio/gpio-pisosr.c 192 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-pisosr.c 186 */[];
	const struct spi_device_id cocci_id/* drivers/gpio/gpio-pisosr.c 180 */[];
	struct device *cocci_id/* drivers/gpio/gpio-pisosr.c 129 */;
	struct spi_device *cocci_id/* drivers/gpio/gpio-pisosr.c 127 */;
	const struct gpio_chip cocci_id/* drivers/gpio/gpio-pisosr.c 114 */;
}
