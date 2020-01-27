cocci_test_suite() {
	int __init cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 996 */;
	void cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 996 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 987 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 982 */[];
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 936 */;
	void __iomem *cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 923 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 910 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 903 */;
	struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 81 */[];
	struct artpec6_pmx_func {
		const char *name;
		const char *const*groups;
		const unsigned int num_groups;
	} cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 74 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 737 */;
	struct artpec6_pmx *cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 736 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 734 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 725 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 712 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 707 */;
	struct artpec6_pin_group {
		const char *name;
		const unsigned int *pins;
		const unsigned int num_pins;
		unsigned char config;
	} cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 67 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 655 */;
	unsigned int *constcocci_id/* drivers/pinctrl/pinctrl-artpec6.c 646 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 645 */;
	struct artpec6_pmx {
		struct device *dev;
		struct pinctrl_dev *pctl;
		void __iomem *base;
		struct pinctrl_pin_desc *pins;
		unsigned int num_pins;
		const struct artpec6_pin_group *pin_groups;
		unsigned int num_pin_groups;
		const struct artpec6_pmx_func *functions;
		unsigned int num_functions;
	} cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 55 */;
	const struct artpec6_pmx_func cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 519 */[];
	const char *constcocci_id/* drivers/pinctrl/pinctrl-artpec6.c 494 */[];
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 478 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 438 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 437 */;
	int cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 435 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 430 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 429 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 429 */;
	const struct pin_register cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 400 */[];
	struct pin_register {
		unsigned int start;
		unsigned int end;
		unsigned int reg_base;
	} cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 389 */;
	const struct artpec6_pin_group cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 212 */[];
	const unsigned int cocci_id/* drivers/pinctrl/pinctrl-artpec6.c 181 */[];
}
