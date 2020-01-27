cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/spi-cadence.c 708 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-cadence.c 700 */[];
	struct device *cocci_id/* drivers/spi/spi-cadence.c 637 */;
	int __maybe_unused cocci_id/* drivers/spi/spi-cadence.c 637 */;
	struct platform_device *cocci_id/* drivers/spi/spi-cadence.c 472 */;
	struct cdns_spi *cocci_id/* drivers/spi/spi-cadence.c 439 */;
	struct spi_message *cocci_id/* drivers/spi/spi-cadence.c 391 */;
	struct spi_master *cocci_id/* drivers/spi/spi-cadence.c 390 */;
	int cocci_id/* drivers/spi/spi-cadence.c 390 */;
	u8 cocci_id/* drivers/spi/spi-cadence.c 365 */;
	irqreturn_t cocci_id/* drivers/spi/spi-cadence.c 340 */;
	void *cocci_id/* drivers/spi/spi-cadence.c 340 */;
	unsigned long cocci_id/* drivers/spi/spi-cadence.c 251 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-cadence.c 247 */;
	u32 cocci_id/* drivers/spi/spi-cadence.c 176 */;
	bool cocci_id/* drivers/spi/spi-cadence.c 173 */;
	struct spi_device *cocci_id/* drivers/spi/spi-cadence.c 173 */;
	void cocci_id/* drivers/spi/spi-cadence.c 173 */;
	struct cdns_spi {
		void __iomem *regs;
		struct clk *ref_clk;
		struct clk *pclk;
		u32 speed_hz;
		const u8 *txbuf;
		u8 *rxbuf;
		int tx_bytes;
		int rx_bytes;
		u8 dev_busy;
		u32 is_decoded_cs;
	} cocci_id/* drivers/spi/spi-cadence.c 114 */;
}
