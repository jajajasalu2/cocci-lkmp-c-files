cocci_test_suite() {
	bool cocci_id/* drivers/i2c/busses/i2c-highlander.c 51 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-highlander.c 453 */;
	struct highlander_i2c_dev {
		struct device *dev;
		void __iomem *base;
		struct i2c_adapter adapter;
		struct completion cmd_complete;
		unsigned long last_read_time;
		int irq;
		u8 *buf;
		size_t buf_len;
	} cocci_id/* drivers/i2c/busses/i2c-highlander.c 40 */;
	struct highlander_i2c_dev cocci_id/* drivers/i2c/busses/i2c-highlander.c 368 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-highlander.c 359 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-highlander.c 355 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-highlander.c 350 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-highlander.c 345 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-highlander.c 345 */;
	union i2c_smbus_data *cocci_id/* drivers/i2c/busses/i2c-highlander.c 278 */;
	unsigned short cocci_id/* drivers/i2c/busses/i2c-highlander.c 276 */;
	char cocci_id/* drivers/i2c/busses/i2c-highlander.c 276 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-highlander.c 212 */[16];
	unsigned long cocci_id/* drivers/i2c/busses/i2c-highlander.c 172 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-highlander.c 160 */;
	void *cocci_id/* drivers/i2c/busses/i2c-highlander.c 160 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-highlander.c 115 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-highlander.c 114 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-highlander.c 112 */;
	int cocci_id/* drivers/i2c/busses/i2c-highlander.c 112 */;
	struct highlander_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-highlander.c 111 */;
	void cocci_id/* drivers/i2c/busses/i2c-highlander.c 111 */;
	__be16 *cocci_id/* drivers/i2c/busses/i2c-highlander.c 103 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-highlander.c 100 */;
	u16 *cocci_id/* drivers/i2c/busses/i2c-highlander.c 100 */;
}
