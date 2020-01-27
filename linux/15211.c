cocci_test_suite() {
	unsigned long cocci_id/* drivers/leds/leds-netxbig.c 93 */;
	struct netxbig_gpio_ext *cocci_id/* drivers/leds/leds-netxbig.c 83 */;
	void cocci_id/* drivers/leds/leds-netxbig.c 83 */;
	struct platform_driver cocci_id/* drivers/leds/leds-netxbig.c 602 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-netxbig.c 562 */[];
	struct netxbig_led_platform_data {
		struct netxbig_gpio_ext *gpio_ext;
		struct netxbig_led_timer *timer;
		int num_timer;
		struct netxbig_led *leds;
		int num_leds;
	} cocci_id/* drivers/leds/leds-netxbig.c 53 */;
	u32 cocci_id/* drivers/leds/leds-netxbig.c 452 */;
	struct netxbig_led {
		const char *name;
		const char *default_trigger;
		int mode_addr;
		int *mode_val;
		int bright_addr;
		int bright_max;
	} cocci_id/* drivers/leds/leds-netxbig.c 44 */;
	struct netxbig_led *cocci_id/* drivers/leds/leds-netxbig.c 417 */;
	struct netxbig_led_timer {
		unsigned long delay_on;
		unsigned long delay_off;
		enum netxbig_led_mode mode;
	} cocci_id/* drivers/leds/leds-netxbig.c 38 */;
	int *cocci_id/* drivers/leds/leds-netxbig.c 353 */;
	struct device_node *cocci_id/* drivers/leds/leds-netxbig.c 350 */;
	struct device *cocci_id/* drivers/leds/leds-netxbig.c 350 */;
	const struct netxbig_led *cocci_id/* drivers/leds/leds-netxbig.c 313 */;
	struct netxbig_led_data *cocci_id/* drivers/leds/leds-netxbig.c 312 */;
	struct netxbig_led_platform_data *cocci_id/* drivers/leds/leds-netxbig.c 311 */;
	struct platform_device *cocci_id/* drivers/leds/leds-netxbig.c 310 */;
	int cocci_id/* drivers/leds/leds-netxbig.c 310 */;
	struct attribute *cocci_id/* drivers/leds/leds-netxbig.c 304 */[];
	struct device_attribute *cocci_id/* drivers/leds/leds-netxbig.c 293 */;
	char *cocci_id/* drivers/leds/leds-netxbig.c 293 */;
	ssize_t cocci_id/* drivers/leds/leds-netxbig.c 292 */;
	enum netxbig_led_mode{NETXBIG_LED_OFF, NETXBIG_LED_ON, NETXBIG_LED_SATA, NETXBIG_LED_TIMER1, NETXBIG_LED_TIMER2, NETXBIG_LED_MODE_NUM,} cocci_id/* drivers/leds/leds-netxbig.c 27 */;
	const char *cocci_id/* drivers/leds/leds-netxbig.c 243 */;
	size_t cocci_id/* drivers/leds/leds-netxbig.c 243 */;
	enum led_brightness cocci_id/* drivers/leds/leds-netxbig.c 203 */;
	struct netxbig_gpio_ext {
		unsigned int *addr;
		int num_addr;
		unsigned int *data;
		int num_data;
		unsigned int enable;
	} cocci_id/* drivers/leds/leds-netxbig.c 19 */;
	enum netxbig_led_mode cocci_id/* drivers/leds/leds-netxbig.c 178 */;
	struct netxbig_led_data cocci_id/* drivers/leds/leds-netxbig.c 177 */;
	unsigned long *cocci_id/* drivers/leds/leds-netxbig.c 173 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-netxbig.c 172 */;
	struct netxbig_led_timer *cocci_id/* drivers/leds/leds-netxbig.c 157 */;
	enum netxbig_led_mode *cocci_id/* drivers/leds/leds-netxbig.c 154 */;
	struct netxbig_led_data {
		struct netxbig_gpio_ext *gpio_ext;
		struct led_classdev cdev;
		int mode_addr;
		int *mode_val;
		int bright_addr;
		struct netxbig_led_timer *timer;
		int num_timer;
		enum netxbig_led_mode mode;
		int sata;
		spinlock_t lock;
	} cocci_id/* drivers/leds/leds-netxbig.c 141 */;
}
