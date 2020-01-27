cocci_test_suite() {
	u16 cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 78 */;
	struct sprd_pmic_eic {
		struct gpio_chip chip;
		struct irq_chip intc;
		struct regmap *map;
		u32 offset;
		u8 reg[CACHE_NR_REGS];
		struct mutex buslock;
		int irq;
	} cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 57 */;
	enum{REG_IEV, REG_IE, REG_TRIG, CACHE_NR_REGS,} cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 40 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 370 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 364 */[];
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 297 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 295 */;
	unsigned long cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 267 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 263 */;
	void *cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 263 */;
	int cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 210 */;
	u32 cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 208 */;
	struct sprd_pmic_eic *cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 199 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 198 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 196 */;
	void cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 196 */;
	unsigned int cocci_id/* drivers/gpio/gpio-pmic-eic-sprd.c 108 */;
}
