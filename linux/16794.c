cocci_test_suite() {
	struct arizona_haptics cocci_id/* drivers/input/misc/arizona-haptics.c 34 */;
	struct work_struct *cocci_id/* drivers/input/misc/arizona-haptics.c 31 */;
	struct arizona_haptics {
		struct arizona *arizona;
		struct input_dev *input_dev;
		struct work_struct work;
		struct mutex mutex;
		u8 intensity;
	} cocci_id/* drivers/input/misc/arizona-haptics.c 22 */;
	struct platform_driver cocci_id/* drivers/input/misc/arizona-haptics.c 204 */;
	struct platform_device *cocci_id/* drivers/input/misc/arizona-haptics.c 152 */;
	struct snd_soc_component *cocci_id/* drivers/input/misc/arizona-haptics.c 142 */;
	struct arizona_haptics *cocci_id/* drivers/input/misc/arizona-haptics.c 141 */;
	struct input_dev *cocci_id/* drivers/input/misc/arizona-haptics.c 139 */;
	void cocci_id/* drivers/input/misc/arizona-haptics.c 139 */;
	struct arizona *cocci_id/* drivers/input/misc/arizona-haptics.c 112 */;
	struct ff_effect *cocci_id/* drivers/input/misc/arizona-haptics.c 109 */;
	void *cocci_id/* drivers/input/misc/arizona-haptics.c 108 */;
	int cocci_id/* drivers/input/misc/arizona-haptics.c 108 */;
}
