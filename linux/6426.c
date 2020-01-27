cocci_test_suite() {
	void __exit cocci_id/* drivers/regulator/wm831x-dcdc.c 845 */;
	int __init cocci_id/* drivers/regulator/wm831x-dcdc.c 839 */;
	struct platform_driver *const cocci_id/* drivers/regulator/wm831x-dcdc.c 832 */[];
	struct platform_driver cocci_id/* drivers/regulator/wm831x-dcdc.c 750 */;
	struct wm831x_dcdc cocci_id/* drivers/regulator/wm831x-dcdc.c 696 */;
	struct resource *cocci_id/* drivers/regulator/wm831x-dcdc.c 688 */;
	struct regulator_config cocci_id/* drivers/regulator/wm831x-dcdc.c 685 */;
	struct wm831x_pdata *cocci_id/* drivers/regulator/wm831x-dcdc.c 684 */;
	struct platform_device *cocci_id/* drivers/regulator/wm831x-dcdc.c 681 */;
	const struct regulator_ops cocci_id/* drivers/regulator/wm831x-dcdc.c 673 */;
	struct wm831x *cocci_id/* drivers/regulator/wm831x-dcdc.c 649 */;
	struct wm831x_dcdc *cocci_id/* drivers/regulator/wm831x-dcdc.c 648 */;
	struct regulator_dev *cocci_id/* drivers/regulator/wm831x-dcdc.c 646 */;
	int cocci_id/* drivers/regulator/wm831x-dcdc.c 646 */;
	unsigned int cocci_id/* drivers/regulator/wm831x-dcdc.c 59 */;
	u16 cocci_id/* drivers/regulator/wm831x-dcdc.c 523 */;
	struct wm831x_dcdc {
		char name[WM831X_DCDC_MAX_NAME];
		char supply_name[WM831X_DCDC_MAX_NAME];
		struct regulator_desc desc;
		int base;
		struct wm831x *wm831x;
		struct regulator_dev *regulator;
		struct gpio_desc *dvs_gpiod;
		int dvs_gpio_state;
		int on_vsel;
		int dvs_vsel;
	} cocci_id/* drivers/regulator/wm831x-dcdc.c 46 */;
	struct wm831x_buckv_pdata *cocci_id/* drivers/regulator/wm831x-dcdc.c 334 */;
	void cocci_id/* drivers/regulator/wm831x-dcdc.c 332 */;
	const unsigned int cocci_id/* drivers/regulator/wm831x-dcdc.c 306 */[];
	unsigned cocci_id/* drivers/regulator/wm831x-dcdc.c 231 */;
	const struct regulator_linear_range cocci_id/* drivers/regulator/wm831x-dcdc.c 207 */[];
	irqreturn_t cocci_id/* drivers/regulator/wm831x-dcdc.c 190 */;
	void *cocci_id/* drivers/regulator/wm831x-dcdc.c 190 */;
}
