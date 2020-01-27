cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/spi-meson-spicc.c 610 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-meson-spicc.c 603 */[];
	struct platform_device *cocci_id/* drivers/spi/spi-meson-spicc.c 502 */;
	struct spi_device *cocci_id/* drivers/spi/spi-meson-spicc.c 494 */;
	void cocci_id/* drivers/spi/spi-meson-spicc.c 494 */;
	struct spi_message *cocci_id/* drivers/spi/spi-meson-spicc.c 397 */;
	struct spi_master *cocci_id/* drivers/spi/spi-meson-spicc.c 396 */;
	u8 *cocci_id/* drivers/spi/spi-meson-spicc.c 368 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-meson-spicc.c 336 */;
	unsigned long cocci_id/* drivers/spi/spi-meson-spicc.c 304 */;
	unsigned int cocci_id/* drivers/spi/spi-meson-spicc.c 263 */;
	u32 cocci_id/* drivers/spi/spi-meson-spicc.c 242 */;
	struct meson_spicc_device *cocci_id/* drivers/spi/spi-meson-spicc.c 241 */;
	irqreturn_t cocci_id/* drivers/spi/spi-meson-spicc.c 239 */;
	void *cocci_id/* drivers/spi/spi-meson-spicc.c 239 */;
	int cocci_id/* drivers/spi/spi-meson-spicc.c 239 */;
	u8 cocci_id/* drivers/spi/spi-meson-spicc.c 159 */;
	bool cocci_id/* drivers/spi/spi-meson-spicc.c 148 */;
	struct meson_spicc_device {
		struct spi_master *master;
		struct platform_device *pdev;
		void __iomem *base;
		struct clk *core;
		struct spi_message *message;
		struct spi_transfer *xfer;
		u8 *tx_buf;
		u8 *rx_buf;
		unsigned int bytes_per_word;
		unsigned long tx_remain;
		unsigned long txb_remain;
		unsigned long rx_remain;
		unsigned long rxb_remain;
		unsigned long xfer_remain;
		bool is_burst_end;
		bool is_last_burst;
	} cocci_id/* drivers/spi/spi-meson-spicc.c 123 */;
}
