cocci_test_suite() {
	struct moxtet_gpio_chip *cocci_id/* drivers/gpio/gpio-moxtet.c 91 */;
	unsigned int cocci_id/* drivers/gpio/gpio-moxtet.c 89 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-moxtet.c 88 */;
	int cocci_id/* drivers/gpio/gpio-moxtet.c 88 */;
	void cocci_id/* drivers/gpio/gpio-moxtet.c 55 */;
	struct moxtet_gpio_chip {
		struct device *dev;
		struct gpio_chip gpio_chip;
		const struct moxtet_gpio_desc *desc;
	} cocci_id/* drivers/gpio/gpio-moxtet.c 28 */;
	const struct moxtet_gpio_desc cocci_id/* drivers/gpio/gpio-moxtet.c 21 */[];
	struct moxtet_driver cocci_id/* drivers/gpio/gpio-moxtet.c 167 */;
	const enum turris_mox_module_id cocci_id/* drivers/gpio/gpio-moxtet.c 162 */[];
	struct moxtet_gpio_desc {
		u16 in_mask;
		u16 out_mask;
	} cocci_id/* drivers/gpio/gpio-moxtet.c 16 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-moxtet.c 156 */[];
	struct device_node *cocci_id/* drivers/gpio/gpio-moxtet.c 119 */;
	struct device *cocci_id/* drivers/gpio/gpio-moxtet.c 116 */;
}
