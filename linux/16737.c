cocci_test_suite() {
	struct pmic8xxx_kp {
		unsigned int num_rows;
		unsigned int num_cols;
		struct input_dev *input;
		struct regmap *regmap;
		int key_sense_irq;
		int key_stuck_irq;
		unsigned short keycodes[PM8XXX_MATRIX_MAX_SIZE];
		struct device *dev;
		u16 keystate[PM8XXX_MAX_ROWS];
		u16 stuckstate[PM8XXX_MAX_ROWS];
		u8 ctrl_reg;
	} cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 91 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 676 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 669 */[];
	struct device *cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 645 */;
	struct device_node *cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 502 */;
	struct platform_device *cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 500 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 483 */;
	const u8 cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 375 */[];
	const struct device_node *cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 369 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 345 */;
	void *cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 345 */;
	u16 cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 276 */[PM8XXX_MAX_ROWS];
	u16 cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 253 */;
	bool cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 250 */;
	int cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 222 */;
	u16 *cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 219 */;
	struct pmic8xxx_kp *cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 219 */;
	void cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 219 */;
	unsigned int cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 132 */;
	u8 cocci_id/* drivers/input/keyboard/pmic8xxx-keypad.c 108 */;
}
