cocci_test_suite() {
	struct mc33880 cocci_id/* drivers/gpio/gpio-mc33880.c 92 */;
	struct mc33880_platform_data *cocci_id/* drivers/gpio/gpio-mc33880.c 74 */;
	struct spi_device *cocci_id/* drivers/gpio/gpio-mc33880.c 71 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-mc33880.c 60 */;
	struct mc33880 *cocci_id/* drivers/gpio/gpio-mc33880.c 49 */;
	unsigned cocci_id/* drivers/gpio/gpio-mc33880.c 49 */;
	int cocci_id/* drivers/gpio/gpio-mc33880.c 49 */;
	struct mc33880 {
		struct mutex lock;
		u8 port_config;
		struct gpio_chip chip;
		struct spi_device *spi;
	} cocci_id/* drivers/gpio/gpio-mc33880.c 36 */;
	void __exit cocci_id/* drivers/gpio/gpio-mc33880.c 168 */;
	void cocci_id/* drivers/gpio/gpio-mc33880.c 168 */;
	int __init cocci_id/* drivers/gpio/gpio-mc33880.c 159 */;
	struct spi_driver cocci_id/* drivers/gpio/gpio-mc33880.c 151 */;
}
