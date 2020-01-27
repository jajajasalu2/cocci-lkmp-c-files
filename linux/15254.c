cocci_test_suite() {
	unsigned int cocci_id/* drivers/leds/leds-tlc591xx.c 90 */;
	u8 cocci_id/* drivers/leds/leds-tlc591xx.c 88 */;
	struct regmap *cocci_id/* drivers/leds/leds-tlc591xx.c 72 */;
	const struct tlc591xx cocci_id/* drivers/leds/leds-tlc591xx.c 66 */;
	struct tlc591xx {
		unsigned int max_leds;
		unsigned int reg_ledout_offset;
	} cocci_id/* drivers/leds/leds-tlc591xx.c 56 */;
	struct tlc591xx_priv {
		struct tlc591xx_led leds[TLC591XX_MAX_LEDS];
		struct regmap *regmap;
		unsigned int reg_ledout_offset;
	} cocci_id/* drivers/leds/leds-tlc591xx.c 50 */;
	struct tlc591xx_led {
		bool active;
		unsigned int led_no;
		struct led_classdev ldev;
		struct tlc591xx_priv *priv;
	} cocci_id/* drivers/leds/leds-tlc591xx.c 43 */;
	struct tlc591xx_led cocci_id/* drivers/leds/leds-tlc591xx.c 41 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-tlc591xx.c 232 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-tlc591xx.c 225 */[];
	struct led_init_data cocci_id/* drivers/leds/leds-tlc591xx.c 190 */;
	const struct tlc591xx *cocci_id/* drivers/leds/leds-tlc591xx.c 154 */;
	const struct of_device_id *cocci_id/* drivers/leds/leds-tlc591xx.c 153 */;
	struct device *cocci_id/* drivers/leds/leds-tlc591xx.c 152 */;
	struct device_node *cocci_id/* drivers/leds/leds-tlc591xx.c 151 */;
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-tlc591xx.c 149 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-tlc591xx.c 148 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-tlc591xx.c 138 */[];
	const struct regmap_config cocci_id/* drivers/leds/leds-tlc591xx.c 132 */;
	struct tlc591xx_priv *cocci_id/* drivers/leds/leds-tlc591xx.c 113 */;
	struct tlc591xx_led *cocci_id/* drivers/leds/leds-tlc591xx.c 112 */;
	enum led_brightness cocci_id/* drivers/leds/leds-tlc591xx.c 110 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-tlc591xx.c 109 */;
	int cocci_id/* drivers/leds/leds-tlc591xx.c 108 */;
}
