cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/input/mouse/gpio_mouse.c 73 */;
	struct gpio_mouse *cocci_id/* drivers/input/mouse/gpio_mouse.c 72 */;
	struct device *cocci_id/* drivers/input/mouse/gpio_mouse.c 71 */;
	struct platform_device *cocci_id/* drivers/input/mouse/gpio_mouse.c 69 */;
	int cocci_id/* drivers/input/mouse/gpio_mouse.c 69 */;
	void cocci_id/* drivers/input/mouse/gpio_mouse.c 46 */;
	struct gpio_mouse {
		u32 scan_ms;
		struct gpio_desc *up;
		struct gpio_desc *down;
		struct gpio_desc *left;
		struct gpio_desc *right;
		struct gpio_desc *bleft;
		struct gpio_desc *bmiddle;
		struct gpio_desc *bright;
	} cocci_id/* drivers/input/mouse/gpio_mouse.c 31 */;
	struct platform_driver cocci_id/* drivers/input/mouse/gpio_mouse.c 158 */;
	const struct of_device_id cocci_id/* drivers/input/mouse/gpio_mouse.c 152 */[];
}
