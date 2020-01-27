cocci_test_suite() {
	const struct rk805_pin_function cocci_id/* drivers/pinctrl/pinctrl-rk805.c 99 */[];
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-rk805.c 94 */[];
	const char *const cocci_id/* drivers/pinctrl/pinctrl-rk805.c 88 */[];
	enum{RK805_GPIO0, RK805_GPIO1,} cocci_id/* drivers/pinctrl/pinctrl-rk805.c 83 */;
	enum rk805_pinmux_option{RK805_PINMUX_GPIO,} cocci_id/* drivers/pinctrl/pinctrl-rk805.c 79 */;
	struct rk805_pctrl_info {
		struct rk808 *rk808;
		struct device *dev;
		struct pinctrl_dev *pctl;
		struct gpio_chip gpio_chip;
		struct pinctrl_desc pinctrl_desc;
		const struct rk805_pin_function *functions;
		unsigned int num_functions;
		const struct rk805_pin_group *groups;
		int num_pin_groups;
		const struct pinctrl_pin_desc *pins;
		unsigned int num_pins;
		struct rk805_pin_config *pin_cfg;
	} cocci_id/* drivers/pinctrl/pinctrl-rk805.c 64 */;
	struct rk805_pin_config {
		u8 reg;
		u8 fun_msk;
		u8 dir_msk;
		u8 val_msk;
	} cocci_id/* drivers/pinctrl/pinctrl-rk805.c 57 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-rk805.c 479 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-rk805.c 415 */;
	const struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-rk805.c 407 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-rk805.c 402 */;
	struct rk805_pin_group {
		const char *name;
		const unsigned int pins[1];
		unsigned int npins;
	} cocci_id/* drivers/pinctrl/pinctrl-rk805.c 39 */;
	u16 cocci_id/* drivers/pinctrl/pinctrl-rk805.c 371 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-rk805.c 360 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-rk805.c 359 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-rk805.c 356 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-rk805.c 347 */;
	struct rk805_pin_function {
		const char *name;
		const char *const *groups;
		unsigned int ngroups;
		int mux_option;
	} cocci_id/* drivers/pinctrl/pinctrl-rk805.c 32 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-rk805.c 319 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-rk805.c 318 */;
	struct rk805_pctrl_info *cocci_id/* drivers/pinctrl/pinctrl-rk805.c 283 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-rk805.c 280 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-rk805.c 279 */;
	int cocci_id/* drivers/pinctrl/pinctrl-rk805.c 279 */;
	unsigned int *const cocci_id/* drivers/pinctrl/pinctrl-rk805.c 269 */;
	const char *const **cocci_id/* drivers/pinctrl/pinctrl-rk805.c 268 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-rk805.c 258 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-rk805.c 243 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-rk805.c 233 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-rk805.c 232 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/pinctrl-rk805.c 200 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-rk805.c 166 */;
	void cocci_id/* drivers/pinctrl/pinctrl-rk805.c 150 */;
	struct rk805_pin_config cocci_id/* drivers/pinctrl/pinctrl-rk805.c 124 */[];
	const struct rk805_pin_group cocci_id/* drivers/pinctrl/pinctrl-rk805.c 108 */[];
}
