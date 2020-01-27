cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 822 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 816 */[];
	struct stmfx_pinctrl {
		struct device *dev;
		struct stmfx *stmfx;
		struct pinctrl_dev *pctl_dev;
		struct pinctrl_desc pctl_desc;
		struct gpio_chip gpio_chip;
		struct irq_chip irq_chip;
		struct mutex lock;
		unsigned long gpio_valid_mask;
		u8 irq_gpi_src[NR_GPIO_REGS];
		u8 irq_gpi_type[NR_GPIO_REGS];
		u8 irq_gpi_evt[NR_GPIO_REGS];
		u8 irq_toggle_edge[NR_GPIO_REGS];
#ifdef CONFIG_PM
		u8 bkp_gpio_state[NR_GPIO_REGS];
		u8 bkp_gpio_dir[NR_GPIO_REGS];
		u8 bkp_gpio_type[NR_GPIO_REGS];
		u8 bkp_gpio_pupd[NR_GPIO_REGS];
#endif
	} cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 80 */;
	struct device *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 798 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 610 */;
	struct stmfx *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 609 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 607 */;
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 561 */;
	u8 cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 559 */[NR_GPIO_REGS];
	irqreturn_t cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 555 */;
	void *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 555 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 53 */[];
	struct irq_data *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 520 */;
	void cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 520 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 405 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 400 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 399 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 391 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 380 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 343 */;
	struct seq_file *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 340 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 339 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 278 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 211 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 146 */;
	struct stmfx_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 145 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 143 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 143 */;
	int cocci_id/* drivers/pinctrl/pinctrl-stmfx.c 143 */;
}
