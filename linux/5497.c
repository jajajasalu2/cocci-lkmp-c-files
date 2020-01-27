cocci_test_suite() {
	struct xlp_spi_priv {
		struct device dev;
		void __iomem *base;
		const u8 *tx_buf;
		u8 *rx_buf;
		int tx_len;
		int rx_len;
		int txerrors;
		int rxerrors;
		int cs;
		u32 spi_clk;
		bool cmd_cont;
		struct completion done;
	} cocci_id/* drivers/spi/spi-xlp.c 90 */;
	struct platform_driver cocci_id/* drivers/spi/spi-xlp.c 445 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-xlp.c 439 */[];
	const struct acpi_device_id cocci_id/* drivers/spi/spi-xlp.c 431 */[];
	struct clk *cocci_id/* drivers/spi/spi-xlp.c 373 */;
	struct spi_master *cocci_id/* drivers/spi/spi-xlp.c 371 */;
	struct platform_device *cocci_id/* drivers/spi/spi-xlp.c 369 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-xlp.c 349 */;
	const unsigned char *cocci_id/* drivers/spi/spi-xlp.c 324 */;
	unsigned char *cocci_id/* drivers/spi/spi-xlp.c 323 */;
	irqreturn_t cocci_id/* drivers/spi/spi-xlp.c 223 */;
	void *cocci_id/* drivers/spi/spi-xlp.c 223 */;
	int cocci_id/* drivers/spi/spi-xlp.c 204 */;
	u32 cocci_id/* drivers/spi/spi-xlp.c 203 */;
	struct xlp_spi_priv *cocci_id/* drivers/spi/spi-xlp.c 201 */;
	void cocci_id/* drivers/spi/spi-xlp.c 201 */;
	struct spi_device *cocci_id/* drivers/spi/spi-xlp.c 136 */;
}
