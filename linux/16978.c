cocci_test_suite() {
	u8 cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 61 */;
	u16 *cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 61 */;
	s32 cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 60 */;
	struct tps6507x_ts *cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 60 */;
	u8 *cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 50 */;
	int cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 50 */;
	struct tps6507x_ts {
		struct device *dev;
		struct input_dev *input;
		struct tps6507x_dev *mfd;
		char phys[32];
		struct ts_event tc;
		u16 min_pressure;
		bool pendown;
	} cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 40 */;
	struct ts_event {
		u16 x;
		u16 y;
		u16 pressure;
	} cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 34 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 283 */;
	struct tps6507x_ts cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 226 */;
	const struct touchscreen_init_data *cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 204 */;
	const struct tps6507x_board *cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 203 */;
	struct tps6507x_dev *cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 202 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 200 */;
	bool cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 153 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 150 */;
	void cocci_id/* drivers/input/touchscreen/tps6507x-ts.c 150 */;
}
