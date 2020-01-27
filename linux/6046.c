cocci_test_suite() {
	void __exit cocci_id/* drivers/pinctrl/pinctrl-coh901.c 764 */;
	void cocci_id/* drivers/pinctrl/pinctrl-coh901.c 764 */;
	int __init cocci_id/* drivers/pinctrl/pinctrl-coh901.c 759 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-coh901.c 751 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-coh901.c 746 */[];
	int __exit cocci_id/* drivers/pinctrl/pinctrl-coh901.c 734 */;
	struct coh901_pinpair *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 714 */;
	struct u300_gpio {
		struct gpio_chip chip;
		struct u300_gpio_port ports[U300_GPIO_NUM_PORTS];
		struct clk *clk;
		void __iomem *base;
		struct device *dev;
		u32 stride;
		u32 pcr;
		u32 dor;
		u32 dir;
		u32 per;
		u32 icr;
		u32 ien;
		u32 iev;
	} cocci_id/* drivers/pinctrl/pinctrl-coh901.c 69 */;
	struct u300_gpio cocci_id/* drivers/pinctrl/pinctrl-coh901.c 625 */;
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 618 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 615 */;
	struct u300_gpio_port {
		struct u300_gpio *gpio;
		char name[8];
		int irq;
		int number;
		u8 toggle_edge_mode;
	} cocci_id/* drivers/pinctrl/pinctrl-coh901.c 61 */;
	struct coh901_pinpair cocci_id/* drivers/pinctrl/pinctrl-coh901.c 597 */[];
	struct coh901_pinpair {
		unsigned int offset;
		unsigned int pin_base;
	} cocci_id/* drivers/pinctrl/pinctrl-coh901.c 590 */;
	const struct u300_gpio_confdata *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 576 */;
	void __init cocci_id/* drivers/pinctrl/pinctrl-coh901.c 569 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 498 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-coh901.c 497 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 495 */;
	struct irq_chip cocci_id/* drivers/pinctrl/pinctrl-coh901.c 488 */;
	struct irq_data *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 474 */;
	struct u300_gpio_port *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 461 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/pinctrl-coh901.c 390 */;
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-coh901.c 343 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-coh901.c 287 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-coh901.c 286 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-coh901.c 285 */;
	struct u300_gpio *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 284 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 282 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-coh901.c 281 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-coh901.c 280 */;
	int cocci_id/* drivers/pinctrl/pinctrl-coh901.c 280 */;
	const struct u300_gpio_confdata __initconst cocci_id/* drivers/pinctrl/pinctrl-coh901.c 130 */[U300_GPIO_NUM_PORTS][U300_GPIO_PINS_PER_PORT];
	struct u300_gpio_confdata {
		u16 bias_mode;
		bool output;
		int outval;
	} cocci_id/* drivers/pinctrl/pinctrl-coh901.c 103 */;
}
