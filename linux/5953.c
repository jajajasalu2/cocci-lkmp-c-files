cocci_test_suite() {
	const struct of_device_id *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 998 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 996 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 993 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 984 */[];
	const struct atmel_pioctrl_data cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 980 */;
	const struct dev_pm_ops cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 972 */;
	struct device *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 951 */;
	int __maybe_unused cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 951 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 916 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 910 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 874 */;
	struct atmel_pioctrl *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 873 */;
	struct seq_file *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 871 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 871 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 870 */;
	void cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 870 */;
	struct atmel_pin {
		unsigned pin_id;
		unsigned mux;
		unsigned ioset;
		unsigned bank;
		unsigned line;
		const char *device;
	} cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 83 */;
	struct atmel_group {
		const char *name;
		u32 pin;
	} cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 78 */;
	struct atmel_pioctrl_data {
		unsigned nbanks;
	} cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 74 */;
	struct atmel_group *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 720 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 716 */;
	int cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 714 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 707 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 676 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 675 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 654 */;
	unsigned *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 617 */;
	struct pinctrl_map **cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 616 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 615 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 585 */;
	struct property *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 548 */;
	const char **cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 509 */;
	const unsigned **cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 480 */;
	void __iomem *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 439 */;
	struct gpio_chip cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 421 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 335 */;
	struct atmel_pin *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 308 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 305 */;
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 269 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 268 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 264 */;
	struct irq_chip cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 248 */;
	struct irq_data *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 158 */;
	const struct pinconf_generic_params cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 138 */[];
	const char *constcocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 134 */[];
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 1190 */;
	struct atmel_pioctrl {
		void __iomem *reg_base;
		struct clk *clk;
		unsigned nbanks;
		struct pinctrl_dev *pinctrl_dev;
		struct atmel_group *groups;
		const char *const*group_names;
		struct atmel_pin **pins;
		unsigned npins;
		struct gpio_chip *gpio_chip;
		struct irq_domain *irq_domain;
		int *irqs;
		unsigned *pm_wakeup_sources;
		struct {
			u32 imr;
			u32 odsr;
			u32 cfgr[ATMEL_PIO_NPINS_PER_BANK];
		} *pm_suspend_backup;
		struct device *dev;
		struct device_node *node;
	} cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 112 */;
	const struct atmel_pioctrl_data *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 1002 */;
	struct resource *cocci_id/* drivers/pinctrl/pinctrl-at91-pio4.c 1000 */;
}
