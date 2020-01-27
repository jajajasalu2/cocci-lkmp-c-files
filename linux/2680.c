cocci_test_suite() {
	u8 cocci_id/* drivers/i2c/busses/i2c-digicolor.c 77 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-digicolor.c 77 */;
	struct dc_i2c *cocci_id/* drivers/i2c/busses/i2c-digicolor.c 72 */;
	void cocci_id/* drivers/i2c/busses/i2c-digicolor.c 72 */;
	enum{STATE_IDLE, STATE_START, STATE_ADDR, STATE_WRITE, STATE_READ, STATE_STOP,} cocci_id/* drivers/i2c/busses/i2c-digicolor.c 63 */;
	struct dc_i2c {
		struct i2c_adapter adap;
		struct device *dev;
		void __iomem *regs;
		struct clk *clk;
		unsigned int frequency;
		struct i2c_msg *msg;
		unsigned int msgbuf_ptr;
		int last;
		spinlock_t lock;
		struct completion done;
		int state;
		int error;
	} cocci_id/* drivers/i2c/busses/i2c-digicolor.c 47 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-digicolor.c 370 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-digicolor.c 364 */[];
	struct dc_i2c cocci_id/* drivers/i2c/busses/i2c-digicolor.c 297 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-digicolor.c 294 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-digicolor.c 292 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-digicolor.c 290 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-digicolor.c 285 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-digicolor.c 280 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-digicolor.c 280 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-digicolor.c 262 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-digicolor.c 261 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-digicolor.c 160 */;
	void *cocci_id/* drivers/i2c/busses/i2c-digicolor.c 160 */;
	int cocci_id/* drivers/i2c/busses/i2c-digicolor.c 137 */;
	bool cocci_id/* drivers/i2c/busses/i2c-digicolor.c 105 */;
}
