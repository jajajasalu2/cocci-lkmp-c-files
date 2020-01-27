cocci_test_suite() {
	struct opal_msg cocci_id/* drivers/leds/leds-powernv.c 82 */;
	const char *cocci_id/* drivers/leds/leds-powernv.c 60 */;
	struct powernv_led_data {
		struct led_classdev cdev;
		char *loc_code;
		int led_type;
		struct powernv_led_common *common;
	} cocci_id/* drivers/leds/leds-powernv.c 50 */;
	struct platform_driver cocci_id/* drivers/leds/leds-powernv.c 336 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-powernv.c 328 */[];
	struct powernv_led_common {
		bool led_disabled;
		__be64 max_led_type;
		struct mutex lock;
	} cocci_id/* drivers/leds/leds-powernv.c 32 */;
	char *cocci_id/* drivers/leds/leds-powernv.c 265 */;
	struct device *cocci_id/* drivers/leds/leds-powernv.c 251 */;
	const struct led_type_map cocci_id/* drivers/leds/leds-powernv.c 25 */[];
	struct property *cocci_id/* drivers/leds/leds-powernv.c 248 */;
	struct device_node *cocci_id/* drivers/leds/leds-powernv.c 243 */;
	struct platform_device *cocci_id/* drivers/leds/leds-powernv.c 242 */;
	struct led_type_map {
		const int type;
		const char *desc;
	} cocci_id/* drivers/leds/leds-powernv.c 21 */;
	struct powernv_led_data cocci_id/* drivers/leds/leds-powernv.c 196 */;
	struct powernv_led_data *cocci_id/* drivers/leds/leds-powernv.c 195 */;
	enum led_brightness cocci_id/* drivers/leds/leds-powernv.c 193 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-powernv.c 193 */;
	struct powernv_led_common *cocci_id/* drivers/leds/leds-powernv.c 178 */;
	int cocci_id/* drivers/leds/leds-powernv.c 173 */;
	u64 cocci_id/* drivers/leds/leds-powernv.c 135 */;
	__be64 cocci_id/* drivers/leds/leds-powernv.c 134 */;
}
