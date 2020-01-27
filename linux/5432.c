cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/spi/spi-clps711x.c 90 */;
	u8 cocci_id/* drivers/spi/spi-clps711x.c 72 */;
	struct spi_clps711x_data *cocci_id/* drivers/spi/spi-clps711x.c 71 */;
	struct spi_master *cocci_id/* drivers/spi/spi-clps711x.c 70 */;
	irqreturn_t cocci_id/* drivers/spi/spi-clps711x.c 68 */;
	void *cocci_id/* drivers/spi/spi-clps711x.c 68 */;
	int cocci_id/* drivers/spi/spi-clps711x.c 68 */;
	u8 *cocci_id/* drivers/spi/spi-clps711x.c 58 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-clps711x.c 49 */;
	struct spi_device *cocci_id/* drivers/spi/spi-clps711x.c 39 */;
	struct spi_message *cocci_id/* drivers/spi/spi-clps711x.c 36 */;
	struct spi_clps711x_data {
		void __iomem *syncio;
		struct regmap *syscon;
		struct clk *spi_clk;
		u8 *tx_buf;
		u8 *rx_buf;
		unsigned int bpw;
		int len;
	} cocci_id/* drivers/spi/spi-clps711x.c 24 */;
	struct platform_driver cocci_id/* drivers/spi/spi-clps711x.c 160 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-clps711x.c 154 */[];
}
