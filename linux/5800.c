cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-palmas.c 998 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-palmas.c 990 */[];
	struct palmas_pinctrl_data cocci_id/* drivers/pinctrl/pinctrl-palmas.c 980 */;
	struct palmas_pinctrl_data {
		const struct palmas_pingroup *pin_groups;
		int num_pin_groups;
	} cocci_id/* drivers/pinctrl/pinctrl-palmas.c 975 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-palmas.c 968 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-palmas.c 963 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-palmas.c 88 */[];
	u32 cocci_id/* drivers/pinctrl/pinctrl-palmas.c 863 */;
	u16 cocci_id/* drivers/pinctrl/pinctrl-palmas.c 853 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-palmas.c 756 */;
	const struct palmas_pin_info *cocci_id/* drivers/pinctrl/pinctrl-palmas.c 755 */;
	const struct palmas_pingroup *cocci_id/* drivers/pinctrl/pinctrl-palmas.c 754 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-palmas.c 753 */;
	struct palmas_pctrl_chip_info *cocci_id/* drivers/pinctrl/pinctrl-palmas.c 752 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-palmas.c 750 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-palmas.c 750 */;
	struct palmas_pctrl_chip_info {
		struct device *dev;
		struct pinctrl_dev *pctl;
		struct palmas *palmas;
		int pins_current_opt[PALMAS_PIN_NUM];
		const struct palmas_pin_function *functions;
		unsigned num_functions;
		const struct palmas_pingroup *pin_groups;
		int num_pin_groups;
		const struct pinctrl_pin_desc *pins;
		unsigned num_pins;
	} cocci_id/* drivers/pinctrl/pinctrl-palmas.c 75 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-palmas.c 749 */;
	int cocci_id/* drivers/pinctrl/pinctrl-palmas.c 749 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-palmas.c 742 */;
	struct palmas_pin_function {
		const char *name;
		const char *const *groups;
		unsigned ngroups;
	} cocci_id/* drivers/pinctrl/pinctrl-palmas.c 69 */;
	unsigned *const cocci_id/* drivers/pinctrl/pinctrl-palmas.c 679 */;
	const char *const **cocci_id/* drivers/pinctrl/pinctrl-palmas.c 678 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-palmas.c 669 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-palmas.c 654 */;
	const unsigned **cocci_id/* drivers/pinctrl/pinctrl-palmas.c 645 */;
	unsigned *cocci_id/* drivers/pinctrl/pinctrl-palmas.c 645 */;
	const struct palmas_pingroup cocci_id/* drivers/pinctrl/pinctrl-palmas.c 523 */[];
	struct palmas_pingroup {
		const char *name;
		const unsigned pins[1];
		unsigned npins;
		unsigned mux_reg_base;
		unsigned mux_reg_add;
		unsigned mux_reg_mask;
		unsigned mux_bit_shift;
		const struct palmas_pin_info *opt[4];
	} cocci_id/* drivers/pinctrl/pinctrl-palmas.c 381 */;
	struct palmas_pin_info {
		enum palmas_pinmux mux_opt;
		const struct palmas_pins_pullup_dn_info *pud_info;
		const struct palmas_pins_od_info *od_info;
	} cocci_id/* drivers/pinctrl/pinctrl-palmas.c 375 */;
	struct palmas_pins_od_info {
		int od_reg_base;
		int od_reg_add;
		int od_mask;
		int od_enable;
		int od_disable;
	} cocci_id/* drivers/pinctrl/pinctrl-palmas.c 367 */;
	struct palmas_pins_pullup_dn_info {
		int pullup_dn_reg_base;
		int pullup_dn_reg_add;
		int pullup_dn_mask;
		int normal_val;
		int pull_up_val;
		int pull_dn_val;
	} cocci_id/* drivers/pinctrl/pinctrl-palmas.c 358 */;
	enum palmas_pinmux{

#undef

FUNCTION_GROUP




#define

FUNCTION_GROUP

(

fname

,

mux

)

PALMAS_PINMUX_

##

mux


FUNCTION_GROUPS, PALMAS_PINMUX_NA=0xFFFF,} cocci_id/* drivers/pinctrl/pinctrl-palmas.c 351 */;
	const struct palmas_pin_function cocci_id/* drivers/pinctrl/pinctrl-palmas.c 339 */[];
	const char *const cocci_id/* drivers/pinctrl/pinctrl-palmas.c 227 */[];
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-palmas.c 1051 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-palmas.c 1003 */;
	const struct palmas_pinctrl_data *cocci_id/* drivers/pinctrl/pinctrl-palmas.c 1001 */;
}
