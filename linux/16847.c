cocci_test_suite() {
	bool cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 74 */;
	struct pm8xxx_vib {
		struct input_dev *vib_input_dev;
		struct work_struct work;
		struct regmap *regmap;
		const struct pm8xxx_regs *regs;
		int speed;
		int level;
		bool active;
		u8 reg_vib_drv;
	} cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 58 */;
	struct pm8xxx_regs cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 38 */;
	const struct pm8xxx_regs cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 31 */;
	struct platform_driver cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 249 */;
	const struct of_device_id cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 241 */[];
	struct device *cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 229 */;
	int __maybe_unused cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 229 */;
	struct pm8xxx_regs {
		unsigned int enable_addr;
		unsigned int enable_mask;
		unsigned int drv_addr;
		unsigned int drv_mask;
		unsigned int drv_shift;
		unsigned int drv_en_manual_mask;
	} cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 21 */;
	const struct pm8xxx_regs *cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 173 */;
	unsigned int cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 172 */;
	struct platform_device *cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 167 */;
	struct ff_effect *cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 154 */;
	void *cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 153 */;
	int cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 153 */;
	struct pm8xxx_vib *cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 138 */;
	struct input_dev *cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 136 */;
	void cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 136 */;
	struct pm8xxx_vib cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 104 */;
	struct work_struct *cocci_id/* drivers/input/misc/pm8xxx-vibrator.c 102 */;
}
