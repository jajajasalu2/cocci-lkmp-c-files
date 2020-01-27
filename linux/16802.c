cocci_test_suite() {
	struct pwm_vibrator cocci_id/* drivers/input/misc/pwm-vibra.c 92 */;
	struct work_struct *cocci_id/* drivers/input/misc/pwm-vibra.c 89 */;
	struct platform_driver cocci_id/* drivers/input/misc/pwm-vibra.c 257 */;
	const struct of_device_id cocci_id/* drivers/input/misc/pwm-vibra.c 250 */[];
	struct pwm_vibrator {
		struct input_dev *input;
		struct pwm_device *pwm;
		struct pwm_device *pwm_dir;
		struct regulator *vcc;
		struct work_struct play_work;
		u16 level;
		u32 direction_duty_cycle;
		bool vcc_on;
	} cocci_id/* drivers/input/misc/pwm-vibra.c 24 */;
	struct device *cocci_id/* drivers/input/misc/pwm-vibra.c 236 */;
	int __maybe_unused cocci_id/* drivers/input/misc/pwm-vibra.c 236 */;
	struct pwm_state cocci_id/* drivers/input/misc/pwm-vibra.c 125 */;
	struct platform_device *cocci_id/* drivers/input/misc/pwm-vibra.c 122 */;
	struct pwm_vibrator *cocci_id/* drivers/input/misc/pwm-vibra.c 116 */;
	struct input_dev *cocci_id/* drivers/input/misc/pwm-vibra.c 114 */;
	void cocci_id/* drivers/input/misc/pwm-vibra.c 114 */;
	struct ff_effect *cocci_id/* drivers/input/misc/pwm-vibra.c 101 */;
	void *cocci_id/* drivers/input/misc/pwm-vibra.c 100 */;
	int cocci_id/* drivers/input/misc/pwm-vibra.c 100 */;
}
