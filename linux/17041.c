cocci_test_suite() {
	struct walkera_dev {
		unsigned char buf[25];
		u64 irq_time,irq_lasttime;
		int counter;
		int ack;
		struct input_dev *input_dev;
		struct hrtimer timer;
		struct parport *parport;
		struct pardevice *pardevice;
	} cocci_id/* drivers/input/joystick/walkera0701.c 47 */;
	unsigned int cocci_id/* drivers/input/joystick/walkera0701.c 36 */;
	void __exit cocci_id/* drivers/input/joystick/walkera0701.c 304 */;
	int __init cocci_id/* drivers/input/joystick/walkera0701.c 299 */;
	struct parport_driver cocci_id/* drivers/input/joystick/walkera0701.c 292 */;
	struct pardev_cb cocci_id/* drivers/input/joystick/walkera0701.c 201 */;
	struct parport *cocci_id/* drivers/input/joystick/walkera0701.c 199 */;
	void cocci_id/* drivers/input/joystick/walkera0701.c 199 */;
	struct input_dev *cocci_id/* drivers/input/joystick/walkera0701.c 189 */;
	struct walkera_dev cocci_id/* drivers/input/joystick/walkera0701.c 172 */;
	struct walkera_dev *cocci_id/* drivers/input/joystick/walkera0701.c 170 */;
	enum hrtimer_restart cocci_id/* drivers/input/joystick/walkera0701.c 167 */;
	struct hrtimer *cocci_id/* drivers/input/joystick/walkera0701.c 167 */;
	u32 cocci_id/* drivers/input/joystick/walkera0701.c 155 */;
	u64 cocci_id/* drivers/input/joystick/walkera0701.c 125 */;
	void *cocci_id/* drivers/input/joystick/walkera0701.c 123 */;
	struct pardevice *cocci_id/* drivers/input/joystick/walkera0701.c 117 */;
	int cocci_id/* drivers/input/joystick/walkera0701.c 117 */;
}
