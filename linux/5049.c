cocci_test_suite() {
	struct irq_data *cocci_id/* drivers/gpio/gpio-mxs.c 70 */;
	unsigned int cocci_id/* drivers/gpio/gpio-mxs.c 70 */;
	struct mxs_gpio_port *cocci_id/* drivers/gpio/gpio-mxs.c 58 */;
	int cocci_id/* drivers/gpio/gpio-mxs.c 58 */;
	struct mxs_gpio_port {
		void __iomem *base;
		int id;
		int irq;
		struct irq_domain *domain;
		struct gpio_chip gc;
		struct device *dev;
		enum mxs_gpio_id devid;
		u32 both_edges;
	} cocci_id/* drivers/gpio/gpio-mxs.c 47 */;
	enum mxs_gpio_id{IMX23_GPIO, IMX28_GPIO,} cocci_id/* drivers/gpio/gpio-mxs.c 42 */;
	int __init cocci_id/* drivers/gpio/gpio-mxs.c 376 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-mxs.c 366 */;
	enum mxs_gpio_id cocci_id/* drivers/gpio/gpio-mxs.c 293 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-mxs.c 279 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-mxs.c 277 */;
	void *cocci_id/* drivers/gpio/gpio-mxs.c 271 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-mxs.c 270 */[];
	const struct platform_device_id cocci_id/* drivers/gpio/gpio-mxs.c 257 */[];
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-mxs.c 244 */;
	unsigned cocci_id/* drivers/gpio/gpio-mxs.c 244 */;
	struct irq_chip_type *cocci_id/* drivers/gpio/gpio-mxs.c 195 */;
	struct irq_chip_generic *cocci_id/* drivers/gpio/gpio-mxs.c 194 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-mxs.c 150 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-mxs.c 135 */;
	u32 cocci_id/* drivers/gpio/gpio-mxs.c 132 */;
	void cocci_id/* drivers/gpio/gpio-mxs.c 132 */;
}
