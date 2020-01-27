cocci_test_suite() {
	u8 cocci_id/* drivers/i2c/busses/i2c-sirf.c 97 */;
	struct sirfsoc_i2c {
		void __iomem *base;
		struct clk *clk;
		u32 cmd_ptr;
		u8 *buf;
		u32 msg_len;
		u32 finished_len;
		u32 read_cmd_len;
		int msg_read;
		int err_status;
		u32 sda_delay;
		u32 clk_div;
		int last;
		struct completion done;
		struct i2c_adapter adapter;
	} cocci_id/* drivers/i2c/busses/i2c-sirf.c 69 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-sirf.c 462 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-sirf.c 456 */[];
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-sirf.c 450 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-sirf.c 433 */;
	struct clk *cocci_id/* drivers/i2c/busses/i2c-sirf.c 276 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-sirf.c 275 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-sirf.c 271 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-sirf.c 266 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-sirf.c 232 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-sirf.c 232 */;
	unsigned char cocci_id/* drivers/i2c/busses/i2c-sirf.c 183 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-sirf.c 181 */;
	struct sirfsoc_i2c *cocci_id/* drivers/i2c/busses/i2c-sirf.c 141 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-sirf.c 139 */;
	void *cocci_id/* drivers/i2c/busses/i2c-sirf.c 139 */;
	int cocci_id/* drivers/i2c/busses/i2c-sirf.c 139 */;
	void cocci_id/* drivers/i2c/busses/i2c-sirf.c 102 */;
}
