cocci_test_suite() {
	u32 cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 97 */;
	struct hix5hd2_i2c_priv {
		struct i2c_adapter adap;
		struct i2c_msg *msg;
		struct completion msg_complete;
		unsigned int msg_idx;
		unsigned int msg_len;
		int stop;
		void __iomem *regs;
		struct clk *clk;
		struct device *dev;
		spinlock_t lock;
		int err;
		unsigned int freq;
		enum hix5hd2_i2c_state state;
	} cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 81 */;
	enum hix5hd2_i2c_state{HIX5I2C_STAT_RW_ERR=-1, HIX5I2C_STAT_INIT, HIX5I2C_STAT_RW, HIX5I2C_STAT_SND_STOP, HIX5I2C_STAT_RW_SUCCESS,} cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 73 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 517 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 511 */[];
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 505 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 494 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 394 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 393 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 391 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 389 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 384 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 379 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 357 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 303 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 245 */;
	void *cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 245 */;
	int cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 245 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 227 */;
	struct hix5hd2_i2c_priv *cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 106 */;
	void cocci_id/* drivers/i2c/busses/i2c-hix5hd2.c 106 */;
}
