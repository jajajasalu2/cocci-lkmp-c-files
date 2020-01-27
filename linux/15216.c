cocci_test_suite() {
	unsigned long cocci_id/* drivers/leds/leds-wm831x-status.c 87 */;
	struct wm831x_status *cocci_id/* drivers/leds/leds-wm831x-status.c 86 */;
	unsigned long *cocci_id/* drivers/leds/leds-wm831x-status.c 83 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-wm831x-status.c 82 */;
	int cocci_id/* drivers/leds/leds-wm831x-status.c 82 */;
	enum led_brightness cocci_id/* drivers/leds/leds-wm831x-status.c 67 */;
	void cocci_id/* drivers/leds/leds-wm831x-status.c 38 */;
	struct wm831x_status cocci_id/* drivers/leds/leds-wm831x-status.c 36 */;
	struct platform_driver cocci_id/* drivers/leds/leds-wm831x-status.c 281 */;
	struct resource *cocci_id/* drivers/leds/leds-wm831x-status.c 214 */;
	struct wm831x_status_pdata cocci_id/* drivers/leds/leds-wm831x-status.c 212 */;
	struct wm831x_pdata *cocci_id/* drivers/leds/leds-wm831x-status.c 211 */;
	struct wm831x *cocci_id/* drivers/leds/leds-wm831x-status.c 210 */;
	struct platform_device *cocci_id/* drivers/leds/leds-wm831x-status.c 208 */;
	struct attribute *cocci_id/* drivers/leds/leds-wm831x-status.c 202 */[];
	struct wm831x_status {
		struct led_classdev cdev;
		struct wm831x *wm831x;
		struct mutex mutex;
		spinlock_t value_lock;
		int reg;
		int reg_val;
		int blink;
		int blink_time;
		int blink_cyc;
		int src;
		enum led_brightness brightness;
	} cocci_id/* drivers/leds/leds-wm831x-status.c 19 */;
	const char *cocci_id/* drivers/leds/leds-wm831x-status.c 183 */;
	size_t cocci_id/* drivers/leds/leds-wm831x-status.c 183 */;
	struct device_attribute *cocci_id/* drivers/leds/leds-wm831x-status.c 159 */;
	char *cocci_id/* drivers/leds/leds-wm831x-status.c 159 */;
	struct device *cocci_id/* drivers/leds/leds-wm831x-status.c 158 */;
	ssize_t cocci_id/* drivers/leds/leds-wm831x-status.c 158 */;
	const char *const cocci_id/* drivers/leds/leds-wm831x-status.c 151 */[];
}
