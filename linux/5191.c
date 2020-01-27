cocci_test_suite() {
	enum pxa_gpio_type{PXA25X_GPIO=0, PXA26X_GPIO, PXA27X_GPIO, PXA3XX_GPIO, PXA93X_GPIO, MMP_GPIO=0x10, MMP2_GPIO, PXA1928_GPIO,} cocci_id/* drivers/gpio/gpio-pxa.c 90 */;
	struct syscore_ops cocci_id/* drivers/gpio/gpio-pxa.c 812 */;
	struct pxa_gpio_chip {
		struct device *dev;
		struct gpio_chip chip;
		struct pxa_gpio_bank *banks;
		struct irq_domain *irqdomain;
		int irq0;
		int irq1;
		int (*set_wake)(unsigned int gpio, unsigned int on);
	} cocci_id/* drivers/gpio/gpio-pxa.c 79 */;
	int __init cocci_id/* drivers/gpio/gpio-pxa.c 757 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-pxa.c 739 */;
	const struct platform_device_id cocci_id/* drivers/gpio/gpio-pxa.c 727 */[];
	struct pxa_gpio_bank {
		void __iomem *regbase;
		unsigned long irq_mask;
		unsigned long irq_edge_rise;
		unsigned long irq_edge_fall;
#ifdef CONFIG_PM
		unsigned long saved_gplr;
		unsigned long saved_gpdr;
		unsigned long saved_grer;
		unsigned long saved_gfer;
#endif
	} cocci_id/* drivers/gpio/gpio-pxa.c 65 */;
	struct pxa_gpio_platform_data *cocci_id/* drivers/gpio/gpio-pxa.c 623 */;
	struct clk *cocci_id/* drivers/gpio/gpio-pxa.c 622 */;
	const struct pxa_gpio_id *cocci_id/* drivers/gpio/gpio-pxa.c 599 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-pxa.c 583 */[];
	const struct irq_domain_ops cocci_id/* drivers/gpio/gpio-pxa.c 577 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-pxa.c 568 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-pxa.c 567 */;
	struct pxa_gpio_id *cocci_id/* drivers/gpio/gpio-pxa.c 545 */;
	const struct platform_device_id *cocci_id/* drivers/gpio/gpio-pxa.c 544 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-pxa.c 542 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-pxa.c 533 */;
	unsigned int cocci_id/* drivers/gpio/gpio-pxa.c 490 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-pxa.c 487 */;
	void cocci_id/* drivers/gpio/gpio-pxa.c 487 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-pxa.c 444 */;
	void *cocci_id/* drivers/gpio/gpio-pxa.c 444 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-pxa.c 347 */;
	u32 *cocci_id/* drivers/gpio/gpio-pxa.c 334 */;
	const struct of_phandle_args *cocci_id/* drivers/gpio/gpio-pxa.c 333 */;
	u32 cocci_id/* drivers/gpio/gpio-pxa.c 318 */;
	uint32_t cocci_id/* drivers/gpio/gpio-pxa.c 263 */;
	bool cocci_id/* drivers/gpio/gpio-pxa.c 241 */;
	unsigned long cocci_id/* drivers/gpio/gpio-pxa.c 203 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-pxa.c 202 */;
	struct pxa_gpio_chip *cocci_id/* drivers/gpio/gpio-pxa.c 200 */;
	unsigned cocci_id/* drivers/gpio/gpio-pxa.c 200 */;
	int cocci_id/* drivers/gpio/gpio-pxa.c 187 */;
	struct pxa_gpio_bank *cocci_id/* drivers/gpio/gpio-pxa.c 163 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-pxa.c 153 */;
	struct pxa_gpio_id cocci_id/* drivers/gpio/gpio-pxa.c 140 */;
	enum pxa_gpio_type cocci_id/* drivers/gpio/gpio-pxa.c 108 */;
	struct pxa_gpio_id {
		enum pxa_gpio_type type;
		int gpio_nums;
	} cocci_id/* drivers/gpio/gpio-pxa.c 101 */;
}
