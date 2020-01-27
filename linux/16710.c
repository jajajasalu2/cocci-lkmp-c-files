cocci_test_suite() {
	unsigned short cocci_id/* drivers/input/keyboard/locomokbd.c 89 */;
	int cocci_id/* drivers/input/keyboard/locomokbd.c 87 */;
	unsigned long cocci_id/* drivers/input/keyboard/locomokbd.c 77 */;
	void cocci_id/* drivers/input/keyboard/locomokbd.c 77 */;
	struct locomokbd {
		unsigned char keycode[LOCOMOKBD_NUMKEYS];
		struct input_dev *input;
		char phys[32];
		unsigned long base;
		spinlock_t lock;
		struct timer_list timer;
		unsigned long suspend_jiffies;
		unsigned int count_cancel;
	} cocci_id/* drivers/input/keyboard/locomokbd.c 58 */;
	void __exit cocci_id/* drivers/input/keyboard/locomokbd.c 339 */;
	int __init cocci_id/* drivers/input/keyboard/locomokbd.c 334 */;
	const unsigned char cocci_id/* drivers/input/keyboard/locomokbd.c 33 */[LOCOMOKBD_NUMKEYS];
	struct locomo_driver cocci_id/* drivers/input/keyboard/locomokbd.c 325 */;
	struct locomokbd cocci_id/* drivers/input/keyboard/locomokbd.c 230 */;
	struct locomo_dev *cocci_id/* drivers/input/keyboard/locomokbd.c 224 */;
	u16 cocci_id/* drivers/input/keyboard/locomokbd.c 218 */;
	struct locomokbd *cocci_id/* drivers/input/keyboard/locomokbd.c 217 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/locomokbd.c 215 */;
	struct timer_list *cocci_id/* drivers/input/keyboard/locomokbd.c 198 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/locomokbd.c 177 */;
	void *cocci_id/* drivers/input/keyboard/locomokbd.c 177 */;
	unsigned int cocci_id/* drivers/input/keyboard/locomokbd.c 114 */;
}
