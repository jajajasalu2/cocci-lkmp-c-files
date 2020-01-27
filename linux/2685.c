cocci_test_suite() {
	unsigned long cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 94 */;
	struct lpc2k_i2c *cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 92 */;
	int cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 92 */;
	struct lpc2k_i2c {
		void __iomem *base;
		struct clk *clk;
		int irq;
		wait_queue_head_t wait;
		struct i2c_adapter adap;
		struct i2c_msg *msg;
		int msg_idx;
		int msg_status;
		int is_last;
	} cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 72 */;
	enum{M_BUS_ERROR=0x00, M_START=0x08, M_REPSTART=0x10, MX_ADDR_W_ACK=0x18, MX_ADDR_W_NACK=0x20, MX_DATA_W_ACK=0x28, MX_DATA_W_NACK=0x30, M_DATA_ARB_LOST=0x38, MR_ADDR_R_ACK=0x40, MR_ADDR_R_NACK=0x48, MR_DATA_R_ACK=0x50, MR_DATA_R_NACK=0x58, M_I2C_IDLE=0xf8,} cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 56 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 488 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 482 */[];
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 472 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 462 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 349 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 346 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 341 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 335 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 335 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 323 */;
	void *cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 323 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 293 */;
	unsigned char cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 118 */;
	void cocci_id/* drivers/i2c/busses/i2c-lpc2k.c 116 */;
}
