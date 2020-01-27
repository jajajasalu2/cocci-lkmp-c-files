cocci_test_suite() {
	struct ab8500_ponkey cocci_id/* drivers/input/misc/ab8500-ponkey.c 65 */;
	struct input_dev *cocci_id/* drivers/input/misc/ab8500-ponkey.c 53 */;
	struct ab8500 *cocci_id/* drivers/input/misc/ab8500-ponkey.c 51 */;
	struct platform_device *cocci_id/* drivers/input/misc/ab8500-ponkey.c 49 */;
	struct ab8500_ponkey *cocci_id/* drivers/input/misc/ab8500-ponkey.c 37 */;
	irqreturn_t cocci_id/* drivers/input/misc/ab8500-ponkey.c 35 */;
	void *cocci_id/* drivers/input/misc/ab8500-ponkey.c 35 */;
	int cocci_id/* drivers/input/misc/ab8500-ponkey.c 35 */;
	struct ab8500_ponkey {
		struct input_dev *idev;
		struct ab8500 *ab8500;
		int irq_dbf;
		int irq_dbr;
	} cocci_id/* drivers/input/misc/ab8500-ponkey.c 27 */;
	struct platform_driver cocci_id/* drivers/input/misc/ab8500-ponkey.c 119 */;
	const struct of_device_id cocci_id/* drivers/input/misc/ab8500-ponkey.c 112 */[];
}
