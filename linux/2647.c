cocci_test_suite() {
	struct xlr_i2c_private *cocci_id/* drivers/i2c/busses/i2c-xlr.c 93 */;
	int cocci_id/* drivers/i2c/busses/i2c-xlr.c 93 */;
	struct xlr_i2c_private {
		struct i2c_adapter adap;
		u32 __iomem *iobase;
		int irq;
		int pos;
		struct i2c_msg *msg;
		const struct xlr_i2c_config *cfg;
		wait_queue_head_t wait;
		struct clk *clk;
	} cocci_id/* drivers/i2c/busses/i2c-xlr.c 82 */;
	struct xlr_i2c_config {
		u32 flags;
		u32 status_busy;
		u32 cfg_extra;
	} cocci_id/* drivers/i2c/busses/i2c-xlr.c 76 */;
	u32 __iomem *cocci_id/* drivers/i2c/busses/i2c-xlr.c 69 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-xlr.c 69 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-xlr.c 454 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-xlr.c 367 */;
	struct clk *cocci_id/* drivers/i2c/busses/i2c-xlr.c 366 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-xlr.c 365 */;
	const struct of_device_id *cocci_id/* drivers/i2c/busses/i2c-xlr.c 363 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-xlr.c 361 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-xlr.c 352 */[];
	const struct xlr_i2c_config cocci_id/* drivers/i2c/busses/i2c-xlr.c 341 */;
	const struct i2c_adapter_quirks cocci_id/* drivers/i2c/busses/i2c-xlr.c 337 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-xlr.c 332 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-xlr.c 326 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-xlr.c 326 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-xlr.c 234 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-xlr.c 234 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-xlr.c 173 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-xlr.c 139 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-xlr.c 136 */;
	void *cocci_id/* drivers/i2c/busses/i2c-xlr.c 136 */;
	void cocci_id/* drivers/i2c/busses/i2c-xlr.c 127 */;
}
