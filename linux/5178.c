cocci_test_suite() {
	struct irq_chip cocci_id/* drivers/gpio/gpio-htc-egpio.c 95 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-htc-egpio.c 74 */;
	struct egpio_info *cocci_id/* drivers/gpio/gpio-htc-egpio.c 67 */;
	void cocci_id/* drivers/gpio/gpio-htc-egpio.c 67 */;
	u16 cocci_id/* drivers/gpio/gpio-htc-egpio.c 58 */;
	int __init cocci_id/* drivers/gpio/gpio-htc-egpio.c 404 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-htc-egpio.c 395 */;
	pm_message_t cocci_id/* drivers/gpio/gpio-htc-egpio.c 368 */;
	struct egpio_info {
		spinlock_t lock;
		void __iomem *base_addr;
		int bus_shift;
		int reg_shift;
		int reg_mask;
		int ack_register;
		int ack_write;
		u16 irqs_enabled;
		uint irq_start;
		int nirqs;
		uint chained_irq;
		struct egpio_chip *chip;
		int nchips;
	} cocci_id/* drivers/gpio/gpio-htc-egpio.c 31 */;
	struct egpio_chip cocci_id/* drivers/gpio/gpio-htc-egpio.c 307 */;
	struct resource *cocci_id/* drivers/gpio/gpio-htc-egpio.c 266 */;
	struct htc_egpio_platform_data *cocci_id/* drivers/gpio/gpio-htc-egpio.c 265 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-htc-egpio.c 263 */;
	struct egpio_chip {
		int reg_start;
		int cached_values;
		unsigned long is_out;
		struct device *dev;
		struct gpio_chip chip;
	} cocci_id/* drivers/gpio/gpio-htc-egpio.c 23 */;
	struct egpio_chip *cocci_id/* drivers/gpio/gpio-htc-egpio.c 162 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-htc-egpio.c 160 */;
	unsigned cocci_id/* drivers/gpio/gpio-htc-egpio.c 160 */;
	int cocci_id/* drivers/gpio/gpio-htc-egpio.c 126 */;
	unsigned int cocci_id/* drivers/gpio/gpio-htc-egpio.c 109 */;
	unsigned long cocci_id/* drivers/gpio/gpio-htc-egpio.c 108 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-htc-egpio.c 102 */;
}
