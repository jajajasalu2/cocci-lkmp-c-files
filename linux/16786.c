cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/input/misc/sc27xx-vibra.c 78 */;
	struct vibra_info *cocci_id/* drivers/input/misc/sc27xx-vibra.c 71 */;
	struct input_dev *cocci_id/* drivers/input/misc/sc27xx-vibra.c 69 */;
	void cocci_id/* drivers/input/misc/sc27xx-vibra.c 69 */;
	struct ff_effect *cocci_id/* drivers/input/misc/sc27xx-vibra.c 59 */;
	void *cocci_id/* drivers/input/misc/sc27xx-vibra.c 58 */;
	struct vibra_info cocci_id/* drivers/input/misc/sc27xx-vibra.c 49 */;
	struct work_struct *cocci_id/* drivers/input/misc/sc27xx-vibra.c 47 */;
	int cocci_id/* drivers/input/misc/sc27xx-vibra.c 42 */;
	bool cocci_id/* drivers/input/misc/sc27xx-vibra.c 26 */;
	struct vibra_info {
		struct input_dev *input_dev;
		struct work_struct play_work;
		struct regmap *regmap;
		u32 base;
		u32 strength;
		bool enabled;
	} cocci_id/* drivers/input/misc/sc27xx-vibra.c 17 */;
	struct platform_driver cocci_id/* drivers/input/misc/sc27xx-vibra.c 142 */;
	const struct of_device_id cocci_id/* drivers/input/misc/sc27xx-vibra.c 136 */[];
}
