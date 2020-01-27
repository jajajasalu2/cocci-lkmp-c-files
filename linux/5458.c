cocci_test_suite() {
	struct bcm2835aux_spi {
		void __iomem *regs;
		struct clk *clk;
		int irq;
		u32 cntl[2];
		const u8 *tx_buf;
		u8 *rx_buf;
		int tx_len;
		int rx_len;
		int pending;
		u64 count_transfer_polling;
		u64 count_transfer_irq;
		u64 count_transfer_irq_after_poll;
		struct dentry *debugfs_dir;
	} cocci_id/* drivers/spi/spi-bcm2835aux.c 89 */;
	struct platform_driver cocci_id/* drivers/spi/spi-bcm2835aux.c 610 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-bcm2835aux.c 604 */[];
	unsigned long cocci_id/* drivers/spi/spi-bcm2835aux.c 494 */;
	struct platform_device *cocci_id/* drivers/spi/spi-bcm2835aux.c 490 */;
	struct spi_message *cocci_id/* drivers/spi/spi-bcm2835aux.c 439 */;
	unsigned int cocci_id/* drivers/spi/spi-bcm2835aux.c 32 */;
	struct bcm2835aux_spi *cocci_id/* drivers/spi/spi-bcm2835aux.c 267 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-bcm2835aux.c 265 */;
	struct spi_device *cocci_id/* drivers/spi/spi-bcm2835aux.c 264 */;
	struct spi_master *cocci_id/* drivers/spi/spi-bcm2835aux.c 263 */;
	int cocci_id/* drivers/spi/spi-bcm2835aux.c 263 */;
	irqreturn_t cocci_id/* drivers/spi/spi-bcm2835aux.c 235 */;
	void *cocci_id/* drivers/spi/spi-bcm2835aux.c 235 */;
	u8 cocci_id/* drivers/spi/spi-bcm2835aux.c 183 */;
	u32 cocci_id/* drivers/spi/spi-bcm2835aux.c 146 */;
	unsigned cocci_id/* drivers/spi/spi-bcm2835aux.c 146 */;
	struct dentry *cocci_id/* drivers/spi/spi-bcm2835aux.c 112 */;
	char cocci_id/* drivers/spi/spi-bcm2835aux.c 111 */[64];
	const char *cocci_id/* drivers/spi/spi-bcm2835aux.c 109 */;
	void cocci_id/* drivers/spi/spi-bcm2835aux.c 108 */;
}
