cocci_test_suite() {
	struct resource *cocci_id/* drivers/i2c/busses/i2c-aspeed.c 968 */;
	struct clk *cocci_id/* drivers/i2c/busses/i2c-aspeed.c 967 */;
	const struct of_device_id *cocci_id/* drivers/i2c/busses/i2c-aspeed.c 965 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-aspeed.c 946 */[];
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-aspeed.c 894 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-aspeed.c 857 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-aspeed.c 781 */;
	struct i2c_client *cocci_id/* drivers/i2c/busses/i2c-aspeed.c 737 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-aspeed.c 723 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-aspeed.c 721 */;
	struct aspeed_i2c_bus *cocci_id/* drivers/i2c/busses/i2c-aspeed.c 721 */;
	void cocci_id/* drivers/i2c/busses/i2c-aspeed.c 721 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-aspeed.c 714 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-aspeed.c 659 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-aspeed.c 596 */;
	void *cocci_id/* drivers/i2c/busses/i2c-aspeed.c 596 */;
	int cocci_id/* drivers/i2c/busses/i2c-aspeed.c 596 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-aspeed.c 343 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-aspeed.c 342 */;
	int cocci_id/* drivers/i2c/busses/i2c-aspeed.c 172 */(struct aspeed_i2c_bus *bus);
	enum aspeed_i2c_slave_state{ASPEED_I2C_SLAVE_INACTIVE, ASPEED_I2C_SLAVE_START, ASPEED_I2C_SLAVE_READ_REQUESTED, ASPEED_I2C_SLAVE_READ_PROCESSED, ASPEED_I2C_SLAVE_WRITE_REQUESTED, ASPEED_I2C_SLAVE_WRITE_RECEIVED, ASPEED_I2C_SLAVE_STOP,} cocci_id/* drivers/i2c/busses/i2c-aspeed.c 132 */;
	enum aspeed_i2c_master_state{ASPEED_I2C_MASTER_INACTIVE, ASPEED_I2C_MASTER_PENDING, ASPEED_I2C_MASTER_START, ASPEED_I2C_MASTER_TX_FIRST, ASPEED_I2C_MASTER_TX, ASPEED_I2C_MASTER_RX_FIRST, ASPEED_I2C_MASTER_RX, ASPEED_I2C_MASTER_STOP,} cocci_id/* drivers/i2c/busses/i2c-aspeed.c 121 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-aspeed.c 1072 */;
	u32 (*cocci_id/* drivers/i2c/busses/i2c-aspeed.c 1007 */)(struct device *,
								  u32);
	struct aspeed_i2c_bus {
		struct i2c_adapter adap;
		struct device *dev;
		void __iomem *base;
		struct reset_control *rst;
		spinlock_t lock;
		struct completion cmd_complete;
		u32 (*get_clk_reg_val)(struct device *dev, u32 divisor);
		unsigned long parent_clk_frequency;
		u32 bus_frequency;
		enum aspeed_i2c_master_state master_state;
		struct i2c_msg *msgs;
		size_t buf_index;
		size_t msgs_index;
		size_t msgs_count;
		bool send_stop;
		int cmd_err;
		int master_xfer_result;
		bool multi_master;
#if IS_ENABLED(CONFIG_I2C_SLAVE)
		struct i2c_client *slave;
		enum aspeed_i2c_slave_state slave_state;
#endif
	} cocci_id/*  1 */;
}
