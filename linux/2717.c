cocci_test_suite() {
	unsigned long cocci_id/* drivers/i2c/busses/i2c-altera.c 94 */;
	bool cocci_id/* drivers/i2c/busses/i2c-altera.c 92 */;
	struct altr_i2c_dev {
		void __iomem *base;
		struct i2c_msg *msg;
		size_t msg_len;
		int msg_err;
		struct completion msg_complete;
		struct device *dev;
		struct i2c_adapter adapter;
		struct clk *i2c_clk;
		u32 bus_clk_rate;
		u8 *buf;
		u32 fifo_size;
		u32 isr_mask;
		u32 isr_status;
		spinlock_t lock;
	} cocci_id/* drivers/i2c/busses/i2c-altera.c 74 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-altera.c 487 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-altera.c 481 */[];
	struct resource *cocci_id/* drivers/i2c/busses/i2c-altera.c 385 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-altera.c 382 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-altera.c 377 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-altera.c 372 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-altera.c 359 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-altera.c 313 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-altera.c 241 */;
	void *cocci_id/* drivers/i2c/busses/i2c-altera.c 241 */;
	int cocci_id/* drivers/i2c/busses/i2c-altera.c 200 */;
	size_t cocci_id/* drivers/i2c/busses/i2c-altera.c 199 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-altera.c 119 */;
	struct altr_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-altera.c 117 */;
	void cocci_id/* drivers/i2c/busses/i2c-altera.c 117 */;
}
