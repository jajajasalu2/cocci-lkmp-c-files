cocci_test_suite() {
	const char *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 97 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 97 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 97 */;
	const char *constcocci_id/* drivers/pinctrl/pinctrl-digicolor.c 85 */[];
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 77 */;
	unsigned *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 67 */;
	const unsigned **cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 66 */;
	struct dc_pinmap *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 59 */;
	struct dc_pinmap {
		void __iomem *regs;
		struct device *dev;
		struct pinctrl_dev *pctl;
		struct pinctrl_desc *desc;
		const char *pin_names[PINS_COUNT];
		struct gpio_chip chip;
		spinlock_t lock;
	} cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 39 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 337 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 332 */[];
	char *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 275 */;
	struct pinctrl_desc *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 274 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 273 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 270 */;
	struct device_node *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 236 */;
	void cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 184 */(struct gpio_chip *chip,
								   unsigned gpio,
								   int value);
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 173 */;
	u8 cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 172 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 167 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 159 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 143 */;
	int *cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 114 */;
	int cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 114 */;
	void cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 114 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-digicolor.c 104 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-digicolor.c 103 */;
}
