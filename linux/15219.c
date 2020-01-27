cocci_test_suite() {
	struct lm3601x_led {
		struct led_classdev_flash fled_cdev;
		struct i2c_client *client;
		struct regmap *regmap;
		struct mutex lock;
		unsigned int flash_timeout;
		unsigned int last_flag;
		u32 torch_current_max;
		u32 flash_current_max;
		u32 max_flash_timeout;
		u32 led_mode;
	} cocci_id/* drivers/leds/leds-lm3601x.c 86 */;
	enum lm3601x_type{CHIP_LM36010=0, CHIP_LM36011,} cocci_id/* drivers/leds/leds-lm3601x.c 67 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-lm3601x.c 468 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-lm3601x.c 461 */[];
	const struct i2c_device_id cocci_id/* drivers/leds/leds-lm3601x.c 454 */[];
	struct i2c_client *cocci_id/* drivers/leds/leds-lm3601x.c 413 */;
	struct fwnode_handle *cocci_id/* drivers/leds/leds-lm3601x.c 360 */;
	struct fwnode_handle **cocci_id/* drivers/leds/leds-lm3601x.c 358 */;
	struct led_init_data cocci_id/* drivers/leds/leds-lm3601x.c 327 */;
	struct led_flash_setting *cocci_id/* drivers/leds/leds-lm3601x.c 326 */;
	const struct led_flash_ops cocci_id/* drivers/leds/leds-lm3601x.c 314 */;
	u32 *cocci_id/* drivers/leds/leds-lm3601x.c 303 */;
	bool *cocci_id/* drivers/leds/leds-lm3601x.c 283 */;
	u8 cocci_id/* drivers/leds/leds-lm3601x.c 247 */;
	u32 cocci_id/* drivers/leds/leds-lm3601x.c 244 */;
	bool cocci_id/* drivers/leds/leds-lm3601x.c 207 */;
	enum led_brightness cocci_id/* drivers/leds/leds-lm3601x.c 171 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-lm3601x.c 170 */;
	int cocci_id/* drivers/leds/leds-lm3601x.c 170 */;
	struct lm3601x_led cocci_id/* drivers/leds/leds-lm3601x.c 132 */;
	struct lm3601x_led *cocci_id/* drivers/leds/leds-lm3601x.c 130 */;
	struct led_classdev_flash *cocci_id/* drivers/leds/leds-lm3601x.c 130 */;
	const struct regmap_config cocci_id/* drivers/leds/leds-lm3601x.c 119 */;
	struct device *cocci_id/* drivers/leds/leds-lm3601x.c 109 */;
	unsigned int cocci_id/* drivers/leds/leds-lm3601x.c 109 */;
	const struct reg_default cocci_id/* drivers/leds/leds-lm3601x.c 102 */[];
}
