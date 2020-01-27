cocci_test_suite() {
	void cocci_id/* drivers/spi/spi-gpio.c 94 */;
	struct spi_gpio cocci_id/* drivers/spi/spi-gpio.c 82 */;
	const struct spi_bitbang *cocci_id/* drivers/spi/spi-gpio.c 78 */;
	struct spi_gpio *__pure cocci_id/* drivers/spi/spi-gpio.c 75 */;
	struct platform_driver cocci_id/* drivers/spi/spi-gpio.c 440 */;
	struct spi_bitbang *cocci_id/* drivers/spi/spi-gpio.c 364 */;
	struct device *cocci_id/* drivers/spi/spi-gpio.c 363 */;
	struct spi_master *cocci_id/* drivers/spi/spi-gpio.c 361 */;
	struct platform_device *cocci_id/* drivers/spi/spi-gpio.c 358 */;
	void *cocci_id/* drivers/spi/spi-gpio.c 353 */;
	struct spi_gpio {
		struct spi_bitbang bitbang;
		struct gpio_desc *sck;
		struct gpio_desc *miso;
		struct gpio_desc *mosi;
		struct gpio_desc **cs_gpios;
	} cocci_id/* drivers/spi/spi-gpio.c 33 */;
	struct spi_gpio_platform_data *cocci_id/* drivers/spi/spi-gpio.c 323 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-gpio.c 297 */[];
	bool cocci_id/* drivers/spi/spi-gpio.c 239 */;
	struct gpio_desc *cocci_id/* drivers/spi/spi-gpio.c 209 */;
	struct spi_device *cocci_id/* drivers/spi/spi-gpio.c 199 */;
	u8 cocci_id/* drivers/spi/spi-gpio.c 170 */;
	unsigned cocci_id/* drivers/spi/spi-gpio.c 170 */;
	u32 cocci_id/* drivers/spi/spi-gpio.c 169 */;
	struct spi_gpio *cocci_id/* drivers/spi/spi-gpio.c 103 */;
	const struct spi_device *cocci_id/* drivers/spi/spi-gpio.c 101 */;
	int cocci_id/* drivers/spi/spi-gpio.c 101 */;
}
