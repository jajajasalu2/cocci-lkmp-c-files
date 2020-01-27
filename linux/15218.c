cocci_test_suite() {
	enum lp8788_isink_number cocci_id/* drivers/leds/leds-lp8788.c 94 */;
	struct lp8788_led cocci_id/* drivers/leds/leds-lp8788.c 92 */;
	struct lp8788_led *cocci_id/* drivers/leds/leds-lp8788.c 91 */;
	enum led_brightness cocci_id/* drivers/leds/leds-lp8788.c 89 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-lp8788.c 88 */;
	int cocci_id/* drivers/leds/leds-lp8788.c 88 */;
	u8 cocci_id/* drivers/leds/leds-lp8788.c 78 */;
	struct lp8788_led_config *cocci_id/* drivers/leds/leds-lp8788.c 45 */;
	struct lp8788_led_platform_data *cocci_id/* drivers/leds/leds-lp8788.c 43 */;
	struct lp8788_led_config cocci_id/* drivers/leds/leds-lp8788.c 36 */;
	struct lp8788_led_config {
		enum lp8788_isink_scale scale;
		enum lp8788_isink_number num;
		int iout;
	} cocci_id/* drivers/leds/leds-lp8788.c 30 */;
	struct lp8788_led {
		struct lp8788 *lp;
		struct mutex lock;
		struct led_classdev led_dev;
		enum lp8788_isink_number isink_num;
		int on;
	} cocci_id/* drivers/leds/leds-lp8788.c 22 */;
	struct platform_driver cocci_id/* drivers/leds/leds-lp8788.c 160 */;
	struct device *cocci_id/* drivers/leds/leds-lp8788.c 125 */;
	struct lp8788 *cocci_id/* drivers/leds/leds-lp8788.c 122 */;
	struct platform_device *cocci_id/* drivers/leds/leds-lp8788.c 120 */;
}
