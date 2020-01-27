cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/input/touchscreen/bu21029_ts.c 471 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/bu21029_ts.c 464 */[];
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/bu21029_ts.c 457 */[];
	struct device *cocci_id/* drivers/input/touchscreen/bu21029_ts.c 441 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/bu21029_ts.c 441 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/bu21029_ts.c 338 */;
	struct bu21029_ts_data *cocci_id/* drivers/input/touchscreen/bu21029_ts.c 337 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/bu21029_ts.c 335 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/bu21029_ts.c 334 */;
	int cocci_id/* drivers/input/touchscreen/bu21029_ts.c 334 */;
	u8 *cocci_id/* drivers/input/touchscreen/bu21029_ts.c 282 */;
	__be16 cocci_id/* drivers/input/touchscreen/bu21029_ts.c 267 */;
	struct {
		u8 reg;
		u8 value;
	} cocci_id/* drivers/input/touchscreen/bu21029_ts.c 256 */[];
	void cocci_id/* drivers/input/touchscreen/bu21029_ts.c 244 */;
	u8 cocci_id/* drivers/input/touchscreen/bu21029_ts.c 222 */[BUF_LEN];
	irqreturn_t cocci_id/* drivers/input/touchscreen/bu21029_ts.c 219 */;
	void *cocci_id/* drivers/input/touchscreen/bu21029_ts.c 219 */;
	struct timer_list *cocci_id/* drivers/input/touchscreen/bu21029_ts.c 210 */;
	s32 cocci_id/* drivers/input/touchscreen/bu21029_ts.c 169 */;
	u32 cocci_id/* drivers/input/touchscreen/bu21029_ts.c 168 */;
	u16 cocci_id/* drivers/input/touchscreen/bu21029_ts.c 167 */;
	const u8 *cocci_id/* drivers/input/touchscreen/bu21029_ts.c 165 */;
	struct bu21029_ts_data {
		struct i2c_client *client;
		struct input_dev *in_dev;
		struct timer_list timer;
		struct regulator *vdd;
		struct gpio_desc *reset_gpios;
		u32 x_plate_ohms;
		struct touchscreen_properties prop;
	} cocci_id/* drivers/input/touchscreen/bu21029_ts.c 155 */;
}
