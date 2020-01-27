cocci_test_suite() {
	u8 cocci_id/* drivers/input/misc/max8997_haptic.c 99 */;
	unsigned int cocci_id/* drivers/input/misc/max8997_haptic.c 61 */;
	struct platform_driver cocci_id/* drivers/input/misc/max8997_haptic.c 393 */;
	const struct platform_device_id cocci_id/* drivers/input/misc/max8997_haptic.c 387 */[];
	struct device *cocci_id/* drivers/input/misc/max8997_haptic.c 375 */;
	int __maybe_unused cocci_id/* drivers/input/misc/max8997_haptic.c 375 */;
	struct max8997_haptic {
		struct device *dev;
		struct i2c_client *client;
		struct input_dev *input_dev;
		struct regulator *regulator;
		struct work_struct work;
		struct mutex mutex;
		bool enabled;
		unsigned int level;
		struct pwm_device *pwm;
		unsigned int pwm_period;
		enum max8997_haptic_pwm_divisor pwm_divisor;
		enum max8997_haptic_motor_type type;
		enum max8997_haptic_pulse_mode mode;
		unsigned int internal_mode_pattern;
		unsigned int pattern_cycle;
		unsigned int pattern_signal_period;
	} cocci_id/* drivers/input/misc/max8997_haptic.c 32 */;
	const struct max8997_haptic_platform_data *cocci_id/* drivers/input/misc/max8997_haptic.c 244 */;
	const struct max8997_platform_data *cocci_id/* drivers/input/misc/max8997_haptic.c 242 */;
	struct max8997_dev *cocci_id/* drivers/input/misc/max8997_haptic.c 241 */;
	struct platform_device *cocci_id/* drivers/input/misc/max8997_haptic.c 239 */;
	struct max8997_haptic *cocci_id/* drivers/input/misc/max8997_haptic.c 233 */;
	struct input_dev *cocci_id/* drivers/input/misc/max8997_haptic.c 231 */;
	void cocci_id/* drivers/input/misc/max8997_haptic.c 231 */;
	struct ff_effect *cocci_id/* drivers/input/misc/max8997_haptic.c 218 */;
	void *cocci_id/* drivers/input/misc/max8997_haptic.c 217 */;
	struct max8997_haptic cocci_id/* drivers/input/misc/max8997_haptic.c 209 */;
	struct work_struct *cocci_id/* drivers/input/misc/max8997_haptic.c 206 */;
	int cocci_id/* drivers/input/misc/max8997_haptic.c 159 */;
}
