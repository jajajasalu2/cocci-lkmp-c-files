cocci_test_suite() {
	const struct geni_i2c_err_log cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 97 */[];
	struct geni_i2c_err_log {
		int err;
		const char *msg;
	} cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 92 */;
	struct geni_i2c_dev {
		struct geni_se se;
		u32 tx_wm;
		int irq;
		int err;
		struct i2c_adapter adap;
		struct completion done;
		struct i2c_msg *cur;
		int cur_wr;
		int cur_rd;
		spinlock_t lock;
		u32 clk_freq_out;
		const struct geni_i2c_clk_fld *clk_fld;
		int suspended;
	} cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 76 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 674 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 668 */[];
	struct device *cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 635 */;
	int __maybe_unused cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 635 */;
	enum geni_i2c_err_code{GP_IRQ0, NACK, GP_IRQ2, BUS_PROTO, ARB_LOST, GP_IRQ5, GENI_OVERRUN, GENI_ILLEGAL_CMD, GENI_ABORT_DONE, GENI_TIMEOUT,} cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 52 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 502 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 499 */;
	const struct acpi_device_id cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 492 */[];
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 486 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 481 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 439 */[];
	size_t cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 360 */;
	struct geni_se *cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 359 */;
	dma_addr_t cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 356 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 306 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 305 */;
	struct geni_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 303 */;
	void cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 303 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 213 */;
	void __iomem *cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 205 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 202 */;
	void *cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 202 */;
	const struct geni_i2c_clk_fld *cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 139 */;
	int cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 136 */;
	const struct geni_i2c_clk_fld cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 130 */[];
	struct geni_i2c_clk_fld {
		u32 clk_freq_out;
		u8 clk_div;
		u8 t_high_cnt;
		u8 t_low_cnt;
		u8 t_cycle_cnt;
	} cocci_id/* drivers/i2c/busses/i2c-qcom-geni.c 110 */;
}
