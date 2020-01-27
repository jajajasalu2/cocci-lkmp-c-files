cocci_test_suite() {
	struct grgpio_priv {
		struct gpio_chip gc;
		void __iomem *regs;
		struct device *dev;
		u32 imask;
		struct irq_domain *domain;
		struct grgpio_uirq uirqs[GRGPIO_MAX_NGPIO];
		struct grgpio_lirq lirqs[GRGPIO_MAX_NGPIO];
	} cocci_id/* drivers/gpio/gpio-grgpio.c 60 */;
	struct grgpio_lirq {
		s8 index;
		u8 irq;
	} cocci_id/* drivers/gpio/gpio-grgpio.c 55 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-grgpio.c 470 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-grgpio.c 462 */[];
	struct grgpio_uirq {
		u8 refcnt;
		u8 uirq;
	} cocci_id/* drivers/gpio/gpio-grgpio.c 46 */;
	s32 *cocci_id/* drivers/gpio/gpio-grgpio.c 334 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-grgpio.c 330 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-grgpio.c 329 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-grgpio.c 328 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-grgpio.c 326 */;
	const struct irq_domain_ops cocci_id/* drivers/gpio/gpio-grgpio.c 319 */;
	struct grgpio_uirq *cocci_id/* drivers/gpio/gpio-grgpio.c 235 */;
	irq_hw_number_t cocci_id/* drivers/gpio/gpio-grgpio.c 231 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-grgpio.c 230 */;
	unsigned int cocci_id/* drivers/gpio/gpio-grgpio.c 230 */;
	struct grgpio_lirq *cocci_id/* drivers/gpio/gpio-grgpio.c 209 */;
	unsigned long cocci_id/* drivers/gpio/gpio-grgpio.c 198 */;
	struct grgpio_priv *cocci_id/* drivers/gpio/gpio-grgpio.c 196 */;
	irqreturn_t cocci_id/* drivers/gpio/gpio-grgpio.c 194 */;
	void *cocci_id/* drivers/gpio/gpio-grgpio.c 194 */;
	int cocci_id/* drivers/gpio/gpio-grgpio.c 194 */;
	struct irq_chip cocci_id/* drivers/gpio/gpio-grgpio.c 187 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-grgpio.c 161 */;
	void cocci_id/* drivers/gpio/gpio-grgpio.c 161 */;
	u32 cocci_id/* drivers/gpio/gpio-grgpio.c 121 */;
	unsigned cocci_id/* drivers/gpio/gpio-grgpio.c 102 */;
}
