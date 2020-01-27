cocci_test_suite() {
	struct led_init_data cocci_id/* drivers/leds/leds-gpio.c 78 */;
	gpio_blink_set_t cocci_id/* drivers/leds/leds-gpio.c 76 */;
	struct fwnode_handle *cocci_id/* drivers/leds/leds-gpio.c 76 */;
	struct device *cocci_id/* drivers/leds/leds-gpio.c 75 */;
	const struct gpio_led *cocci_id/* drivers/leds/leds-gpio.c 74 */;
	int cocci_id/* drivers/leds/leds-gpio.c 74 */;
	unsigned long *cocci_id/* drivers/leds/leds-gpio.c 65 */;
	enum led_brightness cocci_id/* drivers/leds/leds-gpio.c 35 */;
	void cocci_id/* drivers/leds/leds-gpio.c 34 */;
	struct gpio_led_data cocci_id/* drivers/leds/leds-gpio.c 31 */;
	struct platform_driver cocci_id/* drivers/leds/leds-gpio.c 308 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-gpio.c 29 */;
	struct gpio_led_data *cocci_id/* drivers/leds/leds-gpio.c 28 */;
	struct gpio_leds_priv *cocci_id/* drivers/leds/leds-gpio.c 251 */;
	struct gpio_led_platform_data *cocci_id/* drivers/leds/leds-gpio.c 250 */;
	struct platform_device *cocci_id/* drivers/leds/leds-gpio.c 248 */;
	unsigned long cocci_id/* drivers/leds/leds-gpio.c 206 */;
	struct gpio_desc *cocci_id/* drivers/leds/leds-gpio.c 202 */;
	struct gpio_led_data {
		struct led_classdev cdev;
		struct gpio_desc *gpiod;
		u8 can_sleep;
		u8 blinking;
		gpio_blink_set_t platform_gpio_blink_set;
	} cocci_id/* drivers/leds/leds-gpio.c 20 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-gpio.c 195 */[];
	const char *cocci_id/* drivers/leds/leds-gpio.c 152 */;
	struct gpio_led cocci_id/* drivers/leds/leds-gpio.c 151 */;
	struct gpio_leds_priv cocci_id/* drivers/leds/leds-gpio.c 130 */;
	struct gpio_leds_priv {
		int num_leds;
		struct gpio_led_data leds[];
	} cocci_id/* drivers/leds/leds-gpio.c 123 */;
}
