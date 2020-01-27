cocci_test_suite() {
	enum led_brightness cocci_id/* drivers/leds/leds-ns2.c 98 */;
	bool cocci_id/* drivers/leds/leds-ns2.c 68 */;
	enum ns2_led_modes *cocci_id/* drivers/leds/leds-ns2.c 42 */;
	struct platform_driver cocci_id/* drivers/leds/leds-ns2.c 402 */;
	struct ns2_led_platform_data cocci_id/* drivers/leds/leds-ns2.c 354 */;
	struct ns2_led_priv *cocci_id/* drivers/leds/leds-ns2.c 347 */;
	struct ns2_led_platform_data *cocci_id/* drivers/leds/leds-ns2.c 346 */;
	struct ns2_led_priv cocci_id/* drivers/leds/leds-ns2.c 340 */;
	struct ns2_led_priv {
		int num_leds;
		struct ns2_led_data leds_data[];
	} cocci_id/* drivers/leds/leds-ns2.c 333 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-ns2.c 326 */[];
	u32 *cocci_id/* drivers/leds/leds-ns2.c 301 */;
	struct ns2_led_data {
		struct led_classdev cdev;
		unsigned int cmd;
		unsigned int slow;
		bool can_sleep;
		unsigned char sata;
		rwlock_t rw_lock;
		int num_modes;
		struct ns2_led_modval *modval;
	} cocci_id/* drivers/leds/leds-ns2.c 30 */;
	struct ns2_led_modval cocci_id/* drivers/leds/leds-ns2.c 291 */;
	struct ns2_led_modval *cocci_id/* drivers/leds/leds-ns2.c 263 */;
	struct ns2_led cocci_id/* drivers/leds/leds-ns2.c 254 */;
	struct ns2_led *cocci_id/* drivers/leds/leds-ns2.c 247 */;
	struct device_node *cocci_id/* drivers/leds/leds-ns2.c 245 */;
	void cocci_id/* drivers/leds/leds-ns2.c 233 */;
	enum ns2_led_modes cocci_id/* drivers/leds/leds-ns2.c 177 */;
	const struct ns2_led *cocci_id/* drivers/leds/leds-ns2.c 174 */;
	struct platform_device *cocci_id/* drivers/leds/leds-ns2.c 173 */;
	struct ns2_led_data *cocci_id/* drivers/leds/leds-ns2.c 173 */;
	int cocci_id/* drivers/leds/leds-ns2.c 172 */;
	struct attribute *cocci_id/* drivers/leds/leds-ns2.c 166 */[];
	struct ns2_led_data cocci_id/* drivers/leds/leds-ns2.c 159 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-ns2.c 157 */;
	struct device_attribute *cocci_id/* drivers/leds/leds-ns2.c 155 */;
	char *cocci_id/* drivers/leds/leds-ns2.c 155 */;
	struct device *cocci_id/* drivers/leds/leds-ns2.c 154 */;
	ssize_t cocci_id/* drivers/leds/leds-ns2.c 154 */;
	unsigned long cocci_id/* drivers/leds/leds-ns2.c 129 */;
	const char *cocci_id/* drivers/leds/leds-ns2.c 123 */;
	size_t cocci_id/* drivers/leds/leds-ns2.c 123 */;
}
