cocci_test_suite() {
	enum ctrl_register cocci_id/* drivers/gpio/gpio-crystalcove.c 81 */;
	struct crystalcove_gpio {
		struct mutex buslock;
		struct gpio_chip chip;
		struct regmap *regmap;
		int update;
		int intcnt_value;
		bool set_irq_mask;
	} cocci_id/* drivers/gpio/gpio-crystalcove.c 72 */;
	enum ctrl_register{CTRL_IN, CTRL_OUT,} cocci_id/* drivers/gpio/gpio-crystalcove.c 58 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-crystalcove.c 388 */;
	struct intel_soc_pmic *cocci_id/* drivers/gpio/gpio-crystalcove.c 332 */;
	struct device *cocci_id/* drivers/gpio/gpio-crystalcove.c 331 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-crystalcove.c 326 */;
	unsigned int cocci_id/* drivers/gpio/gpio-crystalcove.c 301 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-crystalcove.c 297 */;
	struct seq_file *cocci_id/* drivers/gpio/gpio-crystalcove.c 296 */;
	unsigned long cocci_id/* drivers/gpio/gpio-crystalcove.c 274 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-crystalcove.c 271 */;
	void *cocci_id/* drivers/gpio/gpio-crystalcove.c 271 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-crystalcove.c 261 */;
	int cocci_id/* drivers/gpio/gpio-crystalcove.c 228 */;
	struct crystalcove_gpio *cocci_id/* drivers/gpio/gpio-crystalcove.c 218 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-crystalcove.c 216 */;
	void cocci_id/* drivers/gpio/gpio-crystalcove.c 216 */;
	unsigned cocci_id/* drivers/gpio/gpio-crystalcove.c 132 */;
	u8 cocci_id/* drivers/gpio/gpio-crystalcove.c 116 */;
}
