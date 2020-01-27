cocci_test_suite() {
	enum rcar_i2c_type cocci_id/* drivers/i2c/busses/i2c-rcar.c 945 */;
	struct rcar_i2c_priv cocci_id/* drivers/i2c/busses/i2c-rcar.c 929 */;
	struct i2c_timings cocci_id/* drivers/i2c/busses/i2c-rcar.c 923 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-rcar.c 918 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-rcar.c 900 */[];
	const struct i2c_adapter_quirks cocci_id/* drivers/i2c/busses/i2c-rcar.c 896 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-rcar.c 889 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-rcar.c 877 */;
	struct i2c_client *cocci_id/* drivers/i2c/busses/i2c-rcar.c 837 */;
	long cocci_id/* drivers/i2c/busses/i2c-rcar.c 781 */;
	enum dma_transfer_direction cocci_id/* drivers/i2c/busses/i2c-rcar.c 725 */;
	char *cocci_id/* drivers/i2c/busses/i2c-rcar.c 687 */;
	struct dma_slave_config cocci_id/* drivers/i2c/busses/i2c-rcar.c 686 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-rcar.c 623 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-rcar.c 562 */;
	unsigned char *cocci_id/* drivers/i2c/busses/i2c-rcar.c 413 */;
	dma_cookie_t cocci_id/* drivers/i2c/busses/i2c-rcar.c 412 */;
	dma_addr_t cocci_id/* drivers/i2c/busses/i2c-rcar.c 411 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/i2c/busses/i2c-rcar.c 410 */;
	struct dma_chan *cocci_id/* drivers/i2c/busses/i2c-rcar.c 409 */;
	enum dma_data_direction cocci_id/* drivers/i2c/busses/i2c-rcar.c 408 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-rcar.c 406 */;
	bool cocci_id/* drivers/i2c/busses/i2c-rcar.c 403 */;
	void *cocci_id/* drivers/i2c/busses/i2c-rcar.c 394 */;
	void cocci_id/* drivers/i2c/busses/i2c-rcar.c 382 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-rcar.c 242 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-rcar.c 241 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-rcar.c 240 */;
	struct i2c_timings *cocci_id/* drivers/i2c/busses/i2c-rcar.c 238 */;
	struct rcar_i2c_priv *cocci_id/* drivers/i2c/busses/i2c-rcar.c 222 */;
	int cocci_id/* drivers/i2c/busses/i2c-rcar.c 222 */;
	struct i2c_bus_recovery_info cocci_id/* drivers/i2c/busses/i2c-rcar.c 201 */;
	struct rcar_i2c_priv {
		void __iomem *io;
		struct i2c_adapter adap;
		struct i2c_msg *msg;
		int msgs_left;
		struct clk *clk;
		wait_queue_head_t wait;
		int pos;
		u32 icccr;
		u32 flags;
		u8 recovery_icmcr;
		enum rcar_i2c_type devtype;
		struct i2c_client *slave;
		struct resource *res;
		struct dma_chan *dma_tx;
		struct dma_chan *dma_rx;
		struct scatterlist sg;
		enum dma_data_direction dma_direction;
		struct reset_control *rstc;
		int irq;
	} cocci_id/* drivers/i2c/busses/i2c-rcar.c 119 */;
	enum rcar_i2c_type{I2C_RCAR_GEN1, I2C_RCAR_GEN2, I2C_RCAR_GEN3,} cocci_id/* drivers/i2c/busses/i2c-rcar.c 113 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-rcar.c 1054 */;
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-rcar.c 1045 */;
}
