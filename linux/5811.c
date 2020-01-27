cocci_test_suite() {
	const struct npcm7xx_pincfg cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 925 */[];
	struct npcm7xx_pincfg {
		int flag;
		int fn0,reg0,bit0;
		int fn1,reg1,bit1;
		int fn2,reg2,bit2;
	} cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 918 */;
	struct npcm7xx_pinctrl {
		struct pinctrl_dev *pctldev;
		struct device *dev;
		struct npcm7xx_gpio gpio_bank[NPCM7XX_GPIO_BANK_NUM];
		struct irq_domain *domain;
		struct regmap *gcr_regmap;
		void __iomem *regs;
		u32 bank_num;
	} cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 91 */;
	struct npcm7xx_func cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 779 */[];
	struct npcm7xx_gpio {
		void __iomem *base;
		struct gpio_chip gc;
		int irqbase;
		int irq;
		void *priv;
		struct irq_chip irq_chip;
		u32 pinctrl_id;
		int (*direction_input)(struct gpio_chip *chip,
				       unsigned offset);
		int (*direction_output)(struct gpio_chip *chip,
					unsigned offset, int value);
		int (*request)(struct gpio_chip *chip, unsigned offset);
		void (*free)(struct gpio_chip *chip, unsigned offset);
	} cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 76 */;
	struct npcm7xx_func {
		const char *name;
		const unsigned int ngroups;
		const char *const*groups;
	} cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 656 */;
	struct npcm7xx_group cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 645 */[];
	struct npcm7xx_group {
		const char *name;
		const unsigned int *pins;
		int npins;
	} cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 512 */;
	const int cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 462 */[];
	struct irq_chip cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 334 */;
	struct irq_data *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 286 */;
	const void *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 233 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 218 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 215 */;
	int __init cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 2059 */;
	struct platform_driver cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 2050 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 2044 */[];
	struct platform_device *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 2002 */;
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1957 */;
	struct of_phandle_args cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1868 */;
	struct resource cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1865 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1852 */;
	struct pinconf_ops cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1845 */;
	u16 cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1782 */;
	u32 cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1724 */;
	unsigned long cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1723 */;
	struct npcm7xx_gpio *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1720 */;
	struct npcm7xx_pinctrl *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1719 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1718 */;
	unsigned long *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1716 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1715 */;
	unsigned int cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1715 */;
	int cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1715 */;
	struct pinmux_ops cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1704 */;
	bool cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1687 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1652 */;
	unsigned int *constcocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1628 */;
	const char *const**cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1627 */;
	const char *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1619 */;
	struct pinctrl_ops cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1604 */;
	struct pinctrl_map *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1599 */;
	void cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1598 */;
	u32 *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1588 */;
	struct pinctrl_map **cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1587 */;
	struct device_node *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1586 */;
	unsigned int *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1577 */;
	const unsigned int **cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1576 */;
	struct seq_file *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1555 */;
	struct regmap *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1442 */;
	const struct npcm7xx_pincfg *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1415 */;
	const unsigned int *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1412 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 1170 */[];
	struct gpio_chip *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 116 */;
	void __iomem *cocci_id/* drivers/pinctrl/nuvoton/pinctrl-npcm7xx.c 116 */;
}
