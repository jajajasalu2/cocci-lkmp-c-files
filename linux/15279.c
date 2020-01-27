cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/leds/leds-is31fl319x.c 96 */[];
	const struct is31fl319x_chipdef cocci_id/* drivers/leds/leds-is31fl319x.c 80 */;
	struct is31fl319x_chipdef {
		int num_leds;
	} cocci_id/* drivers/leds/leds-is31fl319x.c 76 */;
	struct is31fl319x_chip {
		const struct is31fl319x_chipdef *cdef;
		struct i2c_client *client;
		struct regmap *regmap;
		struct mutex lock;
		u32 audio_gain_db;
		struct is31fl319x_led {
			struct is31fl319x_chip *chip;
			struct led_classdev cdev;
			u32 max_microamp;
			bool configured;
		} leds[IS31FL319X_MAX_LEDS];
	} cocci_id/* drivers/leds/leds-is31fl319x.c 61 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-is31fl319x.c 430 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-is31fl319x.c 419 */[];
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-is31fl319x.c 332 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-is31fl319x.c 331 */;
	u32 cocci_id/* drivers/leds/leds-is31fl319x.c 326 */;
	struct device *cocci_id/* drivers/leds/leds-is31fl319x.c 317 */;
	struct regmap_config cocci_id/* drivers/leds/leds-is31fl319x.c 306 */;
	const struct reg_default cocci_id/* drivers/leds/leds-is31fl319x.c 292 */[];
	const struct of_device_id *cocci_id/* drivers/leds/leds-is31fl319x.c 203 */;
	struct device_node *cocci_id/* drivers/leds/leds-is31fl319x.c 202 */;
	const struct device_node *cocci_id/* drivers/leds/leds-is31fl319x.c 172 */;
	const struct device *cocci_id/* drivers/leds/leds-is31fl319x.c 171 */;
	bool cocci_id/* drivers/leds/leds-is31fl319x.c 130 */;
	unsigned int cocci_id/* drivers/leds/leds-is31fl319x.c 129 */;
	u8 cocci_id/* drivers/leds/leds-is31fl319x.c 116 */;
	struct is31fl319x_chip *cocci_id/* drivers/leds/leds-is31fl319x.c 112 */;
	struct is31fl319x_led cocci_id/* drivers/leds/leds-is31fl319x.c 110 */;
	struct is31fl319x_led *cocci_id/* drivers/leds/leds-is31fl319x.c 110 */;
	enum led_brightness cocci_id/* drivers/leds/leds-is31fl319x.c 108 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-is31fl319x.c 107 */;
	int cocci_id/* drivers/leds/leds-is31fl319x.c 107 */;
}
