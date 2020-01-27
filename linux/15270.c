cocci_test_suite() {
	const struct reg_default cocci_id/* drivers/leds/leds-lm3697.c 85 */[];
	struct lm3697 {
		struct gpio_desc *enable_gpio;
		struct regulator *regulator;
		struct i2c_client *client;
		struct regmap *regmap;
		struct device *dev;
		struct mutex lock;
		int bank_cfg;
		struct lm3697_led leds[];
	} cocci_id/* drivers/leds/leds-lm3697.c 72 */;
	struct lm3697_led {
		u32 hvled_strings[LM3697_MAX_LED_STRINGS];
		char label[LED_MAX_NAME_SIZE];
		struct led_classdev led_dev;
		struct lm3697 *priv;
		struct ti_lmu_bank lmu_data;
		int control_bank;
		int enabled;
		int num_leds;
	} cocci_id/* drivers/leds/leds-lm3697.c 51 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-lm3697.c 379 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-lm3697.c 373 */[];
	const struct i2c_device_id cocci_id/* drivers/leds/leds-lm3697.c 367 */[];
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-lm3697.c 303 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-lm3697.c 302 */;
	size_t cocci_id/* drivers/leds/leds-lm3697.c 199 */;
	const char *cocci_id/* drivers/leds/leds-lm3697.c 197 */;
	struct fwnode_handle *cocci_id/* drivers/leds/leds-lm3697.c 195 */;
	struct lm3697 *cocci_id/* drivers/leds/leds-lm3697.c 158 */;
	struct lm3697_led cocci_id/* drivers/leds/leds-lm3697.c 115 */;
	struct lm3697_led *cocci_id/* drivers/leds/leds-lm3697.c 115 */;
	enum led_brightness cocci_id/* drivers/leds/leds-lm3697.c 113 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-lm3697.c 112 */;
	int cocci_id/* drivers/leds/leds-lm3697.c 112 */;
	const struct regmap_config cocci_id/* drivers/leds/leds-lm3697.c 102 */;
}
