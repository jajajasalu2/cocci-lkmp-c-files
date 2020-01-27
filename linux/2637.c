cocci_test_suite() {
	struct meson_i2c {
		struct i2c_adapter adap;
		struct device *dev;
		void __iomem *regs;
		struct clk *clk;
		struct i2c_msg *msg;
		int state;
		bool last;
		int count;
		int pos;
		int error;
		spinlock_t lock;
		struct completion done;
		u32 tokens[2];
		int num_tokens;
		const struct meson_i2c_data *data;
	} cocci_id/* drivers/i2c/busses/i2c-meson.c 81 */;
	struct meson_i2c_data {
		unsigned char div_factor;
	} cocci_id/* drivers/i2c/busses/i2c-meson.c 58 */;
	enum{STATE_IDLE, STATE_READ, STATE_WRITE,} cocci_id/* drivers/i2c/busses/i2c-meson.c 52 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-meson.c 471 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-meson.c 462 */[];
	const struct meson_i2c_data cocci_id/* drivers/i2c/busses/i2c-meson.c 458 */;
	enum{TOKEN_END=0, TOKEN_START, TOKEN_SLAVE_ADDR_WRITE, TOKEN_SLAVE_ADDR_READ, TOKEN_DATA, TOKEN_DATA_LAST, TOKEN_STOP,} cocci_id/* drivers/i2c/busses/i2c-meson.c 42 */;
	const struct meson_i2c_data *cocci_id/* drivers/i2c/busses/i2c-meson.c 383 */;
	struct meson_i2c cocci_id/* drivers/i2c/busses/i2c-meson.c 371 */;
	struct i2c_timings cocci_id/* drivers/i2c/busses/i2c-meson.c 368 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-meson.c 367 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-meson.c 365 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-meson.c 363 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-meson.c 358 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-meson.c 353 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-meson.c 353 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-meson.c 269 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-meson.c 219 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-meson.c 216 */;
	void *cocci_id/* drivers/i2c/busses/i2c-meson.c 216 */;
	bool cocci_id/* drivers/i2c/busses/i2c-meson.c 191 */;
	char *cocci_id/* drivers/i2c/busses/i2c-meson.c 153 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-meson.c 132 */;
	struct meson_i2c *cocci_id/* drivers/i2c/busses/i2c-meson.c 120 */;
	int cocci_id/* drivers/i2c/busses/i2c-meson.c 120 */;
	void cocci_id/* drivers/i2c/busses/i2c-meson.c 120 */;
}
