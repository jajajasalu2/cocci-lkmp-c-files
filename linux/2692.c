cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-efm32.c 465 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-efm32.c 456 */[];
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-efm32.c 310 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-efm32.c 309 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-efm32.c 308 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-efm32.c 305 */;
	struct efm32_i2c_ddata *cocci_id/* drivers/i2c/busses/i2c-efm32.c 297 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-efm32.c 292 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-efm32.c 287 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-efm32.c 287 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-efm32.c 195 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-efm32.c 192 */;
	void *cocci_id/* drivers/i2c/busses/i2c-efm32.c 192 */;
	int cocci_id/* drivers/i2c/busses/i2c-efm32.c 192 */;
	void cocci_id/* drivers/i2c/busses/i2c-efm32.c 168 */;
	unsigned cocci_id/* drivers/i2c/busses/i2c-efm32.c 128 */;
	struct efm32_i2c_ddata {
		struct i2c_adapter adapter;
		struct clk *clk;
		void __iomem *base;
		unsigned int irq;
		u8 location;
		unsigned long frequency;
		struct completion done;
		struct i2c_msg *msgs;
		size_t num_msgs;
		size_t current_word,current_msg;
		int retval;
	} cocci_id/* drivers/i2c/busses/i2c-efm32.c 111 */;
}
