cocci_test_suite() {
	u32 cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 76 */[4];
	struct titsc *cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 74 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 546 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 540 */[];
	struct device *cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 522 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 522 */;
	u32 cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 490 */;
	struct titsc {
		struct input_dev *input;
		struct ti_tscadc_dev *mfd_tscadc;
		struct device *dev;
		unsigned int irq;
		unsigned int wires;
		unsigned int x_plate_resistance;
		bool pen_down;
		int coordinate_readouts;
		u32 config_inp[4];
		u32 bit_xp,bit_xn,bit_yp,bit_yn;
		u32 inp_xp,inp_xn,inp_yp,inp_yn;
		u32 step_mask;
		u32 charge_delay;
	} cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 47 */;
	struct ti_tscadc_dev *cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 411 */;
	const int cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 40 */[];
	struct device_node *cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 344 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 341 */;
	unsigned int cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 273 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 272 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 269 */;
	void *cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 269 */;
	unsigned int cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 220 */[7];
	u32 *cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 218 */;
	void cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 217 */;
	int *cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 214 */;
	const void *cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 212 */;
	int cocci_id/* drivers/input/touchscreen/ti_am335x_tsc.c 212 */;
}
