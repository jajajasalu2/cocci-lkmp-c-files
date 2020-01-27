cocci_test_suite() {
	struct wmt_i2c_dev {
		struct i2c_adapter adapter;
		struct completion complete;
		struct device *dev;
		void __iomem *base;
		struct clk *clk;
		int mode;
		int irq;
		u16 cmd_status;
	} cocci_id/* drivers/i2c/busses/i2c-wmt.c 82 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-wmt.c 456 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-wmt.c 451 */[];
	struct resource *cocci_id/* drivers/i2c/busses/i2c-wmt.c 375 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-wmt.c 372 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-wmt.c 370 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-wmt.c 324 */;
	void *cocci_id/* drivers/i2c/busses/i2c-wmt.c 324 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-wmt.c 319 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-wmt.c 314 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-wmt.c 314 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-wmt.c 294 */[];
	unsigned long cocci_id/* drivers/i2c/busses/i2c-wmt.c 219 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-wmt.c 217 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-wmt.c 213 */;
	struct wmt_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-wmt.c 109 */;
	int cocci_id/* drivers/i2c/busses/i2c-wmt.c 109 */;
}
