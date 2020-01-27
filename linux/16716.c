cocci_test_suite() {
	struct gpio_keys_button_data *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 69 */;
	unsigned int cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 49 */;
	struct gpio_keys_polled_dev *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 48 */;
	int cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 46 */;
	const struct gpio_keys_button *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 45 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 44 */;
	void cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 44 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 379 */;
	struct gpio_keys_polled_dev {
		struct input_dev *input;
		struct device *dev;
		const struct gpio_keys_platform_data *pdata;
		unsigned long rel_axis_seen[BITS_TO_LONGS(REL_CNT)];
		unsigned long abs_axis_seen[BITS_TO_LONGS(ABS_CNT)];
		struct gpio_keys_button_data data[0];
	} cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 35 */;
	unsigned cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 315 */;
	struct gpio_keys_button_data {
		struct gpio_desc *gpiod;
		int last_state;
		int count;
		int threshold;
	} cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 28 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 228 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 222 */[];
	u32 *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 184 */;
	struct fwnode_handle *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 147 */;
	struct gpio_keys_button *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 146 */;
	struct device *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 143 */;
	struct gpio_keys_platform_data *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 142 */;
	const struct gpio_keys_platform_data *cocci_id/* drivers/input/keyboard/gpio_keys_polled.c 136 */;
}
