cocci_test_suite() {
	struct omap2_mcspi_dma {
		struct dma_chan *dma_tx;
		struct dma_chan *dma_rx;
		struct completion dma_tx_completion;
		struct completion dma_rx_completion;
		char dma_rx_ch_name[14];
		char dma_tx_ch_name[14];
	} cocci_id/* drivers/spi/spi-omap2-mcspi.c 93 */;
	u8 cocci_id/* drivers/spi/spi-omap2-mcspi.c 887 */;
	const u32 *cocci_id/* drivers/spi/spi-omap2-mcspi.c 802 */;
	const u16 *cocci_id/* drivers/spi/spi-omap2-mcspi.c 755 */;
	enum dma_slave_buswidth cocci_id/* drivers/spi/spi-omap2-mcspi.c 579 */;
	const u8 *cocci_id/* drivers/spi/spi-omap2-mcspi.c 577 */;
	u32 *cocci_id/* drivers/spi/spi-omap2-mcspi.c 542 */;
	u16 *cocci_id/* drivers/spi/spi-omap2-mcspi.c 540 */;
	u8 *cocci_id/* drivers/spi/spi-omap2-mcspi.c 538 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-omap2-mcspi.c 438 */;
	size_t cocci_id/* drivers/spi/spi-omap2-mcspi.c 432 */[2];
	struct scatterlist *cocci_id/* drivers/spi/spi-omap2-mcspi.c 430 */[2];
	unsigned int cocci_id/* drivers/spi/spi-omap2-mcspi.c 429 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-omap2-mcspi.c 424 */;
	unsigned cocci_id/* drivers/spi/spi-omap2-mcspi.c 422 */;
	struct completion *cocci_id/* drivers/spi/spi-omap2-mcspi.c 357 */;
	void __iomem *cocci_id/* drivers/spi/spi-omap2-mcspi.c 349 */;
	unsigned long cocci_id/* drivers/spi/spi-omap2-mcspi.c 349 */;
	int cocci_id/* drivers/spi/spi-omap2-mcspi.c 191 */;
	void cocci_id/* drivers/spi/spi-omap2-mcspi.c 182 */;
	struct omap2_mcspi_cs *cocci_id/* drivers/spi/spi-omap2-mcspi.c 177 */;
	u32 cocci_id/* drivers/spi/spi-omap2-mcspi.c 175 */;
	const struct spi_device *cocci_id/* drivers/spi/spi-omap2-mcspi.c 175 */;
	struct platform_driver cocci_id/* drivers/spi/spi-omap2-mcspi.c 1567 */;
	struct omap2_mcspi *cocci_id/* drivers/spi/spi-omap2-mcspi.c 155 */;
	struct device *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1542 */;
	int __maybe_unused cocci_id/* drivers/spi/spi-omap2-mcspi.c 1542 */;
	struct spi_master *cocci_id/* drivers/spi/spi-omap2-mcspi.c 153 */;
	struct omap2_mcspi_dma cocci_id/* drivers/spi/spi-omap2-mcspi.c 1457 */;
	const struct of_device_id *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1398 */;
	struct device_node *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1397 */;
	struct resource *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1394 */;
	const struct omap2_mcspi_platform_config *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1392 */;
	struct platform_device *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1389 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-omap2-mcspi.c 1376 */[];
	struct omap2_mcspi_platform_config cocci_id/* drivers/spi/spi-omap2-mcspi.c 1368 */;
	struct omap2_mcspi_cs {
		void __iomem *base;
		unsigned long phys;
		int word_len;
		u16 mode;
		struct list_head node;
		u32 chconf0,chctrl0;
	} cocci_id/* drivers/spi/spi-omap2-mcspi.c 135 */;
	struct omap2_mcspi_regs *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1311 */;
	struct omap2_mcspi_dma *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1296 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1293 */;
	struct spi_device *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1292 */;
	bool cocci_id/* drivers/spi/spi-omap2-mcspi.c 1291 */;
	struct spi_message *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1265 */;
	struct omap2_mcspi {
		struct completion txdone;
		struct spi_master *master;
		void __iomem *base;
		unsigned long phys;
		struct omap2_mcspi_dma *dma_channels;
		struct device *dev;
		struct omap2_mcspi_regs ctx;
		int fifo_depth;
		bool slave_aborted;
		unsigned int pin_dir:1;
	} cocci_id/* drivers/spi/spi-omap2-mcspi.c 120 */;
	struct omap2_mcspi_device_config *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1144 */;
	struct omap2_mcspi_regs {
		u32 modulctrl;
		u32 wakeupenable;
		struct list_head cs;
	} cocci_id/* drivers/spi/spi-omap2-mcspi.c 114 */;
	irqreturn_t cocci_id/* drivers/spi/spi-omap2-mcspi.c 1099 */;
	void *cocci_id/* drivers/spi/spi-omap2-mcspi.c 1099 */;
}