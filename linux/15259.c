cocci_test_suite() {
	enum led_brightness cocci_id/* drivers/leds/leds-an30259a.c 82 */;
	struct an30259a {
		struct mutex mutex;
		struct i2c_client *client;
		struct an30259a_led leds[AN30259A_MAX_LEDS];
		struct regmap *regmap;
		int num_leds;
	} cocci_id/* drivers/leds/leds-an30259a.c 73 */;
	struct an30259a_led {
		struct an30259a *chip;
		struct fwnode_handle *fwnode;
		struct led_classdev cdev;
		u32 num;
		u32 default_state;
		bool sloping;
	} cocci_id/* drivers/leds/leds-an30259a.c 64 */;
	struct an30259a cocci_id/* drivers/leds/leds-an30259a.c 62 */;
	struct i2c_driver cocci_id/* drivers/leds/leds-an30259a.c 362 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-an30259a.c 356 */[];
	const struct of_device_id cocci_id/* drivers/leds/leds-an30259a.c 349 */[];
	struct led_init_data cocci_id/* drivers/leds/leds-an30259a.c 316 */;
	void cocci_id/* drivers/leds/leds-an30259a.c 261 */;
	const struct regmap_config cocci_id/* drivers/leds/leds-an30259a.c 255 */;
	u32 cocci_id/* drivers/leds/leds-an30259a.c 216 */;
	const char *cocci_id/* drivers/leds/leds-an30259a.c 208 */;
	struct device_node *cocci_id/* drivers/leds/leds-an30259a.c 205 */;
	struct an30259a *cocci_id/* drivers/leds/leds-an30259a.c 203 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-an30259a.c 202 */;
	struct an30259a_led cocci_id/* drivers/leds/leds-an30259a.c 135 */;
	unsigned long cocci_id/* drivers/leds/leds-an30259a.c 133 */;
	unsigned int cocci_id/* drivers/leds/leds-an30259a.c 132 */;
	struct an30259a_led *cocci_id/* drivers/leds/leds-an30259a.c 130 */;
	unsigned long *cocci_id/* drivers/leds/leds-an30259a.c 128 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-an30259a.c 127 */;
	int cocci_id/* drivers/leds/leds-an30259a.c 127 */;
}
