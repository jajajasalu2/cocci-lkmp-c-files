cocci_test_suite() {
	struct pwm_args cocci_id/* drivers/leds/leds-pwm.c 72 */;
	struct led_pwm *cocci_id/* drivers/leds/leds-pwm.c 69 */;
	struct fwnode_handle *cocci_id/* drivers/leds/leds-pwm.c 69 */;
	struct led_pwm_priv *cocci_id/* drivers/leds/leds-pwm.c 68 */;
	struct device *cocci_id/* drivers/leds/leds-pwm.c 68 */;
	unsigned long long cocci_id/* drivers/leds/leds-pwm.c 53 */;
	unsigned int cocci_id/* drivers/leds/leds-pwm.c 52 */;
	struct led_pwm_data cocci_id/* drivers/leds/leds-pwm.c 51 */;
	enum led_brightness cocci_id/* drivers/leds/leds-pwm.c 48 */;
	struct led_classdev *cocci_id/* drivers/leds/leds-pwm.c 47 */;
	int cocci_id/* drivers/leds/leds-pwm.c 37 */;
	struct led_pwm_data *cocci_id/* drivers/leds/leds-pwm.c 35 */;
	void cocci_id/* drivers/leds/leds-pwm.c 35 */;
	struct led_pwm_priv {
		int num_leds;
		struct led_pwm_data leds[0];
	} cocci_id/* drivers/leds/leds-pwm.c 30 */;
	struct led_pwm_data {
		struct led_classdev cdev;
		struct pwm_device *pwm;
		unsigned int active_low;
		unsigned int period;
		int duty;
	} cocci_id/* drivers/leds/leds-pwm.c 22 */;
	struct platform_driver cocci_id/* drivers/leds/leds-pwm.c 201 */;
	const struct of_device_id cocci_id/* drivers/leds/leds-pwm.c 195 */[];
	struct led_pwm_platform_data *cocci_id/* drivers/leds/leds-pwm.c 158 */;
	struct platform_device *cocci_id/* drivers/leds/leds-pwm.c 156 */;
	struct led_pwm cocci_id/* drivers/leds/leds-pwm.c 123 */;
}
