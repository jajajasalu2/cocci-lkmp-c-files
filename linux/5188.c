cocci_test_suite() {
	unsigned cocci_id/* drivers/gpio/gpio-74x164.c 94 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-74x164.c 93 */;
	size_t cocci_id/* drivers/gpio/gpio-74x164.c 78 */;
	unsigned long cocci_id/* drivers/gpio/gpio-74x164.c 76 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-74x164.c 72 */;
	void cocci_id/* drivers/gpio/gpio-74x164.c 72 */;
	u8 cocci_id/* drivers/gpio/gpio-74x164.c 44 */;
	struct gen_74x164_chip *cocci_id/* drivers/gpio/gpio-74x164.c 35 */;
	int cocci_id/* drivers/gpio/gpio-74x164.c 35 */;
	struct gen_74x164_chip {
		struct gpio_chip gpio_chip;
		struct mutex lock;
		struct gpio_desc *gpiod_oe;
		u32 registers;
		u8 buffer[];
	} cocci_id/* drivers/gpio/gpio-74x164.c 20 */;
	struct spi_driver cocci_id/* drivers/gpio/gpio-74x164.c 184 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-74x164.c 177 */[];
	u32 cocci_id/* drivers/gpio/gpio-74x164.c 103 */;
	struct spi_device *cocci_id/* drivers/gpio/gpio-74x164.c 100 */;
}
