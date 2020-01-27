cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 667 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 660 */[];
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 653 */[];
	struct auo_pixcir_ts cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 539 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 523 */;
	struct device_node *cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 472 */;
	struct device *cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 469 */;
	struct auo_pixcir_ts_platdata *cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 469 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 435 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 396 */;
	void cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 396 */;
	bool cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 313 */;
	struct auo_point_t cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 175 */[AUO_PIXCIR_REPORT_POINTS];
	irqreturn_t cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 171 */;
	void *cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 171 */;
	uint8_t cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 130 */[4];
	uint8_t cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 129 */[8];
	const struct auo_pixcir_ts_platdata *cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 128 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 127 */;
	struct auo_point_t *cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 125 */;
	struct auo_pixcir_ts *cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 124 */;
	int cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 124 */;
	struct auo_point_t {
		int coord_x;
		int coord_y;
		int area_major;
		int area_minor;
		int orientation;
	} cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 116 */;
	struct auo_pixcir_ts {
		struct i2c_client *client;
		struct input_dev *input;
		const struct auo_pixcir_ts_platdata *pdata;
		char phys[32];
		bool touch_ind_mode;
		wait_queue_head_t wait;
		bool stopped;
	} cocci_id/* drivers/input/touchscreen/auo-pixcir-ts.c 103 */;
}
