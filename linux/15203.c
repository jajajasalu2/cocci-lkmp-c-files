cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/leds/leds-lm3692x.c 458 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-lm3692x.c 451 */[];
	const struct i2c_device_id cocci_id/* drivers/leds/leds-lm3692x.c 444 */[];
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-lm3692x.c 383 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-lm3692x.c 382 */;
	struct led_init_data cocci_id/* drivers/leds/leds-lm3692x.c 328 */;
	struct fwnode_handle *cocci_id/* drivers/leds/leds-lm3692x.c 327 */;
	struct lm3692x_led cocci_id/* drivers/leds/leds-lm3692x.c 169 */;
	struct lm3692x_led *cocci_id/* drivers/leds/leds-lm3692x.c 168 */;
	enum led_brightness cocci_id/* drivers/leds/leds-lm3692x.c 166 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-lm3692x.c 165 */;
	int cocci_id/* drivers/leds/leds-lm3692x.c 165 */;
	unsigned int cocci_id/* drivers/leds/leds-lm3692x.c 145 */;
	const struct regmap_config cocci_id/* drivers/leds/leds-lm3692x.c 132 */;
	const struct reg_default cocci_id/* drivers/leds/leds-lm3692x.c 119 */[];
	struct lm3692x_led {
		struct mutex lock;
		struct i2c_client *client;
		struct led_classdev led_dev;
		struct regmap *regmap;
		struct gpio_desc *enable_gpio;
		struct regulator *regulator;
		int led_enable;
		int model_id;
	} cocci_id/* drivers/leds/leds-lm3692x.c 108 */;
}
