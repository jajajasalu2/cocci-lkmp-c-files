cocci_test_suite() {
	struct max77693_haptic {
		enum max77693_types dev_type;
		struct regmap *regmap_pmic;
		struct regmap *regmap_haptic;
		struct device *dev;
		struct input_dev *input_dev;
		struct pwm_device *pwm_dev;
		struct regulator *motor_reg;
		bool enabled;
		bool suspend_state;
		unsigned int magnitude;
		unsigned int pwm_duty;
		enum max77693_haptic_motor_type type;
		enum max77693_haptic_pulse_mode mode;
		struct work_struct work;
	} cocci_id/* drivers/input/misc/max77693-haptic.c 47 */;
	struct platform_driver cocci_id/* drivers/input/misc/max77693-haptic.c 414 */;
	const struct platform_device_id cocci_id/* drivers/input/misc/max77693-haptic.c 407 */[];
	enum max77693_haptic_pwm_divisor{MAX77693_HAPTIC_PWM_DIVISOR_32=0, MAX77693_HAPTIC_PWM_DIVISOR_64, MAX77693_HAPTIC_PWM_DIVISOR_128, MAX77693_HAPTIC_PWM_DIVISOR_256,} cocci_id/* drivers/input/misc/max77693-haptic.c 40 */;
	struct device *cocci_id/* drivers/input/misc/max77693-haptic.c 391 */;
	int __maybe_unused cocci_id/* drivers/input/misc/max77693-haptic.c 391 */;
	enum max77693_haptic_pulse_mode{MAX77693_HAPTIC_EXTERNAL_MODE=0, MAX77693_HAPTIC_INTERNAL_MODE,} cocci_id/* drivers/input/misc/max77693-haptic.c 35 */;
	enum max77693_haptic_motor_type{MAX77693_HAPTIC_ERM=0, MAX77693_HAPTIC_LRA,} cocci_id/* drivers/input/misc/max77693-haptic.c 30 */;
	struct max77693_dev *cocci_id/* drivers/input/misc/max77693-haptic.c 295 */;
	struct platform_device *cocci_id/* drivers/input/misc/max77693-haptic.c 293 */;
	int cocci_id/* drivers/input/misc/max77693-haptic.c 280 */;
	struct max77693_haptic *cocci_id/* drivers/input/misc/max77693-haptic.c 279 */;
	struct input_dev *cocci_id/* drivers/input/misc/max77693-haptic.c 277 */;
	void cocci_id/* drivers/input/misc/max77693-haptic.c 277 */;
	u64 cocci_id/* drivers/input/misc/max77693-haptic.c 237 */;
	struct pwm_args cocci_id/* drivers/input/misc/max77693-haptic.c 236 */;
	struct ff_effect *cocci_id/* drivers/input/misc/max77693-haptic.c 233 */;
	void *cocci_id/* drivers/input/misc/max77693-haptic.c 232 */;
	struct max77693_haptic cocci_id/* drivers/input/misc/max77693-haptic.c 217 */;
	struct work_struct *cocci_id/* drivers/input/misc/max77693-haptic.c 214 */;
	unsigned int cocci_id/* drivers/input/misc/max77693-haptic.c 107 */;
	bool cocci_id/* drivers/input/misc/max77693-haptic.c 105 */;
}
