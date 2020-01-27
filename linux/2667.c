cocci_test_suite() {
	struct owl_i2c_dev {
		struct i2c_adapter adap;
		struct i2c_msg *msg;
		struct completion msg_complete;
		struct clk *clk;
		spinlock_t lock;
		void __iomem *base;
		unsigned long clk_rate;
		u32 bus_freq;
		u32 msg_ptr;
		int err;
	} cocci_id/* drivers/i2c/busses/i2c-owl.c 93 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-owl.c 484 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-owl.c 477 */[];
	struct resource *cocci_id/* drivers/i2c/busses/i2c-owl.c 402 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-owl.c 400 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-owl.c 398 */;
	const struct i2c_adapter_quirks cocci_id/* drivers/i2c/busses/i2c-owl.c 390 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-owl.c 385 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-owl.c 227 */;
	struct owl_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-owl.c 226 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-owl.c 224 */;
	int cocci_id/* drivers/i2c/busses/i2c-owl.c 224 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-owl.c 219 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-owl.c 172 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-owl.c 170 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-owl.c 167 */;
	void *cocci_id/* drivers/i2c/busses/i2c-owl.c 167 */;
	void cocci_id/* drivers/i2c/busses/i2c-owl.c 120 */;
	bool cocci_id/* drivers/i2c/busses/i2c-owl.c 106 */;
	void __iomem *cocci_id/* drivers/i2c/busses/i2c-owl.c 106 */;
}
