cocci_test_suite() {
	struct riic_dev {
		void __iomem *base;
		u8 *buf;
		struct i2c_msg *msg;
		int bytes_left;
		int err;
		int is_last;
		struct completion msg_done;
		struct i2c_adapter adapter;
		struct clk *clk;
	} cocci_id/* drivers/i2c/busses/i2c-riic.c 89 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-riic.c 479 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-riic.c 474 */[];
	struct i2c_timings cocci_id/* drivers/i2c/busses/i2c-riic.c 397 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-riic.c 396 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-riic.c 392 */;
	int cocci_id/* drivers/i2c/busses/i2c-riic.c 392 */;
	struct riic_irq_desc cocci_id/* drivers/i2c/busses/i2c-riic.c 384 */[];
	unsigned long cocci_id/* drivers/i2c/busses/i2c-riic.c 285 */;
	struct i2c_timings *cocci_id/* drivers/i2c/busses/i2c-riic.c 282 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-riic.c 277 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-riic.c 272 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-riic.c 272 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-riic.c 223 */;
	void *cocci_id/* drivers/i2c/busses/i2c-riic.c 223 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-riic.c 112 */[];
	u8 cocci_id/* drivers/i2c/busses/i2c-riic.c 107 */;
	struct riic_dev *cocci_id/* drivers/i2c/busses/i2c-riic.c 107 */;
	void cocci_id/* drivers/i2c/busses/i2c-riic.c 107 */;
	struct riic_irq_desc {
		int res_num;
		irq_handler_t isr;
		char *name;
	} cocci_id/* drivers/i2c/busses/i2c-riic.c 101 */;
}
