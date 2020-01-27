cocci_test_suite() {
	unsigned int cocci_id/* drivers/spi/spi-uniphier.c 91 */;
	struct platform_driver cocci_id/* drivers/spi/spi-uniphier.c 565 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-uniphier.c 559 */[];
	unsigned long cocci_id/* drivers/spi/spi-uniphier.c 473 */;
	struct platform_device *cocci_id/* drivers/spi/spi-uniphier.c 469 */;
	irqreturn_t cocci_id/* drivers/spi/spi-uniphier.c 428 */;
	void *cocci_id/* drivers/spi/spi-uniphier.c 428 */;
	int cocci_id/* drivers/spi/spi-uniphier.c 428 */;
	struct spi_master *cocci_id/* drivers/spi/spi-uniphier.c 410 */;
	struct device *cocci_id/* drivers/spi/spi-uniphier.c 335 */;
	bool cocci_id/* drivers/spi/spi-uniphier.c 315 */;
	u32 cocci_id/* drivers/spi/spi-uniphier.c 296 */;
	struct uniphier_spi_priv *cocci_id/* drivers/spi/spi-uniphier.c 293 */;
	void cocci_id/* drivers/spi/spi-uniphier.c 293 */;
	struct uniphier_spi_priv {
		void __iomem *base;
		struct clk *clk;
		struct spi_master *master;
		struct completion xfer_done;
		int error;
		unsigned int tx_bytes;
		unsigned int rx_bytes;
		const u8 *tx_buf;
		u8 *rx_buf;
		bool is_save_param;
		u8 bits_per_word;
		u16 mode;
		u32 speed_hz;
	} cocci_id/* drivers/spi/spi-uniphier.c 24 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-uniphier.c 206 */;
	struct spi_device *cocci_id/* drivers/spi/spi-uniphier.c 106 */;
}
