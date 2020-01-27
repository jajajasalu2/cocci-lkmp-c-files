cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/input-leds.c 89 */;
	struct input_leds *cocci_id/* drivers/input/input-leds.c 87 */;
	const struct input_device_id *cocci_id/* drivers/input/input-leds.c 85 */;
	struct input_handler *cocci_id/* drivers/input/input-leds.c 83 */;
	int cocci_id/* drivers/input/input-leds.c 83 */;
	void cocci_id/* drivers/input/input-leds.c 58 */;
	struct input_dev *cocci_id/* drivers/input/input-leds.c 53 */;
	struct input_led cocci_id/* drivers/input/input-leds.c 52 */;
	struct input_led *cocci_id/* drivers/input/input-leds.c 52 */;
	enum led_brightness cocci_id/* drivers/input/input-leds.c 50 */;
	struct led_classdev *cocci_id/* drivers/input/input-leds.c 50 */;
	struct input_leds {
		struct input_handle handle;
		unsigned int num_leds;
		struct input_led leds[];
	} cocci_id/* drivers/input/input-leds.c 44 */;
	struct input_led {
		struct led_classdev cdev;
		struct input_handle *handle;
		unsigned int code;
	} cocci_id/* drivers/input/input-leds.c 38 */;
	void __exit cocci_id/* drivers/input/input-leds.c 211 */;
	const struct {
		const char *name;
		const char *trigger;
	} cocci_id/* drivers/input/input-leds.c 21 */[LED_CNT];
	int __init cocci_id/* drivers/input/input-leds.c 205 */;
	struct input_handler cocci_id/* drivers/input/input-leds.c 197 */;
	const struct input_device_id cocci_id/* drivers/input/input-leds.c 188 */[];
	struct input_handle *cocci_id/* drivers/input/input-leds.c 170 */;
}
