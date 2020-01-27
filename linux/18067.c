cocci_test_suite() {
	struct orion_gpio_chip cocci_id/* arch/arm/plat-orion/gpio.c 92 */[2];
	struct orion_gpio_chip *cocci_id/* arch/arm/plat-orion/gpio.c 61 */;
	void __iomem *cocci_id/* arch/arm/plat-orion/gpio.c 61 */;
	char cocci_id/* arch/arm/plat-orion/gpio.c 532 */[16];
	int cocci_id/* arch/arm/plat-orion/gpio.c 527 */[4];
	struct device_node *cocci_id/* arch/arm/plat-orion/gpio.c 523 */;
	void __init cocci_id/* arch/arm/plat-orion/gpio.c 523 */;
	bool cocci_id/* arch/arm/plat-orion/gpio.c 459 */;
	const char *cocci_id/* arch/arm/plat-orion/gpio.c 457 */;
	struct seq_file *cocci_id/* arch/arm/plat-orion/gpio.c 440 */;
	struct irq_desc *cocci_id/* arch/arm/plat-orion/gpio.c 404 */;
	struct orion_gpio_chip {
		struct gpio_chip chip;
		spinlock_t lock;
		void __iomem *base;
		unsigned long valid_input;
		unsigned long valid_output;
		int mask_offset;
		int secondary_irq_base;
		struct irq_domain *domain;
	} cocci_id/* arch/arm/plat-orion/gpio.c 40 */;
	struct irq_chip_type *cocci_id/* arch/arm/plat-orion/gpio.c 354 */;
	struct irq_chip_generic *cocci_id/* arch/arm/plat-orion/gpio.c 353 */;
	struct irq_data *cocci_id/* arch/arm/plat-orion/gpio.c 351 */;
	unsigned long *cocci_id/* arch/arm/plat-orion/gpio.c 304 */;
	struct gpio_desc *cocci_id/* arch/arm/plat-orion/gpio.c 303 */;
	struct gpio_chip *cocci_id/* arch/arm/plat-orion/gpio.c 240 */;
	unsigned long cocci_id/* arch/arm/plat-orion/gpio.c 169 */;
	u32 cocci_id/* arch/arm/plat-orion/gpio.c 123 */;
	unsigned cocci_id/* arch/arm/plat-orion/gpio.c 121 */;
	int cocci_id/* arch/arm/plat-orion/gpio.c 121 */;
	void cocci_id/* arch/arm/plat-orion/gpio.c 120 */;
}
