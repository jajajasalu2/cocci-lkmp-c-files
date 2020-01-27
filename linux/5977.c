cocci_test_suite() {
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-pic32.c 83 */[];
	struct pic32_pinctrl {
		void __iomem *reg_base;
		struct device *dev;
		struct pinctrl_dev *pctldev;
		const struct pinctrl_pin_desc *pins;
		unsigned int npins;
		const struct pic32_function *functions;
		unsigned int nfunctions;
		const struct pic32_pin_group *groups;
		unsigned int ngroups;
		struct pic32_gpio_bank *gpio_banks;
		unsigned int nbanks;
		struct clk *clk;
	} cocci_id/* drivers/pinctrl/pinctrl-pic32.c 68 */;
	struct pic32_gpio_bank {
		void __iomem *reg_base;
		struct gpio_chip gpio_chip;
		struct irq_chip irq_chip;
		struct clk *clk;
	} cocci_id/* drivers/pinctrl/pinctrl-pic32.c 61 */;
	struct pic32_desc_function {
		const char *name;
		u32 muxreg;
		u32 muxval;
	} cocci_id/* drivers/pinctrl/pinctrl-pic32.c 55 */;
	struct pic32_pin_group {
		const char *name;
		unsigned int pin;
		struct pic32_desc_function *functions;
	} cocci_id/* drivers/pinctrl/pinctrl-pic32.c 49 */;
	struct pic32_function {
		const char *name;
		const char *const*groups;
		unsigned int ngroups;
	} cocci_id/* drivers/pinctrl/pinctrl-pic32.c 43 */;
	const struct pic32_pin_group cocci_id/* drivers/pinctrl/pinctrl-pic32.c 387 */[];
	struct pic32_desc_function cocci_id/* drivers/pinctrl/pinctrl-pic32.c 376 */[];
	const struct pinconf_generic_params cocci_id/* drivers/pinctrl/pinctrl-pic32.c 36 */[];
	const struct pic32_function cocci_id/* drivers/pinctrl/pinctrl-pic32.c 278 */[];
	int __init cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2290 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2281 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2276 */[];
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2205 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2201 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2199 */;
	struct resource *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2148 */;
	struct pic32_gpio_bank cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2132 */[];
	const char *constcocci_id/* drivers/pinctrl/pinctrl-pic32.c 210 */[];
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2092 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2090 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2086 */;
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-pic32.c 2066 */;
	void cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1996 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1981 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1975 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1879 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1869 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1857 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1817 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1813 */;
	int cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1813 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1798 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1797 */;
	struct pic32_desc_function *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1776 */;
	const struct pic32_function *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1774 */;
	const struct pic32_pin_group *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1773 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-pic32.c 1759 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1758 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1733 */;
	unsigned *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1723 */;
	const unsigned **cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1722 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1712 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1700 */;
	struct pic32_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1699 */;
	struct pic32_gpio_bank *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1694 */;
	struct irq_data *cocci_id/* drivers/pinctrl/pinctrl-pic32.c 1694 */;
}
