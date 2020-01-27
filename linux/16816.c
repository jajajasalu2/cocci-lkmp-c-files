cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/misc/pwm-beeper.c 81 */;
	int cocci_id/* drivers/input/misc/pwm-beeper.c 80 */;
	struct pwm_beeper cocci_id/* drivers/input/misc/pwm-beeper.c 71 */;
	struct work_struct *cocci_id/* drivers/input/misc/pwm-beeper.c 69 */;
	struct pwm_state cocci_id/* drivers/input/misc/pwm-beeper.c 33 */;
	unsigned long cocci_id/* drivers/input/misc/pwm-beeper.c 31 */;
	struct platform_driver cocci_id/* drivers/input/misc/pwm-beeper.c 249 */;
	const struct of_device_id cocci_id/* drivers/input/misc/pwm-beeper.c 242 */[];
	int __maybe_unused cocci_id/* drivers/input/misc/pwm-beeper.c 224 */;
	struct pwm_beeper {
		struct input_dev *input;
		struct pwm_device *pwm;
		struct regulator *amplifier;
		struct work_struct work;
		unsigned long period;
		unsigned int bell_frequency;
		bool suspended;
		bool amplifier_on;
	} cocci_id/* drivers/input/misc/pwm-beeper.c 18 */;
	u32 cocci_id/* drivers/input/misc/pwm-beeper.c 127 */;
	struct device *cocci_id/* drivers/input/misc/pwm-beeper.c 124 */;
	struct platform_device *cocci_id/* drivers/input/misc/pwm-beeper.c 122 */;
	struct pwm_beeper *cocci_id/* drivers/input/misc/pwm-beeper.c 117 */;
	struct input_dev *cocci_id/* drivers/input/misc/pwm-beeper.c 115 */;
	void cocci_id/* drivers/input/misc/pwm-beeper.c 115 */;
}
