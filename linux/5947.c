cocci_test_suite() {
	const struct axp20x_pctrl_desc cocci_id/* drivers/pinctrl/pinctrl-axp209.c 81 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-axp209.c 70 */[];
	struct axp20x_pctl {
		struct gpio_chip chip;
		struct regmap *regmap;
		struct pinctrl_dev *pctl_dev;
		struct device *dev;
		const struct axp20x_pctrl_desc *desc;
		struct axp20x_pinctrl_function funcs[AXP20X_FUNCS_NB];
	} cocci_id/* drivers/pinctrl/pinctrl-axp209.c 61 */;
	struct axp20x_pinctrl_function {
		const char *name;
		unsigned int muxval;
		const char **groups;
		unsigned int ngroups;
	} cocci_id/* drivers/pinctrl/pinctrl-axp209.c 54 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-axp209.c 478 */;
	struct axp20x_pctrl_desc {
		const struct pinctrl_pin_desc *pins;
		unsigned int npins;
		u8 ldo_mask;
		u8 adc_mask;
		u8 gpio_status_offset;
		u8 adc_mux;
	} cocci_id/* drivers/pinctrl/pinctrl-axp209.c 43 */;
	struct pinctrl_desc *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 398 */;
	struct axp20x_dev *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 395 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-axp209.c 386 */[];
	char *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 363 */;
	struct axp20x_pctl *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 344 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 342 */;
	int cocci_id/* drivers/pinctrl/pinctrl-axp209.c 342 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 328 */;
	const char **cocci_id/* drivers/pinctrl/pinctrl-axp209.c 321 */;
	unsigned long int cocci_id/* drivers/pinctrl/pinctrl-axp209.c 320 */;
	const struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 318 */;
	struct axp20x_pinctrl_function *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 317 */;
	struct device *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 315 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-axp209.c 315 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-axp209.c 307 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 299 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-axp209.c 289 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 289 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-axp209.c 272 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-axp209.c 260 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 259 */;
	const char *const **cocci_id/* drivers/pinctrl/pinctrl-axp209.c 216 */;
	u8 cocci_id/* drivers/pinctrl/pinctrl-axp209.c 186 */;
	void cocci_id/* drivers/pinctrl/pinctrl-axp209.c 169 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-axp209.c 118 */;
}
