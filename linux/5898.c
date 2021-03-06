cocci_test_suite() {
	struct armada_37xx_pmx_func cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 996 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 961 */;
	struct pinctrl_desc *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 960 */;
	const struct armada_37xx_pin_data *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 959 */;
	struct armada_37xx_pinctrl {
		struct regmap *regmap;
		void __iomem *base;
		const struct armada_37xx_pin_data *data;
		struct device *dev;
		struct gpio_chip gpio_chip;
		struct irq_chip irq_chip;
		spinlock_t irq_lock;
		struct pinctrl_desc pctl;
		struct pinctrl_dev *pctl_dev;
		struct armada_37xx_pin_group *groups;
		unsigned int ngroups;
		struct armada_37xx_pmx_func *funcs;
		unsigned int nfuncs;
		struct armada_37xx_pm_state pm;
	} cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 95 */;
	struct armada_37xx_pin_group *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 942 */;
	const char **cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 929 */;
	const char *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 836 */;
	int *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 836 */;
	struct armada_37xx_pmx_func *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 835 */;
	struct armada_37xx_pm_state {
		u32 out_en_l;
		u32 out_en_h;
		u32 out_val_l;
		u32 out_val_h;
		u32 irq_en_l;
		u32 irq_en_h;
		u32 irq_pol_l;
		u32 irq_pol_h;
		u32 selection;
	} cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 83 */;
	struct device_node *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 794 */;
	struct platform_device *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 791 */;
	struct armada_37xx_pmx_func {
		const char *name;
		const char **groups;
		unsigned int ngroups;
	} cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 77 */;
	struct resource cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 727 */;
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 725 */;
	struct armada_37xx_pin_data {
		u8 nr_pins;
		char *name;
		struct armada_37xx_pin_group *groups;
		int ngroups;
	} cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 70 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 652 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 649 */;
	unsigned long cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 620 */;
	struct armada_37xx_pin_group {
		const char *name;
		unsigned int start_pin;
		unsigned int npins;
		u32 reg_mask;
		u32 val[NB_FUNCS];
		unsigned int extra_pin;
		unsigned int extra_npins;
		const char *funcs[NB_FUNCS];
		unsigned int *pins;
	} cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 58 */;
	struct irq_data *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 513 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 502 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 493 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 478 */;
	bool cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 461 */;
	void cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 445 */;
	unsigned int *constcocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 329 */;
	const char *const**cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 328 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 299 */;
	unsigned int *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 285 */;
	const unsigned int **cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 284 */;
	unsigned int cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 275 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 274 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 261 */;
	unsigned long *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 249 */;
	const struct armada_37xx_pin_data cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 209 */;
	struct armada_37xx_pin_group cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 165 */[];
	struct platform_driver cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1172 */;
	struct armada_37xx_pinctrl cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1143 */;
	struct regmap *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1140 */;
	int __init cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1135 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1123 */[];
	const struct dev_pm_ops cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1113 */;
	u32 cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1051 */;
	struct irq_domain *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1046 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1045 */;
	struct armada_37xx_pinctrl *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1044 */;
	struct device *cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1042 */;
	int cocci_id/* drivers/pinctrl/mvebu/pinctrl-armada-37xx.c 1042 */;
}
