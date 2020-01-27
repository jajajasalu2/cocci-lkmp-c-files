cocci_test_suite() {
	int cocci_id/* drivers/input/misc/gp2ap002a00f.c 90 */;
	struct gp2a_data *cocci_id/* drivers/input/misc/gp2ap002a00f.c 89 */;
	struct input_dev *cocci_id/* drivers/input/misc/gp2ap002a00f.c 87 */;
	void cocci_id/* drivers/input/misc/gp2ap002a00f.c 87 */;
	irqreturn_t cocci_id/* drivers/input/misc/gp2ap002a00f.c 49 */;
	void *cocci_id/* drivers/input/misc/gp2ap002a00f.c 49 */;
	enum gp2a_controls{GP2A_CTRL_SSD=0x01,} cocci_id/* drivers/input/misc/gp2ap002a00f.c 34 */;
	struct i2c_driver cocci_id/* drivers/input/misc/gp2ap002a00f.c 267 */;
	const struct i2c_device_id cocci_id/* drivers/input/misc/gp2ap002a00f.c 261 */[];
	enum gp2a_addr{GP2A_ADDR_PROX=0x0, GP2A_ADDR_GAIN=0x1, GP2A_ADDR_HYS=0x2, GP2A_ADDR_CYCLE=0x3, GP2A_ADDR_OPMOD=0x4, GP2A_ADDR_CON=0x6,} cocci_id/* drivers/input/misc/gp2ap002a00f.c 25 */;
	struct device *cocci_id/* drivers/input/misc/gp2ap002a00f.c 241 */;
	int __maybe_unused cocci_id/* drivers/input/misc/gp2ap002a00f.c 241 */;
	struct gp2a_data {
		struct input_dev *input;
		const struct gp2a_platform_data *pdata;
		struct i2c_client *i2c_client;
	} cocci_id/* drivers/input/misc/gp2ap002a00f.c 19 */;
	struct gp2a_data cocci_id/* drivers/input/misc/gp2ap002a00f.c 142 */;
	const struct gp2a_platform_data *cocci_id/* drivers/input/misc/gp2ap002a00f.c 125 */;
	const struct i2c_device_id *cocci_id/* drivers/input/misc/gp2ap002a00f.c 123 */;
	struct i2c_client *cocci_id/* drivers/input/misc/gp2ap002a00f.c 122 */;
}
