cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/input/touchscreen/jornada720_ts.c 68 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/jornada720_ts.c 66 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/jornada720_ts.c 64 */;
	void *cocci_id/* drivers/input/touchscreen/jornada720_ts.c 64 */;
	int cocci_id/* drivers/input/touchscreen/jornada720_ts.c 53 */[4];
	int cocci_id/* drivers/input/touchscreen/jornada720_ts.c 53 */;
	struct jornada_ts *cocci_id/* drivers/input/touchscreen/jornada720_ts.c 34 */;
	void cocci_id/* drivers/input/touchscreen/jornada720_ts.c 34 */;
	struct jornada_ts {
		struct input_dev *dev;
		struct gpio_desc *gpio;
		int x_data[4];
		int y_data[4];
	} cocci_id/* drivers/input/touchscreen/jornada720_ts.c 27 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/jornada720_ts.c 151 */;
}
