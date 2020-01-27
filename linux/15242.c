cocci_test_suite() {
	struct led_info *cocci_id/* drivers/leds/leds-adp5520.c 96 */;
	struct adp5520_led *cocci_id/* drivers/leds/leds-adp5520.c 95 */;
	struct device *cocci_id/* drivers/leds/leds-adp5520.c 79 */;
	struct adp5520_leds_platform_data *cocci_id/* drivers/leds/leds-adp5520.c 78 */;
	struct platform_device *cocci_id/* drivers/leds/leds-adp5520.c 76 */;
	int cocci_id/* drivers/leds/leds-adp5520.c 76 */;
	struct adp5520_led cocci_id/* drivers/leds/leds-adp5520.c 34 */;
	enum led_brightness cocci_id/* drivers/leds/leds-adp5520.c 30 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-adp5520.c 29 */;
	struct adp5520_led {
		struct led_classdev cdev;
		struct device *master;
		int id;
		int flags;
	} cocci_id/* drivers/leds/leds-adp5520.c 22 */;
	struct platform_driver cocci_id/* drivers/leds/leds-adp5520.c 184 */;
}
