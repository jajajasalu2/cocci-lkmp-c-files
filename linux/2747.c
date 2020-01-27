cocci_test_suite() {
	struct sprd_i2c {
		struct i2c_adapter adap;
		struct device *dev;
		void __iomem *base;
		struct i2c_msg *msg;
		struct clk *clk;
		u32 src_clk;
		u32 bus_freq;
		struct completion complete;
		u8 *buf;
		u32 count;
		int irq;
		int err;
	} cocci_id/* drivers/i2c/busses/i2c-sprd.c 77 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-sprd.c 639 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-sprd.c 634 */[];
	int __maybe_unused cocci_id/* drivers/i2c/busses/i2c-sprd.c 595 */;
	struct sprd_i2c cocci_id/* drivers/i2c/busses/i2c-sprd.c 486 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-sprd.c 479 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-sprd.c 477 */;
	struct clk *cocci_id/* drivers/i2c/busses/i2c-sprd.c 443 */;
	int cocci_id/* drivers/i2c/busses/i2c-sprd.c 441 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-sprd.c 407 */;
	void *cocci_id/* drivers/i2c/busses/i2c-sprd.c 407 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-sprd.c 311 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-sprd.c 306 */;
	bool cocci_id/* drivers/i2c/busses/i2c-sprd.c 244 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-sprd.c 214 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-sprd.c 146 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-sprd.c 116 */;
	struct sprd_i2c *cocci_id/* drivers/i2c/busses/i2c-sprd.c 114 */;
	void cocci_id/* drivers/i2c/busses/i2c-sprd.c 114 */;
}
