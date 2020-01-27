cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/spi-zynq-qspi.c 761 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-zynq-qspi.c 751 */[];
	struct device_node *cocci_id/* drivers/spi/spi-zynq-qspi.c 632 */;
	struct device *cocci_id/* drivers/spi/spi-zynq-qspi.c 631 */;
	struct platform_device *cocci_id/* drivers/spi/spi-zynq-qspi.c 627 */;
	const struct spi_controller_mem_ops cocci_id/* drivers/spi/spi-zynq-qspi.c 614 */;
	u8 *cocci_id/* drivers/spi/spi-zynq-qspi.c 529 */;
	const struct spi_mem_op *cocci_id/* drivers/spi/spi-zynq-qspi.c 525 */;
	struct spi_mem *cocci_id/* drivers/spi/spi-zynq-qspi.c 524 */;
	irqreturn_t cocci_id/* drivers/spi/spi-zynq-qspi.c 472 */;
	void *cocci_id/* drivers/spi/spi-zynq-qspi.c 472 */;
	int cocci_id/* drivers/spi/spi-zynq-qspi.c 333 */;
	u32 cocci_id/* drivers/spi/spi-zynq-qspi.c 293 */;
	struct zynq_qspi *cocci_id/* drivers/spi/spi-zynq-qspi.c 292 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-zynq-qspi.c 291 */;
	bool cocci_id/* drivers/spi/spi-zynq-qspi.c 289 */;
	struct spi_device *cocci_id/* drivers/spi/spi-zynq-qspi.c 289 */;
	void cocci_id/* drivers/spi/spi-zynq-qspi.c 289 */;
	const unsigned int cocci_id/* drivers/spi/spi-zynq-qspi.c 267 */[4];
	unsigned int cocci_id/* drivers/spi/spi-zynq-qspi.c 180 */;
	struct zynq_qspi {
		struct device *dev;
		void __iomem *regs;
		struct clk *refclk;
		struct clk *pclk;
		int irq;
		u8 *txbuf;
		u8 *rxbuf;
		int tx_bytes;
		int rx_bytes;
		struct completion data_completion;
	} cocci_id/* drivers/spi/spi-zynq-qspi.c 132 */;
}
