cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/input/misc/atmel_captouch.c 88 */[2];
	u8 *cocci_id/* drivers/input/misc/atmel_captouch.c 84 */;
	size_t cocci_id/* drivers/input/misc/atmel_captouch.c 84 */;
	struct atmel_captouch_device {
		struct i2c_client *client;
		struct input_dev *input;
		u32 num_btn;
		u32 keycodes[MAX_NUM_OF_BUTTONS];
		u8 prev_btn;
		u8 xfer_buf[8]____cacheline_aligned;
	} cocci_id/* drivers/input/misc/atmel_captouch.c 68 */;
	struct i2c_driver cocci_id/* drivers/input/misc/atmel_captouch.c 268 */;
	const struct i2c_device_id cocci_id/* drivers/input/misc/atmel_captouch.c 262 */[];
	const struct of_device_id cocci_id/* drivers/input/misc/atmel_captouch.c 253 */[];
	struct device_node *cocci_id/* drivers/input/misc/atmel_captouch.c 169 */;
	const struct i2c_device_id *cocci_id/* drivers/input/misc/atmel_captouch.c 165 */;
	struct i2c_client *cocci_id/* drivers/input/misc/atmel_captouch.c 164 */;
	u8 cocci_id/* drivers/input/misc/atmel_captouch.c 134 */;
	struct device *cocci_id/* drivers/input/misc/atmel_captouch.c 131 */;
	struct atmel_captouch_device *cocci_id/* drivers/input/misc/atmel_captouch.c 130 */;
	irqreturn_t cocci_id/* drivers/input/misc/atmel_captouch.c 128 */;
	void *cocci_id/* drivers/input/misc/atmel_captouch.c 128 */;
	int cocci_id/* drivers/input/misc/atmel_captouch.c 128 */;
}
