cocci_test_suite() {
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-kempld.c 86 */;
	bool cocci_id/* drivers/i2c/busses/i2c-kempld.c 75 */;
	int cocci_id/* drivers/i2c/busses/i2c-kempld.c 71 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-kempld.c 66 */;
	struct kempld_i2c_data {
		struct device *dev;
		struct kempld_device_data *pld;
		struct i2c_adapter adap;
		struct i2c_msg *msg;
		int pos;
		int nmsgs;
		int state;
		bool was_active;
	} cocci_id/* drivers/i2c/busses/i2c-kempld.c 55 */;
	enum{STATE_DONE=0, STATE_INIT, STATE_ADDR, STATE_ADDR10, STATE_START, STATE_WRITE, STATE_READ, STATE_ERROR,} cocci_id/* drivers/i2c/busses/i2c-kempld.c 44 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-kempld.c 385 */;
	pm_message_t cocci_id/* drivers/i2c/busses/i2c-kempld.c 354 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-kempld.c 290 */;
	const struct i2c_adapter cocci_id/* drivers/i2c/busses/i2c-kempld.c 283 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-kempld.c 278 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-kempld.c 273 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-kempld.c 273 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-kempld.c 227 */;
	long cocci_id/* drivers/i2c/busses/i2c-kempld.c 226 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-kempld.c 225 */;
	struct kempld_device_data *cocci_id/* drivers/i2c/busses/i2c-kempld.c 224 */;
	struct kempld_i2c_data *cocci_id/* drivers/i2c/busses/i2c-kempld.c 222 */;
	void cocci_id/* drivers/i2c/busses/i2c-kempld.c 222 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-kempld.c 191 */;
}
