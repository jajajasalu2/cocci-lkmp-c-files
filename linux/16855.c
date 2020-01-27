cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 83 */;
	void *cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 83 */;
	struct pmic8xxx_pwrkey {
		int key_press_irq;
		struct regmap *regmap;
		int (*shutdown_fn)(struct pmic8xxx_pwrkey *, bool);
	} cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 77 */;
	struct platform_driver cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 440 */;
	const struct of_device_id cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 433 */[];
	u32 cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 342 */;
	struct input_dev *cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 334 */;
	struct platform_device *cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 332 */;
	bool cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 280 */;
	struct pmic8xxx_pwrkey *cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 280 */;
	u8 cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 264 */;
	u16 cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 264 */;
	struct regmap *cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 263 */;
	int cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 263 */;
	unsigned int cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 165 */;
	void cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 126 */;
	struct device *cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 113 */;
	int __maybe_unused cocci_id/* drivers/input/misc/pmic8xxx-pwrkey.c 113 */;
}
