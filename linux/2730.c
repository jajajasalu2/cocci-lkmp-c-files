cocci_test_suite() {
	unsigned long cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 97 */;
	struct p2wi *cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 96 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 94 */;
	void *cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 94 */;
	int cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 94 */;
	struct p2wi {
		struct i2c_adapter adapter;
		struct completion complete;
		unsigned int status;
		void __iomem *regs;
		struct clk *clk;
		struct reset_control *rstc;
		int slave_addr;
	} cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 84 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 331 */;
	struct p2wi cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 210 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 190 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 186 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 185 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 183 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 177 */[];
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 172 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 119 */;
	union i2c_smbus_data *cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 119 */;
	unsigned short cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 118 */;
	char cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 118 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 117 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 112 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-sun6i-p2wi.c 112 */;
}
