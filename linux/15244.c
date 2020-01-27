cocci_test_suite() {
	struct regulator_led *cocci_id/* drivers/leds/leds-regulator.c 93 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-regulator.c 90 */;
	void cocci_id/* drivers/leds/leds-regulator.c 74 */;
	enum led_brightness cocci_id/* drivers/leds/leds-regulator.c 49 */;
	struct regulator *cocci_id/* drivers/leds/leds-regulator.c 29 */;
	int cocci_id/* drivers/leds/leds-regulator.c 29 */;
	struct regulator_led {
		struct led_classdev cdev;
		int enabled;
		struct mutex mutex;
		struct regulator *vcc;
	} cocci_id/* drivers/leds/leds-regulator.c 21 */;
	struct regulator_led cocci_id/* drivers/leds/leds-regulator.c 19 */;
	struct platform_driver cocci_id/* drivers/leds/leds-regulator.c 187 */;
	struct led_regulator_platform_data *cocci_id/* drivers/leds/leds-regulator.c 124 */;
	struct platform_device *cocci_id/* drivers/leds/leds-regulator.c 122 */;
}
