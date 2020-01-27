cocci_test_suite() {
	unsigned long cocci_id/* drivers/leds/trigger/ledtrig-transient.c 57 */;
	struct led_classdev *cocci_id/* drivers/leds/trigger/ledtrig-transient.c 54 */;
	const char *cocci_id/* drivers/leds/trigger/ledtrig-transient.c 52 */;
	size_t cocci_id/* drivers/leds/trigger/ledtrig-transient.c 52 */;
	struct transient_trig_data *cocci_id/* drivers/leds/trigger/ledtrig-transient.c 45 */;
	struct device_attribute *cocci_id/* drivers/leds/trigger/ledtrig-transient.c 43 */;
	char *cocci_id/* drivers/leds/trigger/ledtrig-transient.c 43 */;
	struct device *cocci_id/* drivers/leds/trigger/ledtrig-transient.c 42 */;
	ssize_t cocci_id/* drivers/leds/trigger/ledtrig-transient.c 42 */;
	struct timer_list *cocci_id/* drivers/leds/trigger/ledtrig-transient.c 32 */;
	void cocci_id/* drivers/leds/trigger/ledtrig-transient.c 32 */;
	struct transient_trig_data {
		int activate;
		int state;
		int restore_state;
		unsigned long duration;
		struct timer_list timer;
		struct led_classdev *led_cdev;
	} cocci_id/* drivers/leds/trigger/ledtrig-transient.c 23 */;
	struct led_trigger cocci_id/* drivers/leds/trigger/ledtrig-transient.c 188 */;
	struct transient_trig_data cocci_id/* drivers/leds/trigger/ledtrig-transient.c 167 */;
	struct attribute *cocci_id/* drivers/leds/trigger/ledtrig-transient.c 155 */[];
	int cocci_id/* drivers/leds/trigger/ledtrig-transient.c 124 */;
}
