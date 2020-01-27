cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/touchscreen/st1232.c 90 */;
	u8 *cocci_id/* drivers/input/touchscreen/st1232.c 87 */;
	int cocci_id/* drivers/input/touchscreen/st1232.c 82 */[ST_TS_MAX_FINGERS];
	u8 cocci_id/* drivers/input/touchscreen/st1232.c 81 */[ST_TS_MAX_FINGERS];
	struct input_mt_pos cocci_id/* drivers/input/touchscreen/st1232.c 80 */[ST_TS_MAX_FINGERS];
	struct input_dev *cocci_id/* drivers/input/touchscreen/st1232.c 79 */;
	struct i2c_msg cocci_id/* drivers/input/touchscreen/st1232.c 55 */[];
	u8 cocci_id/* drivers/input/touchscreen/st1232.c 54 */;
	struct st1232_ts_data {
		struct i2c_client *client;
		struct input_dev *input_dev;
		struct touchscreen_properties prop;
		struct dev_pm_qos_request low_latency_req;
		struct gpio_desc *reset_gpio;
		const struct st_chip_info *chip_info;
		int read_buf_len;
		u8 *read_buf;
	} cocci_id/* drivers/input/touchscreen/st1232.c 40 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/st1232.c 325 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/st1232.c 318 */[];
	unsigned long cocci_id/* drivers/input/touchscreen/st1232.c 312 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/st1232.c 311 */[];
	struct st_chip_info {
		bool have_z;
		u16 max_x;
		u16 max_y;
		u16 max_area;
		u16 max_fingers;
		u8 start_reg;
	} cocci_id/* drivers/input/touchscreen/st1232.c 31 */;
	struct device *cocci_id/* drivers/input/touchscreen/st1232.c 295 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/st1232.c 295 */;
	const void *cocci_id/* drivers/input/touchscreen/st1232.c 186 */;
	const struct st_chip_info *cocci_id/* drivers/input/touchscreen/st1232.c 179 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/st1232.c 177 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/st1232.c 176 */;
	const struct st_chip_info cocci_id/* drivers/input/touchscreen/st1232.c 158 */;
	bool cocci_id/* drivers/input/touchscreen/st1232.c 147 */;
	void cocci_id/* drivers/input/touchscreen/st1232.c 147 */;
	struct st1232_ts_data *cocci_id/* drivers/input/touchscreen/st1232.c 122 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/st1232.c 120 */;
	void *cocci_id/* drivers/input/touchscreen/st1232.c 120 */;
	int cocci_id/* drivers/input/touchscreen/st1232.c 120 */;
}
