cocci_test_suite() {
	struct gpio_desc *cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 53 */;
	struct iio_channel *cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 52 */;
	int cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 52 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 367 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 361 */[];
	struct vf50_touch_device {
		struct platform_device *pdev;
		struct input_dev *ts_input;
		struct iio_channel *channels;
		struct gpio_desc *gpio_xp;
		struct gpio_desc *gpio_xm;
		struct gpio_desc *gpio_yp;
		struct gpio_desc *gpio_ym;
		int pen_irq;
		int min_pressure;
		bool stop_touchscreen;
	} cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 36 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 261 */;
	void *cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 254 */;
	void cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 254 */;
	enum gpiod_flags cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 240 */;
	const char *cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 240 */;
	struct gpio_desc **cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 239 */;
	struct device *cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 224 */;
	struct vf50_touch_device *cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 223 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 221 */;
	bool cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 108 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/colibri-vf50-ts.c 103 */;
}
