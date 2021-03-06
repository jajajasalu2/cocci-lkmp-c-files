cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 928 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 914 */[];
	u32 cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 807 */;
	struct pinctrl_desc *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 803 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 802 */;
	struct device *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 801 */;
	struct platform_device *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 799 */;
	const struct gpio_chip cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 646 */;
	struct gpio_chip *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 635 */;
	u32 *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 614 */;
	const struct of_phandle_args *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 613 */;
	unsigned long cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 565 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 555 */;
	const char *constcocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 520 */[];
	int cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 518 */;
	struct pmic_mpp_pad *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 517 */;
	struct pmic_mpp_state *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 516 */;
	struct seq_file *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 514 */;
	unsigned cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 514 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 513 */;
	void cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 513 */;
	unsigned long *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 330 */;
	unsigned int cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 330 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 322 */;
	unsigned *constcocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 247 */;
	const char *const**cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 246 */;
	const char *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 238 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 225 */;
	const unsigned **cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 218 */;
	unsigned *cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 218 */;
	const struct pin_config_item cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 156 */[];
	const struct pinconf_generic_params cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 148 */[];
	struct pmic_mpp_state {
		struct device *dev;
		struct regmap *map;
		struct pinctrl_dev *ctrl;
		struct gpio_chip chip;
	} cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 141 */;
	struct pmic_mpp_pad {
		u16 base;
		int irq;
		bool is_enabled;
		bool out_value;
		bool output_enabled;
		bool input_enabled;
		bool paired;
		bool has_pullup;
		unsigned int num_sources;
		unsigned int power_source;
		unsigned int amux_input;
		unsigned int aout_level;
		unsigned int pullup;
		unsigned int function;
		unsigned int drive_strength;
		unsigned int dtest;
	} cocci_id/* drivers/pinctrl/qcom/pinctrl-spmi-mpp.c 122 */;
}
