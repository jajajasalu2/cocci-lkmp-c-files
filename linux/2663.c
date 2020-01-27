cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-synquacer.c 651 */;
	const struct acpi_device_id cocci_id/* drivers/i2c/busses/i2c-synquacer.c 644 */[];
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-synquacer.c 637 */[];
	struct resource *cocci_id/* drivers/i2c/busses/i2c-synquacer.c 539 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-synquacer.c 536 */;
	const struct i2c_adapter cocci_id/* drivers/i2c/busses/i2c-synquacer.c 529 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-synquacer.c 524 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-synquacer.c 519 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-synquacer.c 519 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-synquacer.c 357 */;
	void *cocci_id/* drivers/i2c/busses/i2c-synquacer.c 357 */;
	unsigned char cocci_id/* drivers/i2c/busses/i2c-synquacer.c 313 */;
	void cocci_id/* drivers/i2c/busses/i2c-synquacer.c 198 */;
	int cocci_id/* drivers/i2c/busses/i2c-synquacer.c 166 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-synquacer.c 165 */;
	struct synquacer_i2c *cocci_id/* drivers/i2c/busses/i2c-synquacer.c 164 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-synquacer.c 164 */;
	struct synquacer_i2c {
		struct completion completion;
		struct i2c_msg *msg;
		u32 msg_num;
		u32 msg_idx;
		u32 msg_ptr;
		int irq;
		struct device *dev;
		void __iomem *base;
		struct clk *pclk;
		u32 pclkrate;
		u32 speed_khz;
		u32 timeout_ms;
		enum i2c_state state;
		struct i2c_adapter adapter;
	} cocci_id/* drivers/i2c/busses/i2c-synquacer.c 130 */;
	enum i2c_state{STATE_IDLE, STATE_START, STATE_READ, STATE_WRITE,} cocci_id/* drivers/i2c/busses/i2c-synquacer.c 123 */;
}
