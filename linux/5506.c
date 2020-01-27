cocci_test_suite() {
	u16 cocci_id/* drivers/spi/spi-coldfire-qspi.c 78 */;
	struct mcfqspi {
		void __iomem *iobase;
		int irq;
		struct clk *clk;
		struct mcfqspi_cs_control *cs_control;
		wait_queue_head_t waitq;
	} cocci_id/* drivers/spi/spi-coldfire-qspi.c 59 */;
	struct platform_driver cocci_id/* drivers/spi/spi-coldfire-qspi.c 507 */;
	struct device *cocci_id/* drivers/spi/spi-coldfire-qspi.c 468 */;
	struct mcfqspi_platform_data *cocci_id/* drivers/spi/spi-coldfire-qspi.c 342 */;
	struct spi_master *cocci_id/* drivers/spi/spi-coldfire-qspi.c 340 */;
	struct platform_device *cocci_id/* drivers/spi/spi-coldfire-qspi.c 338 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-coldfire-qspi.c 300 */;
	struct spi_device *cocci_id/* drivers/spi/spi-coldfire-qspi.c 287 */;
	const u16 *cocci_id/* drivers/spi/spi-coldfire-qspi.c 221 */;
	u16 *cocci_id/* drivers/spi/spi-coldfire-qspi.c 221 */;
	unsigned cocci_id/* drivers/spi/spi-coldfire-qspi.c 220 */;
	const u8 *cocci_id/* drivers/spi/spi-coldfire-qspi.c 154 */;
	u8 *cocci_id/* drivers/spi/spi-coldfire-qspi.c 154 */;
	irqreturn_t cocci_id/* drivers/spi/spi-coldfire-qspi.c 142 */;
	void *cocci_id/* drivers/spi/spi-coldfire-qspi.c 142 */;
	u32 cocci_id/* drivers/spi/spi-coldfire-qspi.c 132 */;
	int cocci_id/* drivers/spi/spi-coldfire-qspi.c 120 */;
	bool cocci_id/* drivers/spi/spi-coldfire-qspi.c 115 */;
	u8 cocci_id/* drivers/spi/spi-coldfire-qspi.c 114 */;
	struct mcfqspi *cocci_id/* drivers/spi/spi-coldfire-qspi.c 114 */;
	void cocci_id/* drivers/spi/spi-coldfire-qspi.c 114 */;
}
