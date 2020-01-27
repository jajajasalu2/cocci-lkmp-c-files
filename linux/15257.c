cocci_test_suite() {
	u8 *cocci_id/* drivers/leds/leds-lp3944.c 76 */;
	struct lp3944_data {
		struct mutex lock;
		struct i2c_client *client;
		struct lp3944_led_data leds[LP3944_LEDS_MAX];
	} cocci_id/* drivers/leds/leds-lp3944.c 70 */;
	struct lp3944_led_data {
		u8 id;
		enum lp3944_type type;
		struct led_classdev ldev;
		struct i2c_client *client;
	} cocci_id/* drivers/leds/leds-lp3944.c 63 */;
	struct lp3944_led_data cocci_id/* drivers/leds/leds-lp3944.c 60 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-lp3944.c 429 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-lp3944.c 422 */[];
	struct lp3944_data cocci_id/* drivers/leds/leds-lp3944.c 382 */;
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-lp3944.c 363 */;
	enum led_brightness cocci_id/* drivers/leds/leds-lp3944.c 324 */;
	struct lp3944_led_data *cocci_id/* drivers/leds/leds-lp3944.c 298 */;
	struct lp3944_led *cocci_id/* drivers/leds/leds-lp3944.c 297 */;
	struct lp3944_platform_data *cocci_id/* drivers/leds/leds-lp3944.c 292 */;
	struct lp3944_data *cocci_id/* drivers/leds/leds-lp3944.c 291 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-lp3944.c 290 */;
	int cocci_id/* drivers/leds/leds-lp3944.c 290 */;
	unsigned long *cocci_id/* drivers/leds/leds-lp3944.c 224 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-lp3944.c 223 */;
	u8 cocci_id/* drivers/leds/leds-lp3944.c 132 */;
	u16 cocci_id/* drivers/leds/leds-lp3944.c 101 */;
}
