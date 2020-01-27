cocci_test_suite() {
	struct clk_bcm2835_i2c {
		struct clk_hw hw;
		struct bcm2835_i2c_dev *i2c_dev;
	} cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 79 */;
	struct bcm2835_i2c_dev {
		struct device *dev;
		void __iomem *regs;
		int irq;
		struct i2c_adapter adapter;
		struct completion completion;
		struct i2c_msg *curr_msg;
		int num_msgs;
		u32 msg_err;
		u8 *msg_buf;
		size_t msg_buf_remaining;
	} cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 54 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 512 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 505 */[];
	struct clk *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 407 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 404 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 401 */;
	const struct i2c_adapter_quirks cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 397 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 387 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 382 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 343 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 339 */[];
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 274 */;
	void *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 274 */;
	int cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 274 */;
	bool cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 234 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 233 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 204 */;
	struct bcm2835_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 202 */;
	void cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 202 */;
	struct clk_bcm2835_i2c cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 176 */;
	const char *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 172 */[];
	const char *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 164 */;
	char cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 163 */[32];
	struct clk_bcm2835_i2c *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 162 */;
	struct clk_init_data cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 161 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 157 */;
	const struct clk_ops cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 151 */;
	struct clk_hw *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 142 */;
	unsigned long *cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 135 */;
	long cocci_id/* drivers/i2c/busses/i2c-bcm2835.c 134 */;
}
