cocci_test_suite() {
	enum{CAP1106, CAP1126, CAP1188,} cocci_id/* drivers/input/keyboard/cap11xx.c 96 */;
	struct cap11xx_hw_model {
		u8 product_id;
		unsigned int num_channels;
		unsigned int num_leds;
	} cocci_id/* drivers/input/keyboard/cap11xx.c 90 */;
	struct cap11xx_priv {
		struct regmap *regmap;
		struct input_dev *idev;
		struct cap11xx_led *leds;
		int num_leds;
		u32 keycodes[];
	} cocci_id/* drivers/input/keyboard/cap11xx.c 79 */;
	struct cap11xx_led {
		struct cap11xx_priv *priv;
		struct led_classdev cdev;
		u32 reg;
	} cocci_id/* drivers/input/keyboard/cap11xx.c 72 */;
	struct i2c_driver cocci_id/* drivers/input/keyboard/cap11xx.c 485 */;
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/cap11xx.c 477 */[];
	const struct of_device_id cocci_id/* drivers/input/keyboard/cap11xx.c 469 */[];
	u32 cocci_id/* drivers/input/keyboard/cap11xx.c 330 */;
	unsigned int cocci_id/* drivers/input/keyboard/cap11xx.c 329 */;
	const struct cap11xx_hw_model *cocci_id/* drivers/input/keyboard/cap11xx.c 327 */;
	struct device_node *cocci_id/* drivers/input/keyboard/cap11xx.c 326 */;
	struct cap11xx_priv *cocci_id/* drivers/input/keyboard/cap11xx.c 325 */;
	struct device *cocci_id/* drivers/input/keyboard/cap11xx.c 324 */;
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/cap11xx.c 322 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/cap11xx.c 321 */;
	int cocci_id/* drivers/input/keyboard/cap11xx.c 321 */;
	struct cap11xx_led cocci_id/* drivers/input/keyboard/cap11xx.c 262 */;
	struct cap11xx_led *cocci_id/* drivers/input/keyboard/cap11xx.c 252 */;
	enum led_brightness cocci_id/* drivers/input/keyboard/cap11xx.c 232 */;
	struct led_classdev *cocci_id/* drivers/input/keyboard/cap11xx.c 231 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/cap11xx.c 223 */;
	void cocci_id/* drivers/input/keyboard/cap11xx.c 223 */;
	bool cocci_id/* drivers/input/keyboard/cap11xx.c 203 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/cap11xx.c 175 */;
	void *cocci_id/* drivers/input/keyboard/cap11xx.c 175 */;
	const struct regmap_config cocci_id/* drivers/input/keyboard/cap11xx.c 163 */;
	const struct reg_default cocci_id/* drivers/input/keyboard/cap11xx.c 108 */[];
	const struct cap11xx_hw_model cocci_id/* drivers/input/keyboard/cap11xx.c 102 */[];
}
