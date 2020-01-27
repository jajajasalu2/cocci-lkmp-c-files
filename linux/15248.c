cocci_test_suite() {
	struct lp8860_led {
		struct mutex lock;
		struct i2c_client *client;
		struct led_classdev led_dev;
		struct regmap *regmap;
		struct regmap *eeprom_regmap;
		struct gpio_desc *enable_gpio;
		struct regulator *regulator;
	} cocci_id/* drivers/leds/leds-lp8860.c 97 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-lp8860.c 484 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-lp8860.c 478 */[];
	const struct i2c_device_id cocci_id/* drivers/leds/leds-lp8860.c 472 */[];
	struct led_init_data cocci_id/* drivers/leds/leds-lp8860.c 385 */;
	struct device_node *cocci_id/* drivers/leds/leds-lp8860.c 383 */;
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-lp8860.c 379 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-lp8860.c 378 */;
	const struct regmap_config cocci_id/* drivers/leds/leds-lp8860.c 368 */;
	const struct reg_default cocci_id/* drivers/leds/leds-lp8860.c 340 */[];
	struct lp8860_led cocci_id/* drivers/leds/leds-lp8860.c 209 */;
	struct lp8860_led *cocci_id/* drivers/leds/leds-lp8860.c 208 */;
	enum led_brightness cocci_id/* drivers/leds/leds-lp8860.c 206 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-lp8860.c 205 */;
	int cocci_id/* drivers/leds/leds-lp8860.c 205 */;
	unsigned int cocci_id/* drivers/leds/leds-lp8860.c 183 */;
	struct lp8860_eeprom_reg cocci_id/* drivers/leds/leds-lp8860.c 112 */[];
	struct lp8860_eeprom_reg {
		uint8_t reg;
		uint8_t value;
	} cocci_id/* drivers/leds/leds-lp8860.c 107 */;
}
