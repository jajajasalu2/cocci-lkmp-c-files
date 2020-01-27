cocci_test_suite() {
	u32 cocci_id/* drivers/spi/spi-slave-mt27xx.c 83 */;
	void cocci_id/* drivers/spi/spi-slave-mt27xx.c 81 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-slave-mt27xx.c 75 */[];
	struct mtk_spi_slave {
		struct device *dev;
		void __iomem *base;
		struct clk *spi_clk;
		struct completion xfer_done;
		struct spi_transfer *cur_transfer;
		bool slave_aborted;
	} cocci_id/* drivers/spi/spi-slave-mt27xx.c 66 */;
	struct platform_driver cocci_id/* drivers/spi/spi-slave-mt27xx.c 528 */;
	struct platform_device *cocci_id/* drivers/spi/spi-slave-mt27xx.c 367 */;
	irqreturn_t cocci_id/* drivers/spi/spi-slave-mt27xx.c 310 */;
	struct mtk_spi_slave *cocci_id/* drivers/spi/spi-slave-mt27xx.c 302 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-slave-mt27xx.c 300 */;
	int cocci_id/* drivers/spi/spi-slave-mt27xx.c 300 */;
	void *cocci_id/* drivers/spi/spi-slave-mt27xx.c 196 */;
	struct device *cocci_id/* drivers/spi/spi-slave-mt27xx.c 187 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-slave-mt27xx.c 184 */;
	struct spi_device *cocci_id/* drivers/spi/spi-slave-mt27xx.c 183 */;
	bool cocci_id/* drivers/spi/spi-slave-mt27xx.c 117 */;
	struct spi_message *cocci_id/* drivers/spi/spi-slave-mt27xx.c 113 */;
}
