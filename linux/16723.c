cocci_test_suite() {
	u32 cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 97 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 94 */;
	void *cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 94 */;
	int cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 94 */;
	struct sun4i_lradc_data {
		struct device *dev;
		struct input_dev *input;
		void __iomem *base;
		struct regulator *vref_supply;
		struct sun4i_lradc_keymap *chan0_map;
		const struct lradc_variant *variant;
		u32 chan0_map_count;
		u32 chan0_keycode;
		u32 vref;
	} cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 82 */;
	struct sun4i_lradc_keymap {
		u32 voltage;
		u32 keycode;
	} cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 77 */;
	const struct lradc_variant cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 67 */;
	struct lradc_variant {
		u8 divisor_numerator;
		u8 divisor_denominator;
	} cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 62 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 297 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 288 */[];
	struct sun4i_lradc_data cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 232 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 225 */;
	struct sun4i_lradc_keymap *cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 195 */;
	struct sun4i_lradc_keymap cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 188 */;
	struct device_node *cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 173 */;
	struct device *cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 170 */;
	struct sun4i_lradc_data *cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 160 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 158 */;
	void cocci_id/* drivers/input/keyboard/sun4i-lradc-keys.c 158 */;
}
