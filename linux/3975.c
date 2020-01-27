cocci_test_suite() {
	struct meson_gpio_irq_controller {
		const struct meson_gpio_irq_params *params;
		void __iomem *base;
		u32 channel_irqs[NUM_CHANNEL];
	DECLARE_BITMAP(channel_map,NUM_CHANNEL)
		;
		spinlock_t lock;
	} cocci_id/* drivers/irqchip/irq-meson-gpio.c 84 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-meson-gpio.c 73 */[];
	const struct meson_gpio_irq_params cocci_id/* drivers/irqchip/irq-meson-gpio.c 64 */;
	struct meson_gpio_irq_params {
		unsigned int nr_hwirq;
		bool support_edge_both;
	} cocci_id/* drivers/irqchip/irq-meson-gpio.c 43 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-meson-gpio.c 377 */;
	int __init cocci_id/* drivers/irqchip/irq-meson-gpio.c 377 */;
	const struct of_device_id *cocci_id/* drivers/irqchip/irq-meson-gpio.c 355 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-meson-gpio.c 346 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-meson-gpio.c 332 */;
	void cocci_id/* drivers/irqchip/irq-meson-gpio.c 327 */;
	u32 *cocci_id/* drivers/irqchip/irq-meson-gpio.c 298 */;
	unsigned long cocci_id/* drivers/irqchip/irq-meson-gpio.c 297 */;
	struct meson_gpio_irq_controller *cocci_id/* drivers/irqchip/irq-meson-gpio.c 296 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-meson-gpio.c 295 */;
	void *cocci_id/* drivers/irqchip/irq-meson-gpio.c 293 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-meson-gpio.c 279 */;
	u32 cocci_id/* drivers/irqchip/irq-meson-gpio.c 276 */;
	unsigned int cocci_id/* drivers/irqchip/irq-meson-gpio.c 275 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-meson-gpio.c 274 */;
	int cocci_id/* drivers/irqchip/irq-meson-gpio.c 274 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-meson-gpio.c 263 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-meson-gpio.c 262 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-meson-gpio.c 247 */;
	u32 **cocci_id/* drivers/irqchip/irq-meson-gpio.c 111 */;
}
