cocci_test_suite() {
	unsigned int cocci_id/* drivers/gpio/gpio-vf610.c 84 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-vf610.c 68 */[];
	const struct fsl_gpio_soc_data cocci_id/* drivers/gpio/gpio-vf610.c 64 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-vf610.c 345 */;
	struct vf610_gpio_port {
		struct gpio_chip gc;
		struct irq_chip ic;
		void __iomem *base;
		void __iomem *gpio_base;
		const struct fsl_gpio_soc_data *sdata;
		u8 irqc[VF610_GPIO_PER_PORT];
		struct clk *clk_port;
		struct clk *clk_gpio;
		int irq;
	} cocci_id/* drivers/gpio/gpio-vf610.c 30 */;
	struct fsl_gpio_soc_data {
		bool have_paddr;
	} cocci_id/* drivers/gpio/gpio-vf610.c 25 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-vf610.c 246 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-vf610.c 243 */;
	struct device *cocci_id/* drivers/gpio/gpio-vf610.c 242 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-vf610.c 240 */;
	void *cocci_id/* drivers/gpio/gpio-vf610.c 235 */;
	void cocci_id/* drivers/gpio/gpio-vf610.c 235 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-vf610.c 207 */;
	u8 cocci_id/* drivers/gpio/gpio-vf610.c 171 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-vf610.c 158 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-vf610.c 141 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-vf610.c 137 */;
	u32 cocci_id/* drivers/gpio/gpio-vf610.c 112 */;
	unsigned long cocci_id/* drivers/gpio/gpio-vf610.c 111 */;
	struct vf610_gpio_port *cocci_id/* drivers/gpio/gpio-vf610.c 110 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-vf610.c 108 */;
	unsigned cocci_id/* drivers/gpio/gpio-vf610.c 108 */;
	int cocci_id/* drivers/gpio/gpio-vf610.c 108 */;
}
