cocci_test_suite() {
	struct sun6i_spi {
		struct spi_master *master;
		void __iomem *base_addr;
		struct clk *hclk;
		struct clk *mclk;
		struct reset_control *rstc;
		struct completion done;
		const u8 *tx_buf;
		u8 *rx_buf;
		int len;
		unsigned long fifo_depth;
	} cocci_id/* drivers/spi/spi-sun6i.c 87 */;
	struct platform_driver cocci_id/* drivers/spi/spi-sun6i.c 554 */;
	const struct dev_pm_ops cocci_id/* drivers/spi/spi-sun6i.c 549 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-sun6i.c 542 */[];
	unsigned long cocci_id/* drivers/spi/spi-sun6i.c 469 */;
	struct sun6i_spi cocci_id/* drivers/spi/spi-sun6i.c 440 */;
	struct spi_master *cocci_id/* drivers/spi/spi-sun6i.c 436 */;
	struct platform_device *cocci_id/* drivers/spi/spi-sun6i.c 434 */;
	struct device *cocci_id/* drivers/spi/spi-sun6i.c 385 */;
	irqreturn_t cocci_id/* drivers/spi/spi-sun6i.c 347 */;
	void *cocci_id/* drivers/spi/spi-sun6i.c 347 */;
	unsigned int cocci_id/* drivers/spi/spi-sun6i.c 201 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-sun6i.c 198 */;
	struct spi_device *cocci_id/* drivers/spi/spi-sun6i.c 191 */;
	size_t cocci_id/* drivers/spi/spi-sun6i.c 191 */;
	bool cocci_id/* drivers/spi/spi-sun6i.c 174 */;
	u8 cocci_id/* drivers/spi/spi-sun6i.c 140 */;
	int cocci_id/* drivers/spi/spi-sun6i.c 137 */;
	u32 cocci_id/* drivers/spi/spi-sun6i.c 129 */;
	struct sun6i_spi *cocci_id/* drivers/spi/spi-sun6i.c 129 */;
	void cocci_id/* drivers/spi/spi-sun6i.c 129 */;
}
