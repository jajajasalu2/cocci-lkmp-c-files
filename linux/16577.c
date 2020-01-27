cocci_test_suite() {
	char *cocci_id/* drivers/s390/char/con3270.c 93 */;
	void cocci_id/* drivers/s390/char/con3270.c 72 */(struct timer_list *);
	void (*cocci_id/* drivers/s390/char/con3270.c 629 */)(unsigned long);
	struct con3270 cocci_id/* drivers/s390/char/con3270.c 614 */;
	struct raw3270 *cocci_id/* drivers/s390/char/con3270.c 596 */;
	int __init cocci_id/* drivers/s390/char/con3270.c 593 */;
	struct console cocci_id/* drivers/s390/char/con3270.c 583 */;
	struct notifier_block cocci_id/* drivers/s390/char/con3270.c 570 */;
	struct notifier_block *cocci_id/* drivers/s390/char/con3270.c 563 */;
	unsigned long cocci_id/* drivers/s390/char/con3270.c 542 */;
	struct console *cocci_id/* drivers/s390/char/con3270.c 516 */;
	int *cocci_id/* drivers/s390/char/con3270.c 516 */;
	struct tty_driver *cocci_id/* drivers/s390/char/con3270.c 515 */;
	const char *cocci_id/* drivers/s390/char/con3270.c 491 */;
	unsigned int cocci_id/* drivers/s390/char/con3270.c 463 */;
	unsigned char cocci_id/* drivers/s390/char/con3270.c 449 */;
	void cocci_id/* drivers/s390/char/con3270.c 437 */;
	void *cocci_id/* drivers/s390/char/con3270.c 434 */;
	struct raw3270_request *cocci_id/* drivers/s390/char/con3270.c 411 */;
	struct irb *cocci_id/* drivers/s390/char/con3270.c 411 */;
	struct con3270 {
		struct raw3270_view view;
		struct list_head freemem;
		struct list_head lines;
		struct list_head update;
		int line_nr;
		int nr_lines;
		int nr_up;
		unsigned long update_flags;
		struct string *cline;
		struct string *status;
		struct raw3270_request *write;
		struct timer_list timer;
		struct string *input;
		struct raw3270_request *read;
		struct raw3270_request *kreset;
		struct tasklet_struct readlet;
	} cocci_id/* drivers/s390/char/con3270.c 41 */;
	struct con3270 *cocci_id/* drivers/s390/char/con3270.c 393 */;
	struct raw3270_view *cocci_id/* drivers/s390/char/con3270.c 391 */;
	int cocci_id/* drivers/s390/char/con3270.c 390 */;
	bool cocci_id/* drivers/s390/char/con3270.c 35 */;
	struct raw3270_fn cocci_id/* drivers/s390/char/con3270.c 33 */;
	char cocci_id/* drivers/s390/char/con3270.c 296 */;
	struct timer_list *cocci_id/* drivers/s390/char/con3270.c 208 */;
	size_t cocci_id/* drivers/s390/char/con3270.c 169 */;
	struct string *cocci_id/* drivers/s390/char/con3270.c 168 */;
	const unsigned char cocci_id/* drivers/s390/char/con3270.c 104 */[];
}
