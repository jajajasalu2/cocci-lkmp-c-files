cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/leds/leds-bd2802.c 780 */;
	const struct i2c_device_id cocci_id/* drivers/leds/leds-bd2802.c 774 */[];
	struct device *cocci_id/* drivers/leds/leds-bd2802.c 758 */;
	struct bd2802_led {
		struct bd2802_led_platform_data *pdata;
		struct i2c_client *client;
		struct rw_semaphore rwsem;
		struct led_state led[2];
		struct led_classdev cdev_led1r;
		struct led_classdev cdev_led1g;
		struct led_classdev cdev_led1b;
		struct led_classdev cdev_led2r;
		struct led_classdev cdev_led2g;
		struct led_classdev cdev_led2b;
		int adf_on;
		enum led_ids led_id;
		enum led_colors color;
		enum led_bits state;
		int wave_pattern;
		int rgb_current;
	} cocci_id/* drivers/leds/leds-bd2802.c 67 */;
	struct bd2802_led cocci_id/* drivers/leds/leds-bd2802.c 665 */;
	const struct i2c_device_id *cocci_id/* drivers/leds/leds-bd2802.c 659 */;
	struct i2c_client *cocci_id/* drivers/leds/leds-bd2802.c 658 */;
	struct led_state {
		unsigned r:2;
		unsigned g:2;
		unsigned b:2;
	} cocci_id/* drivers/leds/leds-bd2802.c 61 */;
	enum led_bits{BD2802_OFF, BD2802_BLINK, BD2802_ON,} cocci_id/* drivers/leds/leds-bd2802.c 50 */;
	struct device_attribute cocci_id/* drivers/leds/leds-bd2802.c 462 */;
	const char *cocci_id/* drivers/leds/leds-bd2802.c 445 */;
	size_t cocci_id/* drivers/leds/leds-bd2802.c 445 */;
	enum led_colors{RED, GREEN, BLUE,} cocci_id/* drivers/leds/leds-bd2802.c 44 */;
	struct device_attribute *cocci_id/* drivers/leds/leds-bd2802.c 429 */;
	char *cocci_id/* drivers/leds/leds-bd2802.c 429 */;
	ssize_t cocci_id/* drivers/leds/leds-bd2802.c 428 */;
	int cocci_id/* drivers/leds/leds-bd2802.c 416 */;
	enum led_ids{LED1, LED2, LED_NUM,} cocci_id/* drivers/leds/leds-bd2802.c 38 */;
	struct device_attribute *cocci_id/* drivers/leds/leds-bd2802.c 362 */[];
	enum led_bits cocci_id/* drivers/leds/leds-bd2802.c 287 */;
	enum led_ids cocci_id/* drivers/leds/leds-bd2802.c 234 */;
	u8 cocci_id/* drivers/leds/leds-bd2802.c 218 */;
	struct bd2802_led_platform_data *cocci_id/* drivers/leds/leds-bd2802.c 217 */;
	struct bd2802_led *cocci_id/* drivers/leds/leds-bd2802.c 215 */;
	void cocci_id/* drivers/leds/leds-bd2802.c 215 */;
	enum led_colors cocci_id/* drivers/leds/leds-bd2802.c 142 */;
}
