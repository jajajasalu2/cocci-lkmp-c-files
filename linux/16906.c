cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/input/mouse/synaptics_i2c.c 649 */;
	const struct of_device_id cocci_id/* drivers/input/mouse/synaptics_i2c.c 642 */[];
	const struct i2c_device_id cocci_id/* drivers/input/mouse/synaptics_i2c.c 635 */[];
	struct device *cocci_id/* drivers/input/mouse/synaptics_i2c.c 616 */;
	int __maybe_unused cocci_id/* drivers/input/mouse/synaptics_i2c.c 616 */;
	const struct i2c_device_id *cocci_id/* drivers/input/mouse/synaptics_i2c.c 525 */;
	struct synaptics_i2c cocci_id/* drivers/input/mouse/synaptics_i2c.c 511 */;
	struct input_dev *cocci_id/* drivers/input/mouse/synaptics_i2c.c 470 */;
	struct work_struct *cocci_id/* drivers/input/mouse/synaptics_i2c.c 431 */;
	unsigned long cocci_id/* drivers/input/mouse/synaptics_i2c.c 407 */;
	irqreturn_t cocci_id/* drivers/input/mouse/synaptics_i2c.c 371 */;
	void *cocci_id/* drivers/input/mouse/synaptics_i2c.c 371 */;
	s8 cocci_id/* drivers/input/mouse/synaptics_i2c.c 340 */;
	s32 cocci_id/* drivers/input/mouse/synaptics_i2c.c 339 */;
	struct i2c_client *cocci_id/* drivers/input/mouse/synaptics_i2c.c 322 */;
	u8 cocci_id/* drivers/input/mouse/synaptics_i2c.c 277 */;
	u16 cocci_id/* drivers/input/mouse/synaptics_i2c.c 241 */;
	struct synaptics_i2c *cocci_id/* drivers/input/mouse/synaptics_i2c.c 230 */;
	void cocci_id/* drivers/input/mouse/synaptics_i2c.c 230 */;
	struct synaptics_i2c {
		struct i2c_client *client;
		struct input_dev *input;
		struct delayed_work dwork;
		int no_data_count;
		int no_decel_param;
		int reduce_report_param;
		int no_filter_param;
		int scan_rate_param;
		int scan_ms;
	} cocci_id/* drivers/input/mouse/synaptics_i2c.c 218 */;
	int cocci_id/* drivers/input/mouse/synaptics_i2c.c 213 */;
	bool cocci_id/* drivers/input/mouse/synaptics_i2c.c 188 */;
}
