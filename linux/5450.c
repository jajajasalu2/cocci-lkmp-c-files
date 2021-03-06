cocci_test_suite() {
	struct clk *cocci_id/* drivers/spi/spi-qup.c 998 */;
	struct platform_device *cocci_id/* drivers/spi/spi-qup.c 995 */;
	struct device *cocci_id/* drivers/spi/spi-qup.c 931 */;
	struct dma_slave_config *cocci_id/* drivers/spi/spi-qup.c 929 */;
	resource_size_t cocci_id/* drivers/spi/spi-qup.c 926 */;
	u32 cocci_id/* drivers/spi/spi-qup.c 912 */;
	int cocci_id/* drivers/spi/spi-qup.c 893 */;
	size_t cocci_id/* drivers/spi/spi-qup.c 892 */;
	struct spi_qup *cocci_id/* drivers/spi/spi-qup.c 891 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-qup.c 889 */;
	bool cocci_id/* drivers/spi/spi-qup.c 888 */;
	struct spi_master *cocci_id/* drivers/spi/spi-qup.c 888 */;
	struct spi_device *cocci_id/* drivers/spi/spi-qup.c 888 */;
	void __iomem *cocci_id/* drivers/spi/spi-qup.c 734 */;
	irqreturn_t cocci_id/* drivers/spi/spi-qup.c 592 */;
	unsigned int cocci_id/* drivers/spi/spi-qup.c 581 */;
	struct scatterlist *cocci_id/* drivers/spi/spi-qup.c 451 */;
	dma_async_tx_callback cocci_id/* drivers/spi/spi-qup.c 448 */;
	unsigned long cocci_id/* drivers/spi/spi-qup.c 446 */;
	dma_cookie_t cocci_id/* drivers/spi/spi-qup.c 397 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-qup.c 396 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-qup.c 395 */;
	enum dma_transfer_direction cocci_id/* drivers/spi/spi-qup.c 390 */;
	void *cocci_id/* drivers/spi/spi-qup.c 341 */;
	void cocci_id/* drivers/spi/spi-qup.c 341 */;
	const u8 *cocci_id/* drivers/spi/spi-qup.c 319 */;
	u32 *cocci_id/* drivers/spi/spi-qup.c 262 */;
	u8 *cocci_id/* drivers/spi/spi-qup.c 231 */;
	int cocci_id/* drivers/spi/spi-qup.c 154 */(struct spi_device *spi,
						    struct spi_transfer *xfer);
	struct platform_driver cocci_id/* drivers/spi/spi-qup.c 1297 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-qup.c 1282 */[];
	struct spi_qup {
		void __iomem *base;
		struct device *dev;
		struct clk *cclk;
		struct clk *iclk;
		int irq;
		spinlock_t lock;
		int in_fifo_sz;
		int out_fifo_sz;
		int in_blk_sz;
		int out_blk_sz;
		struct spi_transfer *xfer;
		struct completion done;
		int error;
		int w_size;
		int n_words;
		int tx_bytes;
		int rx_bytes;
		const u8 *tx_buf;
		u8 *rx_buf;
		int qup_v1;
		int mode;
		struct dma_slave_config rx_conf;
		struct dma_slave_config tx_conf;
	} cocci_id/* drivers/spi/spi-qup.c 125 */;
	uintptr_t cocci_id/* drivers/spi/spi-qup.c 1087 */;
	struct spi_qup cocci_id/* drivers/spi/spi-qup.c 1046 */;
	struct resource *cocci_id/* drivers/spi/spi-qup.c 1000 */;
}
