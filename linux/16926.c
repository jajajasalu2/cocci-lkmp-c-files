cocci_test_suite() {
	u8 cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 99 */;
	u8 *cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 98 */;
	u8 cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 97 */[1];
	u8 cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 96 */[2 + PIXCIR_MAX_SLOTS * 5];
	struct pixcir_report_data *cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 94 */;
	struct pixcir_report_data {
		int num_touches;
		struct input_mt_pos pos[PIXCIR_MAX_SLOTS];
		int ids[PIXCIR_MAX_SLOTS];
	} cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 87 */;
	struct pixcir_i2c_ts_data {
		struct i2c_client *client;
		struct input_dev *input;
		struct gpio_desc *gpio_attb;
		struct gpio_desc *gpio_reset;
		struct gpio_desc *gpio_enable;
		struct gpio_desc *gpio_wake;
		const struct pixcir_i2c_chip_data *chip;
		struct touchscreen_properties prop;
		bool running;
	} cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 75 */;
	struct pixcir_i2c_chip_data {
		u8 max_fingers;
		bool has_hw_ids;
	} cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 70 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 614 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 606 */[];
	unsigned long cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 599 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 598 */[];
	const struct pixcir_i2c_chip_data cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 593 */;
	enum pixcir_int_mode{PIXCIR_INT_PERIODICAL, PIXCIR_INT_DIFF_COORD, PIXCIR_INT_LEVEL_TOUCH, PIXCIR_INT_PULSE_TOUCH,} cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 53 */;
	const void *cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 479 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 470 */;
	struct pixcir_i2c_ts_data *cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 469 */;
	struct device *cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 468 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 466 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 465 */;
	int cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 465 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 435 */;
	void cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 401 */;
	enum pixcir_power_mode{PIXCIR_POWER_ACTIVE, PIXCIR_POWER_IDLE, PIXCIR_POWER_HALT,} cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 36 */;
	bool cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 310 */;
	enum pixcir_int_mode cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 277 */;
	enum pixcir_power_mode cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 233 */;
	struct pixcir_report_data cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 194 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 191 */;
	void *cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 191 */;
	int cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 150 */[PIXCIR_MAX_SLOTS];
	const struct pixcir_i2c_chip_data *cocci_id/* drivers/input/touchscreen/pixcir_i2c_ts.c 102 */;
}
