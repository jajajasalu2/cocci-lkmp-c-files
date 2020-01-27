cocci_test_suite() {
	const char *cocci_id/* drivers/leds/leds-lm36274.c 75 */;
	struct device *cocci_id/* drivers/leds/leds-lm36274.c 74 */;
	char cocci_id/* drivers/leds/leds-lm36274.c 73 */[LED_MAX_NAME_SIZE];
	struct fwnode_handle *cocci_id/* drivers/leds/leds-lm36274.c 72 */;
	struct lm36274 cocci_id/* drivers/leds/leds-lm36274.c 46 */;
	struct lm36274 *cocci_id/* drivers/leds/leds-lm36274.c 46 */;
	enum led_brightness cocci_id/* drivers/leds/leds-lm36274.c 44 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-lm36274.c 43 */;
	int cocci_id/* drivers/leds/leds-lm36274.c 43 */;
	struct lm36274 {
		struct platform_device *pdev;
		struct led_classdev led_dev;
		struct ti_lmu_bank lmu_data;
		struct regmap *regmap;
		struct device *dev;
		u32 led_sources[LM36274_MAX_STRINGS];
		int num_leds;
	} cocci_id/* drivers/leds/leds-lm36274.c 32 */;
	struct platform_driver cocci_id/* drivers/leds/leds-lm36274.c 160 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-lm36274.c 154 */[];
	struct ti_lmu *cocci_id/* drivers/leds/leds-lm36274.c 124 */;
	struct platform_device *cocci_id/* drivers/leds/leds-lm36274.c 122 */;
}
