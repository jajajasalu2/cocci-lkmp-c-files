cocci_test_suite() {
	struct gpio_desc *cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 58 */;
	void __exit cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 488 */;
	int __init cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 483 */;
	struct platform_driver cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 472 */;
	const struct of_device_id cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 467 */[];
	int __maybe_unused cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 445 */;
	struct platform_device *cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 317 */;
	struct device_attribute *cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 296 */;
	char *cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 296 */;
	ssize_t cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 295 */;
	bool cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 255 */;
	const char *cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 250 */;
	size_t cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 250 */;
	struct arche_apb_ctrl_drvdata {
		struct gpio_desc *resetn;
		struct gpio_desc *boot_ret;
		struct gpio_desc *pwroff;
		struct gpio_desc *wake_in;
		struct gpio_desc *wake_out;
		struct gpio_desc *pwrdn;
		enum arche_platform_state state;
		bool init_disabled;
		struct regulator *vcore;
		struct regulator *vio;
		struct gpio_desc *clk_en;
		struct clk *clk;
		struct pinctrl *pinctrl;
		struct pinctrl_state *pin_default;
		struct gpio_desc *spi_en;
		bool spi_en_polarity_high;
	} cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 24 */;
	int cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 228 */;
	struct arche_apb_ctrl_drvdata *cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 223 */;
	struct device *cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 221 */;
	void cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 221 */;
	void cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 22 */(struct device *dev);
	unsigned long cocci_id/* drivers/staging/greybus/arche-apb-ctrl.c 138 */;
}
