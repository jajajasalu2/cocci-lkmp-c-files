cocci_test_suite() {
	struct sa1100_gpio_chip cocci_id/* drivers/gpio/gpio-sa1100.c 92 */;
	unsigned long cocci_id/* drivers/gpio/gpio-sa1100.c 65 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-sa1100.c 64 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-sa1100.c 62 */;
	unsigned cocci_id/* drivers/gpio/gpio-sa1100.c 62 */;
	int cocci_id/* drivers/gpio/gpio-sa1100.c 62 */;
	void __init cocci_id/* drivers/gpio/gpio-sa1100.c 309 */;
	const int cocci_id/* drivers/gpio/gpio-sa1100.c 292 */[]__initconst;
	int __init cocci_id/* drivers/gpio/gpio-sa1100.c 284 */;
	enum{R_GPLR=0x00, R_GPDR=0x04, R_GPSR=0x08, R_GPCR=0x0c, R_GRER=0x10, R_GFER=0x14, R_GEDR=0x18, R_GAFR=0x1c,} cocci_id/* drivers/gpio/gpio-sa1100.c 28 */;
	struct syscore_ops cocci_id/* drivers/gpio/gpio-sa1100.c 279 */;
	unsigned int cocci_id/* drivers/gpio/gpio-sa1100.c 232 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-sa1100.c 229 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-sa1100.c 222 */;
	const struct irq_domain_ops cocci_id/* drivers/gpio/gpio-sa1100.c 217 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-sa1100.c 206 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-sa1100.c 196 */;
	struct sa1100_gpio_chip {
		struct gpio_chip chip;
		void __iomem *membase;
		int irqbase;
		u32 irqmask;
		u32 irqrising;
		u32 irqfalling;
		u32 irqwake;
	} cocci_id/* drivers/gpio/gpio-sa1100.c 16 */;
	struct sa1100_gpio_chip *cocci_id/* drivers/gpio/gpio-sa1100.c 155 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-sa1100.c 153 */;
	void cocci_id/* drivers/gpio/gpio-sa1100.c 153 */;
	u32 cocci_id/* drivers/gpio/gpio-sa1100.c 116 */;
	void *cocci_id/* drivers/gpio/gpio-sa1100.c 104 */;
}
