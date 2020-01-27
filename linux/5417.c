cocci_test_suite() {
	struct efm32_spi_ddata {
		struct spi_bitbang bitbang;
		spinlock_t lock;
		struct clk *clk;
		void __iomem *base;
		unsigned int rxirq,txirq;
		struct efm32_spi_pdata pdata;
		struct completion done;
		const u8 *tx_buf;
		u8 *rx_buf;
		unsigned tx_len,rx_len;
		unsigned csgpio[];
	} cocci_id/* drivers/spi/spi-efm32.c 70 */;
	struct platform_driver cocci_id/* drivers/spi/spi-efm32.c 486 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-efm32.c 474 */[];
	unsigned cocci_id/* drivers/spi/spi-efm32.c 333 */;
	struct device_node *cocci_id/* drivers/spi/spi-efm32.c 322 */;
	struct spi_master *cocci_id/* drivers/spi/spi-efm32.c 321 */;
	struct resource *cocci_id/* drivers/spi/spi-efm32.c 319 */;
	struct platform_device *cocci_id/* drivers/spi/spi-efm32.c 316 */;
	u32 cocci_id/* drivers/spi/spi-efm32.c 280 */;
	irqreturn_t cocci_id/* drivers/spi/spi-efm32.c 219 */;
	void *cocci_id/* drivers/spi/spi-efm32.c 219 */;
	u8 cocci_id/* drivers/spi/spi-efm32.c 147 */;
	unsigned long cocci_id/* drivers/spi/spi-efm32.c 120 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-efm32.c 114 */;
	struct efm32_spi_ddata *cocci_id/* drivers/spi/spi-efm32.c 107 */;
	struct spi_device *cocci_id/* drivers/spi/spi-efm32.c 105 */;
	int cocci_id/* drivers/spi/spi-efm32.c 105 */;
	void cocci_id/* drivers/spi/spi-efm32.c 105 */;
}
