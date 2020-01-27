cocci_test_suite() {
	const struct pinconf_generic_params cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 96 */[];
	struct pm8xxx_gpio {
		struct device *dev;
		struct regmap *regmap;
		struct pinctrl_dev *pctrl;
		struct gpio_chip chip;
		struct pinctrl_desc desc;
		unsigned npins;
	} cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 86 */;
	struct platform_driver cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 847 */;
	struct pm8xxx_pin_data cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 743 */;
	struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 736 */;
	uintptr_t cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 723 */;
	struct pm8xxx_pin_data {
		unsigned reg;
		u8 power_source;
		u8 mode;
		bool open_drain;
		bool output_value;
		u8 bias;
		u8 pull_up_strength;
		u8 output_strength;
		bool disable;
		u8 function;
		bool inverted;
	} cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 72 */;
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 714 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 713 */;
	struct device_node *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 712 */;
	struct platform_device *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 708 */;
	void *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 699 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 698 */[];
	unsigned int *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 689 */;
	int cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 686 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 680 */;
	unsigned int cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 680 */;
	struct pm8xxx_gpio cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 668 */;
	struct pm8xxx_gpio *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 667 */;
	unsigned long *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 664 */;
	struct irq_fwspec *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 663 */;
	struct irq_domain *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 662 */;
	struct irq_chip cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 654 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 593 */;
	struct seq_file *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 578 */;
	void cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 578 */;
	const char *constcocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 548 */[];
	struct pm8xxx_pin_data *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 546 */;
	u32 *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 524 */;
	const struct of_phandle_args *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 523 */;
	bool cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 490 */;
	u8 cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 455 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 442 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 436 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 237 */;
	unsigned *constcocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 212 */;
	const char *const**cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 211 */;
	unsigned cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 210 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 209 */;
	const char *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 203 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 190 */;
	unsigned *cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 180 */;
	const unsigned **cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 179 */;
	const char *constcocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 108 */[PM8XXX_MAX_GPIOS];
	const struct pin_config_item cocci_id/* drivers/pinctrl/qcom/pinctrl-ssbi-gpio.c 102 */[ARRAY_SIZE(pm8xxx_gpio_bindings)];
}
