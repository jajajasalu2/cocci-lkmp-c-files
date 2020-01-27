cocci_test_suite() {
	struct gpio_regs {
		u32 datamsw[ZYNQMP_GPIO_MAX_BANK];
		u32 datalsw[ZYNQMP_GPIO_MAX_BANK];
		u32 dirm[ZYNQMP_GPIO_MAX_BANK];
		u32 outen[ZYNQMP_GPIO_MAX_BANK];
		u32 int_en[ZYNQMP_GPIO_MAX_BANK];
		u32 int_dis[ZYNQMP_GPIO_MAX_BANK];
		u32 int_type[ZYNQMP_GPIO_MAX_BANK];
		u32 int_polarity[ZYNQMP_GPIO_MAX_BANK];
		u32 int_any[ZYNQMP_GPIO_MAX_BANK];
	} cocci_id/* drivers/gpio/gpio-zynq.c 99 */;
	void __exit cocci_id/* drivers/gpio/gpio-zynq.c 972 */;
	void cocci_id/* drivers/gpio/gpio-zynq.c 972 */;
	int __init cocci_id/* drivers/gpio/gpio-zynq.c 966 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-zynq.c 951 */;
	const struct of_device_id *cocci_id/* drivers/gpio/gpio-zynq.c 837 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-zynq.c 836 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-zynq.c 831 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-zynq.c 813 */[];
	const struct zynq_platform_data cocci_id/* drivers/gpio/gpio-zynq.c 798 */;
	struct device *cocci_id/* drivers/gpio/gpio-zynq.c 724 */;
	int __maybe_unused cocci_id/* drivers/gpio/gpio-zynq.c 724 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-zynq.c 640 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-zynq.c 634 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-zynq.c 610 */;
	unsigned long cocci_id/* drivers/gpio/gpio-zynq.c 607 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-zynq.c 430 */;
	u32 cocci_id/* drivers/gpio/gpio-zynq.c 298 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-zynq.c 296 */;
	unsigned int cocci_id/* drivers/gpio/gpio-zynq.c 296 */;
	unsigned int *cocci_id/* drivers/gpio/gpio-zynq.c 185 */;
	struct zynq_gpio *cocci_id/* drivers/gpio/gpio-zynq.c 167 */;
	int cocci_id/* drivers/gpio/gpio-zynq.c 167 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-zynq.c 148 */;
	struct zynq_platform_data {
		const char *label;
		u32 quirks;
		u16 ngpio;
		int max_bank;
		int bank_min[ZYNQMP_GPIO_MAX_BANK];
		int bank_max[ZYNQMP_GPIO_MAX_BANK];
	} cocci_id/* drivers/gpio/gpio-zynq.c 138 */;
	struct zynq_gpio {
		struct gpio_chip chip;
		void __iomem *base_addr;
		struct clk *clk;
		int irq;
		const struct zynq_platform_data *p_data;
		struct gpio_regs context;
	} cocci_id/* drivers/gpio/gpio-zynq.c 120 */;
}
