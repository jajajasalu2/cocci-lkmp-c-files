cocci_test_suite() {
	u16 cocci_id/* drivers/input/touchscreen/wm831x-ts.c 88 */[3];
	int cocci_id/* drivers/input/touchscreen/wm831x-ts.c 87 */[];
	struct wm831x *cocci_id/* drivers/input/touchscreen/wm831x-ts.c 86 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/wm831x-ts.c 83 */;
	void *cocci_id/* drivers/input/touchscreen/wm831x-ts.c 83 */;
	int cocci_id/* drivers/input/touchscreen/wm831x-ts.c 83 */;
	struct wm831x_ts cocci_id/* drivers/input/touchscreen/wm831x-ts.c 72 */;
	struct wm831x_ts *cocci_id/* drivers/input/touchscreen/wm831x-ts.c 71 */;
	struct work_struct *cocci_id/* drivers/input/touchscreen/wm831x-ts.c 69 */;
	void cocci_id/* drivers/input/touchscreen/wm831x-ts.c 69 */;
	struct wm831x_ts {
		struct input_dev *input_dev;
		struct wm831x *wm831x;
		unsigned int data_irq;
		unsigned int pd_irq;
		bool pressure;
		bool pen_down;
		struct work_struct pd_data_work;
	} cocci_id/* drivers/input/touchscreen/wm831x-ts.c 59 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/wm831x-ts.c 388 */;
	struct wm831x_touch_pdata *cocci_id/* drivers/input/touchscreen/wm831x-ts.c 236 */;
	struct wm831x_pdata *cocci_id/* drivers/input/touchscreen/wm831x-ts.c 235 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/wm831x-ts.c 231 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/wm831x-ts.c 202 */;
}
