cocci_test_suite() {
	struct oxnas_pinctrl_data {
		struct pinctrl_desc *desc;
		struct oxnas_pinctrl *pctl;
	} cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 99 */;
	struct irq_data *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 981 */;
	void cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 981 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 969 */;
	struct oxnas_pinctrl {
		struct regmap *regmap;
		struct device *dev;
		struct pinctrl_dev *pctldev;
		const struct oxnas_function *functions;
		unsigned int nfunctions;
		const struct oxnas_pin_group *groups;
		unsigned int ngroups;
		struct oxnas_gpio_bank *gpio_banks;
		unsigned int nbanks;
	} cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 87 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 838 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 819 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 807 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 806 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 805 */;
	struct oxnas_gpio_bank {
		void __iomem *reg_base;
		struct gpio_chip gpio_chip;
		struct irq_chip irq_chip;
		unsigned int id;
	} cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 80 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 766 */;
	struct oxnas_gpio_bank *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 765 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 763 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 762 */;
	int cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 762 */;
	struct oxnas_desc_function {
		const char *name;
		unsigned int fct;
	} cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 75 */;
	struct oxnas_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 696 */;
	struct oxnas_pin_group {
		const char *name;
		unsigned int pin;
		unsigned int bank;
		struct oxnas_desc_function *functions;
	} cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 68 */;
	struct oxnas_function {
		const char *name;
		const char *const*groups;
		unsigned int ngroups;
	} cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 62 */;
	struct oxnas_desc_function *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 594 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 593 */;
	const struct oxnas_function *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 592 */;
	const struct oxnas_pin_group *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 591 */;
	unsigned int *constcocci_id/* drivers/pinctrl/pinctrl-oxnas.c 577 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 576 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 551 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 541 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 540 */;
	const struct oxnas_pin_group cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 286 */[];
	struct oxnas_desc_function cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 276 */[];
	const struct oxnas_function cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 259 */[];
	const char *constcocci_id/* drivers/pinctrl/pinctrl-oxnas.c 195 */[];
	int __init cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1280 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1271 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1265 */[];
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1199 */;
	struct of_phandle_args cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1195 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1194 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1192 */;
	const struct oxnas_pinctrl_data *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1152 */;
	const struct of_device_id *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1151 */;
	struct oxnas_pinctrl_data cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1129 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1100 */;
	struct oxnas_pinctrl cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1091 */;
	struct oxnas_gpio_bank cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1086 */[];
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1047 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1046 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 1042 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-oxnas.c 104 */[];
}
