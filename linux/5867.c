cocci_test_suite() {
	const char *constcocci_id/* drivers/pinctrl/pinctrl-ocelot.c 88 */[];
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 827 */;
	struct pinctrl_desc *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 796 */;
	struct regmap_config cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 786 */;
	void __iomem *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 784 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 774 */[];
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 739 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 735 */;
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 715 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 711 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 709 */;
	struct irq_chip cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 675 */;
	int cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 673 */(struct irq_data *data,
							       unsigned int type);
	struct irq_data *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 663 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 632 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 610 */;
	void cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 586 */;
	char *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 540 */;
	u8 cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 525 */;
	u8 *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 525 */;
	struct ocelot_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 522 */;
	struct device *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 521 */;
	int cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 521 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 512 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 495 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 485 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 484 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 458 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 444 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 432 */;
	enum{FUNC_NONE, FUNC_GPIO, FUNC_IRQ0_IN, FUNC_IRQ0_OUT, FUNC_IRQ1_IN, FUNC_IRQ1_OUT, FUNC_MIIM1, FUNC_MIIM2, FUNC_PCI_WAKE, FUNC_PTP0, FUNC_PTP1, FUNC_PTP2, FUNC_PTP3, FUNC_PWM, FUNC_RECO_CLK0, FUNC_RECO_CLK1, FUNC_SFP0, FUNC_SFP1, FUNC_SFP2, FUNC_SFP3, FUNC_SFP4, FUNC_SFP5, FUNC_SFP6, FUNC_SFP7, FUNC_SFP8, FUNC_SFP9, FUNC_SFP10, FUNC_SFP11, FUNC_SFP12, FUNC_SFP13, FUNC_SFP14, FUNC_SFP15, FUNC_SG0, FUNC_SG1, FUNC_SG2, FUNC_SI, FUNC_TACHO, FUNC_TWI, FUNC_TWI2, FUNC_TWI_SCL_M, FUNC_UART, FUNC_UART2, FUNC_MAX,} cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 42 */;
	struct ocelot_pin_caps *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 388 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-ocelot.c 375 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 374 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 373 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 372 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 366 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 294 */[];
	struct ocelot_pinctrl {
		struct device *dev;
		struct pinctrl_dev *pctl;
		struct gpio_chip gpio_chip;
		struct regmap *map;
		struct pinctrl_desc *desc;
		struct ocelot_pmx_func func[FUNC_MAX];
		u8 stride;
	} cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 143 */;
	struct ocelot_pin_caps {
		unsigned int pin;
		unsigned char functions[OCELOT_FUNC_PER_PIN];
	} cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 138 */;
	struct ocelot_pmx_func {
		const char **groups;
		unsigned int ngroups;
	} cocci_id/* drivers/pinctrl/pinctrl-ocelot.c 133 */;
}
