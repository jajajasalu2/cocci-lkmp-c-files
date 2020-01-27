cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/leds/leds-menf21bmc.c 98 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-menf21bmc.c 80 */;
	struct platform_device *cocci_id/* drivers/leds/leds-menf21bmc.c 76 */;
	int cocci_id/* drivers/leds/leds-menf21bmc.c 76 */;
	struct menf21bmc_led cocci_id/* drivers/leds/leds-menf21bmc.c 57 */;
	struct menf21bmc_led *cocci_id/* drivers/leds/leds-menf21bmc.c 56 */;
	enum led_brightness cocci_id/* drivers/leds/leds-menf21bmc.c 53 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-menf21bmc.c 53 */;
	void cocci_id/* drivers/leds/leds-menf21bmc.c 52 */;
	struct menf21bmc_led cocci_id/* drivers/leds/leds-menf21bmc.c 31 */[];
	struct menf21bmc_led {
		struct led_classdev cdev;
		u8 led_bit;
		const char *name;
		struct i2c_client *i2c_client;
	} cocci_id/* drivers/leds/leds-menf21bmc.c 24 */;
}
