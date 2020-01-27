cocci_test_suite() {
	struct sun4i_spi {
		struct spi_master *master;
		void __iomem *base_addr;
		struct clk *hclk;
		struct clk *mclk;
		struct completion done;
		const u8 *tx_buf;
		u8 *rx_buf;
		int len;
	} cocci_id/* drivers/spi/spi-sun4i.c 77 */;
	struct platform_driver cocci_id/* drivers/spi/spi-sun4i.c 537 */;
	const struct dev_pm_ops cocci_id/* drivers/spi/spi-sun4i.c 532 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-sun4i.c 526 */[];
	struct sun4i_spi cocci_id/* drivers/spi/spi-sun4i.c 433 */;
	struct spi_master *cocci_id/* drivers/spi/spi-sun4i.c 429 */;
	struct platform_device *cocci_id/* drivers/spi/spi-sun4i.c 427 */;
	struct device *cocci_id/* drivers/spi/spi-sun4i.c 387 */;
	irqreturn_t cocci_id/* drivers/spi/spi-sun4i.c 349 */;
	void *cocci_id/* drivers/spi/spi-sun4i.c 349 */;
	unsigned int cocci_id/* drivers/spi/spi-sun4i.c 209 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-sun4i.c 206 */;
	struct spi_device *cocci_id/* drivers/spi/spi-sun4i.c 199 */;
	size_t cocci_id/* drivers/spi/spi-sun4i.c 199 */;
	bool cocci_id/* drivers/spi/spi-sun4i.c 162 */;
	u8 cocci_id/* drivers/spi/spi-sun4i.c 128 */;
	int cocci_id/* drivers/spi/spi-sun4i.c 125 */;
	u32 cocci_id/* drivers/spi/spi-sun4i.c 117 */;
	struct sun4i_spi *cocci_id/* drivers/spi/spi-sun4i.c 117 */;
	void cocci_id/* drivers/spi/spi-sun4i.c 117 */;
}
