cocci_test_suite() {
	struct mvebu_pwm {
		void __iomem *membase;
		unsigned long clk_rate;
		struct gpio_desc *gpiod;
		struct pwm_chip chip;
		spinlock_t lock;
		struct mvebu_gpio_chip *mvchip;
		u32 blink_select;
		u32 blink_on_duration;
		u32 blink_off_duration;
	} cocci_id/* drivers/gpio/gpio-mvebu.c 96 */;
	pm_message_t cocci_id/* drivers/gpio/gpio-mvebu.c 922 */;
	void *cocci_id/* drivers/gpio/gpio-mvebu.c 899 */;
	const struct of_device_id cocci_id/* drivers/gpio/gpio-mvebu.c 896 */[];
	bool cocci_id/* drivers/gpio/gpio-mvebu.c 860 */;
	const char *cocci_id/* drivers/gpio/gpio-mvebu.c 858 */;
	u32 cocci_id/* drivers/gpio/gpio-mvebu.c 845 */;
	struct seq_file *cocci_id/* drivers/gpio/gpio-mvebu.c 842 */;
	struct mvebu_pwm cocci_id/* drivers/gpio/gpio-mvebu.c 801 */;
	struct device *cocci_id/* drivers/gpio/gpio-mvebu.c 777 */;
	void __maybe_unused cocci_id/* drivers/gpio/gpio-mvebu.c 761 */;
	const struct pwm_ops cocci_id/* drivers/gpio/gpio-mvebu.c 741 */;
	unsigned long long cocci_id/* drivers/gpio/gpio-mvebu.c 704 */;
	struct mvebu_pwm *cocci_id/* drivers/gpio/gpio-mvebu.c 702 */;
	const struct pwm_state *cocci_id/* drivers/gpio/gpio-mvebu.c 700 */;
	struct pwm_device *cocci_id/* drivers/gpio/gpio-mvebu.c 699 */;
	struct pwm_chip *cocci_id/* drivers/gpio/gpio-mvebu.c 699 */;
	struct pwm_state *cocci_id/* drivers/gpio/gpio-mvebu.c 653 */;
	struct gpio_desc *cocci_id/* drivers/gpio/gpio-mvebu.c 615 */;
	struct irq_chip *cocci_id/* drivers/gpio/gpio-mvebu.c 559 */;
	struct irq_desc *cocci_id/* drivers/gpio/gpio-mvebu.c 556 */;
	struct irq_chip_type *cocci_id/* drivers/gpio/gpio-mvebu.c 418 */;
	struct irq_chip_generic *cocci_id/* drivers/gpio/gpio-mvebu.c 416 */;
	struct irq_data *cocci_id/* drivers/gpio/gpio-mvebu.c 414 */;
	struct mvebu_gpio_chip *cocci_id/* drivers/gpio/gpio-mvebu.c 332 */;
	int cocci_id/* drivers/gpio/gpio-mvebu.c 330 */;
	struct gpio_chip *cocci_id/* drivers/gpio/gpio-mvebu.c 329 */;
	unsigned int cocci_id/* drivers/gpio/gpio-mvebu.c 329 */;
	void cocci_id/* drivers/gpio/gpio-mvebu.c 329 */;
	struct regmap *cocci_id/* drivers/gpio/gpio-mvebu.c 162 */;
	struct regmap **cocci_id/* drivers/gpio/gpio-mvebu.c 138 */;
	unsigned int *cocci_id/* drivers/gpio/gpio-mvebu.c 138 */;
	struct platform_driver cocci_id/* drivers/gpio/gpio-mvebu.c 1266 */;
	struct mvebu_gpio_chip cocci_id/* drivers/gpio/gpio-mvebu.c 1107 */;
	unsigned long cocci_id/* drivers/gpio/gpio-mvebu.c 1100 */;
	struct mvebu_gpio_chip {
		struct gpio_chip chip;
		struct regmap *regs;
		u32 offset;
		struct regmap *percpu_regs;
		int irqbase;
		struct irq_domain *domain;
		int soc_variant;
		struct clk *clk;
		struct mvebu_pwm *mvpwm;
		u32 out_reg;
		u32 io_conf_reg;
		u32 blink_en_reg;
		u32 in_pol_reg;
		u32 edge_mask_regs[4];
		u32 level_mask_regs[4];
	} cocci_id/* drivers/gpio/gpio-mvebu.c 110 */;
	struct device_node *cocci_id/* drivers/gpio/gpio-mvebu.c 1089 */;
	const struct of_device_id *cocci_id/* drivers/gpio/gpio-mvebu.c 1088 */;
	struct platform_device *cocci_id/* drivers/gpio/gpio-mvebu.c 1085 */;
	void __iomem *cocci_id/* drivers/gpio/gpio-mvebu.c 1036 */;
	const struct regmap_config cocci_id/* drivers/gpio/gpio-mvebu.c 1026 */;
}