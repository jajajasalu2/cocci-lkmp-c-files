cocci_test_suite() {
	const struct regmap_config cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 980 */;
	void cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 971 */;
	enum bcm281xx_pin_type *cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 958 */;
	struct bcm281xx_pinctrl_data cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 943 */;
	const struct bcm281xx_pin_function cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 936 */[];
	struct bcm281xx_pinctrl_data {
		void __iomem *reg_base;
		const struct pinctrl_pin_desc *pins;
		const unsigned npins;
		const struct bcm281xx_pin_function *functions;
		const unsigned nfunctions;
		struct regmap *regmap;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 89 */;
	struct bcm281xx_pin_function {
		const char *name;
		const char *const*groups;
		const unsigned ngroups;
	} cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 79 */;
	const char *constcocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 657 */[];
	enum bcm281xx_pin_type{BCM281XX_PIN_TYPE_UNKNOWN=0, BCM281XX_PIN_TYPE_STD, BCM281XX_PIN_TYPE_I2C, BCM281XX_PIN_TYPE_HDMI,} cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 65 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 383 */[];
	struct platform_driver cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1440 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1435 */[];
	struct platform_device *cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1400 */;
	int __init cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1400 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1392 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1387 */;
	enum bcm281xx_pin_type cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1336 */;
	u32 cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1296 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1295 */;
	struct bcm281xx_pinctrl_data *cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1293 */;
	u32 *cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1290 */;
	unsigned long *cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1288 */;
	unsigned cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1287 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1286 */;
	int cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1286 */;
	const u16 cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1211 */[];
	const struct pinmux_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1084 */;
	const struct bcm281xx_pin_function *cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1064 */;
	unsigned *constcocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1049 */;
	const char *const**cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1048 */;
	const char *cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1038 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1022 */;
	struct seq_file *cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1016 */;
	unsigned *cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1005 */;
	const unsigned **cocci_id/* drivers/pinctrl/bcm/pinctrl-bcm281xx.c 1004 */;
}
