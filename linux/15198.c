cocci_test_suite() {
	u32 cocci_id/* drivers/leds/leds-syscon.c 95 */;
	const char *cocci_id/* drivers/leds/leds-syscon.c 63 */;
	struct syscon_led *cocci_id/* drivers/leds/leds-syscon.c 62 */;
	struct regmap *cocci_id/* drivers/leds/leds-syscon.c 61 */;
	struct device_node *cocci_id/* drivers/leds/leds-syscon.c 59 */;
	struct device *cocci_id/* drivers/leds/leds-syscon.c 58 */;
	struct platform_device *cocci_id/* drivers/leds/leds-syscon.c 56 */;
	int cocci_id/* drivers/leds/leds-syscon.c 56 */;
	struct syscon_led cocci_id/* drivers/leds/leds-syscon.c 39 */;
	enum led_brightness cocci_id/* drivers/leds/leds-syscon.c 36 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-syscon.c 35 */;
	void cocci_id/* drivers/leds/leds-syscon.c 35 */;
	struct syscon_led {
		struct led_classdev cdev;
		struct regmap *map;
		u32 offset;
		u32 mask;
		bool state;
	} cocci_id/* drivers/leds/leds-syscon.c 27 */;
	struct platform_driver cocci_id/* drivers/leds/leds-syscon.c 133 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-syscon.c 128 */[];
}
