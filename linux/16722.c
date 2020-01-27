cocci_test_suite() {
	struct {
		struct input_dev *dev;
		unsigned int curdev;
		unsigned char s;
		unsigned char c;
		int valid;
		unsigned char data[16];
		unsigned int ptr;
		spinlock_t lock;
		void *dev_id;
	} cocci_id/* drivers/input/keyboard/hilkbd.c 93 */;
	unsigned int cocci_id/* drivers/input/keyboard/hilkbd.c 89 */[HIL_KEYCODES_SET1_TBLSIZE]__read_mostly;
	volatile void __iomem *cocci_id/* drivers/input/keyboard/hilkbd.c 57 */;
	const volatile void __iomem *cocci_id/* drivers/input/keyboard/hilkbd.c 56 */;
	unsigned long cocci_id/* drivers/input/keyboard/hilkbd.c 41 */;
	void *cocci_id/* drivers/input/keyboard/hilkbd.c 366 */;
	int cocci_id/* drivers/input/keyboard/hilkbd.c 357 */;
	void __exit cocci_id/* drivers/input/keyboard/hilkbd.c 348 */;
	int __init cocci_id/* drivers/input/keyboard/hilkbd.c 343 */;
	struct parisc_driver cocci_id/* drivers/input/keyboard/hilkbd.c 336 */;
	const struct parisc_device_id cocci_id/* drivers/input/keyboard/hilkbd.c 326 */[]__initconst;
	int __exit cocci_id/* drivers/input/keyboard/hilkbd.c 319 */;
	struct parisc_device *cocci_id/* drivers/input/keyboard/hilkbd.c 298 */;
	wait_queue_head_t cocci_id/* drivers/input/keyboard/hilkbd.c 203 */;
	unsigned char *cocci_id/* drivers/input/keyboard/hilkbd.c 181 */;
	unsigned int cocci_id/* drivers/input/keyboard/hilkbd.c 181 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/hilkbd.c 155 */;
	unsigned char cocci_id/* drivers/input/keyboard/hilkbd.c 145 */;
	void cocci_id/* drivers/input/keyboard/hilkbd.c 145 */;
}
