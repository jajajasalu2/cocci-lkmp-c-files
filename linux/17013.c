cocci_test_suite() {
	uint8_t cocci_id/* drivers/input/touchscreen/da9034-ts.c 83 */;
	struct da9034_touch {
		struct device *da9034_dev;
		struct input_dev *input_dev;
		struct delayed_work tsi_work;
		struct notifier_block notifier;
		int state;
		int interval_ms;
		int x_inverted;
		int y_inverted;
		int last_x;
		int last_y;
	} cocci_id/* drivers/input/touchscreen/da9034-ts.c 49 */;
	enum{EVENT_PEN_DOWN, EVENT_PEN_UP, EVENT_TSI_READY, EVENT_TIMEDOUT,} cocci_id/* drivers/input/touchscreen/da9034-ts.c 42 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/da9034-ts.c 354 */;
	enum{STATE_IDLE, STATE_BUSY, STATE_STOP, STATE_WAIT,} cocci_id/* drivers/input/touchscreen/da9034-ts.c 35 */;
	struct da9034_touch_pdata *cocci_id/* drivers/input/touchscreen/da9034-ts.c 298 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/da9034-ts.c 296 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/da9034-ts.c 277 */;
	struct da9034_touch cocci_id/* drivers/input/touchscreen/da9034-ts.c 235 */;
	void *cocci_id/* drivers/input/touchscreen/da9034-ts.c 232 */;
	unsigned long cocci_id/* drivers/input/touchscreen/da9034-ts.c 232 */;
	struct notifier_block *cocci_id/* drivers/input/touchscreen/da9034-ts.c 231 */;
	struct work_struct *cocci_id/* drivers/input/touchscreen/da9034-ts.c 223 */;
	struct da9034_touch *cocci_id/* drivers/input/touchscreen/da9034-ts.c 141 */;
	int cocci_id/* drivers/input/touchscreen/da9034-ts.c 141 */;
	void cocci_id/* drivers/input/touchscreen/da9034-ts.c 141 */;
}
