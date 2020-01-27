cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 88 */[2];
	unsigned char *cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 84 */;
	unsigned char cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 84 */;
	unsigned char cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 67 */[6];
	bool cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 56 */;
	void cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 56 */;
	struct cy8ctmg110 {
		struct input_dev *input;
		char phys[32];
		struct i2c_client *client;
		int reset_pin;
		int irq_pin;
	} cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 44 */;
	struct i2c_driver cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 336 */;
	const struct i2c_device_id cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 329 */[];
	struct device *cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 296 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 296 */;
	struct cy8ctmg110 cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 184 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 171 */;
	const struct cy8ctmg110_pdata *cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 169 */;
	const struct i2c_device_id *cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 167 */;
	struct i2c_client *cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 166 */;
	struct cy8ctmg110 *cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 159 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 157 */;
	void *cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 157 */;
	int cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 157 */;
	unsigned char cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 142 */[3];
	unsigned char cocci_id/* drivers/input/touchscreen/cy8ctmg110_ts.c 114 */[CY8CTMG110_REG_MAX];
}
