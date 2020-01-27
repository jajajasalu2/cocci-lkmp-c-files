cocci_test_suite() {
	enum led_brightness cocci_id/* drivers/leds/leds-sc27xx-bltc.c 87 */;
	struct sc27xx_led cocci_id/* drivers/leds/leds-sc27xx-bltc.c 63 */;
	struct sc27xx_led_priv {
		struct sc27xx_led leds[SC27XX_LEDS_MAX];
		struct regmap *regmap;
		struct mutex lock;
		u32 base;
	} cocci_id/* drivers/leds/leds-sc27xx-bltc.c 55 */;
	struct sc27xx_led {
		struct fwnode_handle *fwnode;
		struct led_classdev ldev;
		struct sc27xx_led_priv *priv;
		u8 line;
		bool active;
	} cocci_id/* drivers/leds/leds-sc27xx-bltc.c 47 */;
	struct platform_driver cocci_id/* drivers/leds/leds-sc27xx-bltc.c 347 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-sc27xx-bltc.c 341 */[];
	struct sc27xx_led_priv *cocci_id/* drivers/leds/leds-sc27xx-bltc.c 280 */;
	struct device_node *cocci_id/* drivers/leds/leds-sc27xx-bltc.c 279 */;
	struct device *cocci_id/* drivers/leds/leds-sc27xx-bltc.c 278 */;
	struct platform_device *cocci_id/* drivers/leds/leds-sc27xx-bltc.c 276 */;
	struct led_init_data cocci_id/* drivers/leds/leds-sc27xx-bltc.c 251 */;
	struct led_pattern *cocci_id/* drivers/leds/leds-sc27xx-bltc.c 172 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-sc27xx-bltc.c 146 */;
	u32 cocci_id/* drivers/leds/leds-sc27xx-bltc.c 136 */;
	u32 *cocci_id/* drivers/leds/leds-sc27xx-bltc.c 134 */;
	void cocci_id/* drivers/leds/leds-sc27xx-bltc.c 134 */;
	u8 cocci_id/* drivers/leds/leds-sc27xx-bltc.c 111 */;
	struct regmap *cocci_id/* drivers/leds/leds-sc27xx-bltc.c 109 */;
	struct sc27xx_led *cocci_id/* drivers/leds/leds-sc27xx-bltc.c 107 */;
	int cocci_id/* drivers/leds/leds-sc27xx-bltc.c 107 */;
}
