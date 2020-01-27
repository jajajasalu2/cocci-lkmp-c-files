cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-mpc.c 89 */;
	void *cocci_id/* drivers/i2c/busses/i2c-mpc.c 89 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-mpc.c 842 */;
	const struct mpc_i2c_data cocci_id/* drivers/i2c/busses/i2c-mpc.c 807 */;
	struct mpc_i2c_data {
		void (*setup)(struct device_node *node, struct mpc_i2c *i2c,
			      u32 clock);
	} cocci_id/* drivers/i2c/busses/i2c-mpc.c 80 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-mpc.c 791 */;
	struct mpc_i2c_divider {
		u16 divider;
		u16 fdr;
	} cocci_id/* drivers/i2c/busses/i2c-mpc.c 75 */;
	unsigned long long cocci_id/* drivers/i2c/busses/i2c-mpc.c 739 */;
	const struct mpc_i2c_data *cocci_id/* drivers/i2c/busses/i2c-mpc.c 718 */;
	struct clk *cocci_id/* drivers/i2c/busses/i2c-mpc.c 661 */;
	struct resource cocci_id/* drivers/i2c/busses/i2c-mpc.c 660 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-mpc.c 657 */;
	const u32 *cocci_id/* drivers/i2c/busses/i2c-mpc.c 656 */;
	struct mpc_i2c *cocci_id/* drivers/i2c/busses/i2c-mpc.c 655 */;
	const struct of_device_id *cocci_id/* drivers/i2c/busses/i2c-mpc.c 654 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-mpc.c 652 */;
	int cocci_id/* drivers/i2c/busses/i2c-mpc.c 652 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-mpc.c 651 */[];
	struct i2c_adapter cocci_id/* drivers/i2c/busses/i2c-mpc.c 645 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-mpc.c 640 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-mpc.c 634 */;
	struct mpc_i2c {
		struct device *dev;
		void __iomem *base;
		u32 interrupt;
		wait_queue_head_t queue;
		struct i2c_adapter adap;
		int irq;
		u32 real_clk;
#ifdef CONFIG_PM_SLEEP
		u8 fdr,dfsrr;
#endif
		struct clk *clk_per;
	} cocci_id/* drivers/i2c/busses/i2c-mpc.c 61 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-mpc.c 565 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-mpc.c 520 */;
	bool cocci_id/* drivers/i2c/busses/i2c-mpc.c 495 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-mpc.c 495 */;
	const u8 *cocci_id/* drivers/i2c/busses/i2c-mpc.c 467 */;
	u32 __iomem *cocci_id/* drivers/i2c/busses/i2c-mpc.c 324 */;
	void __iomem *cocci_id/* drivers/i2c/busses/i2c-mpc.c 270 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-mpc.c 205 */;
	const struct mpc_i2c_divider *cocci_id/* drivers/i2c/busses/i2c-mpc.c 204 */;
	u32 *cocci_id/* drivers/i2c/busses/i2c-mpc.c 202 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-mpc.c 201 */;
	const struct mpc_i2c_divider cocci_id/* drivers/i2c/busses/i2c-mpc.c 180 */[];
	unsigned long cocci_id/* drivers/i2c/busses/i2c-mpc.c 126 */;
	unsigned cocci_id/* drivers/i2c/busses/i2c-mpc.c 124 */;
	void cocci_id/* drivers/i2c/busses/i2c-mpc.c 107 */;
}
