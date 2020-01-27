cocci_test_suite() {
	struct gemini_pin_group {
		const char *name;
		const unsigned int *pins;
		const unsigned int num_pins;
		u32 mask;
		u32 value;
		u32 driving_mask;
	} cocci_id/* drivers/pinctrl/pinctrl-gemini.c 74 */;
	const struct gemini_pin_group cocci_id/* drivers/pinctrl/pinctrl-gemini.c 704 */[];
	struct gemini_pmx {
		struct device *dev;
		struct pinctrl_dev *pctl;
		struct regmap *map;
		bool is_3512;
		bool is_3516;
		bool flash_pin;
		const struct gemini_pin_conf *confs;
		unsigned int nconfs;
	} cocci_id/* drivers/pinctrl/pinctrl-gemini.c 50 */;
	struct gemini_pin_conf {
		unsigned int pin;
		u32 reg;
		u32 mask;
	} cocci_id/* drivers/pinctrl/pinctrl-gemini.c 32 */;
	int __init cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2621 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2613 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2608 */[];
	unsigned long cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2529 */;
	struct device *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2527 */;
	struct regmap *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2526 */;
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2523 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2515 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2508 */;
	const struct gemini_pin_group *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2447 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2442 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2383 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2381 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2378 */;
	const struct gemini_pin_conf *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2363 */;
	const struct gemini_pin_conf cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2309 */[];
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2296 */;
	unsigned int *const cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2289 */;
	const char *const **cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2288 */;
	bool cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2230 */;
	const struct gemini_pmx_func *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2192 */;
	const struct gemini_pmx_func cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2067 */[];
	const char *const cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2041 */[];
	struct gemini_pmx_func {
		const char *name;
		const char *const *groups;
		const unsigned int num_groups;
	} cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2032 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2018 */;
	struct seq_file *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2012 */;
	void cocci_id/* drivers/pinctrl/pinctrl-gemini.c 2012 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 1982 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-gemini.c 1981 */;
	int cocci_id/* drivers/pinctrl/pinctrl-gemini.c 1979 */;
	struct gemini_pmx *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 1970 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-gemini.c 1968 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 1967 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-gemini.c 1967 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-gemini.c 148 */[];
	const unsigned int cocci_id/* drivers/pinctrl/pinctrl-gemini.c 1457 */[];
}
