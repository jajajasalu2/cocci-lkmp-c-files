cocci_test_suite() {
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-at91.c 950 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-at91.c 941 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-at91.c 898 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-at91.c 897 */;
	enum slewrate_bit{SLEWRATE_BIT_ENA, SLEWRATE_BIT_DIS,} cocci_id/* drivers/pinctrl/pinctrl-at91.c 87 */;
	enum drive_strength_bit{DRIVE_STRENGTH_BIT_DEF, DRIVE_STRENGTH_BIT_LOW, DRIVE_STRENGTH_BIT_MED, DRIVE_STRENGTH_BIT_HI,} cocci_id/* drivers/pinctrl/pinctrl-at91.c 77 */;
	const struct device *cocci_id/* drivers/pinctrl/pinctrl-at91.c 754 */;
	const struct at91_pmx_pin *cocci_id/* drivers/pinctrl/pinctrl-at91.c 754 */;
	const struct at91_pinctrl_mux_ops cocci_id/* drivers/pinctrl/pinctrl-at91.c 713 */;
	struct at91_pinctrl_mux_ops cocci_id/* drivers/pinctrl/pinctrl-at91.c 685 */;
	u32 *cocci_id/* drivers/pinctrl/pinctrl-at91.c 510 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-at91.c 485 */;
	struct at91_gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-at91.c 46 */[MAX_GPIO_BANKS];
	bool *cocci_id/* drivers/pinctrl/pinctrl-at91.c 398 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-at91.c 398 */;
	struct at91_gpio_chip {
		struct gpio_chip chip;
		struct pinctrl_gpio_range range;
		struct at91_gpio_chip *next;
		int pioc_hwirq;
		int pioc_virq;
		int pioc_idx;
		void __iomem *regbase;
		struct clk *clock;
		struct at91_pinctrl_mux_ops *ops;
	} cocci_id/* drivers/pinctrl/pinctrl-at91.c 34 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-at91.c 328 */;
	struct pinctrl_map *cocci_id/* drivers/pinctrl/pinctrl-at91.c 324 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-at91.c 323 */;
	void cocci_id/* drivers/pinctrl/pinctrl-at91.c 323 */;
	const struct at91_pin_group *cocci_id/* drivers/pinctrl/pinctrl-at91.c 270 */;
	struct at91_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-at91.c 269 */;
	struct pinctrl_map **cocci_id/* drivers/pinctrl/pinctrl-at91.c 267 */;
	unsigned *cocci_id/* drivers/pinctrl/pinctrl-at91.c 267 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-at91.c 266 */;
	const unsigned **cocci_id/* drivers/pinctrl/pinctrl-at91.c 245 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-at91.c 236 */;
	const struct at91_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-at91.c 211 */;
	int __init cocci_id/* drivers/pinctrl/pinctrl-at91.c 1948 */;
	struct platform_driver *constcocci_id/* drivers/pinctrl/pinctrl-at91.c 1943 */[];
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-at91.c 1927 */;
	struct at91_pinctrl {
		struct device *dev;
		struct pinctrl_dev *pctl;
		int nactive_banks;
		uint32_t *mux_mask;
		int nmux;
		struct at91_pmx_func *functions;
		int nfunctions;
		struct at91_pin_group *groups;
		int ngroups;
		struct at91_pinctrl_mux_ops *ops;
	} cocci_id/* drivers/pinctrl/pinctrl-at91.c 192 */;
	int cocci_id/* drivers/pinctrl/pinctrl-at91.c 190 */(struct irq_data *d,
							     unsigned type);
	const char *const*cocci_id/* drivers/pinctrl/pinctrl-at91.c 1893 */;
	char *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1882 */;
	struct at91_pinctrl_mux_ops *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1847 */;
	char **cocci_id/* drivers/pinctrl/pinctrl-at91.c 1821 */;
	uint32_t cocci_id/* drivers/pinctrl/pinctrl-at91.c 1820 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-at91.c 1804 */[];
	const struct gpio_chip cocci_id/* drivers/pinctrl/pinctrl-at91.c 1790 */;
	struct gpio_irq_chip *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1726 */;
	struct irq_chip *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1725 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1719 */;
	struct irq_desc *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1685 */;
	struct at91_pinctrl_mux_ops {
		enum at91_mux (*get_periph)(void __iomem *pio, unsigned mask);
		void (*mux_A_periph)(void __iomem *pio, unsigned mask);
		void (*mux_B_periph)(void __iomem *pio, unsigned mask);
		void (*mux_C_periph)(void __iomem *pio, unsigned mask);
		void (*mux_D_periph)(void __iomem *pio, unsigned mask);
		bool (*get_deglitch)(void __iomem *pio, unsigned pin);
		void (*set_deglitch)(void __iomem *pio, unsigned mask,
				     bool is_on);
		bool (*get_debounce)(void __iomem *pio, unsigned pin,
				     u32 *div);
		void (*set_debounce)(void __iomem *pio, unsigned mask,
				     bool is_on, u32 div);
		bool (*get_pulldown)(void __iomem *pio, unsigned pin);
		void (*set_pulldown)(void __iomem *pio, unsigned mask,
				     bool is_on);
		bool (*get_schmitt_trig)(void __iomem *pio, unsigned pin);
		void (*disable_schmitt_trig)(void __iomem *pio, unsigned mask);
		unsigned (*get_drivestrength)(void __iomem *pio, unsigned pin);
		void (*set_drivestrength)(void __iomem *pio, unsigned pin,
					  u32 strength);
		unsigned (*get_slewrate)(void __iomem *pio, unsigned pin);
		void (*set_slewrate)(void __iomem *pio, unsigned pin,
				     u32 slewrate);
		int (*irq_type)(struct irq_data *d, unsigned type);
	} cocci_id/* drivers/pinctrl/pinctrl-at91.c 166 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-at91.c 1616 */[MAX_GPIO_BANKS];
	void __iomem *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1564 */;
	struct at91_gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1563 */;
	struct irq_data *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1561 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-at91.c 1561 */;
	int cocci_id/* drivers/pinctrl/pinctrl-at91.c 1561 */;
	enum at91_mux cocci_id/* drivers/pinctrl/pinctrl-at91.c 1482 */;
	struct seq_file *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1480 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1480 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1452 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-at91.c 1435 */;
	struct at91_pin_group {
		const char *name;
		struct at91_pmx_pin *pins_conf;
		unsigned int *pins;
		unsigned npins;
	} cocci_id/* drivers/pinctrl/pinctrl-at91.c 138 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1344 */;
	struct at91_pin_group cocci_id/* drivers/pinctrl/pinctrl-at91.c 1316 */;
	struct at91_pmx_func cocci_id/* drivers/pinctrl/pinctrl-at91.c 1309 */;
	uint32_t *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1274 */;
	struct at91_pin_group *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1227 */;
	struct at91_pmx_func *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1226 */;
	struct at91_pmx_pin {
		uint32_t bank;
		uint32_t pin;
		enum at91_mux mux;
		unsigned long conf;
	} cocci_id/* drivers/pinctrl/pinctrl-at91.c 121 */;
	struct at91_pmx_pin cocci_id/* drivers/pinctrl/pinctrl-at91.c 1201 */;
	struct at91_pmx_pin *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1176 */;
	const __be32 *cocci_id/* drivers/pinctrl/pinctrl-at91.c 1145 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-at91.c 1115 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-at91.c 1108 */;
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-at91.c 1077 */;
	enum at91_mux{AT91_MUX_GPIO=0, AT91_MUX_PERIPH_A=1, AT91_MUX_PERIPH_B=2, AT91_MUX_PERIPH_C=3, AT91_MUX_PERIPH_D=4,} cocci_id/* drivers/pinctrl/pinctrl-at91.c 106 */;
	struct at91_pmx_func {
		const char *name;
		const char **groups;
		unsigned ngroups;
	} cocci_id/* drivers/pinctrl/pinctrl-at91.c 100 */;
}
