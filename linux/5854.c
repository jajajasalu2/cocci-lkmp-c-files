cocci_test_suite() {
	enum pinctrl_map_type cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 83 */;
	u16 cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 793 */;
	struct pinctrl_pin_desc *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 790 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 762 */;
	const unsigned int *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 746 */;
	struct seq_file *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 74 */;
	const unsigned **cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 64 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 601 */;
	const struct pinmux_drive_reg *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 487 */;
	const struct pinmux_drive_reg_field *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 486 */;
	u32 cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 483 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 473 */;
	bool cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 442 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 423 */;
	const struct sh_pfc_pin *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 405 */;
	struct sh_pfc_pin_config *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 358 */;
	unsigned long cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 348 */;
	const struct sh_pfc_pin_group *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 347 */;
	struct sh_pfc *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 346 */;
	struct sh_pfc_pinctrl {
		struct pinctrl_dev *pctl;
		struct pinctrl_desc pctl_desc;
		struct sh_pfc *pfc;
		struct pinctrl_pin_desc *pins;
		struct sh_pfc_pin_config *configs;
		const char *func_prop_name;
		const char *groups_prop_name;
		const char *pins_prop_name;
	} cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 34 */;
	unsigned *constcocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 332 */;
	const char *const**cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 331 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 303 */;
	struct sh_pfc_pin_config {
		unsigned int mux_mark;
		bool mux_set;
		bool gpio_enabled;
	} cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 28 */;
	struct device *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 263 */;
	struct sh_pfc_pinctrl *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 262 */;
	struct pinctrl_map **cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 260 */;
	unsigned *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 260 */;
	struct device_node *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 259 */;
	int cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 258 */;
	unsigned int cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 244 */;
	struct pinctrl_map *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 242 */;
	unsigned cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 242 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 241 */;
	void cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 241 */;
	struct property *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 115 */;
	unsigned long *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 114 */;
	const char *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 113 */;
	unsigned int *cocci_id/* drivers/pinctrl/sh-pfc/pinctrl.c 105 */;
}
