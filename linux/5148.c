cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/gpio/gpio-tegra186.c 827 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-tegra186.c 809 */[];
	const struct tegra_gpio_soc cocci_id/* drivers/gpio/gpio-tegra186.c 733 */;
	const struct tegra_gpio_port cocci_id/* drivers/gpio/gpio-tegra186.c 722 */[];
	struct tegra_gpio {
		struct gpio_chip gpio;
		struct irq_chip intc;
		unsigned int num_irq;
		unsigned int *irq;
		const struct tegra_gpio_soc *soc;
		void __iomem *secure;
		void __iomem *base;
	} cocci_id/* drivers/gpio/gpio-tegra186.c 68 */;
	struct tegra_gpio_soc {
		const struct tegra_gpio_port *ports;
		unsigned int num_ports;
		const char *name;
		unsigned int instance;
	} cocci_id/* drivers/gpio/gpio-tegra186.c 61 */;
	const char *const*cocci_id/* drivers/gpio/gpio-tegra186.c 607 */;
	char *cocci_id/* drivers/gpio/gpio-tegra186.c 593 */;
	struct tegra_gpio_port {
		const char *name;
		unsigned int bank;
		unsigned int port;
		unsigned int pins;
	} cocci_id/* drivers/gpio/gpio-tegra186.c 54 */;
	char **cocci_id/* drivers/gpio/gpio-tegra186.c 535 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-tegra186.c 534 */;
	struct gpio_irq_chip *cocci_id/* drivers/gpio/gpio-tegra186.c 532 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-tegra186.c 529 */;
	void cocci_id/* drivers/gpio/gpio-tegra186.c 498 */;
	struct tegra_gpio *cocci_id/* drivers/gpio/gpio-tegra186.c 479 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-tegra186.c 476 */;
	unsigned int cocci_id/* drivers/gpio/gpio-tegra186.c 476 */;
	unsigned int *cocci_id/* drivers/gpio/gpio-tegra186.c 467 */;
	int cocci_id/* drivers/gpio/gpio-tegra186.c 464 */;
	unsigned long *cocci_id/* drivers/gpio/gpio-tegra186.c 424 */;
	struct irq_fwspec *cocci_id/* drivers/gpio/gpio-tegra186.c 423 */;
	unsigned long cocci_id/* drivers/gpio/gpio-tegra186.c 396 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-tegra186.c 387 */;
	struct irq_domain *cocci_id/* drivers/gpio/gpio-tegra186.c 386 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-tegra186.c 383 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-tegra186.c 287 */;
	u32 *cocci_id/* drivers/gpio/gpio-tegra186.c 259 */;
	const struct of_phandle_args *cocci_id/* drivers/gpio/gpio-tegra186.c 258 */;
	u32 cocci_id/* drivers/gpio/gpio-tegra186.c 137 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-tegra186.c 136 */;
	const struct tegra_gpio_port *cocci_id/* drivers/gpio/gpio-tegra186.c 102 */;
}
