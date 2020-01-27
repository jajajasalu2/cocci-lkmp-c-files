cocci_test_suite() {
	struct lm3530_mode_map cocci_id/* drivers/leds/leds-lm3530.c 89 */[];
	struct lm3530_mode_map {
		const char *mode;
		enum lm3530_mode mode_val;
	} cocci_id/* drivers/leds/leds-lm3530.c 84 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-lm3530.c 488 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-lm3530.c 482 */[];
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-lm3530.c 409 */;
	struct attribute *cocci_id/* drivers/leds/leds-lm3530.c 402 */[];
	size_t cocci_id/* drivers/leds/leds-lm3530.c 369 */;
	struct device_attribute *cocci_id/* drivers/leds/leds-lm3530.c 350 */;
	char *cocci_id/* drivers/leds/leds-lm3530.c 350 */;
	struct device *cocci_id/* drivers/leds/leds-lm3530.c 349 */;
	ssize_t cocci_id/* drivers/leds/leds-lm3530.c 349 */;
	u8 cocci_id/* drivers/leds/leds-lm3530.c 312 */;
	struct lm3530_pwm_data *cocci_id/* drivers/leds/leds-lm3530.c 311 */;
	struct lm3530_data cocci_id/* drivers/leds/leds-lm3530.c 309 */;
	struct lm3530_data *cocci_id/* drivers/leds/leds-lm3530.c 308 */;
	enum led_brightness cocci_id/* drivers/leds/leds-lm3530.c 305 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-lm3530.c 304 */;
	struct lm3530_als_data cocci_id/* drivers/leds/leds-lm3530.c 234 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-lm3530.c 232 */;
	u8 cocci_id/* drivers/leds/leds-lm3530.c 230 */[LM3530_REG_MAX];
	u32 cocci_id/* drivers/leds/leds-lm3530.c 159 */;
	int cocci_id/* drivers/leds/leds-lm3530.c 158 */;
	struct lm3530_als_data *cocci_id/* drivers/leds/leds-lm3530.c 156 */;
	struct lm3530_platform_data *cocci_id/* drivers/leds/leds-lm3530.c 155 */;
	void cocci_id/* drivers/leds/leds-lm3530.c 155 */;
	const char *cocci_id/* drivers/leds/leds-lm3530.c 144 */;
	const u8 cocci_id/* drivers/leds/leds-lm3530.c 127 */[LM3530_REG_MAX];
	struct lm3530_als_data {
		u8 config;
		u8 imp_sel;
		u8 zones[LM3530_ALS_ZB_MAX];
	} cocci_id/* drivers/leds/leds-lm3530.c 121 */;
	struct lm3530_data {
		struct led_classdev led_dev;
		struct i2c_client *client;
		struct lm3530_platform_data *pdata;
		enum lm3530_mode mode;
		struct regulator *regulator;
		enum led_brightness brightness;
		bool enable;
	} cocci_id/* drivers/leds/leds-lm3530.c 105 */;
}
