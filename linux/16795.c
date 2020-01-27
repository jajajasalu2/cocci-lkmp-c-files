cocci_test_suite() {
	u8 cocci_id/* drivers/input/misc/twl6040-vibra.c 57 */;
	struct twl6040 *cocci_id/* drivers/input/misc/twl6040-vibra.c 56 */;
	struct vibra_info *cocci_id/* drivers/input/misc/twl6040-vibra.c 55 */;
	irqreturn_t cocci_id/* drivers/input/misc/twl6040-vibra.c 53 */;
	void *cocci_id/* drivers/input/misc/twl6040-vibra.c 53 */;
	int cocci_id/* drivers/input/misc/twl6040-vibra.c 53 */;
	struct platform_driver cocci_id/* drivers/input/misc/twl6040-vibra.c 353 */;
	struct vibra_info {
		struct device *dev;
		struct input_dev *input_dev;
		struct work_struct play_work;
		int irq;
		bool enabled;
		int weak_speed;
		int strong_speed;
		int direction;
		unsigned int vibldrv_res;
		unsigned int vibrdrv_res;
		unsigned int viblmotor_res;
		unsigned int vibrmotor_res;
		struct regulator_bulk_data supplies[TWL6040_NUM_SUPPLIES];
		struct twl6040 *twl6040;
	} cocci_id/* drivers/input/misc/twl6040-vibra.c 31 */;
	struct device_node *cocci_id/* drivers/input/misc/twl6040-vibra.c 231 */;
	struct device *cocci_id/* drivers/input/misc/twl6040-vibra.c 230 */;
	struct platform_device *cocci_id/* drivers/input/misc/twl6040-vibra.c 228 */;
	int __maybe_unused cocci_id/* drivers/input/misc/twl6040-vibra.c 213 */;
	struct input_dev *cocci_id/* drivers/input/misc/twl6040-vibra.c 203 */;
	void cocci_id/* drivers/input/misc/twl6040-vibra.c 203 */;
	struct ff_effect *cocci_id/* drivers/input/misc/twl6040-vibra.c 190 */;
	struct vibra_info cocci_id/* drivers/input/misc/twl6040-vibra.c 169 */;
	struct work_struct *cocci_id/* drivers/input/misc/twl6040-vibra.c 166 */;
}
