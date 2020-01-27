cocci_test_suite() {
	struct xlp9xx_i2c_dev {
		struct device *dev;
		struct i2c_adapter adapter;
		struct completion msg_complete;
		struct i2c_smbus_alert_setup alert_data;
		struct i2c_client *ara;
		int irq;
		bool msg_read;
		bool len_recv;
		bool client_pec;
		u32 __iomem *base;
		u32 msg_buf_remaining;
		u32 msg_len;
		u32 ip_clk_hz;
		u32 clk_hz;
		u32 msg_err;
		u8 *msg_buf;
	} cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 84 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 592 */;
	const struct acpi_device_id cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 584 */[];
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 577 */[];
	struct resource *cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 507 */;
	struct clk *cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 464 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 461 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 456 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 450 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 427 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 328 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 288 */;
	struct xlp9xx_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 286 */;
	int cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 286 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 237 */;
	void *cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 237 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 185 */;
	void cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 182 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-xlp9xx.c 152 */;
}
