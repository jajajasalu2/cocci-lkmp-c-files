cocci_test_suite() {
	struct max77620_fps_config {
		int active_fps_src;
		int active_power_up_slots;
		int active_power_down_slots;
		int suspend_fps_src;
		int suspend_power_up_slots;
		int suspend_power_down_slots;
	} cocci_id/* drivers/pinctrl/pinctrl-max77620.c 92 */;
	struct max77620_pin_info {
		enum max77620_pin_ppdrv drv_type;
		int pull_config;
	} cocci_id/* drivers/pinctrl/pinctrl-max77620.c 87 */;
	struct max77620_pingroup {
		const char *name;
		const unsigned int pins[1];
		unsigned int npins;
		enum max77620_alternate_pinmux_option alt_option;
	} cocci_id/* drivers/pinctrl/pinctrl-max77620.c 80 */;
	enum max77620_alternate_pinmux_option{MAX77620_PINMUX_GPIO=0, MAX77620_PINMUX_LOW_POWER_MODE_CONTROL_IN=1, MAX77620_PINMUX_FLEXIBLE_POWER_SEQUENCER_OUT=2, MAX77620_PINMUX_32K_OUT1=3, MAX77620_PINMUX_SD0_DYNAMIC_VOLTAGE_SCALING_IN=4, MAX77620_PINMUX_SD1_DYNAMIC_VOLTAGE_SCALING_IN=5, MAX77620_PINMUX_REFERENCE_OUT=6,} cocci_id/* drivers/pinctrl/pinctrl-max77620.c 70 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-max77620.c 654 */;
	const struct platform_device_id cocci_id/* drivers/pinctrl/pinctrl-max77620.c 647 */[];
	const struct dev_pm_ops cocci_id/* drivers/pinctrl/pinctrl-max77620.c 642 */;
	int cocci_id/* drivers/pinctrl/pinctrl-max77620.c 603 */[];
	struct max77620_chip *cocci_id/* drivers/pinctrl/pinctrl-max77620.c 550 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-max77620.c 548 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-max77620.c 542 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-max77620.c 537 */;
	const struct pinconf_generic_params cocci_id/* drivers/pinctrl/pinctrl-max77620.c 48 */[];
	struct max77620_pin_function {
		const char *name;
		const char *const *groups;
		unsigned int ngroups;
		int mux_option;
	} cocci_id/* drivers/pinctrl/pinctrl-max77620.c 41 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-max77620.c 400 */;
	struct max77620_fps_config *cocci_id/* drivers/pinctrl/pinctrl-max77620.c 398 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-max77620.c 323 */;
	int *cocci_id/* drivers/pinctrl/pinctrl-max77620.c 321 */;
	struct max77620_pctrl_info *cocci_id/* drivers/pinctrl/pinctrl-max77620.c 320 */;
	int cocci_id/* drivers/pinctrl/pinctrl-max77620.c 320 */;
	u16 cocci_id/* drivers/pinctrl/pinctrl-max77620.c 315 */;
	enum max77620_pin_ppdrv{MAX77620_PIN_UNCONFIG_DRV, MAX77620_PIN_OD_DRV, MAX77620_PIN_PP_DRV,} cocci_id/* drivers/pinctrl/pinctrl-max77620.c 28 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-max77620.c 274 */;
	struct device *cocci_id/* drivers/pinctrl/pinctrl-max77620.c 273 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-max77620.c 270 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-max77620.c 269 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-max77620.c 262 */;
	u8 cocci_id/* drivers/pinctrl/pinctrl-max77620.c 242 */;
	unsigned int *const cocci_id/* drivers/pinctrl/pinctrl-max77620.c 228 */;
	const char *const **cocci_id/* drivers/pinctrl/pinctrl-max77620.c 227 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-max77620.c 217 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-max77620.c 202 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-max77620.c 192 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-max77620.c 192 */;
	const struct max77620_pingroup cocci_id/* drivers/pinctrl/pinctrl-max77620.c 164 */[];
	const struct max77620_pin_function cocci_id/* drivers/pinctrl/pinctrl-max77620.c 146 */[];
	const char *const cocci_id/* drivers/pinctrl/pinctrl-max77620.c 127 */[];
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-max77620.c 116 */[];
	struct max77620_pctrl_info {
		struct device *dev;
		struct pinctrl_dev *pctl;
		struct regmap *rmap;
		int pins_current_opt[MAX77620_GPIO_NR];
		const struct max77620_pin_function *functions;
		unsigned int num_functions;
		const struct max77620_pingroup *pin_groups;
		int num_pin_groups;
		const struct pinctrl_pin_desc *pins;
		unsigned int num_pins;
		struct max77620_pin_info pin_info[MAX77620_PIN_NUM];
		struct max77620_fps_config fps_config[MAX77620_PIN_NUM];
	} cocci_id/* drivers/pinctrl/pinctrl-max77620.c 101 */;
}
