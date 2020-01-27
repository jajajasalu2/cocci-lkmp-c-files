cocci_test_suite() {
	struct wcove_gpio {
		struct mutex buslock;
		struct gpio_chip chip;
		struct device *dev;
		struct regmap *regmap;
		struct regmap_irq_chip_data *regmap_irq_chip;
		int update;
		int intcnt;
		bool set_irq_mask;
	} cocci_id/* drivers/gpio/gpio-wcove.c 89 */;
	enum ctrl_register{CTRL_IN, CTRL_OUT,} cocci_id/* drivers/gpio/gpio-wcove.c 73 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-wcove.c 493 */;
	struct device *cocci_id/* drivers/gpio/gpio-wcove.c 402 */;
	struct intel_soc_pmic *cocci_id/* drivers/gpio/gpio-wcove.c 399 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-wcove.c 397 */;
	struct seq_file *cocci_id/* drivers/gpio/gpio-wcove.c 365 */;
	const unsigned long *cocci_id/* drivers/gpio/gpio-wcove.c 342 */;
	u8 cocci_id/* drivers/gpio/gpio-wcove.c 328 */[2];
	irqreturn_t cocci_id/* drivers/gpio/gpio-wcove.c 324 */;
	void *cocci_id/* drivers/gpio/gpio-wcove.c 324 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-wcove.c 315 */;
	struct wcove_gpio *cocci_id/* drivers/gpio/gpio-wcove.c 271 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-wcove.c 270 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-wcove.c 268 */;
	void cocci_id/* drivers/gpio/gpio-wcove.c 268 */;
	unsigned long cocci_id/* drivers/gpio/gpio-wcove.c 216 */;
	unsigned int cocci_id/* drivers/gpio/gpio-wcove.c 102 */;
	enum ctrl_register cocci_id/* drivers/gpio/gpio-wcove.c 100 */;
	int cocci_id/* drivers/gpio/gpio-wcove.c 100 */;
}
