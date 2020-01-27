cocci_test_suite() {
	struct ff_effect *cocci_id/* drivers/input/misc/regulator-haptic.c 95 */;
	void *cocci_id/* drivers/input/misc/regulator-haptic.c 94 */;
	struct regulator_haptic cocci_id/* drivers/input/misc/regulator-haptic.c 84 */;
	struct work_struct *cocci_id/* drivers/input/misc/regulator-haptic.c 81 */;
	u64 cocci_id/* drivers/input/misc/regulator-haptic.c 60 */;
	bool cocci_id/* drivers/input/misc/regulator-haptic.c 36 */;
	struct platform_driver cocci_id/* drivers/input/misc/regulator-haptic.c 251 */;
	const struct of_device_id cocci_id/* drivers/input/misc/regulator-haptic.c 245 */[];
	unsigned int cocci_id/* drivers/input/misc/regulator-haptic.c 227 */;
	int __maybe_unused cocci_id/* drivers/input/misc/regulator-haptic.c 223 */;
	struct regulator_haptic {
		struct device *dev;
		struct input_dev *input_dev;
		struct regulator *regulator;
		struct work_struct work;
		struct mutex mutex;
		bool active;
		bool suspended;
		unsigned int max_volt;
		unsigned int min_volt;
		unsigned int magnitude;
	} cocci_id/* drivers/input/misc/regulator-haptic.c 20 */;
	const struct regulator_haptic_data *cocci_id/* drivers/input/misc/regulator-haptic.c 145 */;
	struct platform_device *cocci_id/* drivers/input/misc/regulator-haptic.c 143 */;
	int cocci_id/* drivers/input/misc/regulator-haptic.c 120 */;
	struct device_node *cocci_id/* drivers/input/misc/regulator-haptic.c 119 */;
	struct device *cocci_id/* drivers/input/misc/regulator-haptic.c 117 */;
	int __maybe_unused cocci_id/* drivers/input/misc/regulator-haptic.c 116 */;
	struct regulator_haptic *cocci_id/* drivers/input/misc/regulator-haptic.c 110 */;
	struct input_dev *cocci_id/* drivers/input/misc/regulator-haptic.c 108 */;
	void cocci_id/* drivers/input/misc/regulator-haptic.c 108 */;
}
