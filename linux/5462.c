cocci_test_suite() {
	void *cocci_id/* drivers/spi/spi-atmel.c 954 */;
	u32 *cocci_id/* drivers/spi/spi-atmel.c 817 */;
	dma_addr_t *cocci_id/* drivers/spi/spi-atmel.c 815 */;
	unsigned long long cocci_id/* drivers/spi/spi-atmel.c 781 */;
	dma_cookie_t cocci_id/* drivers/spi/spi-atmel.c 723 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/spi/spi-atmel.c 720 */;
	struct dma_chan *cocci_id/* drivers/spi/spi-atmel.c 718 */;
	u16 cocci_id/* drivers/spi/spi-atmel.c 637 */;
	const u8 *cocci_id/* drivers/spi/spi-atmel.c 636 */;
	const u16 *cocci_id/* drivers/spi/spi-atmel.c 635 */;
	u8 *cocci_id/* drivers/spi/spi-atmel.c 635 */;
	u32 cocci_id/* drivers/spi/spi-atmel.c 633 */;
	u16 *cocci_id/* drivers/spi/spi-atmel.c 613 */;
	unsigned long cocci_id/* drivers/spi/spi-atmel.c 601 */;
	dma_cap_mask_t cocci_id/* drivers/spi/spi-atmel.c 510 */;
	struct device *cocci_id/* drivers/spi/spi-atmel.c 507 */;
	struct dma_slave_config cocci_id/* drivers/spi/spi-atmel.c 506 */;
	int cocci_id/* drivers/spi/spi-atmel.c 503 */;
	dma_addr_t cocci_id/* drivers/spi/spi-atmel.c 458 */;
	u8 cocci_id/* drivers/spi/spi-atmel.c 445 */;
	struct dma_slave_config *cocci_id/* drivers/spi/spi-atmel.c 444 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-atmel.c 431 */;
	struct spi_device *cocci_id/* drivers/spi/spi-atmel.c 430 */;
	bool cocci_id/* drivers/spi/spi-atmel.c 429 */;
	struct spi_master *cocci_id/* drivers/spi/spi-atmel.c 429 */;
	struct atmel_spi_device {
		u32 csr;
	} cocci_id/* drivers/spi/spi-atmel.c 287 */;
	struct atmel_spi {
		spinlock_t lock;
		unsigned long flags;
		phys_addr_t phybase;
		void __iomem *regs;
		int irq;
		struct clk *clk;
		struct platform_device *pdev;
		unsigned long spi_clk;
		struct spi_transfer *current_transfer;
		int current_remaining_bytes;
		int done_status;
		dma_addr_t dma_addr_rx_bbuf;
		dma_addr_t dma_addr_tx_bbuf;
		void *addr_rx_bbuf;
		void *addr_tx_bbuf;
		struct completion xfer_completion;
		struct atmel_spi_caps caps;
		bool use_dma;
		bool use_pdc;
		bool keep_cs;
		u32 fifo_size;
		u8 native_cs_free;
		u8 native_cs_for_gpio;
	} cocci_id/* drivers/spi/spi-atmel.c 253 */;
	struct atmel_spi_caps {
		bool is_spi2;
		bool has_wdrbt;
		bool has_dma_support;
		bool has_pdc_support;
	} cocci_id/* drivers/spi/spi-atmel.c 241 */;
	struct platform_driver cocci_id/* drivers/spi/spi-atmel.c 1808 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-atmel.c 1801 */[];
	struct clk *cocci_id/* drivers/spi/spi-atmel.c 1534 */;
	struct resource *cocci_id/* drivers/spi/spi-atmel.c 1532 */;
	struct platform_device *cocci_id/* drivers/spi/spi-atmel.c 1530 */;
	unsigned int cocci_id/* drivers/spi/spi-atmel.c 1499 */;
	struct atmel_spi *cocci_id/* drivers/spi/spi-atmel.c 1497 */;
	void cocci_id/* drivers/spi/spi-atmel.c 1497 */;
	struct atmel_spi_device *cocci_id/* drivers/spi/spi-atmel.c 1483 */;
	struct spi_message *cocci_id/* drivers/spi/spi-atmel.c 1288 */;
	struct atmel_spi_device cocci_id/* drivers/spi/spi-atmel.c 1268 */;
	struct spi_delay *cocci_id/* drivers/spi/spi-atmel.c 1168 */;
	irqreturn_t cocci_id/* drivers/spi/spi-atmel.c 1129 */;
}
