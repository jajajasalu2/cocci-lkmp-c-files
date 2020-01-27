cocci_test_suite() {
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-as3722.c 92 */[];
	struct as3722_pctrl_info {
		struct device *dev;
		struct pinctrl_dev *pctl;
		struct as3722 *as3722;
		struct gpio_chip gpio_chip;
		int pins_current_opt[AS3722_PIN_NUM];
		const struct as3722_pin_function *functions;
		unsigned num_functions;
		const struct as3722_pingroup *pin_groups;
		int num_pin_groups;
		const struct pinctrl_pin_desc *pins;
		unsigned num_pins;
		struct as3722_gpio_pin_control gpio_control[AS3722_PIN_NUM];
	} cocci_id/* drivers/pinctrl/pinctrl-as3722.c 77 */;
	struct as3722_pingroup {
		const char *name;
		const unsigned pins[1];
		unsigned npins;
	} cocci_id/* drivers/pinctrl/pinctrl-as3722.c 71 */;
	struct as3722_gpio_pin_control {
		unsigned mode_prop;
		int io_function;
	} cocci_id/* drivers/pinctrl/pinctrl-as3722.c 66 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-as3722.c 616 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-as3722.c 610 */[];
	struct as3722_pin_function {
		const char *name;
		const char *const*groups;
		unsigned ngroups;
		int mux_option;
	} cocci_id/* drivers/pinctrl/pinctrl-as3722.c 59 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-as3722.c 549 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/pinctrl-as3722.c 534 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/pinctrl-as3722.c 515 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-as3722.c 515 */;
	int cocci_id/* drivers/pinctrl/pinctrl-as3722.c 515 */;
	void cocci_id/* drivers/pinctrl/pinctrl-as3722.c 486 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-as3722.c 444 */;
	struct as3722 *cocci_id/* drivers/pinctrl/pinctrl-as3722.c 442 */;
	struct as3722_pctrl_info *cocci_id/* drivers/pinctrl/pinctrl-as3722.c 441 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-as3722.c 432 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-as3722.c 427 */;
	u16 cocci_id/* drivers/pinctrl/pinctrl-as3722.c 341 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-as3722.c 339 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-as3722.c 336 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-as3722.c 335 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-as3722.c 326 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-as3722.c 298 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-as3722.c 275 */;
	u8 cocci_id/* drivers/pinctrl/pinctrl-as3722.c 238 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-as3722.c 224 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-as3722.c 223 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-as3722.c 214 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-as3722.c 199 */;
	const unsigned **cocci_id/* drivers/pinctrl/pinctrl-as3722.c 190 */;
	unsigned *cocci_id/* drivers/pinctrl/pinctrl-as3722.c 190 */;
	const struct as3722_pingroup cocci_id/* drivers/pinctrl/pinctrl-as3722.c 163 */[];
	const struct as3722_pin_function cocci_id/* drivers/pinctrl/pinctrl-as3722.c 139 */[];
	enum as3722_pinmux_option{AS3722_PINMUX_GPIO=0, AS3722_PINMUX_INTERRUPT_OUT=1, AS3722_PINMUX_VSUB_VBAT_UNDEB_LOW_OUT=2, AS3722_PINMUX_GPIO_INTERRUPT=3, AS3722_PINMUX_PWM_INPUT=4, AS3722_PINMUX_VOLTAGE_IN_STBY=5, AS3722_PINMUX_OC_PG_SD0=6, AS3722_PINMUX_PG_OUT=7, AS3722_PINMUX_CLK32K_OUT=8, AS3722_PINMUX_WATCHDOG_INPUT=9, AS3722_PINMUX_SOFT_RESET_IN=11, AS3722_PINMUX_PWM_OUTPUT=12, AS3722_PINMUX_VSUB_VBAT_LOW_DEB_OUT=13, AS3722_PINMUX_OC_PG_SD6=14,} cocci_id/* drivers/pinctrl/pinctrl-as3722.c 114 */;
	const char *constcocci_id/* drivers/pinctrl/pinctrl-as3722.c 103 */[];
}
