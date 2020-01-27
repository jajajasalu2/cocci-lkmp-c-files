cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 881 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 875 */[];
	struct reset_control *cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 763 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 760 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 758 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 756 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 751 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 746 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 725 */[];
	unsigned long cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 684 */;
	bool cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 679 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 679 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 628 */;
	void *cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 628 */;
	int cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 439 */;
	struct stm32f4_i2c_msg *cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 396 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 320 */;
	struct stm32f4_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 144 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 139 */;
	void __iomem *cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 139 */;
	void cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 139 */;
	struct stm32f4_i2c_dev {
		struct i2c_adapter adap;
		struct device *dev;
		void __iomem *base;
		struct completion complete;
		struct clk *clk;
		int speed;
		int parent_rate;
		struct stm32f4_i2c_msg msg;
	} cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 123 */;
	struct stm32f4_i2c_msg {
		u8 addr;
		u32 count;
		u8 *buf;
		int result;
		bool stop;
	} cocci_id/* drivers/i2c/busses/i2c-stm32f4.c 104 */;
}
